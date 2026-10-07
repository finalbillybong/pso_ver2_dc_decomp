import importlib.util
from pathlib import Path
import struct
import unittest

SPEC = importlib.util.spec_from_file_location('matching',
    Path(__file__).resolve().parents[1] / 'tools/matching.py')
matching = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(matching)


def elf():
    data = bytearray(256)
    data[:7] = b'\x7fELF\x01\x01\x01'
    struct.pack_into('<HHI', data, 16, 2, 42, 1)
    struct.pack_into('<I', data, 24, 0x8c010000)
    struct.pack_into('<I', data, 32, 128)
    struct.pack_into('<HHH', data, 46, 40, 3, 2)
    data[64:68] = b'code'
    names = b'\0.text\0.shstrtab\0'
    data[80:80 + len(names)] = names
    struct.pack_into('<10I', data, 168, 1, 1, 6, 0x8c010000, 64, 4, 0, 0, 4, 0)
    struct.pack_into('<10I', data, 208, 7, 3, 0, 0, 80, len(names), 0, 0, 1, 0)
    return data


class LinkedImageTests(unittest.TestCase):
    def test_extracts_entire_linked_section(self):
        self.assertEqual(matching.text_section(elf(), 0x8c010000), b'code')

    def test_rejects_wrong_entry_or_architecture(self):
        for offset, value, fmt in [(24, 0x8c010004, '<I'), (18, 3, '<H')]:
            data = elf()
            struct.pack_into(fmt, data, offset, value)
            with self.assertRaises(ValueError):
                matching.text_section(data, 0x8c010000)

    def test_rejects_truncated_headers_and_sections(self):
        for length in (5, 51, 128, 240):
            with self.assertRaises(ValueError):
                matching.text_section(elf()[:length], 0x8c010000)
        data = elf()
        struct.pack_into('<I', data, 168 + 20, 1024)
        with self.assertRaises(ValueError):
            matching.text_section(data, 0x8c010000)

    def test_rejects_uncompared_allocated_section(self):
        data = elf()
        struct.pack_into('<I', data, 208 + 8, 2)
        with self.assertRaisesRegex(ValueError, 'Unexpected allocated'):
            matching.text_section(data, 0x8c010000)

    def test_rejects_unresolved_relocation_section(self):
        data = elf()
        struct.pack_into('<I', data, 208 + 4, 9)
        with self.assertRaisesRegex(ValueError, 'remaining relocations'):
            matching.text_section(data, 0x8c010000)
