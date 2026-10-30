#!/usr/bin/env python3
"""Embedded assets: byte ranges of the executable that are extracted from your own dump.

An asset is an embedded file or opaque high-entropy resource inside the decoded
executable (for example a vendor resource image). Its bytes are never committed:
`config/assets.json` records only the range, SHA-256, kind and what is known of
the format. At build time each asset is extracted from the user's verified dump,
checked against its hash and placed back into the image.

Assets count in their own figure ("asset bytes extracted from your dump"). They
are not reconstructed source: they earn no image-coverage or typed-data credit.
A source-only build accepts them as dump-provided, separately from bytes that
still require the reference executable.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'config/assets.json'
KINDS = {'embedded_file', 'high_entropy_blob'}
FIELDS = {'id', 'address', 'offset', 'size', 'sha256', 'kind', 'format', 'notes'}
MAX_TEXT = 400


def read(root=ROOT):
    """The asset manifest; an absent manifest means no assets."""
    path = Path(root) / MANIFEST
    if not path.exists():
        return {'schema_version': 1, 'assets': []}
    return json.loads(path.read_text())


def validate(assets, base, size):
    """Structural checks without the dump: ranges, hashes, kinds, and no payload fields."""
    if assets.get('schema_version') != 1 or set(assets) - {'schema_version', 'assets', 'policy'}:
        raise ValueError('Unsupported asset manifest')
    ids = set()
    for a in assets['assets']:
        if set(a) - FIELDS or not {'id', 'address', 'offset', 'size', 'sha256', 'kind', 'format'} <= set(a):
            raise ValueError('Asset entries hold only range, hash and description fields')
        if not re.fullmatch(r'[a-z0-9_]+', a['id']) or a['id'] in ids:
            raise ValueError('Invalid or duplicate asset id: ' + str(a['id']))
        ids.add(a['id'])
        if a['kind'] not in KINDS:
            raise ValueError('Unknown asset kind: ' + a['kind'])
        if not re.fullmatch(r'[0-9a-f]{64}', a['sha256']):
            raise ValueError('Invalid asset hash: ' + a['id'])
        if base + a['offset'] != int(a['address'], 0) or a['size'] <= 0 or a['offset'] < 0 \
                or a['offset'] + a['size'] > size:
            raise ValueError('Invalid asset range: ' + a['id'])
        if any(len(str(a.get(k, ''))) > MAX_TEXT for k in ('format', 'notes')):
            raise ValueError('Asset descriptions are short text, never payload: ' + a['id'])
    return assets


def extract(reference, assets, out_dir=None):
    """Asset bytes from the verified dump, each checked against its recorded hash.
    Optionally written to out_dir (a private scratch directory, never the repository)."""
    result = {}
    for a in assets['assets']:
        blob = reference[a['offset']:a['offset'] + a['size']]
        if len(blob) != a['size'] or hashlib.sha256(blob).hexdigest() != a['sha256']:
            raise ValueError('Asset hash mismatch in your dump: ' + a['id'])
        result[a['id']] = blob
        if out_dir is not None:
            Path(out_dir).mkdir(parents=True, exist_ok=True)
            (Path(out_dir) / (a['id'] + '.bin')).write_bytes(blob)
    return result


def total(assets):
    return sum(a['size'] for a in assets['assets'])


def main():
    parser = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    parser.add_argument('command', choices=['check'])
    parser.parse_args()
    code = json.loads((ROOT / 'config/project.json').read_text())
    decoded = json.loads((ROOT / 'config/decoded.json').read_text())
    assets = validate(read(), int(code['base_address'], 0), decoded['size'])
    print(f"{len(assets['assets'])} assets, {total(assets):,} bytes extracted from your dump at build time.")


if __name__ == '__main__':
    main()
