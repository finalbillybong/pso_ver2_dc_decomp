#!/usr/bin/env python3
"""Install the pinned CodeWarrior compiler and build GNU SH linking tools locally."""
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tarfile
import urllib.request

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def download(record, path):
    if not path.exists():
        pending = path.with_suffix(path.suffix + '.pending')
        with urllib.request.urlopen(record['url'], timeout=60) as response, pending.open('wb') as out:
            shutil.copyfileobj(response, out)
        if sha(pending) != record['sha256']:
            pending.unlink()
            raise ValueError('Downloaded tool hash mismatch: ' + path.name)
        pending.replace(path)
    if sha(path) != record['sha256']:
        raise ValueError('Existing tool hash mismatch: ' + str(path))


def main():
    scratch = Path(json.loads((ROOT / 'local.json').read_text())['scratch'])
    packages = json.loads((ROOT / 'config/matching-packages.json').read_text())
    receipt_path = ROOT / 'config/matching-installed.json'
    if receipt_path.exists():
        receipt = json.loads(receipt_path.read_text())
        if receipt['packages_sha256'] != sha(ROOT / 'config/matching-packages.json'):
            raise ValueError('Package manifest changed since installation')
        for path, expected in receipt['files'].items():
            if sha(path) != expected:
                raise ValueError('Installed matching tool hash mismatch: ' + path)
        print('Pinned matching tools already installed and verified')
        return

    vendor = scratch / 'vendor'
    cw = vendor / 'cw-dreamcast-r2'
    cw.mkdir(parents=True, exist_ok=True)
    for name, record in packages['codewarrior']['files'].items():
        download(record, cw / name)
    runner_receipt = json.loads((ROOT / packages['runner']).read_text())
    runner = Path(runner_receipt['runner'])
    if sha(runner) != runner_receipt['runner_sha256']:
        raise ValueError('Install the pinned runner with tools/setup_compilers.py first')

    archive = vendor / 'binutils-2.44.tar.xz'
    download(packages['binutils'], archive)
    source = vendor / 'binutils-2.44'
    if not source.exists():
        with tarfile.open(archive) as tar:
            tar.extractall(vendor, filter='data')
    build = scratch / 'binutils-build'
    build.mkdir(exist_ok=True)
    configure = [str(source / 'configure'), '--target=sh-elf', '--disable-nls',
                 '--disable-werror', '--disable-gdb', '--disable-gprofng',
                 '--prefix=' + str(vendor / 'binutils-sh')]
    make = ['make', '-j4', 'all-gas', 'all-ld', 'all-binutils']
    env = dict(os.environ, TMPDIR=str(scratch))
    for name, command in [('configure', configure), ('build', make)]:
        with (scratch / ('binutils-' + name + '.log')).open('w') as log:
            subprocess.run(command, cwd=build, env=env, stdout=log,
                           stderr=subprocess.STDOUT, check=True)
    installed = vendor / 'matching-binutils'
    installed.mkdir(exist_ok=True)
    for source_name, name in [('ld/ld-new', 'sh-elf-ld'),
                              ('binutils/objcopy', 'sh-elf-objcopy'),
                              ('binutils/objdump', 'sh-elf-objdump')]:
        shutil.copy2(build / source_name, installed / name)
    roles = {'runner': runner, 'compiler': cw / 'mwshc.exe',
             'linker': installed / 'sh-elf-ld', 'objcopy': installed / 'sh-elf-objcopy',
             'objdump': installed / 'sh-elf-objdump'}
    paths = list(roles.values()) + [cw / name for name in packages['codewarrior']['files']]
    receipt = {'roles': {k: str(v) for k, v in roles.items()},
               'files': {str(p): sha(p) for p in paths},
               'packages_sha256': sha(ROOT / 'config/matching-packages.json'),
               'binutils_build_commands': [configure, make],
               'host_cc': subprocess.check_output(['gcc', '--version'], text=True).splitlines()[0],
               'original_linker_identified': False}
    receipt_path.write_text(json.dumps(receipt, indent=2) + '\n')
    print('CodeWarrior and GNU SH linking tools installed; hashes recorded')


if __name__ == '__main__':
    main()
