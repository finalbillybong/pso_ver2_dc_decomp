#!/usr/bin/env python3
"""Cheap recorded trials, proven-pattern candidates and one verification per batch.

All binaries and machine-specific receipts stay under an explicit scratch output.
This driver never admits, stages, commits or pushes a candidate automatically.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
import time

import project


def read(path):
    return json.loads(Path(path).read_text())


def write(path, value):
    Path(path).write_text(json.dumps(value, indent=2) + '\n')


def digest(data):
    return hashlib.sha256(data).hexdigest()


def compare(expected, actual, address):
    offsets = [i for i, (a, b) in enumerate(zip(expected, actual)) if a != b]
    first = offsets[0] if offsets else min(len(expected), len(actual)) if len(expected) != len(actual) else None
    return dict(exact=actual == expected, expected_size=len(expected), size=len(actual),
                differing_bytes=len(offsets) + abs(len(expected) - len(actual)),
                first_difference=hex(address + first) if first is not None else None,
                mismatch_offsets=offsets, binary_sha256=digest(actual))


def stable_hash(value):
    return digest(json.dumps(value, sort_keys=True, separators=(',', ':')).encode())


def target_key(reference, unit):
    return digest(reference) + ':' + hex(int(unit['address'], 0))


def history_path(config):
    return Path(config.get('reconstruction_history', str(Path(config['scratch']) / 'reconstruction-history.json')))


def evidence_record(evidence, blocker):
    """Require a checkable new observation tied to the exact recorded blocker."""
    if not isinstance(evidence, dict) or evidence.get('blocker_sha256') != digest(blocker.encode()):
        raise ValueError('New observation must address the recorded blocker hash')
    path = Path(evidence.get('path', ''))
    if (not path.is_file() or digest(path.read_bytes()) != evidence.get('sha256')
            or not evidence.get('observation') or not evidence.get('addresses_blocker')):
        raise ValueError('New observation requires a current evidence file and actionable explanation')
    return stable_hash(evidence)


class History:
    """Private JSON index; original receipts are never rewritten.

    One writer per scratch root. Indexing is explicit and repeatable, and imports
    are keyed by receipt path/hash rather than target display names.
    """
    def __init__(self, path):
        self.path = Path(path)
        self.data = read(path) if self.path.exists() else dict(version=1, targets={}, attempts=[], imports={})
        for row in self.data['attempts']:
            if row.get('status') == 'in_progress':
                self.target(row['history_key'])['uncertain'] = True

    def save(self):
        self.path.parent.mkdir(parents=True, exist_ok=True)
        temporary = self.path.with_suffix('.tmp')
        write(temporary, self.data)
        temporary.replace(self.path)

    def target(self, key):
        return self.data['targets'].setdefault(key, dict(aliases=[], historical_failures=0,
            uncertain=False, parked=False, blocker='', evidence=[], epoch=0))

    def index(self, reference, roots, manifests=(), queues=()):
        profile = None
        reference_hash = digest(reference)
        def identity(unit):
            return reference_hash + ":" + hex(int(unit["address"], 0))
        snapshots = []
        for root in roots:
            for pattern, field in [('reconstruction*/**/*manifest*.json', 'units'),
                                   ('reconstruction*/**/*queue*.json', 'targets')]:
                snapshots.extend((p, field) for p in sorted(Path(root).glob(pattern)))
        for path, field in snapshots + [(p, 'units') for p in manifests] + [(p, 'targets') for p in queues]:
            marker = str(Path(path).resolve())
            current_hash = digest(Path(path).read_bytes())
            if self.data.setdefault('metadata_imports', {}).get(marker) == current_hash:
                continue
            document = read(path)
            if not isinstance(document, dict) or field not in document:
                continue
            for unit in document[field]:
                if 'ranges' not in unit:
                    continue
                if digest(b''.join(reference[r['offset']:r['offset'] + r['size']] for r in unit['ranges'])) != unit.get('reference_sha256'):
                    continue
                target = self.target(identity(unit))
                if unit['id'] not in target['aliases']:
                    target['aliases'].append(unit['id'])
                if field == 'targets' and unit.get('status') != 'matched':
                    target['parked'] |= unit.get('status') == 'parked'
                    if not target['blocker']:
                        target['blocker'] = unit.get('reason', 'Historical unresolved target')
                    count = unit.get('hypotheses_tested')
                    target['uncertain'] |= count is None and not target.get('history_review')
                    target['historical_failures'] = max(target['historical_failures'], count or 0)
            self.data['metadata_imports'][marker] = current_hash
        for root in roots:
            for path in sorted(Path(root).glob('reconstruction*/**/comparison.json')):
                marker = str(path.resolve())
                sha = digest(path.read_bytes())
                if marker in self.data['imports']:
                    if self.data['imports'][marker] != sha:
                        raise ValueError('Historical receipt changed: ' + marker)
                    continue
                spec_path = path.parent / 'spec.json'
                unit_path = path.parent / 'unit.json'
                if not spec_path.exists() and not unit_path.exists():
                    continue
                spec = read(spec_path) if spec_path.exists() else {'unit': read(unit_path)}
                unit = spec['unit']
                if 'ranges' not in unit or 'address' not in unit:
                    self.data.setdefault('unindexed', {})[marker] = 'Legacy unit lacks reviewed ranges/address'
                    if 'address' in unit:
                        self.target(identity(unit))['uncertain'] = True
                    continue
                if digest(b''.join(reference[r['offset']:r['offset'] + r['size']] for r in unit['ranges'])) != unit.get('reference_sha256'):
                    continue
                row = read(path)
                key = identity(unit)
                target = self.target(key)
                if unit['id'] not in target['aliases']:
                    target['aliases'].append(unit['id'])
                if row.get('history_key') == key:
                    if not any(a['receipt'] == marker for a in self.data['attempts']):
                        self.data['attempts'].append(dict(row, receipt=marker))
                        target['epoch'] = max(target['epoch'], row.get('epoch', 0))
                        if row.get('kind') == 'hypothesis' and not row.get('exact'):
                            target['blocker'] = row.get('blocker') or row.get('error') or (
                                f"{row.get('differing_bytes')} differing bytes; first {row.get('first_difference')}")
                            count = sum(a['history_key'] == key and a.get('kind') == 'hypothesis'
                                        and not a.get('exact') and a.get('epoch', 0) == target['epoch']
                                        for a in self.data['attempts'])
                            target['parked'] |= count >= 2
                else:
                    reproduction = 'integration' in str(path) or '-reproduce-' in path.parent.name
                    # Legacy hypothesis prose cannot reliably distinguish ABI corrections.
                    target['uncertain'] |= not reproduction and not row.get('exact', False)
                    if not reproduction and not row.get('exact', False):
                        target['parked'] = True
                        if not target['blocker']:
                            target['blocker'] = row.get('error') or 'Legacy unsuccessful output requires history review'
                    imported = dict(row, history_key=key, receipt=marker,
                        kind='reproduction' if reproduction else 'legacy', legacy=True,
                        hypothesis_id=stable_hash(spec.get('hypothesis', marker)),
                        predicted_change=spec.get('predicted_change'), receipt_sha256=sha)
                    compiler = path.parent / 'candidate.compiler.json'
                    binary = path.parent / 'candidate.bin'
                    if compiler.exists() and binary.exists() and 'code' in spec:
                        receipt = read(compiler)
                        if profile is None:
                            profile = compiler_profile()
                        if (receipt.get('installed_tools_sha256') == profile['installed_sha256']
                                and receipt.get('source_sha256') == digest(spec['code'].encode())
                                and receipt.get('output_sha256') == digest(binary.read_bytes())
                                and receipt.get('flags') == project.matching.unit_flags(unit)
                                and receipt.get('symbols', {}) == unit.get('symbols', {})
                                and receipt.get('entry') == unit['entry']
                                and receipt.get('linker', 'gnu') == project.matching.unit_linker(unit)):
                            inputs = dict(profile, source_sha256=receipt['source_sha256'],
                                headers_sha256=receipt.get('headers_sha256', {}), flags=receipt['flags'],
                                linker=receipt.get('linker', 'gnu'), address=hex(int(unit['address'], 0)),
                                entry=unit['entry'], symbols=unit.get('symbols', {}), ranges=unit['ranges'],
                                reference_sha256=unit['reference_sha256'])
                            imported.update(input_sha256=stable_hash(dict(reference_image_sha256=reference_hash, **inputs)),
                                compiler_inputs=inputs, legacy_input_binding='Recorded source, dependencies, flags, symbols and pinned installation; adapter bound at import. Reuse is not admission.',
                                artifacts_sha256={'candidate.bin': digest(binary.read_bytes()),
                                    'candidate.compiler.json': digest(compiler.read_bytes()), 'spec.json': digest(spec_path.read_bytes())})
                    self.data['attempts'].append(imported)
                self.data['imports'][marker] = sha
            for path in sorted(Path(root).glob('reconstruction*/**/unit.json')):
                if (path.parent / 'comparison.json').exists():
                    continue
                unit = read(path)
                if 'address' in unit:
                    marker = str(path.resolve())
                    sha = digest(path.read_bytes())
                    if self.data.setdefault('orphan_imports', {}).get(marker) == sha:
                        continue
                    target = self.target(identity(unit))
                    target.update(uncertain=True, parked=True)
                    if not target['blocker']:
                        target['blocker'] = 'Legacy unit exists without a comparison receipt; review historical count'
                    self.data.setdefault('unindexed', {})[str(path)] = target['blocker']
                    self.data['orphan_imports'][marker] = sha
        self.save()
        return dict(targets=len(self.data['targets']), attempts=len(self.data['attempts']),
                    review_required=sum(t['uncertain'] for t in self.data['targets'].values()))

    def prepare(self, key, spec, fingerprint, kind):
        rows = [r for r in self.data['attempts'] if r['history_key'] == key]
        target = self.target(key)
        if kind != 'reproduction':
            for row in rows:
                if row.get('input_sha256') == fingerprint and row.get('status') != 'in_progress':
                    path = Path(row['receipt'])
                    if path.exists() and digest(path.read_bytes()) == self.data['imports'].get(str(path)):
                        for name, sha in row.get('artifacts_sha256', {}).items():
                            artifact = path.parent / name
                            if not artifact.is_file() or digest(artifact.read_bytes()) != sha:
                                raise ValueError('Duplicate receipt artifact missing or changed')
                        return read(path)
                    raise ValueError('Duplicate receipt missing or changed; review history')
        if kind == 'reproduction':
            return None
        if kind not in ('hypothesis', 'correction'):
            raise ValueError('Attempt kind must be hypothesis, correction or reproduction')
        if not spec.get('hypothesis_id'):
            raise ValueError('Stable hypothesis_id required')
        review = spec.get('history_review')
        if target['uncertain']:
            if not review:
                raise ValueError('Historical count uncertain; referenced history_review required')
            evidence_record(review, target['blocker'])
            count = review.get('unsuccessful_hypotheses')
            observed = len({r['hypothesis_id'] for r in rows if r.get('legacy') and not r.get('exact') and r['kind'] != 'reproduction'})
            if not isinstance(count, int) or count < max(target['historical_failures'], observed):
                raise ValueError('History review must reconcile all observed unsuccessful hypotheses')
            target.update(uncertain=False, historical_failures=count, history_review=review)
        modern = [r for r in rows if r.get('kind') == 'hypothesis' and not r.get('exact')]
        failures = target['historical_failures'] + len({r['hypothesis_id'] for r in modern})
        if failures >= 10:
            raise ValueError('Lifetime limit: ten unsuccessful hypotheses')
        if kind == 'correction':
            if not spec.get('correction_of') or not spec.get('correction_evidence'):
                raise ValueError('Correction requires correction_of and ABI/binding evidence')
            if spec['correction_of'] not in {r.get('hypothesis_id') for r in rows}:
                raise ValueError('Correction must reference an existing hypothesis')
        batch = spec.get('batch')
        if batch and kind == 'hypothesis':
            if not batch.get('id') or not batch.get('family') or not batch.get('initial_family'):
                raise ValueError('Batch requires id, family and initial_family')
            batch_rows = [r for r in self.data['attempts'] if r.get('batch', {}).get('id') == batch['id']
                          and r.get('kind') == 'hypothesis']
            if len(batch_rows) >= 40:
                raise ValueError('Batch limit: forty new distinct hypotheses')
            initial = batch['initial_family']
            if any(r['batch']['initial_family'] != initial for r in batch_rows):
                raise ValueError('Initial family cannot change within a batch')
            if batch['family'] == initial and sum(r['batch']['family'] == initial for r in batch_rows) >= 10:
                raise ValueError('Initial subsystem limit: ten hypotheses; rotate families')
            families = {r['batch']['family'] for r in batch_rows} | {batch['family']}
            if len(families) > 3:
                raise ValueError('Batch limit: three related families')
        epoch_rows = [r for r in modern if r.get('epoch', 0) == target['epoch']]
        third_authorized = False
        if target['parked']:
            observation = spec.get('reopen_evidence') or spec.get('third_evidence')
            token = evidence_record(observation, target['blocker'])
            if token in target['evidence'] or observation['observation'] == spec['hypothesis']:
                raise ValueError('Reopening requires a new observation, not a restated hypothesis')
            target['evidence'].append(token)
            target['parked'] = False
            if len(epoch_rows) == 2:
                third_authorized = True
            else:
                target['epoch'] += 1
                epoch_rows = []
        ids = {r.get('hypothesis_id') for r in rows if r.get('kind') == 'hypothesis'}
        if kind == 'hypothesis' and spec['hypothesis_id'] in ids:
            raise ValueError('Changed input needs a new hypothesis_id or explicit correction')
        if len(epoch_rows) >= 2 and not third_authorized:
            token = evidence_record(spec.get('third_evidence'), target['blocker'])
            if token in target['evidence']:
                raise ValueError('Third hypothesis requires new actionable evidence')
            target['evidence'].append(token)
        return None

    def reserve(self, result, receipt):
        """An interrupted compiler invocation remains an attempt needing review."""
        pending = dict(result, status='in_progress', epoch=self.target(result['history_key'])['epoch'])
        write(receipt, pending)
        marker = str(receipt.resolve())
        self.data['attempts'].append(dict(pending, receipt=marker))
        self.data['imports'][marker] = digest(receipt.read_bytes())
        self.save()

    def record(self, result, receipt):
        marker = str(receipt.resolve())
        self.data['attempts'] = [r for r in self.data['attempts'] if r['receipt'] != marker]
        result['status'] = 'completed'
        target = self.target(result['history_key'])
        if result.get('id') and result['id'] not in target['aliases']:
            target['aliases'].append(result['id'])
        result['epoch'] = target['epoch']
        if result.get('binary_sha256'):
            result['identical_outputs'] = [dict(receipt=r['receipt'], history_key=r['history_key'],
                kind=r.get('kind'), exact=r.get('exact')) for r in self.data['attempts']
                if r.get('binary_sha256') == result['binary_sha256']]
        if result['kind'] == 'hypothesis' and not result.get('exact'):
            previous = [r for r in self.data['attempts'] if r['history_key'] == result['history_key']
                        and r.get('kind') == 'hypothesis' and r.get('epoch', 0) == target['epoch'] and not r.get('exact')]
            improved = result.get('differing_bytes', float('inf')) < min(
                (r.get('differing_bytes', float('inf')) for r in previous), default=float('inf'))
            result['improved'] = improved
            target['blocker'] = result.get('blocker') or result.get('error') or (
                f"{result.get('differing_bytes')} differing bytes; first {result.get('first_difference')}")
            target['parked'] = len(previous) >= 2 or (len(previous) >= 1 and not improved)
        write(receipt, result)
        self.data['imports'][marker] = digest(receipt.read_bytes())
        self.data['attempts'].append(dict(result, receipt=marker))
        self.save()


def compiler_profile():
    tools = project.matching.load_tools()  # Validate actual pinned executable hashes even on reuse.
    return dict(tools={role: project.matching.sha(path) for role, path in tools.items()},
        installed_sha256=project.matching.sha(project.ROOT / 'config/matching-installed.json'),
        adapter_sha256=project.matching.sha(Path(project.matching.__file__)))


def compiler_inputs(spec):
    unit = spec['unit']
    return dict(compiler_profile(), source_sha256=digest(spec['code'].encode()),
        headers_sha256={name: project.matching.sha(project.ROOT / name) for name in unit.get('headers', [])},
        flags=project.matching.unit_flags(unit), linker=project.matching.unit_linker(unit),
        address=hex(int(unit['address'], 0)), entry=unit['entry'], symbols=unit.get('symbols', {}),
        ranges=unit['ranges'], reference_sha256=unit['reference_sha256'])


def classification_audit(size, spans):
    totals = dict(instructions=0, literals=0, tables=0, padding=0, unknown=0)
    end = 0
    for span in sorted(spans, key=lambda s: s['offset']):
        start, length, kind = span['offset'], span['size'], span['kind']
        if kind not in totals or length <= 0 or start < end or start + length > size:
            raise ValueError('Invalid or overlapping classification spans')
        if kind != 'unknown' and not span.get('evidence'):
            raise ValueError('Classified spans require reviewed evidence')
        if kind == 'instructions' and (start % 2 or length % 2):
            raise ValueError('SH instructions require aligned complete words')
        totals['unknown'] += start - end
        totals[kind] += length
        end = start + length
    totals['unknown'] += size - end
    assert sum(totals.values()) == size
    return totals


def audit_subsystem(entries):
    end = -1
    totals = dict(instructions=0, literals=0, tables=0, padding=0, unknown=0)
    for entry in sorted(entries, key=lambda e: int(e['address'], 0)):
        start = int(entry['address'], 0)
        if start < end:
            raise ValueError('Overlapping reviewed subsystem ranges')
        end = start + entry['size']
        for kind, size in classification_audit(entry['size'], entry.get('classification', [])).items():
            totals[kind] += size
    return dict(reviewed_range_bytes=sum(e['size'] for e in entries), classified_bytes=totals,
                whole_program_code_completion=None)


def parse_listing(listing, address, spans):
    instructions = []
    for line in listing.splitlines():
        match = re.match(r'^\s*([0-9a-fA-F]+):\s+(?:[0-9a-fA-F]{2}\s+){2}\s*(\S+)(.*)$', line)
        if not match:
            continue
        offset = int(match[1], 16) - address
        if not any(s['kind'] == 'instructions' and s['offset'] <= offset < s['offset'] + s['size'] for s in spans):
            continue
        operands = match[3].strip().split('!')[0].strip()
        # Symbol annotations/absolute branch PCs are diagnostic alignment only.
        operands = re.sub(r'\s*<[^>]*>', '', operands)
        operands = re.sub(r'\b(?:0x)?[0-9a-f]{8}\b', lambda m: '@' + hex(int(m[0], 16) - address), operands)
        instructions.append(dict(offset=offset, mnemonic=match[2], operands=operands,
            delay_slot=bool(instructions and instructions[-1]['offset'] + 2 == offset
                and instructions[-1]['mnemonic'] in ('jsr', 'bsr', 'bsrf', 'jmp', 'bra', 'braf', 'rts', 'rte', 'bt.s', 'bf.s', 'bt/s', 'bf/s'))))
    return instructions


def instruction_differences(before, after):
    import difflib
    groups = []
    keys = lambda rows: [(r['mnemonic'], r['operands'], r['delay_slot']) for r in rows]
    for tag, a, b, c, d in difflib.SequenceMatcher(None, keys(before), keys(after), autojunk=False).get_opcodes():
        if tag == 'equal':
            continue
        left, right = before[a:b], after[c:d]
        categories = []
        if len(left) != len(right):
            categories.append('instruction_count')
        registers = lambda rs: re.findall(r'\b(?:r\d+|fr\d+|pr|fpul|mach|macl)\b', str([r['operands'] for r in rs]))
        immediates = lambda rs: re.findall(r'#[^,\s]+', str([r['operands'] for r in rs]))
        if registers(left) != registers(right):
            categories.append('registers')
        if immediates(left) != immediates(right):
            categories.append('immediates')
        if any(r['mnemonic'] in ('jsr', 'bsr', 'bsrf') for r in left + right):
            categories.append('call_order')
        if any(r['delay_slot'] for r in left + right):
            categories.append('delay_slots')
        groups.append(dict(categories=categories or ['operands_or_opcode'], expected=left, actual=right))
    return dict(expected_instruction_count=len(before), actual_instruction_count=len(after), groups=groups)


def reachable_classification(blob, address, listing):
    """Conservative diagnostic flow walk, never a reviewed coverage assertion.

    Indirect jump destinations, padding and unreachable regions remain unknown.
    Track PC-relative loads so their pools are not decoded as instructions.
    """
    decoded = {r['offset']: r for r in parse_listing(listing, address,
        [dict(offset=0, size=len(blob), kind='instructions')]) if r['mnemonic'] != '.word'}
    pending, seen, literals = [0], set(), set()
    def word(offset):
        return int.from_bytes(blob[offset:offset + 2], 'little')
    def visit(offset):
        if offset not in decoded or offset in literals or offset + 2 > len(blob):
            return False
        seen.add(offset)
        w = word(offset)
        if w >> 12 == 9:
            start, size = offset + 4 + (w & 255) * 2, 2
        elif w >> 12 == 13:
            start, size = ((address + offset + 4) & ~3) - address + (w & 255) * 4, 4
        else:
            return True
        if 0 <= start and start + size <= len(blob):
            literals.update(range(start, start + size))
        return True
    while pending:
        offset = pending.pop()
        if offset in seen or not visit(offset):
            continue
        w = word(offset)
        if w >> 12 in (10, 11):
            displacement = (w & 4095) - (4096 if w & 2048 else 0)
            visit(offset + 2)
            pending.append(offset + 4 + displacement * 2)
            if w >> 12 == 11:
                pending.append(offset + 4)
        elif w >> 8 in (0x89, 0x8b, 0x8d, 0x8f):
            displacement = (w & 255) - (256 if w & 128 else 0)
            delayed = w >> 8 in (0x8d, 0x8f)
            if delayed:
                visit(offset + 2)
            pending.extend([offset + (4 if delayed else 2), offset + 4 + displacement * 2])
        elif w in (0x000b, 0x002b) or w & 0xf0ff in (0x402b, 0x0023):
            visit(offset + 2)
        elif w & 0xf0ff in (0x400b, 0x0003):
            visit(offset + 2)
            pending.append(offset + 4)
        else:
            pending.append(offset + 2)
    labels = ['unknown'] * len(blob)
    for offset in seen:
        if offset not in literals and offset + 1 not in literals:
            labels[offset:offset + 2] = ['instructions'] * 2
    for offset in literals:
        labels[offset] = 'literals'
    spans = []
    for offset, kind in enumerate(labels):
        if spans and spans[-1]['kind'] == kind:
            spans[-1]['size'] += 1
        else:
            spans.append(dict(offset=offset, size=1, kind=kind,
                evidence='Diagnostic direct-flow/PC-load inference; not reviewed coverage'))
    return spans


def diagnose(expected, actual, address, spec, folder):
    spans = spec.get('classification', [])
    audit = classification_audit(len(expected), spans)
    # Generated classification is separately reviewed; never extend reference code
    # labels into a shifted literal pool merely because the output is longer.
    objdump = project.matching.load_tools()['objdump']
    listings = []
    for name, blob in [('expected', expected), ('actual', actual)]:
        path = folder / (name + '.diagnostic.bin')
        path.write_bytes(blob)
        result = subprocess.run([str(objdump), '-D', '-b', 'binary', '-m', 'sh4', '-EL',
                                 '--adjust-vma=' + hex(address), str(path)], capture_output=True, text=True, check=True)
        (folder / (name + '.diagnostic.asm')).write_text(result.stdout)
        listings.append(result.stdout)
    actual_spans = spec.get('actual_classification', reachable_classification(actual, address, listings[1]))
    actual_audit = classification_audit(len(actual), actual_spans)
    report = instruction_differences(parse_listing(listings[0], address, spans), parse_listing(listings[1], address, actual_spans))
    if not audit['instructions'] or not actual_audit['instructions']:
        report['groups'] = []
        report['instruction_comparison'] = 'Unknown reference/generated regions require review before instruction alignment'
    report.update(classification=audit, actual_classification=actual_audit,
                  complete_range=compare(expected, actual, address), non_instruction_regions=[])
    for span in spans:
        if span['kind'] != 'instructions':
            a, b = span['offset'], span['offset'] + span['size']
            if expected[a:b] != actual[a:b]:
                report['non_instruction_regions'].append(dict(span, expected=expected[a:b].hex(), actual=actual[a:b].hex()))
    write(folder / 'diagnostics.json', report)
    compact = [dict(g, expected=g['expected'][:6], actual=g['actual'][:6],
                    omitted_expected=max(0, len(g['expected']) - 6),
                    omitted_actual=max(0, len(g['actual']) - 6)) for g in report['groups'][:5]]
    return dict(groups=compact, total_groups=len(report['groups']), classification=audit,
                actual_classification=actual_audit, full_diagnostics=str(folder / 'diagnostics.json'))


def cached_screen(path, inputs, screen):
    """Callers must include reference, catalog, boundaries, policy, sources and scanner hashes."""
    key = stable_hash(inputs)
    if Path(path).exists():
        saved = read(path)
        if saved['inputs_sha256'] == key:
            return saved['result']
    result = screen()
    write(path, dict(inputs_sha256=key, inputs=inputs, result=result))
    return result


def measured_report(rows, carried=(), admitted=(), tooling_seconds=None, aggregate_goal_counter=None):
    carried = set(carried)
    admitted = set(admitted)
    inventory = rows
    rows = [r for r in inventory if not (r.get('history_key') in carried and r.get('kind') == 'legacy')]
    unique = {}
    groups = {}
    for row in inventory:
        if row.get('binary_sha256'):
            groups.setdefault(row['binary_sha256'], []).append(row)
        if row.get('exact') and row.get('history_key'):
            unique[row['history_key']] = row
    new = {r['history_key']: r for r in rows if r.get('exact') and r.get('history_key')
           and r['history_key'] not in carried and r.get('kind') in ('hypothesis', 'correction')}
    hypotheses = {(r.get('history_key'), r.get('hypothesis_id')) for r in rows if r.get('kind') == 'hypothesis'}
    return dict(compiler_attempts=len(rows), hypotheses=len(hypotheses),
        corrections=sum(r.get('kind') == 'correction' for r in rows), errors=sum('error' in r for r in rows),
        verification_attempts=sum(r.get('kind') == 'reproduction' for r in rows),
        unsuccessful_duplicates=sum(max(0, sum(not r.get('exact') and r.get('kind') != 'correction' for r in group) - 1) for group in groups.values()),
        matching_siblings=sum(max(0, len({r.get('history_key') for r in group if r.get('exact')}) - 1) for group in groups.values()),
        correction_duplicate_outputs=sum(sum(r.get('kind') == 'correction' for r in group) for group in groups.values() if len(group) > 1),
        admitted_bytes=sum(r['expected_size'] for k, r in unique.items() if k in admitted),
        unintegrated_candidate_bytes=sum(r['expected_size'] for k, r in unique.items() if k not in admitted),
        new_exact_bytes=sum(r['expected_size'] for r in new.values()),
        carried_candidate_bytes=sum(r['expected_size'] for k, r in unique.items() if k in carried),
        attempt_seconds=sum(r.get('elapsed_seconds', 0) for r in rows if r.get('kind') != 'reproduction'),
        compile_seconds=(None if any('diagnostics' in r and 'compiler_seconds' not in r for r in rows)
                         else sum(r.get('compiler_seconds', r.get('elapsed_seconds', 0)) for r in rows if r.get('kind') != 'reproduction')),
        diagnostic_seconds=sum(r.get('diagnostic_seconds', 0) for r in rows),
        verification_seconds=sum(r.get('elapsed_seconds', 0) for r in rows if r.get('kind') == 'reproduction'),
        tooling_seconds=tooling_seconds, attributable_tokens=None, observed_aggregate_goal_counter=aggregate_goal_counter)


def summarize(folder):
    rows = [read(p) for p in sorted(Path(folder).glob('*/comparison.json'))]
    groups = {}
    for row in rows:
        if 'binary_sha256' in row:
            groups.setdefault(row['binary_sha256'], []).append(row['name'])
    report = dict(trials=len(rows), exact=sum(r.get('exact', False) for r in rows),
                  errors=sum('error' in r for r in rows), binary_groups=groups,
                  duplicate_outputs=sum(len(v) - 1 for v in groups.values()),
                  compile_seconds=sum(r.get('elapsed_seconds', 0) for r in rows),
                  token_cost_measurements=None)
    report['measured'] = measured_report(rows)
    write(Path(folder) / 'summary.json', report)
    return report


def trial(spec, folder, reference, history=None, kind=None):
    unit = spec['unit']
    if not spec.get('hypothesis') or not spec.get('predicted_change') or not spec.get('boundary_review'):
        raise ValueError('Trial requires hypothesis, prediction and reviewed boundary evidence')
    if len(unit['ranges']) != 1:
        raise ValueError('Use the existing grouped-unit tools for noncontiguous ranges')
    r = unit['ranges'][0]
    if r['offset'] < 0 or r['size'] <= 0 or r['offset'] + r['size'] > len(reference):
        raise ValueError('Incomplete or invalid reference range')
    expected = reference[r['offset']:r['offset'] + r['size']]
    if digest(expected) != unit['reference_sha256']:
        raise ValueError('Reference range changed')
    classification_audit(len(expected), spec.get('classification', []))
    if history is None:
        config = read(project.ROOT / 'local.json')
        scratch = Path(config['scratch'])
        history = History(history_path(config))
        if not history.path.exists():
            history.index(reference, [scratch], [project.ROOT / 'config/project.json'],
                          [project.ROOT / 'config/reconstruction-targets.json'])
    kind = kind or spec.get('kind', 'hypothesis')
    inputs = compiler_inputs(spec)
    key = target_key(reference, unit)
    fingerprint = stable_hash(dict(reference_image_sha256=digest(reference), **inputs))
    reused = history.prepare(key, spec, fingerprint, kind)
    if reused is not None:
        print(json.dumps(dict(reused=True, receipt=next(r['receipt'] for r in history.data['attempts']
            if r.get('input_sha256') == fingerprint), exact=reused.get('exact'))))
        return reused
    folder.mkdir(exist_ok=False)
    write(folder / 'spec.json', spec)
    write(folder / 'unit.json', unit)
    source = folder / ('candidate.cpp' if unit.get('language') == 'c++' else 'candidate.c')
    source.write_text(spec['code'])
    project.matching.dependencies(source, unit, root=project.ROOT)
    for name in unit.get('headers', []):
        target = folder / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes((project.ROOT / name).read_bytes())
    result = dict(name=folder.name, id=unit['id'], source_sha256=digest(source.read_bytes()),
                  history_key=key, input_sha256=fingerprint, compiler_inputs=inputs, kind=kind,
                  hypothesis_id=spec.get('hypothesis_id', stable_hash(spec['hypothesis'])),
                  hypothesis=spec['hypothesis'], predicted_change=spec['predicted_change'],
                  blocker=spec.get('blocker'), reference_image_sha256=digest(reference), started_at=time.time())
    if spec.get('batch'):
        result['batch'] = spec['batch']
    history.reserve(result, folder / 'comparison.json')
    start = time.monotonic()
    try:
        binary = folder / 'candidate.bin'
        project.matching.compile_unit(source, binary, unit)
        result['compiler_seconds'] = time.monotonic() - start
        result.update(compare(expected, binary.read_bytes(), int(unit['address'], 0)))
        result['compiler_receipt_sha256'] = project.matching.sha(binary.with_suffix('.compiler.json'))
        if not result['exact']:
            diagnostic_start = time.monotonic()
            try:
                result['diagnostics'] = diagnose(expected, binary.read_bytes(), int(unit['address'], 0), spec, folder)
            except (ValueError, OSError, subprocess.CalledProcessError) as error:
                result['diagnostic_error'] = str(error)
            result['diagnostic_seconds'] = time.monotonic() - diagnostic_start
    except (ValueError, RuntimeError, OSError, subprocess.SubprocessError) as error:
        result['error'] = str(error)
        result['compiler_seconds'] = time.monotonic() - start
    result['elapsed_seconds'] = time.monotonic() - start
    result['artifacts_sha256'] = {p.name: digest(p.read_bytes()) for p in folder.iterdir()
                                if p.is_file() and p.name != 'comparison.json'}
    history.record(result, folder / 'comparison.json')
    summarize(folder.parent)
    print(json.dumps({k: result[k] for k in ['name', 'exact', 'size', 'expected_size', 'differing_bytes', 'first_difference', 'error'] if k in result}))
    if 'diagnostics' in result:
        print(json.dumps(result['diagnostics']))
    return result


def prior_addresses(scratch):
    addresses = set()
    for p in Path(scratch).glob('reconstruction-stage*/*/unit.json'):
        addresses.add(int(read(p)['address'], 0))
    for p in Path(scratch).glob('reconstruction-batch*/*/unit.json'):
        addresses.add(int(read(p)['address'], 0))
    return addresses


def destructor_candidates(manifest, reference, catalog, prior, reviewed):
    """Recognize the proved 68-byte destructor; emit ordinary source, never bytes."""
    template = next(u for u in manifest['units'] if u['id'] == 'destroy_actor_mode_state')
    tr = template['ranges'][0]
    original = reference[tr['offset']:tr['offset'] + tr['size']]
    if len(original) != 68 or digest(original) != template['reference_sha256']:
        raise ValueError('Proven destructor template changed')
    base = int(manifest['base_address'], 0)
    spans = [(r['offset'], r['offset'] + r['size']) for u in manifest['units'] for r in u['ranges']]
    code = (project.ROOT / template['source']).read_text()
    literal_offsets = (52, 56, 60, 64)
    originals = [int.from_bytes(original[i:i + 4], 'little') for i in literal_offsets]
    for address in sorted((catalog | reviewed) - prior):
        offset = address - base
        if offset < 0 or offset + 68 > len(reference) or any(max(offset, a) < min(offset + 68, b) for a, b in spans):
            continue
        candidate = reference[offset:offset + 68]
        # All instructions, delays and natural padding must share the proved shape.
        if candidate[:52] != original[:52]:
            continue
        if address + 68 not in catalog and address not in reviewed:
            continue
        words = [int.from_bytes(candidate[i:i + 4], 'little') for i in literal_offsets]
        if not all(base <= words[i] < base + len(reference) for i in (0, 1, 3)):
            continue
        name = 'destroy_object_' + f'{address:08x}'
        replacements = dict(zip(map(hex, originals), map(hex, words)))
        generated = re.sub(r'0x[0-9a-fA-F]+', lambda m: replacements.get(m.group().lower(), m.group()), code)
        generated = re.sub(r'\b' + template['id'] + r'\b', name, generated)
        unit = dict(id=name, source='src/effects/' + name + '.c', address=hex(address), entry='_' + name,
                    headers=template['headers'], symbols={}, ranges=[dict(offset=offset, size=68)],
                    functions=[dict(name=name, address=hex(address), size=68)], reference_sha256=digest(candidate))
        evidence = dict(template=template['id'], template_reference_sha256=template['reference_sha256'],
                        instruction_and_padding_bytes=52, literal_offsets=list(literal_offsets),
                        literal_values=list(map(hex, words)), adjacent_catalog_entry=address + 68 in catalog,
                        reviewed_adjacent_bytes=reference[offset + 68:offset + 100].hex())
        yield dict(unit=unit, code=generated, hypothesis='H1: Proven nullable destructor with signed release flag and dispatch field24.',
                   predicted_change='Only the four observed address literals change; predict the entire 68-byte range, including padding.',
                   boundary_review='Reviewed common instruction/branch/delay shape and complete four-word pool; next entry is cataloged or explicitly reviewed.',
                   evidence=evidence)


def verify(checkout, output):
    """Run existing acceptance tools once; retain timed logs and artifact guards."""
    checkout = checkout.resolve()
    output.mkdir(exist_ok=False)
    commands = [['tools/verify_source.py']]
    if (checkout / 'tools/progress.py').exists():
        commands.append(['tools/progress.py', '--record'])
    commands.append(['-m', 'unittest', 'discover', '-s', 'tests'])
    if (checkout / 'tools/progress.py').exists():
        commands.append(['tools/progress.py', '--check'])
    steps = []
    for i, args in enumerate(commands):
        log = output / f'check-{i}.log'
        start = time.monotonic()
        with log.open('w') as handle:
            result = subprocess.run([sys.executable, '-B', *args], cwd=checkout, stdout=handle, stderr=subprocess.STDOUT)
        steps.append(dict(command=args, returncode=result.returncode, elapsed_seconds=time.monotonic() - start,
                          log_sha256=digest(log.read_bytes()), log_bytes=log.stat().st_size))
        write(output / 'verification.json', dict(status='in_progress', steps=steps))
        result.check_returncode()
    scratch = Path(read(checkout / 'local.json')['scratch'])
    def artifacts():
        return {str(p.relative_to(scratch)): digest(p.read_bytes()) for p in (scratch / 'project-build').rglob('*') if p.is_file()}
    before = artifacts()
    result = subprocess.run([sys.executable, '-B', 'tools/project.py', 'build', '--source-only'], cwd=checkout, capture_output=True, text=True)
    (output / 'source-only.log').write_text(result.stdout + result.stderr)
    manifest = read(checkout / 'config/project.json')
    total = read(checkout / 'config/decoded.json')['size']
    compiled = sum(r['size'] for u in manifest['units'] for r in u['ranges'])
    retained = total - compiled
    if result.returncode == 0 or f'{retained:,} bytes' not in result.stdout + result.stderr or before != artifacts():
        raise ValueError('Source-only rejection/artifact guard failed')
    test_log = next(output / f'check-{i}.log' for i, args in enumerate(commands) if 'unittest' in args)
    test_count = int(re.search(r'Ran (\d+) tests?', test_log.read_text())[1])
    report = dict(status='passed', steps=steps, test_count=test_count, matching_functions=sum(len(u['functions']) for u in manifest['units']),
                  compiled_function_range_bytes=compiled, reconstructed_data_bytes=0, retained_reference_bytes=retained,
                  fresh_builds=2, source_only_rejected=True, artifacts_preserved=True,
                  source_validation_sha256=digest((checkout / 'config/source-validation.json').read_bytes()),
                  token_cost_measurements=None)
    write(output / 'verification.json', report)
    print(json.dumps({k: v for k, v in report.items() if k != 'steps'}))


def matched_target(unit, spec, previous=None):
    """Preserve a parked investigation when new evidence finally resolves it."""
    target = dict(unit, status='matched', reason='Complete exact range reproduced twice from reviewed ordinary source.')
    if previous is not None:
        identity = ('address', 'ranges', 'reference_sha256')
        evidence = spec.get('reopen_evidence') or spec.get('revisit_evidence')
        extents = lambda u: [(f['address'], f['size']) for f in u.get('functions', [])]
        if (previous.get('status') != 'parked' or not isinstance(evidence, dict)
                or any(unit.get(key) != previous.get(key) for key in identity)
                or extents(unit) != extents(previous)):
            raise ValueError('Queued target requires referenced evidence and unchanged identity/ranges')
        evidence_record(evidence, previous.get('reason', ''))
        target.update(previous_target=previous, revisit_evidence=evidence)
    return target


def integrate(folders, output, reference):
    """Reproduce reviewed candidates twice before changing the research manifest."""
    root = project.ROOT
    manifest = read(root / 'config/project.json')
    queue = read(root / 'config/reconstruction-targets.json')
    specs = [read(Path(folder) / 'spec.json') for folder in folders]
    if sum(r['size'] for spec in specs for r in spec['unit']['ranges']) < 5120:
        raise ValueError('Collect at least 5,120 exact bytes before integration')
    source_hashes = {name: project.matching.sha(root / name) for u in manifest['units']
                     for name in [u['source'], *u.get('headers', [])]}
    output.mkdir(exist_ok=False)
    write(output / 'manifest-before.json', manifest)
    write(output / 'queue-before.json', queue)
    names = {u['id'] for u in manifest['units']}
    queued = {int(u['address'], 0): u for u in queue['targets']}
    admitted = []
    for folder in folders:
        spec = read(Path(folder) / 'spec.json')
        unit = dict(spec['unit'])
        relative = Path(unit['source'])
        if relative.is_absolute() or '..' in relative.parts or relative.parts[:1] != ('src',):
            raise ValueError('Unsafe source destination')
        if unit['id'] in names or (root / relative).exists():
            raise ValueError('Refusing to replace existing target/source: ' + unit['id'])
        address = int(unit['address'], 0)
        target = matched_target(unit, spec, queued.get(address))
        for index in range(2):
            result = trial(spec, output / (unit['id'] + '-reproduce-' + str(index)), reference, kind='reproduction')
            if not result.get('exact'):
                raise ValueError('Admission failed complete comparison: ' + unit['id'])
        unit['boundary_review'] = spec['boundary_review']
        target['boundary_review'] = spec['boundary_review']
        manifest['units'].append(unit)
        project.layout(manifest, len(reference))
        if address in queued:
            queue['targets'][queue['targets'].index(queued[address])] = target
        else:
            queue['targets'].append(target)
        names.add(unit['id'])
        admitted.append((unit, spec['code']))
    # All comparisons and layout checks have succeeded before project writes.
    if source_hashes != {name: project.matching.sha(root / name) for name in source_hashes}:
        raise ValueError('Existing admitted source/header changed during reproduction')
    for unit, code in admitted:
        (root / unit['source']).parent.mkdir(parents=True, exist_ok=True)
        (root / unit['source']).write_text(code)
    manifest['units'].sort(key=lambda u: int(u['address'], 0))
    write(root / 'config/project.json', manifest)
    write(root / 'config/reconstruction-targets.json', queue)
    write(output / 'admissions.json', [u for u, _ in admitted])
    print(json.dumps(dict(admitted=len(admitted), bytes=sum(r['size'] for u, _ in admitted for r in u['ranges']))))


def report_batch(baseline, findings, verification, name):
    """Generate measured batch documentation; analysis findings remain reviewed prose."""
    root = project.ROOT
    manifest = read(root / 'config/project.json')
    old = {u['id']: u for u in read(baseline)['units']}
    current = {u['id']: u for u in manifest['units']}
    if any(current.get(k) != v for k, v in old.items()):
        raise ValueError('An existing admission changed')
    new = [u for u in manifest['units'] if u['id'] not in old]
    checked = read(verification)
    if checked['status'] != 'passed' or checked['source_validation_sha256'] != digest((root / 'config/source-validation.json').read_bytes()):
        raise ValueError('Stale or incomplete batch verification')
    count = sum(len(u['functions']) for u in manifest['units'])
    size = sum(r['size'] for u in manifest['units'] for r in u['ranges'])
    total = read(root / 'config/decoded.json')['size']
    added = sum(r['size'] for u in new for r in u['ranges'])
    lead = f'{count} exact functions in {len(current)} modules; {size:,} compiled function-range bytes; 0 reconstructed data bytes; {total-size:,} retained reference bytes. Whole-image coverage {size/total*100:.4f}% is not code completion.'
    new_functions = sum(len(u['functions']) for u in new)
    text = f'# Reconstruction batch: {name}\n\n{new_functions} new matching functions / {added:,} bytes. All {sum(len(u["functions"]) for u in old.values())} prior functions preserved.\n\n{lead}\n\n'
    text += '| Function | Address | Complete bytes |\n| --- | --- | ---: |\n'
    text += ''.join(f'| {u["id"]} | {u["address"]} | {sum(r["size"] for r in u["ranges"])} |\n' for u in new)
    text += '\n' + Path(findings).read_text() + '\n'
    (root / 'docs/BATCH.md').write_text(text.rstrip() + '\n')
    # Only current summary numbers change; historical findings remain intact.
    for filename in ['README.md', 'docs/START_HERE.md']:
        path = root / filename
        content = path.read_text()
        content = re.sub(r'\d+ exact (matching )?functions in \d+ modules', lambda m: f'{count} exact {m[1] or ""}functions in {len(current)} modules', content)
        for previous in [read(baseline)]:
            previous_size = sum(r['size'] for u in previous['units'] for r in u['ranges'])
            content = content.replace(f'{previous_size:,}', f'{size:,}').replace(f'{total-previous_size:,}', f'{total-size:,}').replace(f'{previous_size/total*100:.4f}%', f'{size/total*100:.4f}%')
        if filename.endswith('START_HERE.md'):
            content = re.sub(r'(\| Matching functions / modules \| )[^|]+', lambda m: m[1] + f'{count} / {len(current)} ', content)
            content = re.sub(r'(?s)(?:Stage \d+ adds|\d+: [^\n]+new functions).*?(?=## Active work)', f'{name}: {new_functions} new functions / {added:,} bytes. See [BATCH.md](BATCH.md) for the measured batch report.\n\n', content)
            latest = f'## Latest integration batch: {name}\n\n{new_functions} new functions / {added:,} bytes. See [BATCH.md](BATCH.md) for measured gains, investigation-only work and verification.\n\n'
            content = re.sub(r'(?s)## Latest integration batch:.*?(?=## Autonomous iteration)', latest, content)
            content = content.replace('After ten unsuccessful distinct hypotheses on a target, or sooner when evidence\nruns out,', 'After two or three unsuccessful distinct hypotheses, park unless concrete new\nevidence justifies more; never exceed ten cumulative hypotheses. Then')
        path.write_text(content)
    print(lead)


def reuse_dossier(receipt_path, output):
    """Rebind unchanged requested ranges after unrelated manifest additions."""
    import dossier
    original = read(receipt_path)
    _, manifest, reference, _ = project.inputs()
    requests = dossier.requested_ranges(manifest, read(project.ROOT / 'config/reconstruction-targets.json'),
                                        [r['id'] for r in original['requests']], len(reference))
    if requests != original['requests'] or digest(reference) != original['reference_sha256']:
        raise ValueError('Analysis targets/reference changed; regenerate the affected export')
    updated = dict(original, reused_from=str(receipt_path), reused_receipt_sha256=digest(receipt_path.read_bytes()))
    updated['project_inputs_sha256'] = dict(original['project_inputs_sha256'])
    for name in ['config/project.json', 'config/reconstruction-targets.json']:
        updated['project_inputs_sha256'][name] = digest((project.ROOT / name).read_bytes())
    if output.exists():
        raise ValueError('Refusing to replace existing evidence')
    write(output, updated)
    # Unchanged exporter, tools, every artifact and original database still checked.
    dossier.verify_receipt(output)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    subs = p.add_subparsers(dest='command', required=True)
    e = subs.add_parser('reuse-evidence');e.add_argument('receipt', type=Path);e.add_argument('--out', type=Path, required=True)
    t = subs.add_parser('trial');t.add_argument('spec', type=Path);t.add_argument('--out', type=Path, required=True)
    s = subs.add_parser('summary');s.add_argument('folder', type=Path)
    h = subs.add_parser('index-history');h.add_argument('--root', type=Path, action='append', default=[]);h.add_argument('--out', type=Path)
    g = subs.add_parser('destructors');g.add_argument('--out', type=Path, required=True);g.add_argument('--boundaries', type=Path);g.add_argument('--limit', type=int, default=30)
    i = subs.add_parser('integrate');i.add_argument('plan', type=Path);i.add_argument('--out', type=Path, required=True)
    r = subs.add_parser('report');r.add_argument('--baseline', type=Path, required=True);r.add_argument('--findings', type=Path, required=True);r.add_argument('--verification', type=Path, required=True);r.add_argument('--name', required=True)
    v = subs.add_parser('verify');v.add_argument('--checkout', type=Path, default=project.ROOT);v.add_argument('--out', type=Path, required=True)
    args = p.parse_args()
    if args.command == 'reuse-evidence':
        reuse_dossier(args.receipt, args.out);return
    if args.command == 'report':
        report_batch(args.baseline, args.findings, args.verification, args.name);return
    if args.command == 'verify':
        verify(args.checkout, args.out);return
    if args.command == 'summary':
        r = summarize(args.folder);print(json.dumps({k: v for k, v in r.items() if k != 'binary_groups'}));return
    cfg, manifest, reference, _ = project.inputs()
    if args.command == 'index-history':
        scratch = Path(cfg['scratch'])
        history = History(args.out or history_path(cfg))
        print(json.dumps(history.index(reference, args.root or [scratch],
            [project.ROOT / 'config/project.json'], [project.ROOT / 'config/reconstruction-targets.json'])))
        return
    if args.command == 'integrate':
        integrate(read(args.plan), args.out, reference);return
    if args.command == 'trial':
        trial(read(args.spec), args.out, reference);return
    scratch = Path(cfg['scratch'])
    catalog = {int(line.split('\t')[0], 16) for line in (scratch / 'analysis/game/functions.tsv').read_text().splitlines()}
    prior = prior_addresses(scratch) | {int(u['address'], 0) for u in read(project.ROOT / 'config/reconstruction-targets.json')['targets']}
    reviewed = {int(a, 0) for a in read(args.boundaries)} if args.boundaries else set()
    args.out.mkdir(exist_ok=False)
    specs = list(destructor_candidates(manifest, reference, catalog, prior, reviewed))[:args.limit]
    write(args.out / 'pattern-audit.json', dict(template='destroy_actor_mode_state', historical_addresses_checked=len(prior), candidates=len(specs)))
    for spec in specs:
        spec['hypothesis_id'] = 'nullable-destructor-v1'
        trial(spec, args.out / spec['unit']['id'], reference)
    print(json.dumps({k: v for k, v in summarize(args.out).items() if k != 'binary_groups'}))


if __name__ == '__main__':
    main()
