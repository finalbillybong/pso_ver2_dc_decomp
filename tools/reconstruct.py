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
    write(Path(folder) / 'summary.json', report)
    return report


def trial(spec, folder, reference):
    unit = spec['unit']
    if not spec.get('hypothesis') or not spec.get('predicted_change') or not spec.get('boundary_review'):
        raise ValueError('Trial requires hypothesis, prediction and reviewed boundary evidence')
    if len(unit['ranges']) != 1:
        raise ValueError('Use the existing grouped-unit tools for noncontiguous ranges')
    r = unit['ranges'][0]
    expected = reference[r['offset']:r['offset'] + r['size']]
    if digest(expected) != unit['reference_sha256']:
        raise ValueError('Reference range changed')
    folder.mkdir(exist_ok=False)
    write(folder / 'spec.json', spec)
    write(folder / 'unit.json', unit)
    source = folder / ('candidate.cpp' if unit.get('language') == 'c++' else 'candidate.c')
    source.write_text(spec['code'])
    for name in unit.get('headers', []):
        target = folder / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes((project.ROOT / name).read_bytes())
    result = dict(name=folder.name, id=unit['id'], source_sha256=digest(source.read_bytes()))
    start = time.monotonic()
    try:
        binary = folder / 'candidate.bin'
        project.matching.compile_unit(source, binary, unit)
        result.update(compare(expected, binary.read_bytes(), int(unit['address'], 0)))
        result['compiler_receipt_sha256'] = project.matching.sha(binary.with_suffix('.compiler.json'))
    except (ValueError, RuntimeError, subprocess.CalledProcessError) as error:
        result['error'] = str(error)
    result['elapsed_seconds'] = time.monotonic() - start
    write(folder / 'comparison.json', result)
    summarize(folder.parent)
    print(json.dumps({k: result[k] for k in ['name', 'exact', 'size', 'expected_size', 'differing_bytes', 'first_difference', 'error'] if k in result}))
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
        identity = ('id', 'address', 'entry', 'ranges', 'functions', 'reference_sha256')
        if (previous.get('status') != 'parked' or not spec.get('revisit_evidence')
                or any(unit.get(key) != previous.get(key) for key in identity)):
            raise ValueError('Queued target requires new evidence and unchanged identity/ranges')
        target.update(previous_target=previous, revisit_evidence=spec['revisit_evidence'])
    return target


def integrate(folders, output, reference):
    """Reproduce reviewed candidates twice before changing the research manifest."""
    root = project.ROOT
    manifest = read(root / 'config/project.json')
    queue = read(root / 'config/reconstruction-targets.json')
    output.mkdir(exist_ok=False)
    write(output / 'manifest-before.json', manifest)
    write(output / 'queue-before.json', queue)
    names = {u['id'] for u in manifest['units']}
    queued = {u['id']: u for u in queue['targets']}
    admitted = []
    for folder in folders:
        spec = read(Path(folder) / 'spec.json')
        unit = dict(spec['unit'])
        relative = Path(unit['source'])
        if relative.is_absolute() or '..' in relative.parts or relative.parts[:1] != ('src',):
            raise ValueError('Unsafe source destination')
        if unit['id'] in names or (root / relative).exists():
            raise ValueError('Refusing to replace existing target/source: ' + unit['id'])
        target = matched_target(unit, spec, queued.get(unit['id']))
        for index in range(2):
            result = trial(spec, output / (unit['id'] + '-reproduce-' + str(index)), reference)
            if not result.get('exact'):
                raise ValueError('Admission failed complete comparison: ' + unit['id'])
        unit['boundary_review'] = spec['boundary_review']
        target['boundary_review'] = spec['boundary_review']
        manifest['units'].append(unit)
        project.layout(manifest, len(reference))
        if unit['id'] in queued:
            queue['targets'][queue['targets'].index(queued[unit['id']])] = target
        else:
            queue['targets'].append(target)
        names.add(unit['id'])
        admitted.append((unit, spec['code']))
    # All comparisons and layout checks have succeeded before project writes.
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
        trial(spec, args.out / spec['unit']['id'], reference)
    print(json.dumps({k: v for k, v in summarize(args.out).items() if k != 'binary_groups'}))


if __name__ == '__main__':
    main()
