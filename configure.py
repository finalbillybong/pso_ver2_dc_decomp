#!/usr/bin/env python3
"""Pin this machine's verified tools without changing the matching settings."""
import argparse
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'tools'))
import matching


def configure(root=ROOT, refresh=False):
    read = lambda name: json.loads((root / name).read_text())
    receipt = read('config/matching-installed.json')
    packages = read('config/matching-packages.json')
    if receipt['packages_sha256'] != matching.sha(root / 'config/matching-packages.json'):
        raise ValueError('Installation package manifest changed; review and reinstall')
    for name, digest in receipt['files'].items():
        if matching.sha(name) != digest:
            raise ValueError('Installed tool hash mismatch')
    required = {'runner', 'compiler', 'linker', 'objcopy', 'objdump'}
    if not required <= receipt['roles'].keys():
        raise ValueError('Missing installed tool role')
    if any(path not in receipt['files'] for path in receipt['roles'].values()):
        raise ValueError('Unpinned installed tool role')
    compiler = receipt['roles']['compiler']
    if receipt['files'][compiler] != packages['codewarrior']['files']['mwshc.exe']['sha256']:
        raise ValueError('Compiler differs from the pinned matching package')
    runner = receipt['roles']['runner']
    if receipt['files'][runner] != read('config/compiler-packages.json')['runner']['sha256']:
        raise ValueError('Runner differs from the pinned package')
    config = read('config/toolchain.example.json')
    if config['flags'] != matching.FLAGS:
        raise ValueError('Template changed fixed compiler flags')
    config['status'] = 'ready'
    config['executables'] = dict(receipt['files'])
    for name in ['tools/matching.py', 'config/matching-installed.json', 'config/matching-packages.json']:
        config['executables'][str((root / name).resolve())] = matching.sha(root / name)
    dest = root / 'config/toolchain.json'
    if dest.exists() and json.loads(dest.read_text()) != config and not refresh:
        raise ValueError('Existing toolchain differs. Review changes before using --refresh.')
    dest.write_text(json.dumps(config, indent=2) + '\n')
    return config


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--refresh', action='store_true', help='Replace local pins after reviewing changes')
    args = parser.parse_args()
    try:
        configure(refresh=args.refresh)
        print('Verified local toolchain configured; compiler flags unchanged.')
    except (OSError, ValueError, KeyError) as e:
        parser.exit(2, f'Configuration failed: {e}\nRun the compiler setup steps in docs/BUILDING.md first.\n')
