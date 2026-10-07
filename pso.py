#!/usr/bin/env python3
"""Local PSO matching workbench. No game data or compiler is distributed here."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parent
NAMES = ('DP_ADDRESS.JPN', 'KATSUO.SEA', 'IWASHI.SEA', '1ST_READ.BIN')
SECTOR = 2048


def digest(data):
    return hashlib.sha256(data).hexdigest()


def file_hash(path):
    with Path(path).open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def read_json(path):
    return json.loads(Path(path).read_text())


def write_json(path, value):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    temp = path.with_suffix(path.suffix + '.tmp')
    temp.write_text(json.dumps(value, indent=2, sort_keys=True) + '\n')
    temp.replace(path)


def check_hash(path, expected):
    actual = file_hash(path)
    if actual != expected:
        raise ValueError(f'Reference hash mismatch: {path}')
    return actual


def read_exact(f, offset, size):
    if offset < 0 or size < 0:
        raise ValueError('Invalid file range')
    f.seek(offset)
    data = f.read(size)
    if len(data) != size:
        raise ValueError('Truncated input')
    return data


def both32(data, offset):
    little = struct.unpack_from('<I', data, offset)[0]
    big = struct.unpack_from('>I', data, offset + 4)[0]
    if little != big:
        raise ValueError('ISO endian fields disagree')
    return little


class Disc:
    def __init__(self, path, base_lba=45000):
        self.path = Path(path)
        self.base_lba = base_lba

    def extent(self, lba, size):
        with self.path.open('rb') as f:
            return read_exact(f, (lba - self.base_lba) * SECTOR, size)

    def inventory(self):
        with self.path.open('rb') as f:
            header = read_exact(f, 0, 256)
            pvd = read_exact(f, 16 * SECTOR, SECTOR)
        if pvd[:7] != b'\x01CD001\x01':
            raise ValueError('Expected ISO9660 primary volume descriptor')
        if struct.unpack_from('<H', pvd, 128)[0] != SECTOR:
            raise ValueError('Unsupported logical sector size')
        entries = {}
        visited = set()

        def walk(prefix, lba, size):
            if lba in visited:
                raise ValueError('Repeated/cyclic directory extent')
            visited.add(lba)
            data = self.extent(lba, size)
            pos = 0
            while pos < len(data):
                length = data[pos]
                if not length:
                    pos = (pos // SECTOR + 1) * SECTOR
                    continue
                if length < 34 or pos + length > len(data):
                    raise ValueError('Invalid ISO directory record')
                record = data[pos:pos + length]
                pos += length
                if 33 + record[32] > length or record[25] & 0x80:
                    raise ValueError('Invalid or unsupported multi-extent record')
                name = record[33:33 + record[32]]
                if name in (b'\0', b'\1'):
                    continue
                name = name.decode('ascii').split(';')[0]
                if '/' in name or name in ('', '.', '..'):
                    raise ValueError('Unsafe ISO filename')
                full = prefix + '/' + name
                entry = {'lba': both32(record, 2), 'size': both32(record, 10),
                         'directory': bool(record[25] & 2)}
                if full in entries:
                    raise ValueError('Duplicate ISO path')
                entries[full] = entry
                if entry['directory']:
                    walk(full, entry['lba'], entry['size'])

        walk('', both32(pvd, 158), both32(pvd, 166))
        identity = {key: header[a:b].decode('ascii').strip() for key, a, b in (
            ('product', 0x40, 0x4a), ('version', 0x4a, 0x50),
            ('date', 0x50, 0x60), ('boot_file', 0x60, 0x70), ('title', 0x80, 0x100))}
        return identity, entries


def raw_extent(path, sector_index, size):
    result = bytearray()
    with Path(path).open('rb') as f:
        while len(result) < size:
            sector = read_exact(f, sector_index * 2352, 2352)
            if sector[:12] != b'\x00' + b'\xff' * 10 + b'\x00' or sector[15] != 1:
                raise ValueError('Expected raw Mode 1 sector')
            result.extend(sector[16:16 + min(SECTOR, size - len(result))])
            sector_index += 1
    return bytes(result)


def extract(cfg):
    disc = Disc(cfg['iso'])
    identity, entries = disc.inventory()
    files, buffers = {}, {}
    for name in NAMES:
        entry = entries['/' + name]
        data = disc.extent(entry['lba'], entry['size'])
        raw = raw_extent(cfg['track'], entry['lba'] - disc.base_lba, entry['size'])
        if data != raw:
            raise ValueError(f'ISO/track mismatch for {name}')
        files[name] = {**entry, 'sha256': digest(data), 'raw_track_verified': True,
                       'iso_offset': (entry['lba'] - disc.base_lba) * SECTOR}
        buffers[name] = data
    manifest = {'identity': identity, 'iso_sha256': file_hash(cfg['iso']),
                'track_sha256': file_hash(cfg['track']), 'base_lba': disc.base_lba,
                'inventory_entries': len(entries), 'files': files}
    reference = ROOT / 'config/reference.json'
    if reference.exists() and read_json(reference) != manifest:
        raise ValueError('Input differs from pinned reference; no files were overwritten')
    if not reference.exists():
        write_json(reference, manifest)
    out = Path(cfg['scratch']) / 'orig'
    out.mkdir(parents=True, exist_ok=True)
    for name, data in buffers.items():
        (out / name).write_bytes(data)
    write_json(Path(cfg['scratch']) / 'inventory.json', entries)
    print(f'Verified {len(files)} files against raw track; {len(entries)} filesystem entries')


def verified_inputs(cfg):
    manifest = read_json(ROOT / 'config/reference.json')
    orig = Path(cfg['scratch']) / 'orig'
    for name, entry in manifest['files'].items():
        check_hash(orig / name, entry['sha256'])
    return orig


def decode(cfg):
    orig = verified_inputs(cfg)
    decoder = Path(cfg['decoder'])
    if not decoder.is_file():
        raise ValueError('Missing decoder; run python3 tools/setup.py')
    lock = read_json(ROOT / 'config/decoder-build.json')
    check_hash(decoder, lock['decoder_sha256'])
    output = orig / 'DP_ADDRESS.dec.bin'
    pending = output.with_suffix('.pending')
    subprocess.run([str(decoder), str(orig / NAMES[0]), str(orig / NAMES[2]),
                    str(orig / NAMES[1]), str(pending)], check=True)
    data = pending.read_bytes()
    declared = struct.unpack_from('<I', (orig / NAMES[0]).read_bytes())[0]
    if len(data) != declared:
        pending.unlink()
        raise ValueError('Decoded size disagrees with executable header')
    record = {'sha256': digest(data), 'size': len(data),
              'newserv_commit': lock['newserv_commit']}
    pin = ROOT / 'config/decoded.json'
    if pin.exists() and read_json(pin) != record:
        pending.unlink()
        raise ValueError('Decoded output differs from pinned reference')
    if not pin.exists():
        write_json(pin, record)
    pending.replace(output)
    print(f'Decoded {len(data)} bytes; SHA-256 {record["sha256"]}')


def compare_bytes(expected, actual):
    for i, (a, b) in enumerate(zip(expected, actual)):
        if a != b:
            return {'exact': False, 'first_mismatch': i, 'expected': a, 'actual': b}
    if len(expected) != len(actual):
        return {'exact': False, 'first_mismatch': min(len(expected), len(actual)),
                'expected_size': len(expected), 'actual_size': len(actual)}
    return {'exact': True, 'size': len(expected)}


def samples():
    value = read_json(ROOT / 'config/samples.json')
    if value['status'] != 'frozen' or len(value['samples']) != 5:
        raise ValueError('Five reviewed representative samples have not been frozen; compiler gate remains open')
    if {s['category'] for s in value['samples']} != set(value['required_categories']):
        raise ValueError('Samples do not cover all required categories')
    if len({s['id'] for s in value['samples']}) != 5:
        raise ValueError('Sample identifiers must be unique')
    return value['samples']


def toolchain():
    tc = read_json(ROOT / 'config/toolchain.json')
    if tc['status'] != 'ready' or not tc['command'] or not tc['executables']:
        raise ValueError(tc.get('reason', 'Matching toolchain not configured') +
                         ' See config/toolchain.json; installed compilers can be used via tools/shc.py.')
    for executable, sha in tc['executables'].items():
        check_hash(executable, sha)
    return tc


def build(cfg):
    tc = toolchain()
    batch = samples()
    out = Path(cfg['scratch']) / 'candidates'
    out.mkdir(parents=True, exist_ok=True)
    for sample in batch:
        target = out / (sample['id'] + '.bin')
        receipt = target.with_suffix('.json')
        target.unlink(missing_ok=True)
        receipt.unlink(missing_ok=True)
        source = ROOT / sample['source']
        text = source.read_text()
        if any(token in text for token in ('__asm', 'asm(', 'asm (', '.incbin')):
            raise ValueError('Assembly candidates cannot count as C/C++ matches')
        # A pinned toolchain driver must emit exactly the ranges described by the
        # sample, in listed order, after linking at their original addresses.
        mapping = {'source': str(source), 'output': str(target),
                   'sample': sample['id'], 'root': str(ROOT)}
        command = [arg.format(**mapping) for arg in tc['command']]
        env = {**os.environ, 'WINEPREFIX': str(Path(cfg['scratch']) / 'wine')}
        subprocess.run(command, cwd=ROOT, env=env, check=True)
        write_json(receipt, {'source_sha256': file_hash(source),
                            'toolchain_sha256': file_hash(ROOT / 'config/toolchain.json'),
                            'sample_sha256': digest(json.dumps(sample, sort_keys=True).encode()),
                            'output_sha256': file_hash(target), 'command': command})
    print('Built five candidates; run compare for byte verification')


def compare(cfg):
    toolchain()
    batch = samples()
    orig = verified_inputs(cfg)
    reference = orig / 'DP_ADDRESS.dec.bin'
    check_hash(reference, read_json(ROOT / 'config/decoded.json')['sha256'])
    data = reference.read_bytes()
    results = []
    for sample in batch:
        output = Path(cfg['scratch']) / 'candidates' / (sample['id'] + '.bin')
        receipt = read_json(output.with_suffix('.json'))
        check_hash(ROOT / sample['source'], receipt['source_sha256'])
        check_hash(ROOT / 'config/toolchain.json', receipt['toolchain_sha256'])
        check_hash(output, receipt['output_sha256'])
        if receipt['sample_sha256'] != digest(json.dumps(sample, sort_keys=True).encode()):
            raise ValueError('Sample changed since build')
        ranges = sample['ranges']
        if not ranges or any(r['offset'] < 0 or r['size'] <= 0 or
                             r['offset'] + r['size'] > len(data) for r in ranges):
            raise ValueError('Invalid sample ranges')
        expected = b''.join(data[r['offset']:r['offset'] + r['size']] for r in ranges)
        results.append({'id': sample['id'], 'source': sample['source'], 'ranges': ranges,
                        **compare_bytes(expected, output.read_bytes())})
    write_json(Path(cfg['scratch']) / 'comparison.json', results)
    print(json.dumps(results, indent=2))
    return 0 if all(r['exact'] for r in results) else 1


def report(cfg):
    tc = read_json(ROOT / 'config/toolchain.json')
    batch = read_json(ROOT / 'config/samples.json')
    result = {'milestone': 'five representative C/C++ functions',
              'compiler_status': tc['status'], 'compiler_reason': tc.get('reason'),
              'sample_status': batch['status'], 'frozen_samples': len(batch['samples']),
              'reference_pinned': (ROOT / 'config/reference.json').exists(),
              'decoded_reference_pinned': (ROOT / 'config/decoded.json').exists(),
              'exact_functions': 0, 'compared_bytes': 0,
              'whole_game_matched': False, 'runtime_tested': False,
              'matching_proven': False}
    # Re-run validation; never trust an old comparison report as current evidence.
    if tc['status'] == 'ready' and batch['status'] == 'frozen':
        result['matching_proven'] = compare(cfg) == 0
        comparisons = read_json(Path(cfg['scratch']) / 'comparison.json')
        result['exact_functions'] = sum(r['exact'] for r in comparisons)
        result['compared_bytes'] = sum(r['size'] for s in batch['samples'] for r in s['ranges'])
    write_json(Path(cfg['scratch']) / 'status.json', result)
    print(json.dumps(result, indent=2))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('command', choices=['extract', 'decode', 'build', 'compare', 'report'])
    parser.add_argument('--config', type=Path, default=ROOT / 'local.json')
    args = parser.parse_args()
    try:
        cfg = read_json(args.config)
        return globals()[args.command](cfg) or 0
    except (OSError, ValueError, KeyError, subprocess.CalledProcessError) as e:
        print(f'ERROR: {e}', file=sys.stderr)
        return 2


if __name__ == '__main__':
    sys.exit(main())
