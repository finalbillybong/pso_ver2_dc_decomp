#!/usr/bin/env python3
"""Build the upstream decoder locally, with fixed source revisions."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PINS = {
    'newserv': '8a75f6ef92cefe84c7be1827fb6248b1c55cd978',
    'phosg': '5c2a7213dafb698e3eac41828a86204d848bc7ba',
}


def run(args):
    subprocess.run([str(x) for x in args], check=True)


def sha(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    scratch = Path(cfg['scratch'])
    vendor = scratch / 'vendor'
    vendor.mkdir(parents=True, exist_ok=True)
    for name, commit in PINS.items():
        repo = vendor / name
        if not repo.exists():
            run(['git', 'init', repo])
            run(['git', '-C', repo, 'remote', 'add', 'origin',
                 f'https://github.com/fuzziqersoftware/{name}.git'])
            run(['git', '-C', repo, 'fetch', '--depth', '1', 'origin', commit])
            run(['git', '-C', repo, 'checkout', '--detach', 'FETCH_HEAD'])
        head = subprocess.check_output(['git', '-C', str(repo), 'rev-parse', 'HEAD'], text=True).strip()
        dirty = subprocess.check_output(['git', '-C', str(repo), 'status', '--porcelain'], text=True)
        if head != commit or dirty:
            raise ValueError(f'{name} must be clean at {commit}; refusing to overwrite checkout')
    build = scratch / 'build'
    run(['cmake', '-S', vendor / 'phosg', '-B', build / 'phosg',
         '-DCMAKE_BUILD_TYPE=Release', f'-DCMAKE_INSTALL_PREFIX={scratch / "prefix"}'])
    run(['cmake', '--build', build / 'phosg', '--target', 'phosg', '-j', '4'])
    include = scratch / 'include'
    include.mkdir(exist_ok=True)
    if not (include / 'phosg').exists():
        (include / 'phosg').symlink_to(vendor / 'phosg/src', target_is_directory=True)
    src = vendor / 'newserv/src'
    command = ['g++', '-std=c++23', '-O2', '-ffunction-sections', '-fdata-sections',
               '-I', str(include), '-I', str(src), str(ROOT / 'tools/decode_main.cc'),
               *[str(src / name) for name in ('DCSerialNumbers.cc', 'PSOEncryption.cc', 'Compression.cc')],
               str(build / 'phosg/libphosg.a'), '-Wl,--gc-sections', '-lz', '-lpthread',
               '-o', cfg['decoder']]
    run(command)
    record = {**{k + '_commit': v for k, v in PINS.items()},
              'decoder_sha256': sha(Path(cfg['decoder'])), 'command': command,
              'wrapper_sha256': sha(ROOT / 'tools/decode_main.cc'),
              'host_compiler': subprocess.check_output(['g++', '--version'], text=True).splitlines()[0]}
    (ROOT / 'config/decoder-build.json').write_text(json.dumps(record, indent=2) + '\n')
    print('Decoder built; this is a host tool, not the missing SH-4 compiler.')


if __name__ == '__main__':
    try:
        main()
    except (OSError, ValueError, subprocess.CalledProcessError) as e:
        print(f'ERROR: {e}', file=sys.stderr)
        sys.exit(2)
