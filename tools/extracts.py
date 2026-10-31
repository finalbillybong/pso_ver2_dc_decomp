#!/usr/bin/env python3
"""Dump extracts: the remaining untyped bytes of the executable, taken from your own dump.

After compiled C/SHC, typed static data, embedded assets and assembly, a few hundred
kilobytes remain that no source form covers yet: untyped static data (opaque tables,
records with mixed fields, zero runs, Shift-JIS text) and a few hundred bytes of
code-side data that no reference proves. Their bytes are never committed:
`config/extracts.json` records only the range, the SHA-256 and a coarse kind. Every
build extracts them from the user's verified dump, checks the hash and places them, so
`tools/project.py build --source-only` can build the image without copying any
reference gap.

Extracts are **not** decompiled code and **not** typed data: they earn no code-range,
matching, typed-data or image-coverage credit and have their own figure. On every build
each extract is re-cut around any C, SHC, typed-data, asset or assembly range that now
overlaps it, so newly reconstructed bytes simply shrink the extracts.
"""
import argparse
import bisect
import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'config/extracts.json'
KINDS = {'zero_run', 'untyped_bytes'}
FIELDS = {'id', 'address', 'offset', 'size', 'sha256', 'kind'}


def read(root=ROOT):
    path = Path(root) / MANIFEST
    if not path.exists():
        return {'schema_version': 1, 'extracts': []}
    return json.loads(path.read_text())


def validate(extracts, base, size):
    """Structure only: ranges, hashes and kinds; no payload fields."""
    if extracts.get('schema_version') != 1 or set(extracts) - {'schema_version', 'extracts', 'policy'}:
        raise ValueError('Unsupported extract manifest')
    ids = set()
    for e in extracts['extracts']:
        if set(e) != FIELDS:
            raise ValueError('Extract entries hold only id, range, hash and kind')
        if not re.fullmatch(r'x_[0-9a-f]{8}', e['id']) or e['id'] in ids:
            raise ValueError('Invalid or duplicate extract id: ' + str(e['id']))
        ids.add(e['id'])
        if e['kind'] not in KINDS:
            raise ValueError('Unknown extract kind: ' + e['kind'])
        if not re.fullmatch(r'[0-9a-f]{64}', e['sha256']):
            raise ValueError('Invalid extract hash: ' + e['id'])
        if (base + e['offset'] != int(e['address'], 0) or e['size'] <= 0 or e['offset'] < 0
                or e['offset'] + e['size'] > size or e['id'] != 'x_%08x' % (base + e['offset'])):
            raise ValueError('Invalid extract range: ' + e['id'])
    return extracts


def subtract(start, end, taken):
    spans, cur = [], start
    starts = [s for s, _ in taken]
    for s, e in taken[max(bisect.bisect_right(starts, start) - 1, 0):]:
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


def placed(extracts, base, taken):
    """Extract sub-spans after removing every range another origin owns.
    Returns [{'id', 'address', 'offset', 'size', 'parent'}]; ids `<id>` or `<id>_<n>`."""
    taken = sorted(taken)
    out = []
    for e in extracts['extracts']:
        a = int(e['address'], 0)
        spans = subtract(a, a + e['size'], taken)
        for i, (s, t) in enumerate(spans):
            out.append({'id': e['id'] if len(spans) == 1 else f"{e['id']}_{i}", 'address': hex(s),
                        'offset': s - base, 'size': t - s, 'parent': e['id']})
    return out


def check(reference, extracts):
    """Every committed extract range must hash to its recorded SHA-256 in your dump."""
    for e in extracts['extracts']:
        blob = reference[e['offset']:e['offset'] + e['size']]
        if len(blob) != e['size'] or hashlib.sha256(blob).hexdigest() != e['sha256']:
            raise ValueError('Extract hash mismatch in your dump: ' + e['id'])


def plan(root=ROOT):
    """Record every byte that still requires the reference as an extract (maintainer step, needs
    the dump). Kind is `zero_run` when all bytes are zero, else `untyped_bytes`."""
    import project
    cfg = json.loads((Path(root) / 'local.json').read_text())
    reference = (Path(cfg['scratch']) / 'orig/DP_ADDRESS.dec.bin').read_bytes()
    pin = json.loads((Path(root) / 'config/decoded.json').read_text())
    if hashlib.sha256(reference).hexdigest() != pin['sha256']:
        raise ValueError('Decoded reference does not match config/decoded.json')
    manifest = json.loads((Path(root) / 'config/project.json').read_text())
    base = int(manifest['base_address'], 0)
    spans = project.layout(manifest, len(reference), project.static_data.read(root),
                           project.dump_assets.read(root), project.asm_units.read(root),
                           {'schema_version': 1, 'extracts': []})
    out = []
    for s in spans:
        if s['origin'] != 'reference_unreconstructed':
            continue
        blob = reference[s['offset']:s['offset'] + s['size']]
        out.append({'id': 'x_%08x' % (base + s['offset']), 'address': hex(base + s['offset']),
                    'offset': s['offset'], 'size': s['size'],
                    'sha256': hashlib.sha256(blob).hexdigest(),
                    'kind': 'zero_run' if not any(blob) else 'untyped_bytes'})
    doc = {'schema_version': 1,
           'policy': 'Bytes come from your own dump at build time; never committed. Not decompiled, not typed data.',
           'extracts': out}
    (Path(root) / MANIFEST).write_text(json.dumps(doc, separators=(',', ':')) + '\n')
    return doc


def total(extracts):
    return sum(e['size'] for e in extracts['extracts'])


def main():
    parser = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    parser.add_argument('command', choices=['check', 'plan'])
    args = parser.parse_args()
    if args.command == 'plan':
        doc = plan()
        kinds = {}
        for e in doc['extracts']:
            kinds[e['kind']] = kinds.get(e['kind'], 0) + e['size']
        print(f"{len(doc['extracts'])} extracts, {total(doc):,} bytes: {kinds}")
    else:
        code = json.loads((ROOT / 'config/project.json').read_text())
        size = json.loads((ROOT / 'config/decoded.json').read_text())['size']
        doc = validate(read(), int(code['base_address'], 0), size)
        print(f"{len(doc['extracts'])} extracts ({total(doc):,} bytes from your dump): manifest valid.")


if __name__ == '__main__':
    main()
