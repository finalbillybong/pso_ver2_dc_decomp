#!/usr/bin/env python3
"""Apply names from config/names.json to sources and manifests with a token-aware rewrite.

Linking in this project is by address: every unit binds the local names it uses for callees
to addresses in its `symbols` map. This tool gives every selected address one canonical name
`<proposed>_<address>` across the whole tree:

- the defining name (`functions[].name` / `entry` in config/project.json and the definition in
  the unit's source);
- every callee alias bound to that address in a unit's `symbols` (config/project.json and
  config/data.json), with the matching identifiers in that unit's source;
- address-cast macro aliases (`#define name ((T)0x8c…)`) that name a selected function.

Only identifiers are rewritten: string and character literals, comments and `#include` lines
are left alone. Identifiers the compiler emits implicitly (symbols that never appear in the
source text, such as CodeWarrior runtime helpers) and the five-function compiler-proof samples
are never touched. Code bytes must not change; re-run tools/verify_source.py after applying.

    python3 tools/rename.py --dry-run                 # summary + unified diff report, no writes
    python3 tools/rename.py --dry-run --report r.diff
    python3 tools/rename.py --apply                   # rewrite sources and manifests
    python3 tools/rename.py --confidence high,medium --sets curated,extended --dry-run
"""
import argparse
from collections import defaultdict
import difflib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
IDENT = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')
ADDR_SUFFIX = re.compile(r'_(?:8c)?[0-9a-f]{6}$')
DEFINE = re.compile(r'^[ \t]*#[ \t]*define[ \t]+([A-Za-z_][A-Za-z0-9_]*)[ \t]+(.*)$')
CAST_ADDR = re.compile(r'\(\s*\([^()]*\(\s*\*\s*\)[^()]*(?:\([^()]*\))?[^()]*\)\s*(0x8c[0-9a-fA-F]{6})\s*\)')


def load(root):
    read = lambda name: json.loads((root / name).read_text())
    return read('config/names.json'), read('config/project.json'), read('config/data.json'), read('config/samples.json')


def canonical(entry):
    a = int(entry['address'], 16)
    base = entry['name']
    m = ADDR_SUFFIX.search(base)
    if m and m.group(0).lstrip('_') in ('%08x' % a, '%06x' % (a & 0xffffff)):
        base = base[:m.start()]
    return '%s_%08x' % (base, a)


def tokens(text):
    """Yield (start, end, kind) spans: kind is 'id' for identifiers, 'skip' for literals,
    comments and #include lines, 'other' for everything else (not yielded)."""
    i, n = 0, len(text)
    line_start = True
    while i < n:
        c = text[i]
        if line_start:
            m = re.match(r'[ \t]*#[ \t]*include\b[^\n]*', text[i:])
            if m:
                yield i, i + m.end(), 'skip'
                i += m.end()
                continue
        line_start = c == '\n'
        if c == '/' and text.startswith('//', i):
            j = text.find('\n', i)
            j = n if j < 0 else j
            yield i, j, 'skip'
            i = j
        elif c == '/' and text.startswith('/*', i):
            j = text.find('*/', i + 2)
            j = n if j < 0 else j + 2
            yield i, j, 'skip'
            i = j
        elif c in '"\'':
            j = i + 1
            while j < n and text[j] != c:
                j += 2 if text[j] == '\\' else 1
            yield i, j + 1, 'skip'
            i = j + 1
        elif c.isalpha() or c == '_':
            m = IDENT.match(text, i)
            yield i, m.end(), 'id'
            i = m.end()
        elif c.isdigit():
            m = re.compile(r'[0-9A-Za-z_.]+').match(text, i)
            i = m.end()
        else:
            i += 1


def identifiers(text):
    return {text[a:b] for a, b, k in tokens(text) if k == 'id'}


def rewrite(text, mapping):
    out, last = [], 0
    for a, b, k in tokens(text):
        if k == 'id' and text[a:b] in mapping:
            out.append(text[last:a])
            out.append(mapping[text[a:b]])
            last = b
    out.append(text[last:])
    return ''.join(out)


def macro_aliases(text, wanted):
    """#define NAME ((fnptr-cast)0x8c…) where the address is selected -> {NAME: address}."""
    found = {}
    for line in text.split('\n'):
        m = DEFINE.match(line)
        if not m:
            continue
        c = CAST_ADDR.fullmatch(m.group(2).strip())
        if c:
            a = hex(int(c.group(1), 16))
            if a in wanted:
                found[m.group(1)] = a
    return found


def plan(root, confidences, sets, kinds=('function',)):
    names, project, data, samples = load(root)
    wanted = {e['address']: canonical(e) for e in names['names']
              if e['confidence'] in confidences and e['set'] in sets and e['kind'] in kinds}
    protected = {s['source'] for s in samples['samples']}
    taken = defaultdict(set)  # new name -> addresses (must stay unique)
    for a, n in wanted.items():
        taken[n].add(a)
    dup = {n for n, a in taken.items() if len(a) > 1}
    if dup:
        raise ValueError('canonical names collide: ' + ', '.join(sorted(dup)))
    units = [('project', u) for u in project['units']] + [('data', u) for u in data['units']]
    edits, skips = [], []
    for manifest, unit in units:
        src = unit['source']
        if src in protected:
            skips.append((unit['id'], '*', 'compiler-proof sample source'))
            continue
        text = (root / src).read_text()
        ids = identifiers(text)
        local = {}   # old -> address
        for f in unit.get('functions', []):
            a = hex(int(f['address'], 16))
            if a in wanted:
                local[f['name']] = a
        for key, addr in unit.get('symbols', {}).items():
            a = hex(int(addr, 16))
            if a not in wanted:
                continue
            name = key[1:] if key.startswith('_') else None
            if not name or not IDENT.fullmatch(name) or name not in ids:
                skips.append((unit['id'], key, 'implicit or non-C symbol (not in source text)'))
                continue
            local[name] = a
        for name, a in macro_aliases(text, wanted).items():
            if name in local and local[name] != a:
                skips.append((unit['id'], name, 'macro and symbol disagree'))
                continue
            local[name] = a
        mapping = {}
        by_addr = defaultdict(list)
        for old, a in local.items():
            by_addr[a].append(old)
        for a, olds in by_addr.items():
            new = wanted[a]
            if new in ids and new not in olds:
                skips.append((unit['id'], new, 'new name already used for something else'))
                continue
            if len(olds) > 1:
                # Several local names for one address in one file: unify them only when every
                # alias is purely a symbol binding (declarations collapse to one identifier).
                defs = [f['name'] for f in unit.get('functions', []) if hex(int(f['address'], 16)) == a]
                keep = defs[0] if defs else sorted(olds, key=lambda o: (-text.count(o), o))[0]
                for o in olds:
                    if o != keep:
                        skips.append((unit['id'], o, 'second alias of %s in the same file (kept as is)' % a))
                olds = [keep]
            for o in olds:
                if o != new:
                    mapping[o] = new
        if mapping:
            edits.append((manifest, unit, mapping))
    return wanted, edits, skips


def apply_unit(root, unit, mapping, write):
    path = root / unit['source']
    before = path.read_text()
    after = rewrite(before, mapping)
    for f in unit.get('functions', []):
        f['name'] = mapping.get(f['name'], f['name'])
    if 'entry' in unit and unit['entry'].startswith('_'):
        unit['entry'] = '_' + mapping.get(unit['entry'][1:], unit['entry'][1:])
    if unit.get('symbols'):
        unit['symbols'] = {('_' + mapping[k[1:]] if k.startswith('_') and k[1:] in mapping else k): v
                           for k, v in unit['symbols'].items()}
    if write and after != before:
        path.write_text(after)
    return before, after


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    mode = p.add_mutually_exclusive_group(required=True)
    mode.add_argument('--dry-run', action='store_true')
    mode.add_argument('--apply', action='store_true')
    p.add_argument('--confidence', default='high')
    p.add_argument('--sets', default='curated')
    p.add_argument('--report', help='write the unified diff of all source changes here (dry run)')
    args = p.parse_args(argv)
    conf = set(args.confidence.split(','))
    sets = set(args.sets.split(','))
    names, project, data, _ = load(ROOT)
    wanted, edits, skips = plan(ROOT, conf, sets)
    # Re-run the plan on the loaded manifest objects so --apply edits them in place.
    ids = {(m, u['id']): u for m, u in [('project', u) for u in project['units']] + [('data', u) for u in data['units']]}
    diffs, files, renamed = [], 0, set()
    defined = set()
    for manifest, unit, mapping in edits:
        u = ids[(manifest, unit['id'])]
        for f in u.get('functions', []):
            if f['name'] in mapping:
                defined.add(hex(int(f['address'], 16)))
        before, after = apply_unit(ROOT, u, mapping, args.apply)
        if before != after:
            files += 1
            if args.report:
                diffs.extend(difflib.unified_diff(before.splitlines(True), after.splitlines(True),
                                                  'a/' + u['source'], 'b/' + u['source']))
        renamed.update(mapping.values())
    if args.apply:
        (ROOT / 'config/project.json').write_text(_dump_like(ROOT / 'config/project.json', project))
        (ROOT / 'config/data.json').write_text(_dump_like(ROOT / 'config/data.json', data))
    if args.report:
        Path(args.report).write_text(''.join(diffs))
    reasons = defaultdict(int)
    for _, _, r in skips:
        reasons[r.split(' (')[0] if r.startswith('second alias') else r] += 1
    print('selected names: %d (confidence %s, sets %s)' % (len(wanted), ','.join(sorted(conf)), ','.join(sorted(sets))))
    print('applied names: %d (%d defined in admitted units)' % (len(renamed), len(defined)))
    print('units edited: %d; source files changed: %d' % (len(edits), files))
    for r, n in sorted(reasons.items()):
        print('skipped: %d x %s' % (n, r))
    if not args.apply:
        print('dry run: nothing written')
    return 0


def _dump_like(path, obj):
    """Serialise in the file's existing JSON style (indent detected from the original)."""
    text = path.read_text()
    m = re.search(r'\n( +)"', text)
    indent = len(m.group(1)) if m else 1
    return json.dumps(obj, indent=indent, ensure_ascii=text.isascii()) + ('\n' if text.endswith('\n') else '')


if __name__ == '__main__':
    sys.exit(main())
