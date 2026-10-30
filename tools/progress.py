#!/usr/bin/env python3
"""Report exact image coverage from a source-bound local verification checkpoint."""
import argparse
from datetime import date
import json
from pathlib import Path
import subprocess
import sys

import project
import data as static_data
from matching import FLAGS, dependencies, sha, unit_flags

ROOT = Path(__file__).resolve().parents[1]


def read(root, name):
    return json.loads((root / name).read_text())


def inputs(root, manifest):
    names = {'config/project.json', 'config/decoded.json', 'config/samples.json',
             'config/matching-packages.json', 'config/compiler-packages.json',
             'tools/matching.py', 'tools/project.py', 'tools/verify_source.py', 'pso.py'}
    data = static_data.read(root)
    if data['units']:
        names.update({static_data.MANIFEST, 'tools/data.py'})
        names.update(unit['source'] for unit in data['units'])
    # The independent compiler proof still uses original sample files when a
    # project module regroups one with its genuine adjacent function.
    for unit in manifest['units'] + read(root, 'config/samples.json')['samples']:
        names.add(unit['source'])
        names.update(dependencies(root / unit['source'], unit, root))
    return {name: sha(root / name) for name in sorted(names)}


def summary(root=ROOT):
    manifest = read(root, 'config/project.json')
    decoded = read(root, 'config/decoded.json')
    proof = read(root, 'config/progress-proof.json')
    if proof['inputs_sha256'] != inputs(root, manifest):
        raise ValueError('Progress checkpoint is stale; reproduce exact verification and use --record')
    if proof['flags'] != FLAGS or proof['integrated_image_sha256'] != decoded['sha256']:
        raise ValueError('Verification compiler settings or reference changed')
    if proof.get('unit_flags') != {u['id']: unit_flags(u) for u in manifest['units']}:
        raise ValueError('Verification module language settings changed')
    data = static_data.read(root)
    required = {'two_fresh_exact_builds', 'integrated_image_exact', 'five_function_compiler_proof'}
    if data['units']:
        required.add('typed_data_modules_exact')
    if not required <= set(proof['checks']):
        raise ValueError('Incomplete exact-build verification')
    spans = project.layout(manifest, decoded['size'], data)
    for unit in data['units']:
        static_data.lint((root / unit['source']).read_text(), unit)
    matched = sum(s['size'] for s in spans if s['origin'] == 'compiled_source')
    typed = sum(s['size'] for s in spans if s['origin'] == 'compiled_data')
    extent = data.get('data_extent', {}).get('bytes')
    if data['units'] and not (isinstance(extent, int) and typed <= extent < decoded['size']):
        raise ValueError('Typed data needs a recorded data-extent denominator')
    functions = 0
    addresses = set()
    for unit in manifest['units']:
        start = int(unit['address'], 0)
        end = start + unit['ranges'][0]['size']
        cursor = start
        for func in sorted(unit['functions'], key=lambda f: int(f['address'], 0)):
            address = int(func['address'], 0)
            if address != cursor or func['size'] <= 0 or address in addresses:
                raise ValueError('Invalid or duplicate function coverage')
            addresses.add(address)
            cursor = address + func['size']
            functions += 1
        if cursor != end:
            raise ValueError('Functions do not cover the admitted module')
    retained = decoded['size'] - matched - typed
    if proof['source_only_rejected_retained_bytes'] != retained:
        raise ValueError('Stale reference-gap evidence')
    return {'schema_version': 1, 'version': 'pal', 'status': 'hybrid_reconstruction',
            'verification_date': proof['verification_date'], 'matching_functions': functions,
            'matching_modules': len(manifest['units']), 'compiled_range_bytes': matched,
            'decoded_image_bytes': decoded['size'], 'retained_reference_bytes': retained,
            'code_range_coverage_percent': round(100 * matched / decoded['size'], 8),
            'standalone_reconstructed_data_bytes': typed,
            'typed_data_modules': len(data['units']),
            'typed_data_objects': sum(len(u['objects']) for u in data['units']),
            'typed_data_bytes_by_kind': static_data.totals(data),
            'data_extent_bytes': extent,
            'typed_data_percent_of_data_extent': round(100 * typed / extent, 8) if extent else 0.0,
            'image_coverage_percent': round(100 * (matched + typed) / decoded['size'], 8),
            'code_completion_percent': None,
            'total_functions': None, 'source_only_build_available': retained == 0,
            'integrated_image_sha256': decoded['sha256'],
            'metric': 'Complete compiled function ranges, including literals and padding, plus typed static-data modules, divided by the entire decoded image. Not a code-only completion percentage.',
            'code_metric': 'Complete compiled function ranges, including literals and padding, divided by the entire decoded image.',
            'data_metric': 'Bytes of exact typed static-data modules (virtual tables as arrays of named function pointers, strings as C string literals) divided by the recorded static-data extent estimate. Raw byte, halfword or word arrays and pointers written as integers earn no credit.',
            'verification': 'Locally verified exact builds; CI validates the recorded input hashes and progress accounting.'}


def render(report):
    n, total, left = (report[k] for k in ['compiled_range_bytes', 'decoded_image_bytes', 'retained_reference_bytes'])
    typed, extent = report['standalone_reconstructed_data_bytes'], report['data_extent_bytes']
    pct = f"{report['image_coverage_percent']:.4f}%"
    code_pct = f"{report['code_range_coverage_percent']:.4f}%"
    data_pct = f"{report['typed_data_percent_of_data_extent']:.4f}%"
    kinds = report['typed_data_bytes_by_kind']
    extent_text = f'{extent:,} bytes (estimate)' if extent else 'Not recorded'
    md = f'''# Verified reconstruction progress

| Measure | Value |
| --- | ---: |
| Exact matching functions | {report['matching_functions']} |
| Matching modules | {report['matching_modules']} |
| Compiled complete ranges | {n:,} bytes |
| Code-range coverage of the image | {code_pct} |
| Typed static data | {typed:,} bytes in {report['typed_data_objects']} objects / {report['typed_data_modules']} modules |
| Typed data by kind | {', '.join(f'{k} {v:,}' for k, v in kinds.items())} bytes |
| Static-data extent | {extent_text} |
| Typed data share of the static-data extent | {data_pct} |
| Decoded executable | {total:,} bytes |
| Image coverage (code ranges + typed data) | {pct} |
| Retained reference dependence | {left:,} bytes |
| Code-only completion percentage | Unknown |
| Total game function count | Unknown |
| Source-only build | Unavailable |

Complete ranges include literals and padding. Image coverage is **not** the
percentage of game code decompiled. Unmatched candidates earn no completed-byte
credit. Typed static data counts only exact modules of virtual tables written as
arrays of named function pointers and strings written as C string literals; raw
byte arrays, opaque or high-entropy data and pointers written as integers earn no
credit. The static-data extent is an analysis estimate of the bytes outside code,
not a recovered section size. The integrated hybrid image matches the reference,
but still requires {left:,} original bytes.

Exact-build verification recorded: **{report['verification_date']}**. Two fresh
project builds, exact integrated-image comparison, exact typed-data modules and the
five-function compiler proof passed. Public CI checks the source-bound checkpoint and host-tool tests;
it does not access a game dump or recompile the game.

Generated by `python3 -B tools/progress.py` from the matching manifest and
`config/progress-proof.json`. Use `--check` to detect stale inputs or generated
reports. After new local exact verification, maintainers use `--record` to bind a
new checkpoint. See [BUILDING.md](BUILDING.md) and [TRACKER.md](TRACKER.md).
'''
    svg = f'''<svg xmlns="http://www.w3.org/2000/svg" width="230" height="20" role="img" aria-label="Image coverage: {pct}"><title>Image coverage: {pct} (code ranges with literals and padding, plus typed static data)</title><rect width="145" height="20" fill="#555"/><rect x="145" width="85" height="20" fill="#176b91"/><g fill="#fff" font-family="Verdana,sans-serif" font-size="11" text-anchor="middle"><text x="72" y="14">image byte coverage</text><text x="187" y="14">{pct}</text></g></svg>\n'''
    return {'progress.json': json.dumps(report, indent=2) + '\n', 'docs/PROGRESS.md': md, 'docs/progress.svg': svg}


def record(root=ROOT):
    subprocess.run([sys.executable, '-B', str(root / 'tools/verify_source.py'), '--check'], cwd=root, check=True)
    manifest = read(root, 'config/project.json')
    proof = read(root, 'config/source-validation.json')
    decoded = read(root, 'config/decoded.json')
    data = static_data.read(root)
    spans = project.layout(manifest, decoded['size'], data)
    retained = sum(s['size'] for s in spans if s['origin'] == 'reference_unreconstructed')
    if retained:
        try:
            project.require_source_coverage(spans)
        except ValueError:
            pass
        else:
            raise ValueError('Source-only build did not reject remaining reference gaps')
    tc = read(root, 'config/toolchain.json')
    result = {'schema_version': 1, 'verification_date': date.today().isoformat(),
              'checks': proof['checks'], 'inputs_sha256': inputs(root, manifest),
              'compiler': tc['compiler'], 'flags': tc['flags'],
              'unit_flags': {u['id']: unit_flags(u) for u in manifest['units']},
              'integrated_image_sha256': decoded['sha256'],
              'source_only_build_available': retained == 0,
              'source_only_rejected_retained_bytes': retained,
            'typed_data_modules': len(data['units']),
              'provenance_note': 'Portable summary of local exact-build verification. CI checks source hashes and accounting; it does not rebuild the game or access private reference files.'}
    (root / 'config/progress-proof.json').write_text(json.dumps(result, indent=2) + '\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument('--check', action='store_true')
    mode.add_argument('--record', action='store_true', help='Record current verified local build evidence')
    args = parser.parse_args()
    if args.record:
        record()
    report = summary()
    for name, contents in render(report).items():
        path = ROOT / name
        if args.check:
            if not path.exists() or path.read_text() != contents:
                raise ValueError('Generated progress is stale: ' + name)
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_text(contents)
    print(f"{report['matching_functions']} exact functions; {report['compiled_range_bytes']:,} code-range bytes"
          f" ({report['code_range_coverage_percent']:.4f}%); {report['standalone_reconstructed_data_bytes']:,} typed data bytes"
          f" ({report['typed_data_percent_of_data_extent']:.4f}% of the data extent); image coverage"
          f" {report['image_coverage_percent']:.4f}% of {report['decoded_image_bytes']:,} bytes.")


if __name__ == '__main__':
    try:
        main()
    except (OSError, ValueError, KeyError) as e:
        sys.exit(str(e))
