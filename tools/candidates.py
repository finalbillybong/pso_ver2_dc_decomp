#!/usr/bin/env python3
"""Compile the explicit unresolved queue without admitting mismatches to the build."""
import argparse
import hashlib
from pathlib import Path

import project


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('targets', nargs='*', help='Target IDs; defaults to the whole queue')
    args = parser.parse_args()
    cfg, _, reference, _ = project.inputs()
    pso, matching, root = project.pso, project.matching, project.ROOT
    queue = pso.read_json(root / 'config/reconstruction-targets.json')['targets']
    unknown = set(args.targets) - {u['id'] for u in queue}
    if unknown:
        parser.error('Unknown targets: ' + ', '.join(sorted(unknown)))
    out = Path(cfg['scratch']) / 'reconstruction-candidates'
    out.mkdir(exist_ok=True)
    results = []
    for unit in queue:
        if args.targets and unit['id'] not in args.targets:
            continue
        if 'source' not in unit:
            result = {'id': unit['id'], 'status': 'no_source_candidate', 'reason': unit['reason']}
        else:
            r = unit['ranges'][0]
            expected = reference[r['offset']:r['offset'] + r['size']]
            if hashlib.sha256(expected).hexdigest() != unit['reference_sha256']:
                raise ValueError('Candidate reference range changed: ' + unit['id'])
            binary = out / (unit['id'] + '.bin')
            receipt = matching.compile_unit(root / unit['source'], binary, unit)
            actual = binary.read_bytes()
            result = {'id': unit['id'], 'comparison': pso.compare_bytes(expected, actual),
                      'expected_size': len(expected), 'actual_size': len(actual),
                      'differing_bytes': sum(a != b for a, b in zip(expected, actual)) + abs(len(expected) - len(actual)),
                      'compiler_receipt_sha256': pso.file_hash(binary.with_suffix('.compiler.json')),
                      'source_sha256': receipt['source_sha256'], 'headers_sha256': receipt['headers_sha256']}
        results.append(result)
        print(result)
    pso.write_json(out / 'comparison.json', {
        'queue_sha256': pso.file_hash(root / 'config/reconstruction-targets.json'),
        'driver_sha256': pso.file_hash(Path(__file__)),
        'toolchain_sha256': pso.file_hash(root / 'config/toolchain.json'),
        'results': results, 'admitted_to_matching_manifest': False})


if __name__ == '__main__':
    main()
