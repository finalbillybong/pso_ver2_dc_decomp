#!/usr/bin/env python3
"""Download fixed Ghidra/JDK releases, verify published hashes, extract locally."""
import hashlib
import json
from pathlib import Path
import tarfile
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
TOOLS = [
    ('ghidra.zip', 'https://github.com/NationalSecurityAgency/ghidra/releases/download/'
     'Ghidra_12.1.4_build/ghidra_12.1.4_PUBLIC_20260921.zip',
     'ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db',
     'ghidra_12.1.4_PUBLIC'),
    ('jdk.tar.gz', 'https://github.com/adoptium/temurin21-binaries/releases/download/'
     'jdk-21.0.12.1%2B1/OpenJDK21U-jdk_x64_linux_hotspot_21.0.12.1_1.tar.gz',
     'ce79869e1307ed8ee1e2baa86a412b1eb5b75d10a01006d788a6f968bcfaee94',
     'jdk-21.0.12.1+1'),
]


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    vendor = Path(cfg['scratch']) / 'vendor'
    vendor.mkdir(parents=True, exist_ok=True)
    for name, url, expected, directory in TOOLS:
        archive = vendor / name
        if not archive.exists():
            partial = archive.with_suffix('.download')
            urllib.request.urlretrieve(url, partial)
            partial.replace(archive)
        with archive.open('rb') as f:
            actual = hashlib.file_digest(f, 'sha256').hexdigest()
        if actual != expected:
            raise ValueError(f'Archive checksum mismatch: {archive}')
        if not (vendor / directory).exists():
            if name.endswith('.zip'):
                with zipfile.ZipFile(archive) as z:
                    for info in z.infolist():
                        destination = (vendor / info.filename).resolve()
                        if not destination.is_relative_to(vendor.resolve()):
                            raise ValueError('Unsafe archive path')
                    z.extractall(vendor)
                    for info in z.infolist():
                        mode = info.external_attr >> 16
                        if mode & 0o111:
                            (vendor / info.filename).chmod(mode & 0o777)
            else:
                with tarfile.open(archive) as t:
                    t.extractall(vendor, filter='data')
        print(f'Archive verified; available: {directory}')


if __name__ == '__main__':
    main()
