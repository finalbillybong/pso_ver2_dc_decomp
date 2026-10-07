#!/usr/bin/env python3
"""Export focused function evidence from a disposable copy of the existing PSO database."""
import argparse
import json
import os
from pathlib import Path
import shutil
import signal
import subprocess
import tempfile

import project


def run_headless(command, env, log, timeout=300):
    process = subprocess.Popen(command, env=env, stdout=log, stderr=subprocess.STDOUT,
                               start_new_session=True)
    try:
        code = process.wait(timeout=timeout)
        if code:
            raise subprocess.CalledProcessError(code, command)
    except BaseException:
        # The shell launcher may have a Java child. Clean the owned group only.
        try:
            try:
                os.killpg(process.pid, signal.SIGTERM)
            except ProcessLookupError:
                pass
            try:
                process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                pass
        finally:
            try:
                os.killpg(process.pid, signal.SIGKILL)
            except ProcessLookupError:
                pass
            process.wait()
        raise


def project_hashes(directory):
    paths = [directory / 'pso-game.gpr', *(directory / 'pso-game.rep').rglob('*')]
    return {str(p.relative_to(directory)): project.pso.file_hash(p)
            for p in sorted(paths) if p.is_file()}


def requested_ranges(manifest, queue, names, image_size):
    available = {u['id']: u for u in [*manifest['units'], *queue['targets']]}
    base = int(manifest['base_address'], 0)
    result = []
    for name in names:
        if name not in available:
            raise ValueError('Unknown target: ' + name)
        unit = available[name]
        address = int(unit['address'], 0)
        size = (unit['ranges'][0]['size'] if 'ranges' in unit
                else int(unit['end'], 0) - address)
        if address < base or size <= 0 or address - base + size + 32 > image_size:
            raise ValueError('Invalid target range: ' + name)
        result.append({'id': name, 'address': address, 'size': size})
    return result


def verify_receipt(receipt_path):
    pso, root = project.pso, project.ROOT
    receipt = pso.read_json(receipt_path)
    for relative, expected in receipt['project_inputs_sha256'].items():
        pso.check_hash(root / relative, expected)
    for path, expected in receipt['artifacts_sha256'].items():
        pso.check_hash(Path(path), expected)
    for path, expected in receipt['tool_inputs_sha256'].items():
        pso.check_hash(Path(path), expected)
    cfg, _, _, _ = project.inputs()
    if project_hashes(Path(cfg['scratch']) / 'ghidra-project') != receipt['database_sha256']:
        raise ValueError('Stale dossier: existing Ghidra database changed')
    print('Dossier evidence is current: ' + str(receipt_path))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('targets', nargs='*', help='Manifest/queue IDs; defaults to unresolved targets')
    parser.add_argument('--check', type=Path, help='Check a prior receipt without rerunning analysis')
    args = parser.parse_args()
    if args.check:
        verify_receipt(args.check)
        return
    pso, root = project.pso, project.ROOT
    cfg, manifest, reference, _ = project.inputs()
    queue = pso.read_json(root / 'config/reconstruction-targets.json')
    requests = requested_ranges(manifest, queue, args.targets or [u['id'] for u in queue['targets']], len(reference))
    scratch = Path(cfg['scratch'])
    source_project = scratch / 'ghidra-project'
    for lock in ('pso-game.lock', 'pso-game.gpr.lock'):
        if (source_project / lock).exists():
            raise ValueError('Ghidra database is locked; close its owner before exporting')
    before = project_hashes(source_project)
    parent = scratch / 'function-dossiers'
    parent.mkdir(exist_ok=True)
    run = Path(tempfile.mkdtemp(prefix='run-', dir=parent))
    database = run / 'database'
    database.mkdir()
    shutil.copyfile(source_project / 'pso-game.gpr', database / 'pso-game.gpr')
    shutil.copytree(source_project / 'pso-game.rep', database / 'pso-game.rep')
    if project_hashes(database) != before:
        raise ValueError('Database changed while copying')
    ghidra = scratch / 'vendor/ghidra_12.1.4_PUBLIC'
    jdk = scratch / 'vendor/jdk-21.0.12.1+1'
    env = dict(os.environ, JAVA_HOME=str(jdk), GHIDRA_HEADLESS_JAVA_OPTIONS=(
        f'-Duser.home={run}/home -Djava.io.tmpdir={run} '
        f'-Dapplication.cachedir={run}/cache -Dapplication.settingsdir={run}/settings'))
    tracked = ['tools/dossier.py', 'tools/FunctionDossier.java', 'config/project.json',
               'tools/setup_analysis.py', 'config/reconstruction-targets.json',
               'config/decoded.json', 'config/analysis.json']
    inputs = {name: pso.file_hash(root / name) for name in tracked}
    fd = os.open(database, os.O_RDONLY)
    try:
        command = [str(ghidra / 'support/analyzeHeadless'), f'/proc/{os.getpid()}/fd/{fd}',
                   'pso-game', '-process', 'DP_ADDRESS.dec.bin', '-noanalysis', '-readOnly',
                   '-scriptPath', str(root / 'tools'), '-postScript', 'FunctionDossier.java',
                   str(run / 'evidence'), *[f'{r["address"]:x},{r["size"]}' for r in requests]]
        with (run / 'ghidra.log').open('w') as log:
            run_headless(command, env, log)
        if 'PSO_DOSSIER_COMPLETE' not in (run / 'ghidra.log').read_text():
            raise ValueError('Ghidra export failed; inspect ' + str(run / 'ghidra.log'))
    finally:
        os.close(fd)
    base = int(manifest['base_address'], 0)
    for r in requests:
        start = r['address'] - base
        blob = run / 'evidence' / f'{r["address"]:x}.bin'
        if blob.read_bytes() != reference[start:start + r['size']]:
            raise ValueError('Ghidra memory differs from the pinned reference: ' + r['id'])
        dossier = pso.read_json(blob.with_suffix('.json'))
        if dossier['language'] != 'SuperH4:LE:32:default':
            raise ValueError('Wrong Ghidra processor context')
    if before != project_hashes(source_project):
        raise ValueError('Original Ghidra project changed during export')
    if inputs != {name: pso.file_hash(root / name) for name in tracked}:
        raise ValueError('Export inputs changed during run')
    tools = [ghidra / 'support/analyzeHeadless', ghidra / 'Ghidra/application.properties',
             jdk / 'bin/java', jdk / 'lib/modules', *ghidra.rglob('*.jar'),
             ghidra / 'Ghidra/Features/Decompiler/os/linux_x86_64/decompile',
             *[p for p in (ghidra / 'Ghidra/Processors/SuperH4/data/languages').rglob('*') if p.is_file()]]
    pso.write_json(run / 'receipt.json', {
        'project_inputs_sha256': inputs, 'database_sha256': before,
        'tool_inputs_sha256': {str(p): pso.file_hash(p) for p in tools},
        'artifacts_sha256': {str(p): pso.file_hash(p) for p in sorted((run / 'evidence').iterdir())},
        'requests': requests, 'command': command,
        'reference_sha256': pso.file_hash(scratch / 'orig/DP_ADDRESS.dec.bin'),
        'source_database_unchanged': True, 'read_only': True,
        'compilation_or_matching_proof': False})
    summary = []
    for r in requests:
        d = pso.read_json(run / 'evidence' / f'{r["address"]:x}.json')
        summary.append({'id': r['id'], 'entry': hex(r['address']), 'compared_bytes': r['size'],
                        'references_to_entry': len(d['references_to_entry']),
                        'instruction_references': len(d['references_from_instructions']),
                        'decompilation_completed': d['decompilation_completed']})
    print(json.dumps(summary, indent=2))
    print('Focused evidence and receipt: ' + str(run))


if __name__ == '__main__':
    main()
