#!/usr/bin/env python3
"""Generate reassemblable SH-4 assembly for a code range from your own dump.

No disassembly is committed. This tool turns a range of the decoded executable into
GNU assembler text at build time, on the machine that holds the game dump:

* instruction halfwords become instructions, branch targets get `.L<addr>` labels,
  literal-pool words and switch tables become `.long`/`.short`, and a pool word that
  equals an admitted function, data object or other known address is written as that
  symbol (resolved by the linker, never as a bare integer);
* every encoding it emits round-trips through the pinned assembler (checked by
  `--self-check`), so a generated unit reassembles and relinks to the exact range.

Inputs are the user's dump (the decoded image) and the analysis listing that
`tools/setup_analysis.py` produces from that dump; the listing and function table are
pinned by SHA-256 in `config/analysis.json`, so the generator's view of which
halfwords are instructions is fixed by committed config. The SH-4 encoding table is
built from the pinned objdump. Nothing here is committed as text; `tools/asm_units.py`
writes the generated sources into a private scratch directory, never the repository.

`plan` recomputes the unit ranges (hand-written routines and the not-decompiled
fallback) from committed config and the pinned listing; `asm_units.py` calls
`generate` for each committed range at build time, re-cutting around admitted C."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
import matching

ROOT = Path(__file__).resolve().parents[1]
BASE_DEFAULT = 0x8c010000
DELAYED = {'bra', 'bsr', 'jmp', 'jsr', 'rts', 'rte', 'braf', 'bsrf', 'bt/s', 'bf/s'}
# Hand-assembly evidence: instructions no compiler in this project emits (see docs/ASM.md).
HAND_EVIDENCE = re.compile(r'^(fschg|movca\.l|ocbi|ocbp|ocbwb|rte|ldtlb)\b'
                           r'|^(ldc|stc)(\.l)? .*\b(ssr|spc|sgr|dbr|r[0-7]_bank)\b')
SPECIAL = {'pr': 'PR', 'sr': 'SR', 'gbr': 'GBR', 'vbr': 'VBR', 'mach': 'MACH', 'macl': 'MACL',
           'fpul': 'FPUL', 'fpscr': 'FPSCR', 'ssr': 'SSR', 'spc': 'SPC', 'sgr': 'SGR', 'dbr': 'DBR'}


# ----------------------------------------------------------------- dump inputs
def config(root=ROOT):
    return json.loads((Path(root) / 'config/analysis.json').read_text())


def scratch_dir(root=ROOT):
    return Path(json.loads((Path(root) / 'local.json').read_text())['scratch'])


def reference_image(root=ROOT):
    """The decoded executable from the user's verified dump, checked against decoded.json."""
    pin = json.loads((Path(root) / 'config/decoded.json').read_text())
    path = scratch_dir(root) / 'orig/DP_ADDRESS.dec.bin'
    data = path.read_bytes()
    if len(data) != pin['size'] or hashlib.sha256(data).hexdigest() != pin['sha256']:
        raise ValueError('Decoded reference image does not match config/decoded.json')
    return data


def load_listing(root=ROOT):
    """The analysis listing and function table, from scratch, pinned by config/analysis.json.

    Returns (lst, function_starts). `lst` maps each decoded instruction address to its
    listing text; it is the committed-config view of which halfwords are instructions."""
    pins = config(root)['output_hashes']
    base = scratch_dir(root) / 'analysis/game'
    out = {}
    for name in ('listing.txt', 'functions.tsv'):
        raw = (base / name).read_bytes()
        if hashlib.sha256(raw).hexdigest() != pins[name]:
            raise ValueError('Analysis ' + name + ' does not match config/analysis.json; '
                             'regenerate it from your dump with tools/setup_analysis.py')
        out[name] = raw.decode()
    lst = {}
    for line in out['listing.txt'].splitlines():
        addr, _, text = line.partition(' ')
        lst[int(addr, 16)] = text
    starts = {int(line.split('\t')[0], 16) for line in out['functions.tsv'].splitlines() if line.strip()}
    return lst, starts


# ----------------------------------------------------------------- encoding table
def _conv(text):
    """objdump SH-4 text -> listing spelling that reassembles to the same halfword."""
    text = re.sub(r'\s*!.*$', '', text).strip()
    mnem, _, ops = text.partition('\t')
    mnem, ops = mnem.strip(), ops.strip()
    mnem = {'bt.s': 'bt/s', 'bf.s': 'bf/s'}.get(mnem, mnem)
    if mnem == 'fmov' and '@' in ops and not ('@(r0,' in ops and ops.index('@') > 0):
        mnem = 'fmov.s'
    ops = re.sub(r'#(-?\d+)', lambda m: '#' + ('-0x%x' % -int(m[1]) if int(m[1]) < 0 else '0x%x' % int(m[1])), ops)
    ops = re.sub(r'@\((-?\d+),', lambda m: '@(' + ('-0x%x' % -int(m[1]) if int(m[1]) < 0 else '0x%x' % int(m[1])) + ',', ops)
    ops = re.sub(r'\b(pr|sr|gbr|vbr|mach|macl|fpul|fpscr|ssr|spc|sgr|dbr)\b', lambda m: SPECIAL[m[1]], ops)
    if mnem == 'lds':
        ops = ops.replace('FPSCR', 'fpscr')
    return (mnem + ' ' + ops).strip() if ops else mnem


def pcrel(op, pc):
    """(kind, target, slot_size) for PC-relative encodings, else None."""
    hi = op >> 12
    if hi in (0xA, 0xB):
        d = op & 0xfff
        d -= 0x1000 if d & 0x800 else 0
        return ('bra' if hi == 0xA else 'bsr', pc + 4 + 2 * d, 0)
    top = op >> 8
    if top in (0x89, 0x8B, 0x8D, 0x8F):
        d = op & 0xff
        d -= 0x100 if d & 0x80 else 0
        return ({0x89: 'bt', 0x8B: 'bf', 0x8D: 'bt/s', 0x8F: 'bf/s'}[top], pc + 4 + 2 * d, 0)
    if hi == 0x9:
        return ('mov.w', pc + 4 + 2 * (op & 0xff), 2)
    if hi == 0xD:
        return ('mov.l', (pc & ~3) + 4 + 4 * (op & 0xff), 4)
    if top == 0xC7:
        return ('mova', (pc & ~3) + 4 + 4 * (op & 0xff), 0)
    return None


def build_enc(root=ROOT):
    """Encoding table: {halfword: text} for every non-PC-relative SH-4 encoding that
    reassembles to itself. Built once from the pinned objdump, cached in scratch."""
    cache = scratch_dir(root) / 'asm-cache'
    cache.mkdir(parents=True, exist_ok=True)
    objdump = matching.load_tools()['objdump']
    tag = matching.sha(objdump)[:16]
    path = cache / ('enc-' + tag + '.json')
    if path.exists():
        return {int(k): v for k, v in json.loads(path.read_text()).items()}
    assembler = Path(json.loads((Path(root) / 'config/asm-installed.json').read_text())['assembler'])
    allbin = cache / 'all.bin'
    allbin.write_bytes(b''.join(struct.pack('<H', i) for i in range(65536)))
    dis = subprocess.run([str(objdump), '-D', '-b', 'binary', '-m', 'sh4', '-EL', str(allbin)],
                         capture_output=True, text=True, check=True).stdout
    cand = {}
    for line in dis.splitlines():
        m = re.match(r'\s*([0-9a-f]+):\s+[0-9a-f]{2} [0-9a-f]{2}\s+\t(.*)$', line)
        if not m:
            continue
        op = int(m[1], 16) // 2
        if m[2].startswith('.word') or pcrel(op, op * 2) is not None:
            continue
        cand[op] = _conv(m[2])
    good = list(cand)
    for _ in range(8):
        src = cache / 'enc.s'
        src.write_text('\t.text\n' + ''.join('\t' + cand[o] + '\n' for o in good))
        r = subprocess.run([str(assembler), '--isa=sh4', '-little', '-o', str(cache / 'enc.o'), str(src)],
                           capture_output=True, text=True)
        bad = {int(x) - 2 for x in re.findall(r'enc\.s:(\d+): ', r.stderr)}
        if not bad and r.returncode == 0:
            break
        good = [o for i, o in enumerate(good) if i not in bad]
    subprocess.run([str(objdump), '-O', 'binary'] if False else
                   [str(matching.load_tools()['objcopy']), '-O', 'binary', '-j', '.text',
                    str(cache / 'enc.o'), str(cache / 'enc.bin')], check=True)
    b = (cache / 'enc.bin').read_bytes()
    table = {o: cand[o] for i, o in enumerate(good) if struct.unpack_from('<H', b, 2 * i)[0] == o}
    path.write_text(json.dumps({str(k): v for k, v in table.items()}))
    return table


# ----------------------------------------------------------------- generation
def generate(img, lst, enc, start, end, names, entries, is_code, title='', base=BASE_DEFAULT, known=frozenset()):
    """Return (text, info) for the range [start, end).

    names: {address: linker symbol} for admitted functions and data objects.
    entries: in-range addresses that get global `_fn_<addr>` labels (the first is `start`).
    is_code(addr): True if addr is a code entry outside this unit (names an `_fn_<addr>`
    rather than a `_g_<addr>` data symbol).
    known: addresses that must be written as symbols when a literal word equals one."""
    assert start % 2 == 0 and end % 2 == 0 and end > start
    phase = start % 4
    h = lambda pc: img[pc - base] | img[pc - base + 1] << 8
    w = lambda pc: struct.unpack_from('<I', img, pc - base)[0]
    inimg = lambda a: base <= a < base + len(img)
    # Literal slots: targets of listed PC-relative loads whose instruction is in range.
    slots = {}
    for pc in range(start, end, 2):
        r = pcrel(h(pc), pc)
        if r and r[2] and start <= r[1] < end:
            slots[r[1]] = max(slots.get(r[1], 0), r[2])
    tables, movas = set(), set()
    bases = [w(s) for s, size in slots.items() if size == 4 and start <= s < end]
    for pc in range(start, end, 2):
        r = pcrel(h(pc), pc)
        if r and r[0] == 'mova':
            bases.append(r[1]); movas.add(r[1])
    for t in bases:
        if t % 4 or not start <= t < end or t in slots:
            continue
        p = t
        while p + 4 <= end and p not in slots and inimg(w(p)) and w(p) % 2 == 0:
            slots[p] = 4; tables.add(p); p += 4
    for t in movas:
        if t not in slots and start <= t and t + 4 <= end:
            slots[t] = 4
    data = {}
    for s, size in slots.items():
        for pc in range(s, s + size, 2):
            if start <= pc < end:
                data[pc] = s
    labels, equates = {}, {}
    entries = sorted(set(entries) | {start})
    for a in entries:
        labels[a] = f'_fn_{a:08x}'
    info = dict(instructions=0, pool_words=0, pool_halfwords=0, raw_halfwords=0, symbolic_words=0,
                pointer_words=0, table_words=0, labels=0, equates=0, padding=0)
    items = []
    pc = start
    while pc < end:
        op = h(pc)
        if pc in tables:
            target = w(pc)
            (labels if start <= target < end else equates).setdefault(
                target, (f'.L{target:08x}' if start <= target < end else f'.Lx{target:08x}'))
            items.append((pc, 'table', target)); pc += 4; continue
        hi_op = h(pc + 2) if pc + 4 <= end else None
        if (pc % 4 == 0 and hi_op is not None and pc not in data and pc + 2 not in data and hi_op not in enc
                and pcrel(hi_op, pc + 2) is None and inimg(w(pc))):
            v = w(pc)
            if start <= v < end and v % 2 == 0:
                labels.setdefault(v, f'.L{v:08x}')
            items.append((pc, 'ptr', v)); pc += 4; continue
        if pc in data:
            s = data[pc]
            if slots[s] == 4 and pc == s and pc + 4 <= end:
                items.append((pc, 'long', w(pc))); pc += 4
            else:
                items.append((pc, 'short', op)); pc += 2
            continue
        r = pcrel(op, pc)
        if r:
            kind, target, _ = r
            (labels if start <= target < end else equates).setdefault(
                target, (f'.L{target:08x}' if start <= target < end else f'.Lx{target:08x}'))
            items.append((pc, 'pcrel', (kind, target, op)))
        elif op in enc:
            items.append((pc, 'insn', enc[op]))
        else:
            items.append((pc, 'raw', op))
        pc += 2
    # Labels inside a 4-byte item split it into halfwords.
    split = []
    for pc, kind, payload in items:
        if kind in ('long', 'ptr', 'table') and pc + 2 in labels:
            split.append((pc, 'short', payload & 0xffff)); split.append((pc + 2, 'short', payload >> 16))
        else:
            split.append((pc, kind, payload))
    items = split
    # Alignment padding before a literal word.
    for i, (pc, kind, payload) in enumerate(items):
        if pc % 4 != 2 or pc in labels or i + 1 >= len(items):
            continue
        nxt = items[i + 1]
        prev = items[i - 1] if i else None
        delayed = prev and prev[1] in ('insn', 'pcrel') and (
            (prev[1] == 'insn' and prev[2].split()[0] in DELAYED) or (prev[1] == 'pcrel' and prev[2][0] in DELAYED))
        if kind == 'raw' and payload == 0 and (nxt[1] in ('long', 'ptr', 'table') or pc + 2 == end):
            items[i] = (pc, 'pad', 0)
        elif kind == 'insn' and payload == 'nop' and nxt[1] in ('long', 'ptr', 'table') and not delayed:
            items[i] = (pc, 'pad', 9)
    unit_sym = labels[start]
    ref = lambda t: labels[t] if start <= t < end else equates[t]
    undefined, ptr_syms = {}, {}
    local = set(labels.values())
    lines = ['! ' + l for l in title.splitlines()] if title else []
    lines.append('\t.text')
    if phase:
        lines.append('\t.skip 2\t! alignment phase only: unit starts 2 bytes past a 4-byte boundary')
    for g in [labels[a] for a in entries]:
        lines.append('\t.global ' + g)
    for t in sorted(equates):
        off = t - start
        nm = names.get(t)
        lines.append(f'\t.set {equates[t]}, {unit_sym} {"+" if off >= 0 else "-"} {abs(off):#x}'
                     + (f'\t! {nm}' if nm else ''))
    info['equates'] = len(equates)

    def symbol_for(v):
        if v in names:
            return names[v]
        if start <= v < end and v in labels:
            return labels[v]
        return (f'_fn_{v:08x}' if is_code(v) else f'_g_{v:08x}')

    for pc, kind, payload in items:
        if pc in labels:
            lines.append(labels[pc] + ':'); info['labels'] += 1
        if kind == 'insn':
            lines.append('\t' + payload); info['instructions'] += 1
        elif kind == 'pcrel':
            k, target, op = payload
            if k in ('mov.w', 'mov.l'):
                lines.append(f'\t{k} {ref(target)}, r{(op >> 8) & 0xf}')
            elif k == 'mova':
                lines.append(f'\tmova {ref(target)}, r0')
            else:
                nm = names.get(target)
                lines.append(f'\t{k} {ref(target)}' + (f'\t! {nm}' if nm and not (start <= target < end) else ''))
            info['instructions'] += 1
        elif kind == 'table':
            lines.append('\t.long ' + ref(payload)); info['pool_words'] += 1; info['table_words'] += 1
        elif kind == 'ptr':
            sym = symbol_for(payload)
            if sym not in local:
                ptr_syms[sym] = payload
            lines.append('\t.long ' + sym); info['pool_words'] += 1; info['pointer_words'] += 1
            info['symbolic_words'] += 1
        elif kind == 'long':
            sym = names.get(payload) or (labels.get(payload) if start <= payload < end else None)
            if sym is None and payload in known:
                sym = symbol_for(payload)
            if sym:
                lines.append('\t.long ' + sym); info['symbolic_words'] += 1
                if sym not in local:
                    undefined[sym] = payload
            else:
                lines.append(f'\t.long {payload:#010x}')
            info['pool_words'] += 1
        elif kind == 'short':
            lines.append(f'\t.short {payload:#06x}'); info['pool_halfwords'] += 1
        elif kind == 'pad':
            lines.append('\t.balign 4, 0' if payload == 0 else '\t.balign 4'); info['padding'] += 1
        else:
            lines.append(f'\t.short {payload:#06x}\t! not a valid SH-4 instruction encoding')
            info['raw_halfwords'] += 1
    lines.append('')
    for sym, v in ptr_syms.items():
        if sym not in local:
            undefined[sym] = v
    info['undefined'] = undefined
    info['entries'] = [labels[a] for a in entries]
    return '\n'.join(lines), info


# ----------------------------------------------------------------- planning
TEXT_BANDS = [(0x8c010000, 0x8c260d58), (0x8c281e6c, 0x8c288ce4), (0x8c340848, 1 << 33)]


def in_text(a, b):
    return any(lo <= a and b <= hi for lo, hi in TEXT_BANDS)


def code_spans(root, lst, starts):
    """Free code-side spans: listed instructions, admitted-function ranges, candidate
    reconstruction ranges and literal slots, minus admitted C/SHC, typed data and assets.
    Everything else (untyped data, zero runs, assets) is left to the reference or to data."""
    reference = reference_image(root)
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    n = len(reference)
    own = bytearray(n)  # 0 free, 1 taken (C/data/asset), 2 code-side
    code = json.loads((Path(root) / 'config/project.json').read_text())
    data = json.loads((Path(root) / 'config/data.json').read_text()) if (Path(root) / 'config/data.json').exists() else {'units': []}
    assets = json.loads((Path(root) / 'config/assets.json').read_text()) if (Path(root) / 'config/assets.json').exists() else {'assets': []}
    queue = json.loads((Path(root) / 'config/reconstruction-targets.json').read_text())['targets']

    def mark(s, e, v):
        for o in range(max(0, s - base), min(n, e - base)):
            own[o] = v
    for pc in lst:
        o = pc - base
        if 0 <= o < n - 1:
            own[o] = own[o + 1] = 2
    for u in code['units']:
        mark(int(u['address'], 0), int(u['address'], 0) + u['ranges'][0]['size'], 2)
    for t in queue:
        if t.get('ranges'):
            mark(int(t['address'], 0), int(t['address'], 0) + t['ranges'][0]['size'], 2)
    # literal slots of listed loads
    h = lambda pc: reference[pc - base] | reference[pc - base + 1] << 8
    w = lambda pc: struct.unpack_from('<I', reference, pc - base)[0]
    for pc in lst:
        r = pcrel(h(pc), pc)
        if r and r[2]:
            mark(r[1], r[1] + r[2], 2)
    # admitted C/SHC, typed data and assets are taken, never fallback
    for u in code['units']:
        mark(int(u['address'], 0), int(u['address'], 0) + u['ranges'][0]['size'], 1)
    for u in data['units']:
        mark(int(u['address'], 0), int(u['address'], 0) + u['ranges'][0]['size'], 1)
    for a in assets['assets']:
        mark(int(a['address'], 0), int(a['address'], 0) + a['size'], 1)
    spans, o = [], 0
    while o < n:
        if own[o] == 2:
            p = o
            while o < n and own[o] == 2:
                o += 1
            spans.append((base + p, base + o))
        else:
            o += 1
    return spans


def plan(root=ROOT):
    """Compute hand and fallback unit ranges from committed config and the pinned listing."""
    lst, starts = load_listing(root)
    reference = reference_image(root)
    base = int(json.loads((Path(root) / 'config/project.json').read_text())['base_address'], 0)
    h = lambda pc: reference[pc - base] | reference[pc - base + 1] << 8
    enc = build_enc(root)
    queue = json.loads((Path(root) / 'config/reconstruction-targets.json').read_text())['targets']
    cut_points = set(starts) | {int(t['address'], 0) for t in queue}
    for t in queue:
        for f in t.get('functions', []):
            cut_points.add(int(f['address'], 0))
    # Cuts only where no PC-relative load or conditional branch crosses them.
    cross = bytearray(len(reference) // 2 + 2)
    diff = [0] * (len(reference) // 2 + 3)
    for pc in lst:
        r = pcrel(h(pc), pc)
        if r and r[0] in ('mov.l', 'mov.w', 'mova', 'bt', 'bf', 'bt/s', 'bf/s'):
            lo, hi = min(pc, r[1]), max(pc, r[1] + max(r[2], 2))
            a, b = (lo - base) // 2 + 1, (hi - base + 1) // 2
            if a < b:
                diff[a] += 1; diff[b] -= 1
    run = 0
    for i in range(len(cross)):
        run += diff[i]; cross[i] = run > 0
    TS = HAND_EVIDENCE.pattern
    units = []
    for s, e in code_spans(root, lst, starts):
        cuts = [a for a in sorted(x for x in cut_points if s < x < e)
                if a % 2 == 0 and not cross[(a - base) // 2]]
        pts = [s] + cuts + [e]
        pieces = []
        for a, b in zip(pts, pts[1:]):
            ev = [(pc, enc[h(pc)]) for pc in range(a, b, 2)
                  if pc in lst and h(pc) in enc and re.search(TS, enc[h(pc)])]
            kind = 'hand' if ev and in_text(a, b) else 'fallback'
            pieces.append([a, b, kind, ev])
        units += [tuple(p) for p in pieces]
    return units
