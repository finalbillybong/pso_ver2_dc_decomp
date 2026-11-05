#!/usr/bin/env python3
"""Check or regenerate the non-matching draft archive (nonmatching/ and config/nonmatching.json).

The archive holds the closest non-matching C/C++ draft of functions that are not yet matched.
It is reading, modding and porting material only: never built, never admitted, never counted in
any progress figure. See nonmatching/README.md.

    python3 tools/nonmatching.py check                     # manifest, headers, quality gate, overlaps
    python3 tools/nonmatching.py regenerate --dry-run      # what regenerate would change
    python3 tools/nonmatching.py regenerate                # re-apply config/names.json, rebuild the manifest
    python3 tools/nonmatching.py regenerate --prune-admitted   # also delete drafts whose range is now admitted

`check` fails when a file and its manifest entry disagree, a header field is missing, a draft
breaks the quality gate (size within 25% of the reference, no TODO holes, no steering forms),
a bound symbol no longer appears in its file, or a draft overlaps an admitted unit in
config/project.json. Run `regenerate --prune-admitted` after admitting functions.
"""
import argparse
import bisect
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import rename  # noqa: E402  (token-aware identifier rewrite and canonical names)

ARCHIVE = 'nonmatching'
MANIFEST = 'config/nonmatching.json'
MARK = 'NON-MATCHING'
SIZE_TOLERANCE = 0.25
LANG = {'.c': 'c', '.cpp': 'c++'}
FIELDS = ['address', 'function', 'language', 'reference size', 'compiled size', 'differing lines',
          'differing bytes', 'provenance', 'known gaps']
INT_FIELDS = {'reference size': 'reference_size', 'compiled size': 'compiled_size',
              'differing lines': 'differing_lines', 'differing bytes': 'differing_bytes'}
# Forms that only steer code generation and carry no behaviour; drafts must not use them.
BANNED = [
    (re.compile(r'\bif\s*\(\s*0\s*\)'), 'if (0)'),
    (re.compile(r'\bif\s*\(\s*1\s*\)'), 'if (1)'),
    (re.compile(r'\bwhile\s*\(\s*0\s*\)'), 'while (0) / do {} while (0)'),
    (re.compile(r'\(\s*([A-Za-z_]\w*)\s*>=\s*0\s*\?\s*\1\s*:\s*\1\s*\)'), '(v >= 0 ? v : v)'),
]
TODO = re.compile(r'/\*\s*TODO')
HOLE = re.compile(r'/\*\s*\?')  # `/* ? r3 */`-style register or value holes
OPTIONAL = ['class header', 'runtime']  # present only when they apply
# Emulator A/B runs (local tooling; receipts are never committed): the per-draft verdict only.
RUNTIME_SCENARIOS = ('boot+title+opening movie', 'menu to registration screen',
                     'offline start: new character to Pioneer 2')
RUNTIME_VERDICTS = ('equal', 'suspect', 'diverged', 'unverified')
HEADER_LINE = re.compile(r'^ \* ([a-z ]+): (.*)$')
CLASSES = 'src/include/classes'
CLASS_NOTE = '(shared layout for modders; this draft keeps its own local types)'
DEFAULT_CONFIDENCE = 'high,medium'
DEFAULT_SETS = 'curated,extended'
LONGEST = 0x10000


def read_json(root, name):
    return json.loads((root / name).read_text())


def parse_header(text):
    """Return the header fields of an archived draft, or None without a leading NON-MATCHING block."""
    if not text.startswith('/*'):
        return None
    end = text.find('*/')
    if end < 0 or MARK not in text[:end].split('\n', 1)[0]:
        return None
    fields, key = {}, None
    for line in text[:end].split('\n')[1:]:
        m = HEADER_LINE.match(line)
        if m and m.group(1) in FIELDS + OPTIONAL:
            key = m.group(1)
            fields[key] = m.group(2).strip()
        elif key and line.startswith(' *   '):
            fields[key] += ' ' + line[5:].strip()  # continuation of the previous field
        else:
            key = None
    return fields


def header_values(fields):
    """Header fields -> manifest-shaped values (ints for sizes and counts)."""
    out = {}
    for k, v in fields.items():
        if k in INT_FIELDS:
            m = re.match(r'(\d+)\b', v)
            out[INT_FIELDS[k]] = int(m.group(1)) if m else None
        else:
            out[k.replace(' ', '_')] = v
    return out


def admitted_ranges(root):
    project = read_json(root, 'config/project.json')
    base = int(project['base_address'], 16)
    spans = sorted((base + r['offset'], base + r['offset'] + r['size'], u['id'])
                   for u in project['units'] for r in u['ranges'])
    global LONGEST
    LONGEST = max([e - s for s, e, _ in spans] + [LONGEST])
    return spans


def overlap(spans, starts, start, size):
    i = bisect.bisect_left(starts, start + size) - 1
    while i >= 0:
        s, e, uid = spans[i]
        if e > start and s < start + size:
            return uid
        if s + LONGEST < start:  # nothing earlier can reach this far
            return None
        i -= 1
    return None


def quality_issues(text, entry):
    out = []
    ref, got = entry.get('reference_size'), entry.get('compiled_size')
    if not ref or got is None or abs(got - ref) > SIZE_TOLERANCE * ref:
        out.append('compiled size %s is not within 25%% of the reference size %s' % (got, ref))
    if TODO.search(text):
        out.append('contains a /* TODO hole')
    if HOLE.search(text):
        out.append('contains a /* ? */ register or value hole')
    code = _strip_comments(text)
    for rx, label in BANNED:
        if rx.search(code):
            out.append('uses the steering form ' + label)
    return out


def _strip_comments(text):
    out, last = [], 0
    for a, b, k in rename.tokens(text):
        if k == 'skip' and text.startswith('/', a):
            out.append(text[last:a])
            out.append(' ')
            last = b
    out.append(text[last:])
    return ''.join(out)


def check(root=ROOT):
    """Return a list of problems (empty when the archive is consistent)."""
    problems = []
    manifest = read_json(root, MANIFEST)
    entries = manifest.get('entries', [])
    spans = admitted_ranges(root)
    starts = [s for s, _, _ in spans]
    admitted_sources = {u['source'] for u in read_json(root, 'config/project.json')['units']}
    listed = set()
    seen_addr = set()
    for e in entries:
        name = e.get('file', '?')
        where = name + ': '
        if name in listed:
            problems.append(where + 'listed twice')
        listed.add(name)
        if e.get('address') in seen_addr:
            problems.append(where + 'address %s listed twice' % e.get('address'))
        seen_addr.add(e.get('address'))
        if not name.startswith(ARCHIVE + '/') or Path(name).suffix not in LANG:
            problems.append(where + 'not a .c/.cpp file under %s/' % ARCHIVE)
            continue
        if name in admitted_sources:
            problems.append(where + 'is an admitted source')
        path = root / name
        if not path.is_file():
            problems.append(where + 'listed in the manifest but missing')
            continue
        text = path.read_text()
        fields = parse_header(text)
        if fields is None:
            problems.append(where + 'missing the leading NON-MATCHING header comment')
            continue
        missing = [f for f in FIELDS if not fields.get(f)]
        if missing:
            problems.append(where + 'header lacks ' + ', '.join(missing))
            continue
        values = header_values(fields)
        for key in ['address', 'function', 'language', 'reference_size', 'compiled_size',
                    'differing_lines', 'differing_bytes', 'provenance']:
            if values.get(key) != e.get(key):
                problems.append(where + '%s differs between header (%r) and manifest (%r)' % (key, values.get(key), e.get(key)))
        if LANG[path.suffix] != e.get('language'):
            problems.append(where + 'language does not match the file extension')
        addr = e.get('address', '')
        if not re.fullmatch(r'0x8c[0-9a-f]{6}', addr):
            problems.append(where + 'bad address %r' % addr)
            continue
        if not Path(name).stem.endswith('_' + addr[2:]) or not e.get('function', '').endswith('_' + addr[2:]):
            problems.append(where + 'file and function names must end with the address suffix _%s' % addr[2:])
        ids = rename.identifiers(text)
        if e.get('function') not in ids:
            problems.append(where + 'function %s is not defined in the file' % e.get('function'))
        for sym in e.get('symbols', {}):
            if sym not in ids and not sym.startswith('_'):  # `_name`: runtime helper the compiler calls implicitly
                problems.append(where + 'bound symbol %s does not appear in the file' % sym)
        rt = e.get('runtime')
        if rt is not None:
            problems.extend(where + p for p in runtime_issues(rt))
        if rt is not None and not runtime_issues(rt):
            if fields.get('runtime') != runtime_line(rt):
                problems.append(where + 'runtime header line does not match the manifest runtime record')
        elif fields.get('runtime'):
            problems.append(where + 'runtime header line without a valid manifest runtime record')
        expected = class_header(root, e.get('function', ''))
        found = (fields.get('class header') or '').split(' ')[0] or None
        if found != expected or e.get('class_header') != expected:
            problems.append(where + 'class header should be %s (header %s, manifest %s); run regenerate'
                            % (expected, found, e.get('class_header')))
        if found and not (root / found).is_file():
            problems.append(where + 'class header %s does not exist' % found)
        problems.extend(where + p for p in quality_issues(text, e))
        hit = overlap(spans, starts, int(addr, 16), e.get('reference_size') or 1)
        if hit:
            problems.append(where + 'overlaps admitted unit %s (run regenerate --prune-admitted)' % hit)
    on_disk = {str(p.relative_to(root)) for p in (root / ARCHIVE).rglob('*') if p.is_file()} if (root / ARCHIVE).is_dir() else set()
    for name in sorted(on_disk - listed - {ARCHIVE + '/README.md'}):
        problems.append(name + ': file is not listed in ' + MANIFEST)
    if (root / ARCHIVE).is_dir() and not (root / ARCHIVE / 'README.md').is_file():
        problems.append(ARCHIVE + '/README.md is missing')
    return problems


def wanted_names(root, confidence, sets):
    """Address -> identifier: the applied names from config/names.json (canonical `<name>_<address>`),
    overridden by the defining name of every admitted function, so drafts call admitted code by
    the same name as `src/`."""
    names = read_json(root, 'config/names.json')
    out = {e['address']: rename.canonical(e) for e in names['names']
           if e['kind'] == 'function' and e['confidence'] in confidence and e['set'] in sets}
    for u in read_json(root, 'config/project.json')['units']:
        for f in u.get('functions', []):
            if rename.IDENT.fullmatch(f.get('name', '')):
                out[hex(int(f['address'], 16))] = f['name']
    return out


def class_header(root, func, _cache={}):
    """The shared class header for a function named `<Class>_<member>_<address>`, or None."""
    d = root / CLASSES
    key = (str(root), d.stat().st_mtime_ns if d.is_dir() else None)
    if key not in _cache:
        _cache[key] = sorted((p.stem for p in d.glob('*.h')), key=len, reverse=True) if d.is_dir() else []
    for c in _cache[key]:
        if func.startswith(c + '_'):
            return '%s/%s.h' % (CLASSES, c)
    return None


def runtime_line(rt):
    """The `runtime:` header value for a manifest runtime record."""
    sc = '; '.join(rt['scenarios'])
    v = rt['verdict']
    if v == 'equal':
        return 'equal on %s (emulator A/B: RAM, trace and first-16-call I/O); not proof' % sc
    if v == 'suspect':
        n = rt['bytes_differ']
        return 'suspect on %s (%d %s, I/O equal); not proof' % (sc, n, 'byte differs' if n == 1 else 'bytes differ')
    if v == 'diverged':
        return 'DIVERGED on %s (%s); known incorrect' % (sc, rt['first_divergence'])
    return 'unverified; replaces a draft that DIVERGED on %s; not yet run' % sc


def runtime_issues(rt):
    if not isinstance(rt, dict) or rt.get('verdict') not in RUNTIME_VERDICTS:
        return ['runtime verdict must be one of ' + ', '.join(RUNTIME_VERDICTS)]
    out = []
    sc = rt.get('scenarios')
    if not isinstance(sc, list) or not sc or any(x not in RUNTIME_SCENARIOS for x in sc) or len(set(sc)) != len(sc):
        out.append('runtime scenarios must be distinct names from: ' + '; '.join(RUNTIME_SCENARIOS))
    want = {'verdict', 'scenarios'} | {'suspect': {'bytes_differ'}, 'diverged': {'first_divergence'}}.get(rt['verdict'], set())
    if set(rt) != want:
        out.append('runtime %s record needs exactly the keys %s' % (rt['verdict'], ', '.join(sorted(want))))
    elif rt['verdict'] == 'suspect' and not (isinstance(rt['bytes_differ'], int) and rt['bytes_differ'] > 0):
        out.append('runtime bytes_differ must be a positive integer')
    elif rt['verdict'] == 'diverged':
        f = rt['first_divergence']
        if not isinstance(f, str) or not f or '\n' in f or len(f) > 160 or ';' in f:
            out.append('runtime first_divergence must be one short line')
    return out


def set_runtime_line(text, rt):
    """Add, update or remove the (possibly wrapped) `runtime:` line of an archived draft's header."""
    end = text.find('*/')
    head, rest = text[:end], text[end:]
    lines, skip = [], False
    for l in head.split('\n'):
        if l.startswith(' * runtime:'):
            skip = True
            continue
        if skip and l.startswith(' *   '):
            continue
        skip = False
        lines.append(l)
    if rt:
        at = next((i for i, l in enumerate(lines) if l.startswith(' * class header:') or l.startswith(' * compiler:')), len(lines) - 1)
        lines[at:at] = wrap_field('runtime', runtime_line(rt))
    return '\n'.join(lines) + rest


def wrap_field(key, value, width=100):
    lines, cur = [], ' * %s: ' % key
    for w in value.split(' '):
        if len(cur) + len(w) + 1 > width and cur != ' * %s: ' % key:
            lines.append(cur.rstrip())
            cur = ' *   '
        cur += w + ' '
    lines.append(cur.rstrip())
    return lines


def set_class_header(text, header):
    """Add, update or remove the `class header:` line of an archived draft's header."""
    end = text.find('*/')
    head, rest = text[:end], text[end:]
    lines = [l for l in head.split('\n') if not l.startswith(' * class header:')]
    if header:
        at = next((i for i, l in enumerate(lines) if l.startswith(' * compiler:')), len(lines) - 1)
        lines.insert(at, ' * class header: %s %s' % (header, CLASS_NOTE))
    return '\n'.join(lines) + rest


def default_name(address):
    return 'operation_%s' % address[2:]


def regenerate(root=ROOT, confidence=DEFAULT_CONFIDENCE, sets=DEFAULT_SETS, prune=False, write=True):
    """Re-apply current names to archived drafts and rebuild the manifest from the file headers.

    Returns a list of human-readable change lines."""
    manifest = read_json(root, MANIFEST)
    wanted = wanted_names(root, set(confidence.split(',')), set(sets.split(',')))
    old = {e['address']: e for e in manifest.get('entries', [])}
    spans = admitted_ranges(root)
    starts = [s for s, _, _ in spans]
    files = sorted(p for p in (root / ARCHIVE).rglob('*') if p.suffix in LANG and p.is_file())
    entries, changes = [], []
    for path in files:
        rel = str(path.relative_to(root))
        text = path.read_text()
        fields = parse_header(text)
        if fields is None or not fields.get('address'):
            raise ValueError(rel + ': missing NON-MATCHING header')
        values = header_values(fields)
        addr = values['address']
        prev = old.get(addr, {})
        hit = overlap(spans, starts, int(addr, 16), values.get('reference_size') or 1)
        if hit:
            changes.append('%s: overlaps admitted unit %s%s' % (rel, hit, ' (deleted)' if prune else ''))
            if prune and write:
                path.unlink()
            if prune:
                continue
        symbols = dict(prev.get('symbols', {}))
        ids = rename.identifiers(text)
        mapping = {}
        func = values['function']
        new_func = wanted.get(addr, func if func.endswith('_' + addr[2:]) else default_name(addr))
        by_addr = {}
        for sym, a in symbols.items():
            by_addr.setdefault(a, []).append(sym)
        targets = [(func, addr, new_func)] + [(s, a, wanted[a]) for a, ss in by_addr.items() if a in wanted
                                               for s in ss if a != addr]
        for o, a, n in targets:
            if o != n and o in ids and (n not in ids):
                mapping[o] = n
        if mapping:
            text = rewrite_with_header(text, mapping, new_func if func in mapping else func)
            changes.append('%s: renamed %s' % (rel, ', '.join('%s -> %s' % kv for kv in sorted(mapping.items()))))
        func = mapping.get(func, func)
        symbols = {mapping.get(s, s): a for s, a in symbols.items()}
        rt = prev.get('runtime')
        updated = set_runtime_line(text, rt)
        if updated != text:
            changes.append('%s: runtime line %s' % (rel, 'updated' if rt else 'removed'))
            text = updated
        header = class_header(root, func)
        updated = set_class_header(text, header)
        if updated != text:
            changes.append('%s: class header %s' % (rel, header or 'removed'))
            text = updated
        new_rel = str(Path(rel).with_name(func + path.suffix))
        if new_rel != rel:
            changes.append('%s: moved to %s' % (rel, new_rel))
        if write:
            if new_rel != rel:
                path.unlink()
            (root / new_rel).write_text(text)
        entry = {'address': addr, 'file': new_rel, 'function': func, 'language': values['language'],
                 'reference_size': values['reference_size'], 'compiled_size': values['compiled_size'],
                 'differing_lines': values['differing_lines'], 'differing_bytes': values['differing_bytes'],
                 'provenance': values['provenance'], 'class_header': header,
                 **({'runtime': rt} if rt else {}),
                 'symbols': dict(sorted(symbols.items()))}
        entries.append(entry)
    entries.sort(key=lambda e: e['address'])
    out = dict(manifest, entries=entries)
    out['count'] = len(entries)
    if write:
        (root / MANIFEST).write_text(json.dumps(out, indent=1) + '\n')
    return changes


def rewrite_with_header(text, mapping, func):
    end = text.find('*/') + 2
    head, body = text[:end], text[end:]
    head = re.sub(r'(?m)^( \* function: ).*$', lambda m: m.group(1) + func, head)
    return head + rename.rewrite(body, mapping)


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest='cmd', required=True)
    sub.add_parser('check')
    g = sub.add_parser('regenerate')
    g.add_argument('--dry-run', action='store_true')
    g.add_argument('--prune-admitted', action='store_true')
    g.add_argument('--confidence', default=DEFAULT_CONFIDENCE)
    g.add_argument('--sets', default=DEFAULT_SETS)
    args = p.parse_args(argv)
    if args.cmd == 'check':
        problems = check()
        if problems:
            print('\n'.join(problems), file=sys.stderr)
            print('%d problem(s) in the non-matching archive' % len(problems), file=sys.stderr)
            return 1
        n = len(read_json(ROOT, MANIFEST)['entries'])
        print('Non-matching archive consistent: %d drafts, none admitted, none built, no progress credit.' % n)
        return 0
    changes = regenerate(confidence=args.confidence, sets=args.sets, prune=args.prune_admitted, write=not args.dry_run)
    print('\n'.join(changes) if changes else 'no changes')
    if args.dry_run:
        print('dry run: nothing written')
    return 0


if __name__ == '__main__':
    sys.exit(main())
