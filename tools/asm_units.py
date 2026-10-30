#!/usr/bin/env python3
"""Assembly units: hand-written routines and the not-decompiled fallback, generated from your dump.

Assembly is **not decompiled code**. No assembly text is committed. `config/asm.json`
records only, per unit: the range, id, class (`hand` or `fallback`), the SHA-256 of the
reference range, the external symbol bindings, the entry labels, and (for `hand` units)
the evidence instructions. At build time `tools/asmgen.py` regenerates the assembler
source into a private scratch directory from the user's own dump; this driver then lints
it, assembles it with the pinned GNU assembler, links it at the original address and
compares the complete range.

* `hand` units are routines with evidence that no compiler produced them (an instruction
  neither CodeWarrior nor the pinned SHC emits). They count only in the
  "assembly (hand-written)" figure.
* `fallback` units are generated mechanically for code that has no matching C yet,
  labelled `not_decompiled`. They count only toward the "source-buildable with your dump"
  figure and never toward code, matching or image-coverage. On every build the generator
  re-cuts them around the admitted C, SHC and data modules they overlap, so matching C
  shrinks the fallback with no retained bytes left behind.

See docs/ASM.md. `tools/matching.py` is unchanged."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
import matching
import asmgen

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'config/asm.json'
RECEIPT = 'config/asm-installed.json'
CLASSES = ('hand', 'fallback')
ASSEMBLER_VERSION = 'GNU assembler (GNU Binutils) 2.44'
AS_FLAGS = ['--isa=sh4', '-little', '--fatal-warnings']
MAX_RAW = 4
R_SH_DIR32 = 1
NAME = r'[A-Za-z_.$][A-Za-z_.$0-9]*'
HEX = r'0x[0-9a-f]+'
DIRECTIVES = {'.text', '.global', '.set', '.skip', '.balign', '.long', '.short'}
PCREL = re.compile(r'^(mov\.l|mov\.w|mova) (' + NAME + r'), r\d+$')
BRANCH = re.compile(r'^(bra|bsr|bt|bf|bt/s|bf/s) (' + NAME + r')$')


def read(root=ROOT):
    path = Path(root) / MANIFEST
    if not path.exists():
        return {'schema_version': 1, 'units': []}
    return json.loads(path.read_text())


def units_of(asm, kind):
    return [u for u in asm['units'] if u['class'] == kind]


def unit_size(unit):
    return unit['ranges'][0]['size']


def validate(asm, base, size, other_ids=()):
    """Structural checks without tools, the dump or any assembly text."""
    if asm.get('schema_version') != 1 or set(asm) - {'schema_version', 'code_extent', 'units'}:
        raise ValueError('Unsupported assembly manifest schema')
    ids = set(other_ids)
    # The manifest carries no entries, symbols or assembly text; those are generated at build.
    allowed = {'id', 'class', 'address', 'ranges', 'reference_sha256', 'evidence', 'status'}
    for unit in asm['units']:
        uid = unit['id']
        if set(unit) - allowed:
            raise ValueError('Assembly manifest holds only range, class, hash and evidence fields: ' + uid)
        if uid in ids or not re.fullmatch(r'[a-z0-9_]+', uid):
            raise ValueError('Duplicate or invalid unit identifier: ' + uid)
        ids.add(uid)
        if unit.get('class') not in CLASSES:
            raise ValueError('Assembly class must be hand or fallback: ' + uid)
        if len(unit['ranges']) != 1:
            raise ValueError('Assembly units describe one complete contiguous range: ' + uid)
        r = unit['ranges'][0]
        start = int(unit['address'], 0)
        if (base + r['offset'] != start or r['size'] <= 0 or r['offset'] < 0 or r['offset'] + r['size'] > size
                or start % 2 or r['size'] % 2):
            raise ValueError('Invalid assembly unit range: ' + uid)
        if not re.fullmatch(r'[0-9a-f]{64}', unit.get('reference_sha256', '')):
            raise ValueError('Missing assembly unit reference hash: ' + uid)
        if unit['class'] == 'hand':
            if not unit.get('evidence'):
                raise ValueError('Hand-written unit without evidence: ' + uid)
            for item in unit['evidence']:
                if (not start <= int(item['address'], 0) < start + r['size']
                        or not asmgen.HAND_EVIDENCE.search(item['instruction'])):
                    raise ValueError('Hand-assembly evidence must be an instruction no compiler emits: ' + uid)
        elif unit.get('status') != 'not_decompiled':
            raise ValueError('Fallback units are labelled not_decompiled: ' + uid)
    return asm


# ----------------------------------------------------------------- source lint
def lint(text, unit, known=frozenset()):
    """Line-level checks on one generated source. Returns stats; raises on anything that is
    not readable assembly. `unit` here describes the generated sub-span (its entries,
    symbols and, for hand units, evidence)."""
    if any(t in text for t in ('.incbin', '.include', '.macro', '.rept', '.irp', '.fill', '.org', '#include')):
        raise ValueError('Assembly units may not include binaries, files, macros or fills: ' + unit['id'])
    start = int(unit['address'], 0)
    phase = start % 4
    lines = [raw.split('!', 1)[0].strip() for raw in text.splitlines()]
    lines = [l for l in lines if l]
    referenced, defined, used, items = set(), set(), set(), []
    globals_ = []
    seen_code = False
    for line in lines:
        m = re.fullmatch(r'(' + NAME + r'):', line)
        if m:
            defined.add(m[1]); items.append(('label', m[1])); continue
        word = line.split()[0]
        if word.startswith('.'):
            if word not in DIRECTIVES:
                raise ValueError('Directive not allowed in assembly units: ' + word)
            rest = line[len(word):].strip()
            if word == '.text':
                if rest or seen_code:
                    raise ValueError('Only one leading .text section')
                seen_code = True
            elif word == '.global':
                if not re.fullmatch('_' + NAME, rest):
                    raise ValueError('Invalid .global')
                globals_.append(rest)
            elif word == '.set':
                m = re.fullmatch(r'(' + NAME + r'), (' + NAME + r') ([+-]) (' + HEX + r')', rest)
                if not m:
                    raise ValueError('Only same-section equates are allowed')
                used.add(m[2]); defined.add(m[1])
            elif word == '.skip':
                if rest != '2' or not phase or items:
                    raise ValueError('.skip 2 is only the alignment phase of a unit at 2 mod 4')
                items.append(('phase', 2))
            elif word == '.balign':
                if rest not in ('4', '4, 0'):
                    raise ValueError('Only .balign 4 or .balign 4, 0 is allowed')
                items.append(('align', rest))
            elif word == '.long':
                if re.fullmatch(HEX, rest):
                    items.append(('long', int(rest, 16)))
                elif re.fullmatch(NAME, rest):
                    used.add(rest); items.append(('long', rest))
                else:
                    raise ValueError('.long takes one hex word or one symbol: ' + rest)
            elif word == '.short':
                if not re.fullmatch(HEX, rest) or int(rest, 16) > 0xffff:
                    raise ValueError('.short takes one hex halfword')
                items.append(('short', int(rest, 16)))
            continue
        if not seen_code:
            raise ValueError('Code before .text')
        m = PCREL.fullmatch(line) or BRANCH.fullmatch(line)
        if m:
            used.add(m[2])
            if m[1] in ('mov.l', 'mov.w', 'mova'):
                referenced.add(m[2])
        elif not re.fullmatch(r'[a-z][a-z0-9./]*( [^ ].*)?', line):
            raise ValueError('Unreadable line: ' + line[:40])
        items.append(('insn', line))
    if not seen_code:
        raise ValueError('Missing .text')
    stats = dict(instructions=0, literal_words=0, symbolic_words=0, raw_bytes=0, unsymbolized=[])
    run_ok, run_bytes, pending = False, 0, []
    for kind, value in items:
        if kind == 'label':
            pending.append(value); continue
        if kind in ('long', 'short'):
            if pending and any(p in referenced for p in pending):
                run_ok = True
            size_ = 4 if kind == 'long' else 2
            if kind == 'long' and isinstance(value, str):
                stats['literal_words'] += 1; stats['symbolic_words'] += 1; run_bytes = 0
            else:
                run_bytes += size_
                if not run_ok:
                    stats['raw_bytes'] += size_
                    if run_bytes > MAX_RAW:
                        raise ValueError('Unreferenced raw data run longer than %d bytes: %s' % (MAX_RAW, unit['id']))
                if kind == 'long':
                    stats['literal_words'] += 1
                    if value in known:
                        stats['unsymbolized'].append(value)
        else:
            run_ok, run_bytes = False, 0
            if kind == 'insn':
                stats['instructions'] += 1
        pending = []
    names = {e['name'] for e in unit.get('entries', [])}
    if set(globals_) != names or any(n not in defined for n in globals_):
        raise ValueError('Global labels must be exactly the manifest entries: ' + unit['id'])
    undefined = {n for n in used if n not in defined}
    if any(n.startswith('.L') for n in undefined):
        raise ValueError('Undefined local label: ' + sorted(undefined)[0])
    if undefined != set(unit.get('symbols', {})):
        raise ValueError('Undefined names and bound symbols differ: ' + unit['id'])
    if unit.get('class') == 'hand':
        insns = {v for k, v in items if k == 'insn'}
        missing = [e['instruction'] for e in unit.get('evidence', []) if e['instruction'] not in insns]
        if missing:
            raise ValueError('Evidence instruction is not in the source: ' + missing[0])
    stats['undefined'] = sorted(undefined)
    return stats


# ----------------------------------------------------------------- generation context
def taken_ranges(root=ROOT):
    """Byte ranges owned by admitted C/SHC, typed data or assets (fallback never covers them)."""
    code = json.loads((Path(root) / 'config/project.json').read_text())
    spans = [(int(u['address'], 0), int(u['address'], 0) + u['ranges'][0]['size']) for u in code['units']]
    for name in ('config/data.json', 'config/assets.json'):
        path = Path(root) / name
        if not path.exists():
            continue
        doc = json.loads(path.read_text())
        for u in doc.get('units', []):
            spans.append((int(u['address'], 0), int(u['address'], 0) + u['ranges'][0]['size']))
        for a in doc.get('assets', []):
            spans.append((int(a['address'], 0), int(a['address'], 0) + a['size']))
    spans.sort()
    return spans


def subtract(start, end, taken):
    """[start,end) minus the taken ranges -> sorted list of (a,b)."""
    spans, cur = [], start
    import bisect
    starts = [s for s, _ in taken]
    i = max(bisect.bisect_right(starts, start) - 1, 0)
    for s, e in taken[i:]:
        if s >= end:
            break
        if e <= cur:
            continue
        if s > cur:
            spans.append((cur, min(s, end)))
        cur = max(cur, e)
        if cur >= end:
            break
    if cur < end:
        spans.append((cur, end))
    return spans


def effective_units(root, asm=None):
    """Per committed unit, the sub-spans still to assemble after removing admitted modules.
    Returns [(unit, [(start,end), ...])]; a fully overlapped unit yields an empty list."""
    asm = asm if asm is not None else read(root)
    taken = taken_ranges(root)
    result = []
    for unit in asm['units']:
        start = int(unit['address'], 0)
        result.append((unit, subtract(start, start + unit_size(unit), taken)))
    return result


def placed_spans(root=ROOT, asm=None):
    """The sub-spans that layout places, after removing admitted C/SHC/data/asset ranges.
    Ids match materialize(): the unit id, or `<id>_<index>` when a unit is split."""
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    out = []
    for unit, spans in effective_units(root, asm):
        for idx, (s, e) in enumerate(spans):
            out.append({'id': unit['id'] if len(spans) == 1 else f"{unit['id']}_{idx}",
                        'class': unit['class'], 'address': hex(s),
                        'offset': s - base, 'size': e - s})
    return out


def entry_starts(root=ROOT):
    """Code entry addresses from committed config: admitted functions and reconstruction
    targets (and their functions). Used for global labels at build time."""
    code = json.loads((Path(root) / 'config/project.json').read_text())
    out = {int(f['address'], 0) for u in code['units'] for f in u['functions']}
    for t in json.loads((Path(root) / 'config/reconstruction-targets.json').read_text())['targets']:
        out.add(int(t['address'], 0))
        out.update(int(f['address'], 0) for f in t.get('functions', []))
    return out


def generation_context(root=ROOT):
    """Names of admitted functions and data objects, and an is_code predicate, for the generator."""
    code = json.loads((Path(root) / 'config/project.json').read_text())
    names, code_bytes = {}, []
    for u in code['units']:
        a = int(u['address'], 0)
        code_bytes.append((a, a + u['ranges'][0]['size']))
        for f in u['functions']:
            names.setdefault(int(f['address'], 0), '_' + f['name'])
    data_path = Path(root) / 'config/data.json'
    if data_path.exists():
        for u in json.loads(data_path.read_text())['units']:
            for o in u['objects']:
                names.setdefault(int(o['address'], 0), '_' + o['name'])
    queue = json.loads((Path(root) / 'config/reconstruction-targets.json').read_text())['targets']
    starts = {int(t['address'], 0) for t in queue}
    for t in queue:
        if t.get('ranges'):
            code_bytes.append((int(t['address'], 0), int(t['address'], 0) + t['ranges'][0]['size']))
        for f in t.get('functions', []):
            starts.add(int(f['address'], 0))
    for u in read(root)['units']:
        for e in u.get('entries', []):
            starts.add(int(e['address'], 0))
    code_bytes.sort()
    import bisect
    cstarts = [s for s, _ in code_bytes]

    def is_code(addr):
        if addr in starts or addr in names:
            return addr in starts  # a named data object is not code
        i = bisect.bisect_right(cstarts, addr) - 1
        return i >= 0 and code_bytes[i][0] <= addr < code_bytes[i][1]
    return names, is_code


def materialize(root=ROOT, out_dir=None):
    """Regenerate every assembly source for the current manifest into out_dir (scratch).
    Returns [(unit, sub_unit, path)] where sub_unit describes the generated sub-span."""
    out_dir = Path(out_dir or (asmgen.scratch_dir(root) / 'asm-gen'))
    if out_dir.exists():
        shutil.rmtree(out_dir)
    out_dir.mkdir(parents=True)
    img = asmgen.reference_image(root)
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    # The build needs only the image: no listing. Entry labels come from committed config.
    enc = asmgen.build_enc(root)
    names, is_code = generation_context(root)
    known = known_addresses(root)
    import bisect
    all_entries = sorted(entry_starts(root))
    produced = []
    for unit, spans in effective_units(root):
        for idx, (s, e) in enumerate(spans):
            lo, hi = bisect.bisect_left(all_entries, s), bisect.bisect_left(all_entries, e)
            ent = sorted(set(all_entries[lo:hi]) | {s})
            if unit['class'] == 'hand':
                ev = unit['evidence']
                evs = ', '.join(f"{v['instruction']} at {v['address']}" for v in ev[:6])
                title = (f'Hand-written SH-4 routine {s:#010x}-{e:#010x}: assembly, not decompiled C.\n'
                         f'Evidence that no compiler produced it: {evs}.\n'
                         f'Generated locally from your dump; never committed.')
            else:
                title = (f'NOT DECOMPILED: generated fallback assembly for {s:#010x}-{e:#010x}.\n'
                         f'Produced locally from your dump so the executable builds from source; it is a\n'
                         f'disassembly, not reconstructed source, and earns no code or matching credit.')
            text, info = asmgen.generate(img, None, enc, s, e, names, ent, is_code, title, base, known)
            sub = {'id': unit['id'] if len(spans) == 1 else f"{unit['id']}_{idx}",
                   'class': unit['class'], 'address': hex(s),
                   'ranges': [{'offset': s - base, 'size': e - s}],
                   'entries': [{'name': n, 'address': hex(a)} for a, n in zip(ent, info['entries'])],
                   'symbols': {n: hex(a) for n, a in sorted(info['undefined'].items())}}
            if unit['class'] == 'hand':
                sub['evidence'] = [v for v in unit['evidence'] if s <= int(v['address'], 0) < e]
            else:
                sub['status'] = 'not_decompiled'
            path = out_dir / (sub['id'] + '.s')
            path.write_text(text)
            produced.append((unit, sub, path))
    return produced


def known_addresses(root=ROOT):
    code = json.loads((Path(root) / 'config/project.json').read_text())
    known = {int(f['address'], 0) for u in code['units'] for f in u['functions']}
    data_path = Path(root) / 'config/data.json'
    if data_path.exists():
        known.update(int(o['address'], 0) for u in json.loads(data_path.read_text())['units'] for o in u['objects'])
    for u in read(root)['units']:
        known.update(int(e['address'], 0) for e in u.get('entries', []))
    for u in code['units'] + read(root)['units']:
        known.update(int(a, 0) for a in u.get('symbols', {}).values())
    return known


def lint_all(root=ROOT):
    """Compiler-free CI checks: the manifest and every regenerated source. Needs the dump
    (listing + image) to regenerate; it never assembles."""
    code = json.loads((Path(root) / 'config/project.json').read_text())
    decoded = json.loads((Path(root) / 'config/decoded.json').read_text())
    data_path = Path(root) / 'config/data.json'
    data_ids = [u['id'] for u in json.loads(data_path.read_text())['units']] if data_path.exists() else []
    asm = read(root)
    validate(asm, int(code['base_address'], 0), decoded['size'], [u['id'] for u in code['units']] + data_ids)
    known = known_addresses(root)
    totals = dict(instructions=0, literal_words=0, symbolic_words=0, raw_bytes=0, unsymbolized=0)
    for unit, sub, path in materialize(root):
        stats = lint(path.read_text(), sub, known)
        if stats['unsymbolized'] and unit['class'] == 'hand':
            raise ValueError('Literal word equals a symbol address; write the symbol: %s %#x'
                             % (sub['id'], stats['unsymbolized'][0]))
        for k in totals:
            totals[k] += len(stats[k]) if k == 'unsymbolized' else stats[k]
    return totals


# ----------------------------------------------------------------- tools and build
def load_tools(root=ROOT):
    tools = matching.load_tools()
    receipt = json.loads((Path(root) / RECEIPT).read_text())
    assembler = Path(receipt['assembler'])
    if matching.sha(assembler) != receipt['assembler_sha256']:
        raise ValueError('Pinned assembler hash mismatch')
    if receipt['linker_sha256'] != matching.sha(tools['linker']):
        raise ValueError('Assembler receipt was made for a different pinned linker')
    return {'assembler': assembler, 'linker': tools['linker'], 'objcopy': tools['objcopy']}


def setup(assembler, root=ROOT):
    assembler = Path(assembler).resolve()
    tools = matching.load_tools()
    sibling = assembler.parent.parent / 'ld' / 'ld-new'
    if not sibling.is_file() or matching.sha(sibling) != matching.sha(tools['linker']):
        raise ValueError('The assembler is not from the pinned linker build tree')
    version = subprocess.run([str(assembler), '--version'], capture_output=True, text=True).stdout.splitlines()[0]
    if version != ASSEMBLER_VERSION:
        raise ValueError('Unexpected assembler version: ' + version)
    receipt = {'assembler': str(assembler), 'assembler_sha256': matching.sha(assembler),
               'version': version, 'target': 'sh-elf', 'flags': AS_FLAGS,
               'linker_sha256': matching.sha(tools['linker']),
               'matching_installed_sha256': matching.sha(Path(root) / 'config/matching-installed.json')}
    (Path(root) / RECEIPT).write_text(json.dumps(receipt, indent=2) + '\n')
    return receipt


def profile(root=ROOT):
    tools = load_tools(root)
    return dict(tools={k: matching.sha(v) for k, v in tools.items()}, flags=AS_FLAGS,
                installed_sha256=matching.sha(Path(root) / RECEIPT),
                adapter_sha256=matching.sha(Path(__file__)),
                generator_sha256=matching.sha(Path(asmgen.__file__)))


def _symbols(data):
    sections = matching.elf_sections(data)
    out = []
    for _, s in sections:
        if s[1] == 2:
            strtab = sections[s[6]][1]
            for i in range(s[5] // 16):
                name, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', data, s[4] + 16 * i)
                raw = data[strtab[4] + name:]
                out.append(dict(name=raw[:raw.index(b'\0')].decode(), value=value, bind=info >> 4,
                                kind=info & 15, shndx=shndx))
    return sections, out


def check_object(data, sub):
    sections, symbols = _symbols(data)
    phase = int(sub['address'], 0) % 4
    text = [i for i, (n, s) in enumerate(sections) if n == b'.text']
    for i, (n, s) in enumerate(sections):
        if s[2] & 2 and s[5] and i not in text:
            raise ValueError('Assembly unit may only emit .text: ' + sub['id'])
    expected = unit_size(sub) + phase
    if len(text) != 1:
        raise ValueError('Assembly unit must have one .text section: ' + sub['id'])
    t = text[0]
    contents = data[sections[t][1][4]:sections[t][1][4] + sections[t][1][5]]
    tail = len(contents) - expected
    if not (tail == 0 or (tail == 2 and expected % 4 == 2 and contents[expected:] in (b'\x00\x00', b'\x09\x00'))):
        raise ValueError('Assembled size differs from the unit range: ' + sub['id'])
    if phase and contents[:phase] != bytes(phase):
        raise ValueError('Alignment phase bytes must be zero')
    bound = set(sub.get('symbols', {}))
    for n, s in sections:
        if s[1] in (4, 9) and s[5]:
            if s[1] == 9 or s[7] != t:
                raise ValueError('Unexpected relocation section: ' + sub['id'])
            for i in range(s[5] // 12):
                offset, info_word, addend = struct.unpack_from('<IIi', data, s[4] + 12 * i)
                sym = symbols[info_word >> 8]
                if info_word & 0xff != R_SH_DIR32 or offset % 2 or offset < phase or offset + 4 > expected:
                    raise ValueError('Only R_SH_DIR32 literal words may be relocated: ' + sub['id'])
                if not (sym['name'] in bound or (sym['shndx'] == t and sym['kind'] in (0, 3))):
                    raise ValueError('Relocation against an unbound symbol: ' + sym['name'])
    globals_ = {s['name']: s['value'] for s in symbols if s['bind'] == 1 and s['shndx'] == t}
    want = {e['name']: int(e['address'], 0) - int(sub['address'], 0) + phase for e in sub['entries']}
    if globals_ != want:
        raise ValueError('Global symbols differ from the entries: ' + sub['id'])
    undefined = {s['name'] for s in symbols if s['shndx'] == 0 and s['name']}
    if undefined != bound:
        raise ValueError('Undefined symbols and bound symbols differ: ' + sub['id'])


def linked_text(data, start):
    if struct.unpack_from('<HHI', data, 16) != (2, 42, 1):
        raise ValueError('Expected linked SuperH executable')
    result = None
    for name, s in matching.elf_sections(data):
        if s[1] in (4, 9) and s[5]:
            raise ValueError('Unexpected remaining relocations')
        if s[2] & 2 and s[5]:
            if name != b'.text' or result is not None or s[3] != start or s[1] != 1:
                raise ValueError('Unexpected allocated section in linked assembly unit')
            result = data[s[4]:s[4] + s[5]]
    if not result:
        raise ValueError('No linked code')
    return result


def assemble(source, sub, root=ROOT, tools=None, scratch=None):
    """Lint, assemble, object-check, link at the address and return the exact range bytes."""
    source = Path(source)
    lint(source.read_text(), sub)
    tools = tools or load_tools(root)
    base = int(sub['address'], 0)
    phase = base % 4
    symbols = sub.get('symbols', {})
    scratch = Path(scratch or (asmgen.scratch_dir(root) / 'compiler-builds'))
    scratch.mkdir(parents=True, exist_ok=True)
    import tempfile
    with tempfile.TemporaryDirectory(prefix='asm-', dir=scratch) as temp:
        work = Path(temp)
        shutil.copyfile(source, work / 'unit.s')
        commands, logs = [], []

        def run(command):
            command = [str(x) for x in command]
            commands.append(command)
            result = subprocess.run(command, cwd=work, capture_output=True, text=True, timeout=60)
            logs.append(result.stdout + result.stderr)
            if result.returncode or logs[-1].strip():
                raise ValueError('Assembler/linker diagnostics (' + sub['id'] + '):\n' + logs[-1])
        run([tools['assembler'], *AS_FLAGS, '-o', 'unit.o', 'unit.s'])
        check_object((work / 'unit.o').read_bytes(), sub)
        (work / 'unit.ld').write_text('SECTIONS {\n . = ' + hex(base - phase) + ';\n .text : { *(.text) }\n'
                                      ' .data : { *(.data) }\n .bss : { *(.bss) *(COMMON) }\n}\n')
        run([tools['linker'], '-m', 'shlelf', '-T', 'unit.ld', '-e', hex(base),
             *['--defsym=' + n + '=' + a for n, a in sorted(symbols.items())], 'unit.o', '-o', 'unit.elf'])
        linked = linked_text((work / 'unit.elf').read_bytes(), base - phase)
        run([tools['objcopy'], '-O', 'binary', '-j', '.text', 'unit.elf', 'unit.bin'])
        if (work / 'unit.bin').read_bytes() != linked:
            raise ValueError('Raw output disagrees with the linked section')
        code = linked[phase:phase + unit_size(sub)]
        if len(linked) - phase - unit_size(sub) not in (0, 2) or len(code) != unit_size(sub):
            raise ValueError('Linked size differs from the unit range: ' + sub['id'])
        return code


def verify_reference(reference, asm, base):
    """Every committed unit's full range must hash to its recorded reference_sha256."""
    for unit in asm['units']:
        r = unit['ranges'][0]
        if hashlib.sha256(bytes(reference[r['offset']:r['offset'] + r['size']])).hexdigest() != unit['reference_sha256']:
            raise ValueError('Assembly unit reference hash mismatch: ' + unit['id'])


def build_units(root, reference, out_dir, tools=None):
    """Regenerate, lint, assemble, link and compare every assembly sub-span against the dump.
    Returns {sub_id: exact range bytes}."""
    tools = tools or load_tools(root)
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    verify_reference(reference, read(root), base)
    produced = materialize(root, out_dir)

    def one(item):
        unit, sub, path = item
        r = sub['ranges'][0]
        code = assemble(path, sub, root, tools)
        if code != bytes(reference[r['offset']:r['offset'] + r['size']]):
            raise ValueError('Assembly unit does not match the reference: ' + sub['id'])
        return sub['id'], code
    # At most four assembler/linker processes at a time.
    from concurrent.futures import ThreadPoolExecutor
    with ThreadPoolExecutor(max_workers=min(4, os.cpu_count() or 1)) as pool:
        return dict(pool.map(one, produced))


def totals(asm):
    return {kind: {'units': len(units_of(asm, kind)), 'bytes': sum(unit_size(u) for u in units_of(asm, kind))}
            for kind in CLASSES}


def main():
    parser = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    sub = parser.add_subparsers(dest='command', required=True)
    sub.add_parser('lint')
    g = sub.add_parser('plan', help='Recompute unit ranges from committed config and your dump')
    s = sub.add_parser('setup'); s.add_argument('--assembler', required=True, type=Path)
    m = sub.add_parser('materialize', help='Regenerate sources into scratch'); m.add_argument('--out', type=Path)
    args = parser.parse_args()
    if args.command == 'lint':
        stats = lint_all()
        t = totals(read())
        print(f"{t['hand']['units']} hand-written units ({t['hand']['bytes']:,} bytes), {t['fallback']['units']}"
              f" fallback units ({t['fallback']['bytes']:,} bytes, not decompiled): lint passed;"
              f" {stats['instructions']:,} instructions, {stats['literal_words']:,} literal words"
              f" ({stats['symbolic_words']:,} symbolic).")
    elif args.command == 'setup':
        print(json.dumps(setup(args.assembler), indent=2))
    elif args.command == 'materialize':
        produced = materialize(ROOT, args.out)
        print(f'{len(produced)} sources written.')
    elif args.command == 'plan':
        print(plan())


def plan(root=ROOT):
    """Recompute the manifest (ranges/class/evidence/sha256/symbol bindings, no text) from
    committed config and the pinned listing, dropping any range that cannot pass the lint."""
    ranges = asmgen.plan(root)
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    reference = asmgen.reference_image(root)
    lst, starts = asmgen.load_listing(root)
    enc = asmgen.build_enc(root)
    names, is_code = generation_context(root)
    # Known addresses for symbolization: admitted functions, data objects and candidate starts.
    known = set(names) | starts
    out = {'schema_version': 1,
           'code_extent': {'bytes': 3062780,
                           'basis': 'Decoded-image bytes not in the recorded static-data extent: listed instructions, admitted function ranges, unmatched candidate code ranges and code-loaded literal slots. An analysis estimate.'},
           'units': []}
    retained_runs, dropped_bytes = [], 0
    work = [(s, e, kind, ev) for s, e, kind, ev in ranges]
    while work:
        s, e, kind, ev = work.pop()
        ent = sorted(set(a for a in starts if s <= a < e) | {s})
        text, info = asmgen.generate(reference, lst, enc, s, e, names, ent, is_code, '', base, known)
        # Committed manifest carries ranges and evidence only, never instruction text.
        unit = {'id': f'{kind}_{s:08x}', 'class': kind, 'address': hex(s),
                'ranges': [{'offset': s - base, 'size': e - s}],
                'reference_sha256': hashlib.sha256(bytes(reference[s - base:e - base])).hexdigest()}
        ev_here = [(p, t) for p, t in ev if s <= p < e]
        if kind == 'hand':
            if not ev_here:
                kind = unit['class'] = 'fallback'
                unit['id'] = f'fallback_{s:08x}'
            else:
                unit['evidence'] = [{'address': hex(p), 'instruction': t} for p, t in ev_here]
        if kind == 'fallback':
            unit['status'] = 'not_decompiled'
        # The lint uses the generated entries/symbols; they are recomputed at build, not committed.
        probe = dict(unit, entries=[{'name': n, 'address': hex(a)} for a, n in zip(ent, info['entries'])],
                     symbols={n: hex(a) for n, a in sorted(info['undefined'].items())})
        try:
            lint(text, probe, known)
        except ValueError:
            # Cut out only the raw data runs no reference proves; they stay reference-backed.
            runs = asmgen.raw_runs(info, MAX_RAW)
            if not runs:
                retained_runs.append((s, e)); dropped_bytes += e - s
                continue
            cursor = s
            for a, b in runs:
                retained_runs.append((a, b)); dropped_bytes += b - a
                if a > cursor:
                    work.append((cursor, a, kind, ev_here))
                cursor = b
            if cursor < e:
                work.append((cursor, e, kind, ev_here))
            continue
        out['units'].append(unit)
    out['units'].sort(key=lambda u: int(u['address'], 0))
    (Path(root) / MANIFEST).write_text(json.dumps(out, separators=(',', ':')) + '\n')
    t = totals(out)
    return (f"planned {t['hand']['units']} hand + {t['fallback']['units']} fallback units "
            f"({t['hand']['bytes'] + t['fallback']['bytes']:,} bytes); {dropped_bytes:,} bytes in "
            f"{len(retained_runs)} unprovable runs stay reference-backed.")


if __name__ == '__main__':
    try:
        main()
    except (OSError, ValueError, KeyError) as error:
        sys.exit('ERROR: ' + str(error))
