#!/usr/bin/env python3
"""Run pinned Ghidra without placing artifacts outside the scratch workspace."""
import argparse
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('target', choices=['loader', 'game', 'katsuo'])
    parser.add_argument('--base', required=True, help='Evidence-backed hexadecimal load address')
    parser.add_argument('--inspect', nargs='*', default=[])
    parser.add_argument('--existing', action='store_true')
    parser.add_argument('--timeout', type=int, default=600)
    args = parser.parse_args()
    cfg = json.loads((ROOT / 'local.json').read_text())
    scratch = Path(cfg['scratch'])
    ghidra = scratch / 'vendor/ghidra_12.1.4_PUBLIC'
    jdk = scratch / 'vendor/jdk-21.0.12.1+1'
    for path in (ghidra / 'support/analyzeHeadless', jdk / 'bin/java'):
        if not path.is_file():
            raise ValueError('Missing analysis tools: run python3 tools/setup_analysis.py')
    project = scratch / 'ghidra-project'
    project.mkdir(exist_ok=True)
    (scratch / 'analysis').mkdir(exist_ok=True)
    binary = {'loader': '1ST_READ.BIN', 'game': 'DP_ADDRESS.dec.bin',
              'katsuo': 'KATSUO.SEA'}[args.target]
    env = dict(os.environ, JAVA_HOME=str(jdk),
               GHIDRA_HEADLESS_JAVA_OPTIONS=(f'-Duser.home={scratch}/ghidra-home '
                   f'-Djava.io.tmpdir={scratch} -Dapplication.cachedir={scratch}/ghidra-cache '
                   f'-Dapplication.settingsdir={scratch}/ghidra-settings'))
    # Ghidra rejects dot-prefixed project path components. A procfs descriptor
    # alias keeps the actual project in .codex-work without another filesystem location.
    fd = os.open(project, os.O_RDONLY)
    try:
        command = [str(ghidra / 'support/analyzeHeadless'),
                   f'/proc/{os.getpid()}/fd/{fd}', 'pso-' + args.target]
        if args.existing:
            command += ['-process', binary]
        else:
            command += ['-import', str(scratch / 'orig' / binary), '-loader', 'BinaryLoader',
                        '-processor', 'SuperH4:LE:32:default', '-loader-baseAddr', args.base]
        seeds = ([] if args.target == 'katsuo' else [args.base])
        seeds += [value[5:] for value in args.inspect if value.startswith('code:')]
        command += ['-analysisTimeoutPerFile', str(args.timeout), '-max-cpu', '2',
                    '-scriptPath', str(ROOT / 'tools'), '-preScript', 'SeedPso.java', *seeds,
                    '-postScript', 'InspectPso.java',
                    str(scratch / 'analysis' / args.target), *args.inspect]
        log = scratch / ('ghidra-' + args.target + '.log')
        with log.open('w') as f:
            subprocess.run(command, env=env, stdout=f, stderr=subprocess.STDOUT, check=True)
        # Some headless errors are logged despite process status zero.
        text = log.read_text()
        if 'REPORT: Post-analysis succeeded' not in text or 'Analysis timed out' in text:
            raise ValueError(f'Analysis did not complete; inspect {log}')
        print(f'Analysis saved under {scratch / "analysis" / args.target}')
    finally:
        os.close(fd)


if __name__ == '__main__':
    try:
        main()
    except (ValueError, OSError, subprocess.CalledProcessError) as e:
        print(f'ERROR: {e}', file=sys.stderr)
        sys.exit(2)
