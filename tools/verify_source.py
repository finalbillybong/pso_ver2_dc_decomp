#!/usr/bin/env python3
"""Two fresh exact module builds and the compiler proof, without disc or runtime work."""
import argparse
from pathlib import Path
import tempfile

import project


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--check', action='store_true', help='Revalidate existing evidence without rebuilding')
    args = parser.parse_args()
    pso, root = project.pso, project.ROOT
    cfg = pso.read_json(root / 'local.json')
    manifest = pso.read_json(root / 'config/project.json')
    receipt_path = root / 'config/source-validation.json'
    if args.check:
        receipt = pso.read_json(receipt_path)
        if receipt['project_provenance'] != project.provenance(manifest):
            raise ValueError('Stale source validation provenance')
        pso.check_hash(Path(__file__), receipt['driver_sha256'])
        for path, expected in receipt['artifacts'].items():
            pso.check_hash(Path(path), expected)
        project.report()
        if pso.compare(cfg):
            raise ValueError('Compiler proof does not match')
        print('Source validation evidence is current.')
        return
    scratch = Path(cfg['scratch'])
    evidence = Path(tempfile.mkdtemp(prefix='source-validation-', dir=scratch))
    builds = []
    for index in range(2):
        status = project.build()
        build = pso.read_json(scratch / 'project-build/build.json')
        pso.write_json(evidence / f'build-{index + 1}.json', build)
        builds.append(build)
    if builds[0] != builds[1]:
        raise ValueError('Fresh builds differ')
    pso.build(cfg)
    if pso.compare(cfg):
        raise ValueError('Five-function compiler proof failed')
    checks = ['two_fresh_exact_builds', 'integrated_image_exact', 'five_function_compiler_proof']
    if project.static_data.read(root)['units']:
        # project.build compiled, type-checked, placed and compared every data module.
        checks.append('typed_data_modules_exact')
    if project.dump_assets.read(root)['assets']:
        # project.build extracted every asset from the verified dump and checked its hash.
        checks.append('dump_assets_hash_verified')
    if project.shc_units.shc_units(manifest):
        # project.build compiled each SHC pool group with the pinned Hitachi tools,
        # required code section P only, and compared its complete range.
        checks.append('shc_pool_groups_exact')
    asm = project.asm_units.read(root)
    if project.asm_units.units_of(asm, 'hand'):
        # project.build generated each hand-written routine from the dump, linted,
        # assembled, linked and compared it.
        checks.append('hand_assembly_units_exact')
    if project.asm_units.units_of(asm, 'fallback'):
        # The same chain for the generated not-decompiled fallback assembly.
        checks.append('fallback_assembly_units_exact')
    pso.write_json(receipt_path, {
        'checks': checks,
        'status': status, 'project_provenance': project.provenance(manifest),
        'driver_sha256': pso.file_hash(Path(__file__)),
        'artifacts': {str(p): pso.file_hash(p) for p in sorted(evidence.glob('*.json'))},
        'packaging_tested_by_this_command': False, 'runtime_tested_by_this_command': False})
    print('Two fresh exact builds and the five-function compiler proof passed. No disc repacking or runtime test.')


if __name__ == '__main__':
    main()
