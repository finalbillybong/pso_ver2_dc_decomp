import copy
import io
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import project
import test_disc


class ImageLayoutTests(unittest.TestCase):
    def setUp(self):
        self.manifest = {'base_address': '0x1000', 'units': [
            {'id': 'one', 'address': '0x1004', 'source': 'one.c',
             'ranges': [{'offset': 4, 'size': 4}]},
            {'id': 'two', 'address': '0x100a', 'source': 'two.c',
             'ranges': [{'offset': 10, 'size': 6}]}]}

    def test_accounts_for_every_byte_once(self):
        spans = project.layout(self.manifest, 20)
        self.assertEqual([(s['offset'], s['size'], s['origin']) for s in spans], [
            (0, 4, 'reference_unreconstructed'), (4, 4, 'compiled_source'),
            (8, 2, 'reference_unreconstructed'), (10, 6, 'compiled_source'),
            (16, 4, 'reference_unreconstructed')])
        self.manifest['units'].reverse()
        self.assertEqual(project.layout(self.manifest, 20), spans)

    def test_rejects_overlap_wrong_address_duplicate_and_out_of_bounds(self):
        for field, value in [('ranges', [{'offset': 6, 'size': 6}]),
                             ('address', '0x100c'), ('id', 'one'),
                             ('ranges', [{'offset': 10, 'size': 11}]),
                             ('ranges', [{'offset': 10, 'size': 0}])]:
            manifest = copy.deepcopy(self.manifest)
            manifest['units'][1][field] = value
            with self.assertRaises(ValueError):
                project.layout(manifest, 20)

    def test_source_only_rejects_reference_gaps(self):
        spans = project.layout(self.manifest, 20)
        with self.assertRaisesRegex(ValueError, '10 bytes still require the reference'):
            project.integrate(spans, {'one': b'abcd', 'two': b'efghij'})

    def test_source_only_integrates_without_reference_input(self):
        manifest = {'base_address': '0x1000', 'units': [
            {'id': 'one', 'address': '0x1000', 'source': 'one.c',
             'ranges': [{'offset': 0, 'size': 4}]},
            {'id': 'two', 'address': '0x1004', 'source': 'two.c',
             'ranges': [{'offset': 4, 'size': 6}]}]}
        spans = project.layout(manifest, 10)
        self.assertEqual(project.integrate(spans, {'one': b'abcd', 'two': b'efghij'}), b'abcdefghij')
        with self.assertRaisesRegex(ValueError, 'module size changed'):
            project.integrate(spans, {'one': b'abcd', 'two': b'efg'})

    def test_hybrid_replaces_only_declared_regions(self):
        spans = project.layout(self.manifest, 20)
        self.assertEqual(project.integrate(spans, {'one': b'abcd', 'two': b'efghij'}, b'_' * 20),
                         b'____abcd__efghij____')


class DiscExpansionTests(unittest.TestCase):
    def test_moves_multiple_chunks_without_changing_prefix_or_file_size(self):
        prefix = b'P' * 2048
        payload = bytes(range(256)) * 9000
        data = io.BytesIO(prefix + payload + bytes(4096))
        size = len(data.getvalue())
        test_disc.move_tail(data, len(prefix), 4096, size)
        result = data.getvalue()
        self.assertEqual(len(result), size)
        self.assertEqual(result[:len(prefix)], prefix)
        self.assertEqual(result[len(prefix) + 4096:], payload)

    def test_nonzero_padding_rejected_before_writing(self):
        original = b'P' * 8192
        data = io.BytesIO(original)
        with self.assertRaisesRegex(ValueError, 'zero padding'):
            test_disc.move_tail(data, 2048, 2048, len(original))
        self.assertEqual(data.getvalue(), original)

    def test_patches_both_endian_extents_and_executable_size(self):
        def both(data, offset, value):
            struct.pack_into('<I', data, offset, value)
            struct.pack_into('>I', data, offset + 4, value)

        directory = bytearray(2048)
        pos = 0
        for name, lba, size in [(b'DP_ADDRESS.JPN;1', 100, 5000),
                                (b'KATSUO.SEA;1', 103, 1000)]:
            length = 33 + len(name) + (len(name) % 2 == 0)
            directory[pos] = length
            both(directory, pos + 2, lba)
            both(directory, pos + 10, size)
            directory[pos + 32] = len(name)
            directory[pos + 33:pos + 33 + len(name)] = name
            pos += length
        pvd = bytearray(2048)
        both(pvd, 158, 20)
        both(pvd, 166, 2048)

        class Disc:
            base_lba = 0

            def extent(self, lba, size):
                return {16: pvd, 20: directory}[lba]

        output = io.BytesIO(bytes(50 * 2048))
        changes = test_disc.patch_directories(output, Disc(), {}, 103, 9, 22000)
        result = output.getvalue()[20 * 2048:21 * 2048]
        self.assertEqual(project.pso.both32(result, 2), 100)
        self.assertEqual(project.pso.both32(result, 10), 22000)
        self.assertEqual(project.pso.both32(result, directory[0] + 2), 112)
        self.assertEqual(changes, [{'name': 'KATSUO.SEA;1', 'old_lba': 103,
                                   'new_lba': 112}])
