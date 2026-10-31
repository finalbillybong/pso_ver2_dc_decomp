#!/usr/bin/env python3
"""Build an expanding set of matching modules and account for the full image."""
import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import pso
import matching
import data as static_data
import assets as dump_assets
import asm_units
import extracts as dump_extracts
import shc_units


def layout(manifest, size, data=None, assets=None, asm=None, extracts=None):
    """Produce a complete, nonoverlapping map without inferring gap contents.

    Code modules are `compiled_source`; typed static-data modules from
    config/data.json, when given, are `compiled_data`; embedded assets from
    config/assets.json, when given, are `dump_asset` (extracted from your dump,
    not reconstructed); remaining untyped bytes from config/extracts.json, when given,
    are `dump_extract` (also from your dump, re-cut around every other origin); assembly sub-spans from config/asm.json, when given, are
    `assembled_hand` or `assembled_fallback` (generated from your dump, never
    decompiled). Assembly is placed after its committed ranges are reduced around
    the admitted C/SHC/data/asset modules they overlap."""
    base = int(manifest['base_address'], 0)
    position = 0
    result = []
    identifiers = set()
    units = [(u, 'compiled_source') for u in manifest['units']]
    if data is not None:
        static_data.validate(data, base, size, [u['id'] for u in manifest['units']])
        units += [(u, 'compiled_data') for u in data['units']]
    if assets is not None:
        dump_assets.validate(assets, base, size)
        units += [({'id': a['id'], 'address': a['address'], 'source': None,
                    'ranges': [{'offset': a['offset'], 'size': a['size']}]}, 'dump_asset') for a in assets['assets']]
    if asm is not None and asm['units']:
        asm_units.validate(asm, base, size, [u['id'] for u in manifest['units']]
                           + [u['id'] for u in (data or {'units': []})['units']])
        for sp in asm_units.placed_spans(ROOT, asm):
            units.append(({'id': sp['id'], 'address': sp['address'], 'source': None,
                           'ranges': [{'offset': sp['offset'], 'size': sp['size']}]},
                          'assembled_hand' if sp['class'] == 'hand' else 'assembled_fallback'))
    if extracts is not None and extracts['extracts']:
        # Dump extracts fill only what no other origin owns (re-cut on every build).
        dump_extracts.validate(extracts, base, size)
        taken = [(base + u['ranges'][0]['offset'], base + u['ranges'][0]['offset'] + u['ranges'][0]['size'])
                 for u, _ in units]
        for sp in dump_extracts.placed(extracts, base, taken):
            units.append(({'id': sp['id'], 'address': sp['address'], 'source': None,
                           'ranges': [{'offset': sp['offset'], 'size': sp['size']}]}, 'dump_extract'))
    for unit, origin in sorted(units, key=lambda x: int(x[0]['address'], 0)):
        if unit['id'] in identifiers:
            raise ValueError('Duplicate unit identifier')
        identifiers.add(unit['id'])
        if len(unit['ranges']) != 1:
            raise ValueError('Project modules must describe one complete contiguous range')
        r = unit['ranges'][0]
        start, length = r['offset'], r['size']
        if start < position or length <= 0 or start + length > size:
            raise ValueError('Overlapping or invalid module range')
        if base + start != int(unit['address'], 0):
            raise ValueError('Module address and file offset disagree')
        if start > position:
            result.append({'offset': position, 'size': start - position,
                           'origin': 'reference_unreconstructed'})
        result.append({'offset': start, 'size': length, 'origin': origin,
                       'unit': unit['id'], 'source': unit['source']})
        position = start + length
    if position < size:
        result.append({'offset': position, 'size': size - position,
                       'origin': 'reference_unreconstructed'})
    return result


def inputs():
    pso.toolchain()
    matching.load_tools()
    cfg = pso.read_json(ROOT / 'local.json')
    manifest = pso.read_json(ROOT / 'config/project.json')
    if shc_units.shc_units(manifest):
        shc_units.load_shc_tools()
    reference = Path(cfg['scratch']) / 'orig/DP_ADDRESS.dec.bin'
    pin = pso.read_json(ROOT / 'config/decoded.json')
    pso.check_hash(reference, pin['sha256'])
    data = reference.read_bytes()
    if len(data) != pin['size']:
        raise ValueError('Reference size mismatch')
    assets = dump_assets.read(ROOT)
    asm = asm_units.read(ROOT)
    if asm['units']:
        asm_units.load_tools(ROOT)
        asm_units.verify_reference(data, asm, int(manifest['base_address'], 0))
    extracts = dump_extracts.read(ROOT)
    if extracts['extracts']:
        dump_extracts.check(data, extracts)
    spans = layout(manifest, len(data), static_data.read(ROOT), assets, asm, extracts)
    for unit in manifest['units'] + static_data.read(ROOT)['units']:
        r = unit['ranges'][0]
        expected = data[r['offset']:r['offset'] + r['size']]
        if hashlib.sha256(expected).hexdigest() != unit['reference_sha256']:
            raise ValueError('Module reference hash mismatch: ' + unit['id'])
    dump_assets.extract(data, assets)
    return cfg, manifest, data, spans


def provenance(manifest):
    data = static_data.read(ROOT)
    typed = {}
    if data['units']:
        # Without data modules the provenance (and existing receipts) is unchanged.
        typed = {'data_manifest_sha256': pso.file_hash(ROOT / static_data.MANIFEST),
                 'data_driver_sha256': pso.file_hash(ROOT / 'tools/data.py'),
                 'data_source_sha256': {u['source']: pso.file_hash(ROOT / u['source']) for u in data['units']}}
    if dump_assets.read(ROOT)['assets']:
        # Without assets the provenance (and existing receipts) is unchanged.
        typed.update({'assets_manifest_sha256': pso.file_hash(ROOT / dump_assets.MANIFEST),
                      'assets_driver_sha256': pso.file_hash(ROOT / 'tools/assets.py')})
    if asm_units.read(ROOT)['units']:
        # Without assembly units the provenance (and existing receipts) is unchanged.
        typed.update({'asm_manifest_sha256': pso.file_hash(ROOT / asm_units.MANIFEST),
                      'asm_driver_sha256': pso.file_hash(ROOT / 'tools/asm_units.py'),
                      'asm_generator_sha256': pso.file_hash(ROOT / 'tools/asmgen.py')})
    if dump_extracts.read(ROOT)['extracts']:
        # Without extracts the provenance (and existing receipts) is unchanged.
        typed.update({'extracts_manifest_sha256': pso.file_hash(ROOT / dump_extracts.MANIFEST),
                      'extracts_driver_sha256': pso.file_hash(ROOT / 'tools/extracts.py')})
    if shc_units.shc_units(manifest):
        # Without SHC units the provenance (and existing receipts) is unchanged.
        typed.update({'shc_driver_sha256': pso.file_hash(ROOT / 'tools/shc_units.py'),
                      'shc_runner_driver_sha256': pso.file_hash(ROOT / 'tools/shc.py'),
                      'shc_packages_sha256': pso.file_hash(ROOT / 'config/compiler-packages.json')})
    return {**typed, 'project_sha256': pso.file_hash(ROOT / 'config/project.json'),
            'driver_sha256': pso.file_hash(Path(__file__)),
            'matching_driver_sha256': pso.file_hash(ROOT / 'tools/matching.py'),
            'compiler_flags': {u['id']: shc_units.unit_flags(u) for u in manifest['units']},
            'toolchain_sha256': pso.file_hash(ROOT / 'config/toolchain.json'),
            'headers_sha256': {u['id']: matching.dependencies(ROOT / u['source'], u)
                               for u in manifest['units']},
            'source_sha256': {u['source']: pso.file_hash(ROOT / u['source'])
                              for u in manifest['units']}}


def require_source_coverage(spans):
    """Asset and extract bytes come from your dump by design; only unreconstructed bytes block a
    source-only build."""
    retained = sum(s['size'] for s in spans if s['origin'] == 'reference_unreconstructed')
    asset_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_asset')
    extract_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_extract')
    if retained:
        raise ValueError(f'Source-only build unavailable: {retained:,} bytes still require the reference'
                         + (f' (separately, {asset_bytes:,} asset bytes are extracted from your dump' if asset_bytes else '')
                         + (f'{", and" if asset_bytes else " (separately,"} {extract_bytes:,} extract bytes' if extract_bytes else '')
                         + (')' if asset_bytes or extract_bytes else ''))


def integrate(spans, outputs, reference=None):
    """With no reference input, every byte must come from a compiled module."""
    if reference is None:
        require_source_coverage(spans)
    image = bytearray()
    for span in spans:
        if span['origin'] in ('compiled_source', 'compiled_data', 'dump_asset', 'assembled_hand', 'assembled_fallback',
                              'dump_extract'):
            blob = outputs[span['unit']]
            if len(blob) != span['size']:
                raise ValueError('Compiled module size changed: ' + span['unit'])
            image.extend(blob)
        elif reference is not None and span['origin'] == 'reference_unreconstructed':
            image.extend(reference[span['offset']:span['offset'] + span['size']])
        else:
            raise ValueError('Unknown image origin')
    return bytes(image)


def build(source_only=False):
    cfg, manifest, data, spans = inputs()
    if source_only:
        require_source_coverage(spans)
    out = Path(cfg['scratch']) / 'project-build'
    out.mkdir(exist_ok=True)
    # A failed rebuild must not leave an apparently current image or receipt.
    for name in ('build.json', 'DP_ADDRESS.rebuilt.bin', 'image-map.json'):
        (out / name).unlink(missing_ok=True)
    before = provenance(manifest)
    output_hashes = {}
    for unit in manifest['units']:
        source = ROOT / unit['source']
        if any(t in source.read_text() for t in ('__asm', 'asm(', 'asm (', '.incbin')):
            raise ValueError('Assembly cannot count as reconstructed C/C++')
        target = out / (unit['id'] + '.bin')
        shc_units.compile_unit(source, target, unit)
        r = unit['ranges'][0]
        result = pso.compare_bytes(data[r['offset']:r['offset'] + r['size']], target.read_bytes())
        if not result['exact']:
            raise ValueError('Module does not match: ' + unit['id'] + ' ' + str(result))
        output_hashes[unit['id']] = pso.file_hash(target)
        print(unit['id'] + ': exact, ' + str(r['size']) + ' bytes', flush=True)
    # Typed static data: only .rodata, typed pointers, placement at each declared
    # object address and the complete reference range are all required.
    data_units = static_data.read(ROOT)['units']
    for unit in data_units:
        target = out / (unit['id'] + '.bin')
        static_data.compile_unit(ROOT / unit['source'], target, unit)
        r = unit['ranges'][0]
        result = pso.compare_bytes(data[r['offset']:r['offset'] + r['size']], target.read_bytes())
        if not result['exact']:
            raise ValueError('Data module does not match: ' + unit['id'] + ' ' + str(result))
        output_hashes[unit['id']] = pso.file_hash(target)
        print(unit['id'] + ': exact typed data, ' + str(r['size']) + ' bytes', flush=True)
    # Embedded assets: extracted from your verified dump (hash-checked), never committed.
    asset_blobs = dump_assets.extract(data, dump_assets.read(ROOT), out / 'assets')
    for name, blob in asset_blobs.items():
        output_hashes[name] = hashlib.sha256(blob).hexdigest()
    # Assembly units: generated from your dump into scratch (never committed), then linted,
    # assembled, linked and compared. Not decompiled code; placed by its own origins.
    asm_blobs = {}
    if asm_units.read(ROOT)['units']:
        asm_blobs = asm_units.build_units(ROOT, data, out / 'asm-gen')
        for name, blob in asm_blobs.items():
            output_hashes[name] = hashlib.sha256(blob).hexdigest()
        print(f'{len(asm_blobs)} assembly sub-units: exact', flush=True)
    # Dump extracts: the remaining untyped bytes, from your verified dump (hash-checked).
    extract_blobs = {sp['unit']: data[sp['offset']:sp['offset'] + sp['size']]
                     for sp in spans if sp['origin'] == 'dump_extract'}
    for name, blob in extract_blobs.items():
        output_hashes[name] = hashlib.sha256(blob).hexdigest()
    if provenance(manifest) != before:
        raise ValueError('Inputs changed during build')
    # Image integration retains explicit reference-backed gaps; it is not a
    # claim that those regions have been decompiled or independently rebuilt.
    image = integrate(spans, {**{u['id']: (out / (u['id'] + '.bin')).read_bytes()
                                for u in manifest['units'] + data_units}, **asset_blobs, **asm_blobs, **extract_blobs},
                      None if source_only else data)
    if image != data:
        raise ValueError('Integrated image differs from pinned executable')
    target = out / 'DP_ADDRESS.rebuilt.bin'
    target.write_bytes(image)
    pso.write_json(out / 'image-map.json', spans)
    pso.write_json(out / 'build.json', {**before, 'source_only': source_only, 'output_sha256': output_hashes,
        'image_sha256': pso.file_hash(target), 'image_map_sha256': pso.file_hash(out / 'image-map.json')})
    return report()


def report():
    cfg, manifest, data, spans = inputs()
    out = Path(cfg['scratch']) / 'project-build'
    receipt = pso.read_json(out / 'build.json')
    for k, v in provenance(manifest).items():
        if receipt.get(k) != v:
            raise ValueError('Stale project build: ' + k)
    data_units = static_data.read(ROOT)['units']
    for unit in manifest['units'] + data_units:
        target = out / (unit['id'] + '.bin')
        pso.check_hash(target, receipt['output_sha256'][unit['id']])
        r = unit['ranges'][0]
        if target.read_bytes() != data[r['offset']:r['offset'] + r['size']]:
            raise ValueError('Module mismatch: ' + unit['id'])
    for name, blob in dump_assets.extract(data, dump_assets.read(ROOT)).items():
        if receipt['output_sha256'].get(name) != hashlib.sha256(blob).hexdigest():
            raise ValueError('Asset changed since build: ' + name)
    for sp in asm_units.placed_spans(ROOT):
        if receipt['output_sha256'].get(sp['id']) != hashlib.sha256(bytes(data[sp['offset']:sp['offset'] + sp['size']])).hexdigest():
            raise ValueError('Assembly unit changed since build: ' + sp['id'])
    for sp in spans:
        if sp['origin'] == 'dump_extract' and receipt['output_sha256'].get(sp['unit']) != \
                hashlib.sha256(data[sp['offset']:sp['offset'] + sp['size']]).hexdigest():
            raise ValueError('Dump extract changed since build: ' + sp['unit'])
    target = out / 'DP_ADDRESS.rebuilt.bin'
    pso.check_hash(target, receipt['image_sha256'])
    if target.read_bytes() != data:
        raise ValueError('Integrated image mismatch')
    pso.check_hash(out / 'image-map.json', receipt['image_map_sha256'])
    if pso.read_json(out / 'image-map.json') != spans:
        raise ValueError('Image coverage map changed')
    source_bytes = sum(s['size'] for s in spans if s['origin'] == 'compiled_source')
    data_bytes = sum(s['size'] for s in spans if s['origin'] == 'compiled_data')
    asset_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_asset')
    hand_bytes = sum(s['size'] for s in spans if s['origin'] == 'assembled_hand')
    fallback_bytes = sum(s['size'] for s in spans if s['origin'] == 'assembled_fallback')
    extract_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_extract')
    asm = asm_units.read(ROOT)
    asm_report = {}
    if asm['units']:
        asm_report = {'hand_assembly_units': len(asm_units.units_of(asm, 'hand')), 'hand_assembly_bytes': hand_bytes,
                      'fallback_assembly_units': len(asm_units.units_of(asm, 'fallback')), 'fallback_assembly_bytes': fallback_bytes,
                      'assembly_note': 'Assembly is generated from your dump and is not decompiled code. Fallback assembly stands in for code without matching C and earns no code or matching credit.'}
    result = {'objective': manifest['objective'], 'status': 'in_progress',
              'matched_modules': len(manifest['units']),
              'matched_functions': sum(len(u['functions']) for u in manifest['units']),
              **({'shc_modules': len(shc_units.shc_units(manifest)),
                  'shc_compiled_bytes': sum(u['ranges'][0]['size'] for u in shc_units.shc_units(manifest))}
                 if shc_units.shc_units(manifest) else {}),
              'compiled_source_bytes': source_bytes,
              'compiled_function_range_bytes': source_bytes,
              'coverage_note': 'Complete compiled function ranges include local literals and alignment; not an instruction-only byte count.',
              'reconstructed_standalone_data_bytes': data_bytes,
              'typed_data_modules': len(data_units),
              'dump_asset_bytes': asset_bytes,
              'dump_assets': len(dump_assets.read(ROOT)['assets']),
              **asm_report,
              **({'dump_extract_bytes': extract_bytes, 'dump_extracts': len(dump_extracts.read(ROOT)['extracts'])}
                 if dump_extracts.read(ROOT)['extracts'] else {}),
              'reference_unreconstructed_bytes': len(data) - source_bytes - data_bytes - asset_bytes - hand_bytes
                                                 - fallback_bytes - extract_bytes,
              'decoded_image_bytes': len(data), 'integrated_image_exact': True,
              'build_mode': 'source_only' if receipt.get('source_only') else 'hybrid_scaffold',
              'full_source_reconstruction_complete': receipt.get('source_only', False) and source_bytes + data_bytes + asset_bytes == len(data),
              'source_only_build_exact': bool(receipt.get('source_only')),
              'runtime_tested_by_this_command': False, 'image': str(target)}
    pso.write_json(out / 'status.json', result)
    print(json.dumps(result, indent=2))
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('command', choices=['build', 'report'])
    parser.add_argument('--source-only', action='store_true',
                        help='Build without copying reference gaps; fail if coverage is incomplete')
    args = parser.parse_args()
    try:
        if args.command == 'build':
            build(source_only=args.source_only)
        else:
            if args.source_only:
                parser.error('--source-only applies to build')
            report()
    except (OSError, ValueError, KeyError) as error:
        parser.exit(2, 'ERROR: ' + str(error) + '\n')
