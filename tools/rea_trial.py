#!/usr/bin/env python3
"""Run the pinned REA compatibility experiment locally, without agent setup."""
import argparse
import base64
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import tarfile

import project

VERSION = '4.1.0'
INTEGRITY = 'BOig7QyPtOJLZtCa7MIVyecGdsI5C8kX0HHjp9Fo5LkotSqD3cRV91KCp0pakLqLuyF1BFl4RSyV/9F/Wk6OBQ=='


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--node', type=Path, required=True, help='Supported Node executable, e.g. v24.13.0')
    args = parser.parse_args()
    pso, root = project.pso, project.ROOT
    cfg, _, _, _ = project.inputs()
    scratch = Path(cfg['scratch'])
    trial = scratch / 'rea-trial'
    archive = trial / f'rea-agents-{VERSION}.tgz'
    if base64.b64encode(hashlib.sha512(archive.read_bytes()).digest()).decode() != INTEGRITY:
        raise ValueError('REA npm archive integrity mismatch')
    package = trial / 'install/node_modules/rea-agents'
    if pso.read_json(package / 'package.json')['version'] != VERSION:
        raise ValueError('Wrong REA version')
    with tarfile.open(archive) as packed:
        for member in packed.getmembers():
            if member.isfile():
                relative = Path(member.name).relative_to('package')
                if '..' in relative.parts or (package / relative).read_bytes() != packed.extractfile(member).read():
                    raise ValueError('Installed REA differs from the pinned archive: ' + str(relative))
    run = Path(tempfile.mkdtemp(prefix='run-', dir=trial))
    (run / 'tmp').mkdir()
    env = dict(os.environ, TMPDIR=str(run / 'tmp'),
               GHIDRA_INSTALL_DIR=str(scratch / 'vendor/ghidra_12.1.4_PUBLIC'),
               JAVA_HOME=str(scratch / 'vendor/jdk-21.0.12.1+1'))
    env['PATH'] = str(args.node.resolve().parent) + os.pathsep + env['PATH']
    source = scratch / 'orig/DP_ADDRESS.dec.bin'
    elf = scratch / 'project-build/operation_455ac.elf'
    inputs = {str(p): pso.file_hash(p) for p in (source, elf)}
    shutil.copyfile(source, run / 'DP_ADDRESS.dec.bin')
    shutil.copyfile(elf, run / 'operation_455ac.elf')
    results = []
    for name, arguments in [
        ('provider', ['providers']),
        ('raw', ['analyze', str(run / 'DP_ADDRESS.dec.bin'), '--provider', 'ghidra']),
        ('sh4-elf', ['analyze', str(run / 'operation_455ac.elf'), '--provider', 'ghidra']),
    ]:
        command = [str(args.node.resolve()), str(package / 'scripts/rea.mjs'), *arguments, '--format', 'json']
        result = subprocess.run(command, env=env, cwd=run, capture_output=True, timeout=60)
        (run / (name + '.json')).write_bytes(result.stdout)
        (run / (name + '.stderr')).write_bytes(result.stderr)
        results.append({'case': name, 'command': command, 'exit_code': result.returncode})
        print(f'{name}: exit {result.returncode}; evidence {run / (name + ".json")}')
    for path, expected in inputs.items():
        pso.check_hash(Path(path), expected)
    files = [p for p in run.iterdir() if p.is_file()]
    pso.write_json(run / 'receipt.json', {
        'package': f'rea-agents@{VERSION}', 'npm_integrity': 'sha512-' + INTEGRITY,
        'archive_sha256': pso.file_hash(archive),
        'node_version': subprocess.check_output([str(args.node.resolve()), '--version'], text=True).strip(),
        'node_sha256': pso.file_hash(args.node),
        'package_lock_sha256': pso.file_hash(trial / 'install/package-lock.json'),
        'installed_package_sha256': {str(p.relative_to(package)): pso.file_hash(p)
                                     for p in sorted(package.rglob('*')) if p.is_file()},
        'driver_sha256': pso.file_hash(Path(__file__)), 'inputs_sha256': inputs,
        'cases': results, 'artifacts_sha256': {str(p): pso.file_hash(p) for p in files},
        'agent_configuration_changed': False, 'runtime_gameplay_run': False})
    print('Receipt: ' + str(run / 'receipt.json'))


if __name__ == '__main__':
    main()
