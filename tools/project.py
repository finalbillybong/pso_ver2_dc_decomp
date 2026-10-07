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


def layout(manifest, size):
    """Produce a complete, nonoverlapping map without inferring gap contents."""
    base = int(manifest['base_address'], 0)
    position = 0
    result = []
    identifiers = set()
    for unit in sorted(manifest['units'], key=lambda u: int(u['address'], 0)):
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
        result.append({'offset': start, 'size': length, 'origin': 'compiled_source',
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
    reference = Path(cfg['scratch']) / 'orig/DP_ADDRESS.dec.bin'
    pin = pso.read_json(ROOT / 'config/decoded.json')
    pso.check_hash(reference, pin['sha256'])
    data = reference.read_bytes()
    if len(data) != pin['size']:
        raise ValueError('Reference size mismatch')
    spans = layout(manifest, len(data))
    for unit in manifest['units']:
        r = unit['ranges'][0]
        expected = data[r['offset']:r['offset'] + r['size']]
        if hashlib.sha256(expected).hexdigest() != unit['reference_sha256']:
            raise ValueError('Module reference hash mismatch: ' + unit['id'])
    return cfg, manifest, data, spans


def provenance(manifest):
    return {'project_sha256': pso.file_hash(ROOT / 'config/project.json'),
            'driver_sha256': pso.file_hash(Path(__file__)),
            'toolchain_sha256': pso.file_hash(ROOT / 'config/toolchain.json'),
            'headers_sha256': {u['id']: matching.dependencies(ROOT / u['source'], u)
                               for u in manifest['units']},
            'source_sha256': {u['source']: pso.file_hash(ROOT / u['source'])
                              for u in manifest['units']}}


def require_source_coverage(spans):
    retained = sum(s['size'] for s in spans if s['origin'] == 'reference_unreconstructed')
    if retained:
        raise ValueError(f'Source-only build unavailable: {retained:,} bytes still require the reference')


def integrate(spans, outputs, reference=None):
    """With no reference input, every byte must come from a compiled module."""
    if reference is None:
        require_source_coverage(spans)
    image = bytearray()
    for span in spans:
        if span['origin'] == 'compiled_source':
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
            raise ValueError('Assembly cannot count as reconstructed C')
        target = out / (unit['id'] + '.bin')
        matching.compile_unit(source, target, unit)
        r = unit['ranges'][0]
        result = pso.compare_bytes(data[r['offset']:r['offset'] + r['size']], target.read_bytes())
        if not result['exact']:
            raise ValueError('Module does not match: ' + unit['id'] + ' ' + str(result))
        output_hashes[unit['id']] = pso.file_hash(target)
        print(unit['id'] + ': exact, ' + str(r['size']) + ' bytes', flush=True)
    if provenance(manifest) != before:
        raise ValueError('Inputs changed during build')
    # Image integration retains explicit reference-backed gaps; it is not a
    # claim that those regions have been decompiled or independently rebuilt.
    image = integrate(spans, {u['id']: (out / (u['id'] + '.bin')).read_bytes()
                             for u in manifest['units']}, None if source_only else data)
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
    for unit in manifest['units']:
        target = out / (unit['id'] + '.bin')
        pso.check_hash(target, receipt['output_sha256'][unit['id']])
        r = unit['ranges'][0]
        if target.read_bytes() != data[r['offset']:r['offset'] + r['size']]:
            raise ValueError('Module mismatch: ' + unit['id'])
    target = out / 'DP_ADDRESS.rebuilt.bin'
    pso.check_hash(target, receipt['image_sha256'])
    if target.read_bytes() != data:
        raise ValueError('Integrated image mismatch')
    pso.check_hash(out / 'image-map.json', receipt['image_map_sha256'])
    if pso.read_json(out / 'image-map.json') != spans:
        raise ValueError('Image coverage map changed')
    source_bytes = sum(s['size'] for s in spans if s['origin'] == 'compiled_source')
    result = {'objective': manifest['objective'], 'status': 'in_progress',
              'matched_modules': len(manifest['units']),
              'matched_functions': sum(len(u['functions']) for u in manifest['units']),
              'compiled_source_bytes': source_bytes,
              'compiled_function_range_bytes': source_bytes,
              'coverage_note': 'Complete compiled function ranges include local literals and alignment; not an instruction-only byte count.',
              'reconstructed_standalone_data_bytes': 0,
              'reference_unreconstructed_bytes': len(data) - source_bytes,
              'decoded_image_bytes': len(data), 'integrated_image_exact': True,
              'build_mode': 'source_only' if receipt.get('source_only') else 'hybrid_scaffold',
              'full_source_reconstruction_complete': receipt.get('source_only', False) and source_bytes == len(data),
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
