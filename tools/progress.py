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
import assets as dump_assets
import asm_units
from matching import FLAGS, dependencies, sha
from shc_units import SHC_COMPILER, is_shc, unit_flags

ROOT = Path(__file__).resolve().parents[1]


def read(root, name):
    return json.loads((root / name).read_text())


def inputs(root, manifest):
    names = {'config/project.json', 'config/decoded.json', 'config/samples.json',
             'config/matching-packages.json', 'config/compiler-packages.json',
             'tools/matching.py', 'tools/project.py', 'tools/verify_source.py', 'pso.py'}
    data = static_data.read(root)
    if any(is_shc(u) for u in manifest['units']):
        names.update({'tools/shc_units.py', 'tools/shc.py'})
    if dump_assets.read(root)['assets']:
        names.update({dump_assets.MANIFEST, 'tools/assets.py'})
    if asm_units.read(root)['units']:
        names.update({asm_units.MANIFEST, 'tools/asm_units.py', 'tools/asmgen.py'})
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
    if dump_assets.read(root)['assets']:
        required.add('dump_assets_hash_verified')
    shc = [u for u in manifest['units'] if is_shc(u)]
    if shc:
        required.add('shc_pool_groups_exact')
    asm = asm_units.read(root)
    hand_units, fallback_units = asm_units.units_of(asm, 'hand'), asm_units.units_of(asm, 'fallback')
    if hand_units:
        required.add('hand_assembly_units_exact')
    if fallback_units:
        required.add('fallback_assembly_units_exact')
    if not required <= set(proof['checks']):
        raise ValueError('Incomplete exact-build verification')
    assets = dump_assets.read(root)
    spans = project.layout(manifest, decoded['size'], data, assets, asm)
    # Lints every data source and rejects integers or floats equal to a symbol address.
    static_data.check_disguised_pointers(data, manifest, root)
    static_data.check_external_symbols(data, manifest, root)
    matched = sum(s['size'] for s in spans if s['origin'] == 'compiled_source')
    typed = sum(s['size'] for s in spans if s['origin'] == 'compiled_data')
    asset_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_asset')
    hand_bytes = sum(s['size'] for s in spans if s['origin'] == 'assembled_hand')
    fallback_bytes = sum(s['size'] for s in spans if s['origin'] == 'assembled_fallback')
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
    retained = decoded['size'] - matched - typed - asset_bytes - hand_bytes - fallback_bytes
    if proof['source_only_rejected_retained_bytes'] != retained:
        raise ValueError('Stale reference-gap evidence')
    return {'schema_version': 1, 'version': 'pal', 'status': 'hybrid_reconstruction',
            'verification_date': proof['verification_date'], 'matching_functions': functions,
            'matching_modules': len(manifest['units']), 'compiled_range_bytes': matched,
            **({'compiled_range_bytes_by_compiler': {'codewarrior': matched - sum(u['ranges'][0]['size'] for u in shc),
                                                     SHC_COMPILER: sum(u['ranges'][0]['size'] for u in shc)},
                'shc_modules': len(shc), 'shc_functions': sum(len(u['functions']) for u in shc)} if shc else {}),
            'decoded_image_bytes': decoded['size'], 'retained_reference_bytes': retained,
            'code_range_coverage_percent': round(100 * matched / decoded['size'], 8),
            'standalone_reconstructed_data_bytes': typed,
            'typed_data_modules': len(data['units']),
            'typed_data_objects': sum(len(u['objects']) for u in data['units']),
            'typed_data_bytes_by_kind': static_data.totals(data),
            'data_extent_bytes': extent,
            'typed_data_percent_of_data_extent': round(100 * typed / extent, 8) if extent else 0.0,
            'image_coverage_percent': round(100 * (matched + typed) / decoded['size'], 8),
            'dump_asset_bytes': asset_bytes,
            'dump_assets': len(assets['assets']),
            'dump_asset_percent_of_image': round(100 * asset_bytes / decoded['size'], 8),
            **(asm_figures(asm, matched, typed, asset_bytes, hand_bytes, fallback_bytes, extent, decoded['size'])
               if asm['units'] else {}),
            'code_completion_percent': None,
            'total_functions': None, 'source_only_build_available': retained == 0,
            'integrated_image_sha256': decoded['sha256'],
            'metric': 'Complete compiled function ranges, including literals and padding, plus typed static-data modules, divided by the entire decoded image. Not a code-only completion percentage.',
            'code_metric': 'Complete compiled function ranges, including literals and padding, divided by the entire decoded image.',
            'data_metric': 'Bytes of exact typed static-data modules (virtual and function tables as arrays of named function pointers, pointer tables of named symbols including external g_<addr> targets in reference-backed data or RAM, strings as C string literals, float and integer arrays with typed literals, and record arrays of checked struct types with pointer, float, integer and short fields) divided by the recorded static-data extent estimate. Opaque byte dumps, high-entropy data, untyped words and pointers written as integers earn no credit.',
            'asset_metric': 'Bytes of embedded files and opaque high-entropy resources (config/assets.json) that every build extracts from your own dump and checks against recorded hashes. Not reconstructed source: no image-coverage or typed-data credit; listed separately from bytes that still require the reference.',
            'verification': 'Locally verified exact builds; CI validates the recorded input hashes and progress accounting.'}


def asm_figures(asm, matched, typed, asset_bytes, hand, fallback, data_extent, total):
    """Assembly figures, kept apart from the code, data and image-coverage figures."""
    code_extent = asm.get('code_extent', {}).get('bytes')
    if not (isinstance(code_extent, int) and data_extent and code_extent + data_extent == total
            and matched + hand + fallback <= code_extent):
        raise ValueError('Assembly units need a recorded code extent (image minus the data extent)')
    buildable = matched + typed + asset_bytes + hand + fallback
    return {'code_extent_bytes': code_extent,
            'compiled_percent_of_code_extent': round(100 * matched / code_extent, 8),
            'hand_assembly_units': len(asm_units.units_of(asm, 'hand')), 'hand_assembly_bytes': hand,
            'hand_assembly_percent_of_code_extent': round(100 * hand / code_extent, 8),
            'fallback_assembly_units': len(asm_units.units_of(asm, 'fallback')), 'fallback_assembly_bytes': fallback,
            'fallback_assembly_percent_of_code_extent': round(100 * fallback / code_extent, 8),
            'source_buildable_with_dump_bytes': buildable,
            'source_buildable_with_dump_percent': round(100 * buildable / total, 8),
            'retained_code_side_bytes': code_extent - matched - hand - fallback,
            'assembly_metric': 'Hand-written assembly: routines with an instruction that neither CodeWarrior nor the pinned SHC emits. Fallback assembly: generated from your dump for code without matching C; it is NOT decompiled and is excluded from the code-range, matching and image-coverage figures. Source-buildable with your dump: bytes a build can produce from any source form (C, SHC, typed data, extracted assets, hand-written and fallback assembly) over the whole image. No assembly text is committed; it is regenerated from your dump at build time.'}


def render(report):
    n, total, left = (report[k] for k in ['compiled_range_bytes', 'decoded_image_bytes', 'retained_reference_bytes'])
    typed, extent = report['standalone_reconstructed_data_bytes'], report['data_extent_bytes']
    pct = f"{report['image_coverage_percent']:.4f}%"
    code_pct = f"{report['code_range_coverage_percent']:.4f}%"
    data_pct = f"{report['typed_data_percent_of_data_extent']:.4f}%"
    kinds = report['typed_data_bytes_by_kind']
    shc_row = ''
    if report.get('shc_modules'):
        shc_bytes = report['compiled_range_bytes_by_compiler'][SHC_COMPILER]
        shc_row = (f"| of which Hitachi SHC pool groups | {shc_bytes:,} bytes in {report['shc_modules']} modules"
                   f" / {report['shc_functions']} functions |\n")
    extent_text = f'{extent:,} bytes (estimate)' if extent else 'Not recorded'
    asm_rows, asm_note = '', ''
    if report.get('code_extent_bytes'):
        asm_rows = (f"| Assembly (hand-written), not decompiled | {report['hand_assembly_bytes']:,} bytes in"
                    f" {report['hand_assembly_units']} units ({report['hand_assembly_percent_of_code_extent']:.4f}% of the code extent) |\n"
                    f"| Fallback assembly for unmatched code, **not decompiled** | {report['fallback_assembly_bytes']:,} bytes in"
                    f" {report['fallback_assembly_units']} units ({report['fallback_assembly_percent_of_code_extent']:.4f}% of the code extent) |\n"
                    f"| Source-buildable with your dump (C, SHC, data, assets and all assembly) | {report['source_buildable_with_dump_bytes']:,} bytes"
                    f" ({report['source_buildable_with_dump_percent']:.4f}% of the image) |\n")
        asm_note = ('''\n\n**Assembly is not decompiled code, and no assembly is committed.** Hand-written
assembly covers routines with an instruction that neither CodeWarrior nor the pinned
SHC emits. Fallback assembly is generated mechanically from your own dump, at build
time, for code that has no matching C yet, only so that more of the image builds from
source; it is replaced by C as matches land and is excluded from the code-range,
matching and image-coverage figures. See ASM.md.''')
    md = f'''# Verified reconstruction progress

| Measure | Value |
| --- | ---: |
| Exact matching functions | {report['matching_functions']} |
| Matching modules | {report['matching_modules']} |
| Compiled complete ranges | {n:,} bytes |
| Code-range coverage of the image | {code_pct} |
{shc_row}| Typed static data | {typed:,} bytes in {report['typed_data_objects']} objects / {report['typed_data_modules']} modules |
| Typed data by kind | {', '.join(f'{k} {v:,}' for k, v in kinds.items())} bytes |
| Static-data extent | {extent_text} |
| Typed data share of the static-data extent | {data_pct} |
| Decoded executable | {total:,} bytes |
| Image coverage (code ranges + typed data) | {pct} |
| Assets extracted from your dump (not reconstructed) | {report['dump_asset_bytes']:,} bytes in {report['dump_assets']} assets ({report['dump_asset_percent_of_image']:.4f}% of the image) |
{asm_rows}| Retained reference dependence | {left:,} bytes |
| Code-only completion percentage | Unknown |
| Total game function count | Unknown |
| Source-only build | Unavailable |

Complete ranges include literals and padding. Image coverage is **not** the
percentage of game code decompiled. Unmatched candidates earn no completed-byte
credit. Typed static data counts only exact modules of typed source: virtual and
function tables of named functions, pointer tables of named symbols, C string
literals, float and integer arrays, and arrays of checked record structs (see
DATA.md). Opaque byte dumps, high-entropy data, untyped words and pointers written
as integers earn no credit. The static-data extent is an analysis estimate of the bytes outside code,
not a recovered section size. Embedded assets (see DATA.md) are extracted from
your own dump at build time and are counted separately; they earn no coverage
credit. The integrated hybrid image matches the reference, but still requires
{left:,} original bytes besides the assets.{asm_note}

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
    spans = project.layout(manifest, decoded['size'], data, dump_assets.read(root), asm_units.read(root))
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
