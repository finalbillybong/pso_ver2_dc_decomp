#!/usr/bin/env python3
"""Install pinned Dreamcast-era SHC compilers locally from decomp.me archives."""
import hashlib
import json
from pathlib import Path
import tarfile
import urllib.request

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def fetch(url, path, expected):
    if not path.exists():
        pending = path.with_suffix('.download')
        urllib.request.urlretrieve(url, pending)
        if sha(pending) != expected:
            pending.unlink()
            raise ValueError(f'Download hash mismatch: {url}')
        pending.replace(path)
    if sha(path) != expected:
        raise ValueError(f'Installed download hash mismatch: {path}')


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    lock = json.loads((ROOT / 'config/compiler-packages.json').read_text())
    vendor = Path(cfg['scratch']) / 'vendor'
    vendor.mkdir(parents=True, exist_ok=True)
    runner = vendor / 'wibo'
    fetch(lock['runner']['url'], runner, lock['runner']['sha256'])
    runner.chmod(0o755)
    installed = {}
    for package in lock['compilers']:
        archive = vendor / (package['id'] + '.tar.gz')
        fetch(package['url'], archive, package['sha256'])
        destination = vendor / package['id']
        destination.mkdir(exist_ok=True)
        # Verify installed files against the pinned archive on every run; only
        # write absent files. Never silently bless an altered tool installation.
        files = {}
        with tarfile.open(archive) as tar:
            for member in tar.getmembers():
                path = (destination / member.name).resolve()
                if not path.is_relative_to(destination.resolve()):
                    raise ValueError('Unsafe archive path')
                if member.isdir():
                    path.mkdir(parents=True, exist_ok=True)
                elif member.isfile():
                    data = tar.extractfile(member).read()
                    expected = hashlib.sha256(data).hexdigest()
                    if path.exists() and sha(path) != expected:
                        raise ValueError(f'Modified compiler file: {path}')
                    if not path.exists():
                        path.parent.mkdir(parents=True, exist_ok=True)
                        path.write_bytes(data)
                    files[member.name] = expected
                else:
                    raise ValueError('Unsupported archive member')
        installed[package['id']] = {'directory': str(destination), 'files': files}
        print('Installed and verified:', package['id'])
    receipt = {'runner': str(runner), 'runner_sha256': sha(runner), 'compilers': installed}
    (ROOT / 'config/installed-compilers.json').write_text(json.dumps(receipt, indent=2) + '\n')


if __name__ == '__main__':
    main()
