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
import shc_units


def layout(manifest, size, data=None, assets=None):
    """Produce a complete, nonoverlapping map without inferring gap contents.

    Code modules are `compiled_source`; typed static-data modules from
    config/data.json, when given, are `compiled_data`; embedded assets from
    config/assets.json, when given, are `dump_asset` (extracted from your dump,
    not reconstructed)."""
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
    spans = layout(manifest, len(data), static_data.read(ROOT), assets)
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
    """Asset bytes come from your dump by design; only unreconstructed bytes block a source-only build."""
    retained = sum(s['size'] for s in spans if s['origin'] == 'reference_unreconstructed')
    asset_bytes = sum(s['size'] for s in spans if s['origin'] == 'dump_asset')
    if retained:
        raise ValueError(f'Source-only build unavailable: {retained:,} bytes still require the reference'
                         + (f' (separately, {asset_bytes:,} asset bytes are extracted from your dump)' if asset_bytes else ''))


def integrate(spans, outputs, reference=None):
    """With no reference input, every byte must come from a compiled module."""
    if reference is None:
        require_source_coverage(spans)
    image = bytearray()
    for span in spans:
        if span['origin'] in ('compiled_source', 'compiled_data', 'dump_asset'):
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
    if provenance(manifest) != before:
        raise ValueError('Inputs changed during build')
    # Image integration retains explicit reference-backed gaps; it is not a
    # claim that those regions have been decompiled or independently rebuilt.
    image = integrate(spans, {**{u['id']: (out / (u['id'] + '.bin')).read_bytes()
                                for u in manifest['units'] + data_units}, **asset_blobs},
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
              'reference_unreconstructed_bytes': len(data) - source_bytes - data_bytes - asset_bytes,
              'decoded_image_bytes': len(data), 'integrated_image_exact': True,
              'build_mode': 'source_only' if receipt.get('source_only') else 'hybrid_scaffold',
              'full_source_reconstruction_complete': receipt.get('source_only', False) and source_bytes + data_bytes + asset_bytes == len(data),
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
