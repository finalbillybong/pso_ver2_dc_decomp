import importlib.util
import json
from pathlib import Path
import struct
import tempfile
import unittest
from unittest.mock import patch

SPEC = importlib.util.spec_from_file_location('pso', Path(__file__).resolve().parents[1] / 'pso.py')
pso = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(pso)


def record(name, lba, size, directory=False):
    b = bytearray(34 + len(name) - len(name) % 2)
    b[0] = len(b)
    struct.pack_into('<I', b, 2, lba)
    struct.pack_into('>I', b, 6, lba)
    struct.pack_into('<I', b, 10, size)
    struct.pack_into('>I', b, 14, size)
    b[25] = 2 if directory else 0
    b[32] = len(name)
    b[33:33 + len(name)] = name
    return b


class WorkbenchTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)

    def disc(self):
        data = bytearray(26 * 2048)
        data[0x40:0x4a] = b'MK-5119350'
        offset = 16 * 2048
        data[offset:offset + 7] = b'\x01CD001\x01'
        struct.pack_into('<H', data, offset + 128, 2048)
        root = record(b'\0', 45024, 2048, True)
        data[offset + 156:offset + 156 + len(root)] = root
        records = root + record(b'\1', 45024, 2048, True) + record(b'GAME.BIN;1', 45025, 5)
        data[24 * 2048:24 * 2048 + len(records)] = records
        data[25 * 2048:25 * 2048 + 5] = b'hello'
        path = self.root / 'disc.iso'
        path.write_bytes(data)
        return path

    def test_iso_absolute_lba_and_version_suffix(self):
        d = pso.Disc(self.disc())
        identity, entries = d.inventory()
        self.assertEqual(identity['product'], 'MK-5119350')
        self.assertEqual(entries['/GAME.BIN']['lba'], 45025)
        self.assertEqual(d.extent(45025, 5), b'hello')

    def test_iso_rejects_wrong_format(self):
        path = self.disc()
        data = bytearray(path.read_bytes())
        data[16 * 2048 + 1] = 0
        path.write_bytes(data)
        with self.assertRaises(ValueError): pso.Disc(path).inventory()

    def test_iso_rejects_conflicting_endian_fields(self):
        path = self.disc()
        data = bytearray(path.read_bytes())
        data[16 * 2048 + 165] ^= 1
        path.write_bytes(data)
        with self.assertRaises(ValueError): pso.Disc(path).inventory()

    def test_iso_rejects_truncation(self):
        path = self.disc()
        path.write_bytes(path.read_bytes()[:49000])
        with self.assertRaises(ValueError): pso.Disc(path).inventory()

    def test_raw_mode1_strips_headers_and_partial_last_sector(self):
        header = b'\0' + b'\xff' * 10 + b'\0' + b'\0\0\0\1'
        raw = self.root / 'track.bin'
        raw.write_bytes(header + b'A' * 2048 + b'\0' * 288 +
                        header + b'B' * 2048 + b'\0' * 288)
        self.assertEqual(pso.raw_extent(raw, 0, 2050), b'A' * 2048 + b'BB')
        self.assertEqual(pso.raw_extent(raw, 1, 2), b'BB')

    def test_raw_rejects_wrong_sector_mode(self):
        raw = self.root / 'track.bin'
        raw.write_bytes(bytes(2352))
        with self.assertRaises(ValueError): pso.raw_extent(raw, 0, 1)

    def test_exact_comparison_rejects_instruction_call_and_literal_changes(self):
        original = bytes.fromhex('224f 0bd1 0b41 0900 3412348c')
        for offset in (0, 2, 4, 6, 8, 11):
            changed = bytearray(original)
            changed[offset] ^= 1
            result = pso.compare_bytes(original, changed)
            self.assertFalse(result['exact'])
            self.assertEqual(result['first_mismatch'], offset)
        self.assertTrue(pso.compare_bytes(original, original)['exact'])

    def test_exact_comparison_rejects_prefix_only_and_extra_bytes(self):
        for a, b in ((b'abc', b'ab'), (b'ab', b'abc')):
            self.assertFalse(pso.compare_bytes(a, b)['exact'])

    def test_reference_tampering_is_rejected(self):
        path = self.root / 'reference'
        path.write_bytes(b'correct')
        pin = pso.file_hash(path)
        path.write_bytes(b'corrupt')
        with self.assertRaises(ValueError): pso.check_hash(path, pin)

    def test_empty_samples_cannot_claim_completion(self):
        (self.root / 'config').mkdir()
        pso.write_json(self.root / 'config/samples.json', {'status': 'frozen', 'samples': []})
        with patch.object(pso, 'ROOT', self.root), self.assertRaises(ValueError): pso.samples()

    def test_missing_compiler_is_a_gate(self):
        (self.root / 'config').mkdir()
        pso.write_json(self.root / 'config/toolchain.json', {'status': 'unavailable'})
        with patch.object(pso, 'ROOT', self.root), self.assertRaises(ValueError): pso.toolchain()

    def test_reference_manifest_rejects_different_disc_before_output_write(self):
        path = self.disc()
        cfg = {'iso': str(path), 'track': 'unused', 'scratch': str(self.root / 'scratch')}
        manifest = self.root / 'config/reference.json'
        pso.write_json(manifest, {'identity': 'another game'})
        with patch.object(pso, 'ROOT', self.root), patch.object(pso, 'NAMES', ('GAME.BIN',)), \
             patch.object(pso, 'raw_extent', return_value=b'hello'), \
             patch.object(pso, 'file_hash', return_value='synthetic-disc-hash'), \
             self.assertRaisesRegex(ValueError, 'Input differs'):
            pso.extract(cfg)
        self.assertFalse((self.root / 'scratch/orig').exists())

    def test_iso_raw_disagreement_prevents_pinning(self):
        cfg = {'iso': str(self.disc()), 'track': 'unused', 'scratch': str(self.root / 'scratch')}
        with patch.object(pso, 'ROOT', self.root), patch.object(pso, 'NAMES', ('GAME.BIN',)), \
             patch.object(pso, 'raw_extent', return_value=b'wrong'), \
             self.assertRaisesRegex(ValueError, 'ISO/track mismatch'):
            pso.extract(cfg)
        self.assertFalse((self.root / 'config/reference.json').exists())

    def test_atomic_json_roundtrip(self):
        path = self.root / 'nested/report.json'
        pso.write_json(path, {'exact': False, 'why': 'call target'})
        self.assertEqual(pso.read_json(path), {'exact': False, 'why': 'call target'})
        self.assertFalse(path.with_suffix('.json.tmp').exists())


if __name__ == '__main__':
    unittest.main()
