#!/usr/bin/env python3
"""Run a bounded compiler/settings matrix against the five pinned PSO samples."""
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import pso
import matching
import shc


def main():
    cfg = pso.read_json(ROOT / 'local.json')
    scratch = Path(cfg['scratch'])
    reference = scratch / 'orig/DP_ADDRESS.dec.bin'
    pso.check_hash(reference, pso.read_json(ROOT / 'config/decoded.json')['sha256'])
    data = reference.read_bytes()
    samples = pso.samples()
    out = scratch / 'compiler-matrix'
    out.mkdir(exist_ok=True)
    profiles = []
    for version in shc.VERSIONS:
        for optimize in ('0', '1'):
            for size in (False, True):
                profiles.append((version + '-O' + optimize + ('-size' if size else '-default'),
                                 version, optimize, ['-size'] if size else []))
    for optimize in range(5):
        profiles.append(('cw-O' + str(optimize), 'cw', None,
                         matching.FLAGS[:-1] + ['-O' + str(optimize)]))
    for key, old, new in [('exceptions', 'off', 'on'), ('software-float', 'hardware', 'software')]:
        flags = [new if f == old else f for f in matching.FLAGS]
        profiles.append(('cw-O2-' + key, 'cw', None, flags))
    rows = []
    for profile, compiler, optimize, flags in profiles:
        for sample in samples:
            source = ROOT / sample['source']
            target = out / (profile + '-' + sample['id'] + '.bin')
            expected = b''.join(data[r['offset']:r['offset'] + r['size']] for r in sample['ranges'])
            row = {'profile': profile, 'sample': sample['id']}
            try:
                if compiler == 'cw':
                    receipt = matching.compile_unit(source, target, sample, flags)
                else:
                    receipt = shc.compile_unit(source, target, compiler, int(sample['address'], 0),
                                               sample['entry'], optimize, flags)
                actual = target.read_bytes()
                row.update(pso.compare_bytes(expected, actual))
                row.update(output_sha256=pso.file_hash(target), output_size=len(actual),
                           differing_bytes=sum(a != b for a, b in zip(expected, actual)) +
                           abs(len(expected) - len(actual)))
            except (ValueError, OSError) as e:
                row.update(exact=False, build_error=str(e))
            rows.append(row)
        print(profile + ': ' + str(sum(r['exact'] for r in rows[-5:])) + '/5 exact', flush=True)
    pso.write_json(ROOT / 'config/compiler-matrix.json', {
        'samples_sha256': pso.file_hash(ROOT / 'config/samples.json'),
        'source_sha256': {s['source']: pso.file_hash(ROOT / s['source']) for s in samples},
        'reference_sha256': pso.file_hash(reference),
        'profiles': [{'id': p, 'compiler': c, 'optimize': o, 'extra_flags': f}
                     for p, c, o, f in profiles],
        'rows': rows, 'original_compiler_uniquely_identified': False})


if __name__ == '__main__':
    main()
