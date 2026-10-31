#!/usr/bin/env python3
"""Look up proposed names in config/names.json, or lint the manifest (read-only).

    python3 tools/names.py 0x8c0330e4        # by address (also finds the enclosing function)
    python3 tools/names.py TObject_ctor      # by exact name
    python3 tools/names.py --grep Volopt     # substring search over names
    python3 tools/names.py --lint            # uniqueness, C identifiers, address range

The manifest is documentation only: it is not a build input and renames nothing.
"""
import argparse
import bisect
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'config/names.json'
IDENT = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')
KINDS = {'function', 'global'}
CONFIDENCE = {'high', 'medium'}
SETS = {'curated', 'extended'}
RAM_END = 0x8d000000  # 16 MB of Dreamcast main RAM: globals may live in BSS after the image
C_KEYWORDS = set('''auto break case char const continue default do double else enum extern float for goto if
inline int long register restrict return short signed sizeof static struct switch typedef union unsigned void
volatile while class delete new operator private protected public template this throw try virtual'''.split())


def read(root=ROOT):
    return json.loads((root / MANIFEST).read_text())


def image_range(root=ROOT):
    base = int(json.loads((root / 'config/project.json').read_text())['base_address'], 16)
    size = json.loads((root / 'config/decoded.json').read_text())['size']
    return base, base + size


def lint(doc, base, end):
    """Return a list of problems (empty when the manifest is clean)."""
    errors = []
    names, addresses = {}, {}
    if doc.get('schema_version') != 1:
        errors.append('unsupported schema_version')
    for i, e in enumerate(doc.get('names', [])):
        where = '%s (%s)' % (e.get('name'), e.get('address'))
        missing = {'address', 'kind', 'name', 'confidence', 'set', 'evidence'} - set(e)
        if missing:
            errors.append('%s: missing %s' % (where, ', '.join(sorted(missing))))
            continue
        name = e['name']
        if not IDENT.fullmatch(name) or name in C_KEYWORDS:
            errors.append('%s: not a valid C identifier' % where)
        if name in names:
            errors.append('%s: duplicate name (also %s)' % (where, names[name]))
        names[name] = e['address']
        try:
            a = int(e['address'], 16)
        except (TypeError, ValueError):
            errors.append('%s: bad address' % where)
            continue
        if e['address'] != hex(a):
            errors.append('%s: address not in canonical 0x… lowercase form' % where)
        if a in addresses:
            errors.append('%s: duplicate address (also %s)' % (where, addresses[a]))
        addresses[a] = name
        if e['kind'] not in KINDS:
            errors.append('%s: unknown kind %r' % (where, e['kind']))
        elif e['kind'] == 'function' and not (base <= a < end and a % 2 == 0):
            errors.append('%s: function address outside the decoded image or odd' % where)
        elif e['kind'] == 'global' and not (base <= a < RAM_END):
            errors.append('%s: global address outside main RAM' % where)
        if e['confidence'] not in CONFIDENCE:
            errors.append('%s: confidence must be high or medium' % where)
        if e['set'] not in SETS:
            errors.append('%s: unknown set %r' % (where, e['set']))
        if not e['evidence'] or len(e['evidence']) > 400 or '\n' in e['evidence']:
            errors.append('%s: evidence must be one short line' % where)
    return errors


def known_functions(root=ROOT):
    """Admitted function starts and sizes from the matching manifest (for 'inside' lookups)."""
    out = {}
    for unit in json.loads((root / 'config/project.json').read_text())['units']:
        for f in unit['functions']:
            out[int(f['address'], 16)] = (f['name'], f['size'], unit['source'])
    return out


def show(e):
    print('%s  %-40s %-8s %-6s %s' % (e['address'], e['name'], e['kind'], e['confidence'], e['set']))
    print('    ' + e['evidence'])


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('query', nargs='?', help='address (0x…) or exact name')
    p.add_argument('--grep', help='case-insensitive substring of a name')
    p.add_argument('--lint', action='store_true', help='check the manifest and exit')
    args = p.parse_args(argv)
    doc = read()
    if args.lint:
        errors = lint(doc, *image_range())
        if errors:
            print('\n'.join(errors), file=sys.stderr)
            return 1
        print('names.json: %d names, no problems' % len(doc['names']))
        return 0
    entries = doc['names']
    if args.grep:
        hits = [e for e in entries if args.grep.lower() in e['name'].lower()]
        for e in hits:
            show(e)
        return 0 if hits else 1
    if not args.query:
        p.print_help()
        return 2
    q = args.query
    if re.fullmatch(r'(0x)?[0-9a-fA-F]{8}', q):
        a = int(q, 16)
        by = {int(e['address'], 16): e for e in entries}
        if a in by:
            show(by[a])
        else:
            starts = sorted(by)
            i = bisect.bisect_right(starts, a) - 1
            if i >= 0 and by[starts[i]]['kind'] == 'function':
                print('no entry at %#x; nearest named function below it:' % a)
                show(by[starts[i]])
        funcs = known_functions()
        fs = sorted(funcs)
        i = bisect.bisect_right(fs, a) - 1
        if i >= 0 and fs[i] + funcs[fs[i]][1] > a:
            name, size, src = funcs[fs[i]]
            print('repo: %s at %#x (+%#x, %d bytes) in %s' % (name, fs[i], a - fs[i], size, src))
        return 0
    hits = [e for e in entries if e['name'] == q]
    for e in hits:
        show(e)
    return 0 if hits else 1


if __name__ == '__main__':
    sys.exit(main())
