#!/usr/bin/env python3
"""Package the current integrated executable into a private emulator test disc."""
import hashlib
import json
from pathlib import Path
import struct
import subprocess

import project
import pso

ROOT = Path(__file__).resolve().parents[1]


def move_tail(file, start, delta, size):
    """Consume verified zero padding to make room; preserve ISO size and LBAs below start."""
    if delta < 0 or delta % 2048 or start + delta > size:
        raise ValueError('Invalid disc expansion')
    if not delta:
        return
    file.seek(size - delta)
    if file.read(delta) != bytes(delta):
        raise ValueError('Disc has insufficient zero padding for expanded executable')
    end = size - delta
    while end > start:
        begin = max(start, end - 1024 * 1024)
        file.seek(begin)
        chunk = file.read(end - begin)
        file.seek(begin + delta)
        file.write(chunk)
        end = begin


def patch_directories(file, disc, entries, threshold, sectors, packed_size):
    pvd = disc.extent(disc.base_lba + 16, 2048)
    directories = [(pso.both32(pvd, 158), pso.both32(pvd, 166))]
    directories += [(e['lba'], e['size']) for e in entries.values() if e['directory']]
    changes = []
    for lba, size in directories:
        if lba + (size + 2047) // 2048 > threshold:
            raise ValueError('Directory relocation would require path-table rebuilding')
        data = bytearray(disc.extent(lba, size))
        pos = 0
        while pos < len(data):
            n = data[pos]
            if not n:
                pos = (pos // 2048 + 1) * 2048
                continue
            name = bytes(data[pos + 33:pos + 33 + data[pos + 32]])
            old_lba = pso.both32(data, pos + 2)
            if old_lba >= threshold:
                struct.pack_into('<I', data, pos + 2, old_lba + sectors)
                struct.pack_into('>I', data, pos + 6, old_lba + sectors)
                changes.append({'name': name.decode('ascii'), 'old_lba': old_lba,
                                'new_lba': old_lba + sectors})
            if name.split(b';')[0] == b'DP_ADDRESS.JPN':
                struct.pack_into('<I', data, pos + 10, packed_size)
                struct.pack_into('>I', data, pos + 14, packed_size)
            pos += n
        file.seek((lba - disc.base_lba) * 2048)
        file.write(data)
    return changes


def main():
    status = project.report()  # Reject stale or mismatched reconstructed code.
    cfg = pso.read_json(ROOT / 'local.json')
    scratch = Path(cfg['scratch'])
    output = scratch / 'test-disc'
    output.mkdir(exist_ok=True)
    for name in ('disc.gdi', 'receipt.json'):
        (output / name).unlink(missing_ok=True)
    pins = pso.read_json(ROOT / 'config/reference.json')
    pso.check_hash(cfg['iso'], pins['iso_sha256'])
    original = pso.verified_inputs(cfg)
    encoder = pso.read_json(ROOT / 'config/encoder-build.json')
    pso.check_hash(encoder['encoder'], encoder['encoder_sha256'])
    pso.check_hash(ROOT / 'tools/encode_main.cc', encoder['wrapper_sha256'])
    packed, indexes = output / 'DP_ADDRESS.JPN', output / 'KATSUO.SEA'
    subprocess.run([encoder['encoder'], status['image'], str(original / 'IWASHI.SEA'),
                    str(original / 'KATSUO.SEA'), str(packed), str(indexes)], check=True)
    iso = pso.Disc(cfg['iso'])
    _, entries = iso.inventory()
    entry = entries['/DP_ADDRESS.JPN']
    old_sectors = (entry['size'] + 2047) // 2048
    new_sectors = (packed.stat().st_size + 2047) // 2048
    growth = max(0, new_sectors - old_sectors)
    threshold = entry['lba'] + old_sectors
    target = output / 'track03.iso'
    if target.is_symlink():
        raise ValueError('Test ISO must not be a symlink')
    subprocess.run(['cp', '--reflink=auto', cfg['iso'], str(target)], check=True)
    with target.open('r+b') as file:
        move_tail(file, (threshold - iso.base_lba) * 2048, growth * 2048, target.stat().st_size)
        changes = patch_directories(file, iso, entries, threshold, growth, packed.stat().st_size)
        file.seek((entry['lba'] - iso.base_lba) * 2048)
        file.write(packed.read_bytes())
        file.write(bytes(max(old_sectors, new_sectors) * 2048 - packed.stat().st_size))
        k = entries['/KATSUO.SEA']
        if indexes.stat().st_size != k['size']:
            raise ValueError('Unexpected index-file size change')
        file.seek((k['lba'] + growth - iso.base_lba) * 2048)
        file.write(indexes.read_bytes())
    rebuilt = pso.Disc(target)
    identity, new_entries = rebuilt.inventory()
    if identity != pins['identity'] or entries.keys() != new_entries.keys():
        raise ValueError('Disc identity or directory inventory changed')
    verified = 0
    for name, old in entries.items():
        if old['directory']:
            continue
        new = new_entries[name]
        expected = (packed.read_bytes() if name == '/DP_ADDRESS.JPN' else
                    indexes.read_bytes() if name == '/KATSUO.SEA' else iso.extent(old['lba'], old['size']))
        if rebuilt.extent(new['lba'], new['size']) != expected:
            raise ValueError('Repackaged file differs: ' + name)
        verified += 1
    # Re-decode files read out of the generated ISO, not just packaging inputs.
    for name in ('DP_ADDRESS.JPN', 'KATSUO.SEA', 'IWASHI.SEA'):
        e = new_entries['/' + name]
        (output / name).write_bytes(rebuilt.extent(e['lba'], e['size']))
    pso.check_hash(cfg['decoder'], pso.read_json(ROOT / 'config/decoder-build.json')['decoder_sha256'])
    decoded = output / 'verified-decoded.bin'
    subprocess.run([cfg['decoder'], str(packed), str(output / 'IWASHI.SEA'),
                    str(indexes), str(decoded)], check=True)
    if decoded.read_bytes() != Path(status['image']).read_bytes():
        raise ValueError('Test ISO decoded executable differs from project build')
    extracted = Path(cfg['iso']).parent
    tracks = []
    for n in (1, 2):
        matches = list(extracted.glob(f'* (Track {n}).bin'))
        if len(matches) != 1:
            raise ValueError('Expected one original low-density track ' + str(n))
        source = matches[0]
        link = output / f'track{n:02}.bin'
        if link.is_symlink():
            if link.resolve() != source.resolve():
                raise ValueError('Unexpected existing track link')
        elif link.exists():
            raise ValueError('Refusing to replace a non-link track file')
        else:
            link.symlink_to(source)
        tracks.append(source)
    # The supplied CUE specifies a two-second pregap in track 2's file.
    track2_lba = tracks[0].stat().st_size // 2352 + 150
    (output / 'disc.gdi').write_text('3\n1 0 4 2352 track01.bin 0\n'
        f'2 {track2_lba} 0 2352 track02.bin 352800\n3 45000 4 2048 track03.iso 0\n')
    pso.write_json(output / 'receipt.json', {'project_build_sha256': pso.file_hash(
        scratch / 'project-build/build.json'), 'encoder_sha256': encoder['encoder_sha256'],
        'decoded_sha256': pso.file_hash(decoded), 'packed_sha256': pso.file_hash(packed),
        'indexes_sha256': pso.file_hash(indexes), 'iso_sha256': pso.file_hash(target),
        'track_sha256': [pso.file_hash(t) for t in tracks],
        'gdi_sha256': pso.file_hash(output / 'disc.gdi'), 'growth_sectors': growth,
        'relocations': changes, 'files_verified': verified,
        'packaging_matches_original_disc_bytes': False,
        'full_source_reconstruction_complete': False, 'boot_verified': False})
    print('Test disc written: ' + str(output / 'disc.gdi'))


if __name__ == '__main__':
    main()
