import copy
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import data as static_data
import project
from check_publication import issues

SOURCE = '''/* Static data 1008-1020: vtable and string objects. */

typedef void (*VirtualFunction)(void);

extern void method_one(void);
extern void method_two(void);

/* header, then two slots */
VirtualFunction const vt_00001008[4] = {
    0,
    0,
    method_one,
    method_two
};

const char str_00001018[8] =
    "a;b\\0"
    "c\\?";
'''


def unit():
    return {'id': 'data_00001008', 'source': 'src/data/data_00001008.c', 'address': '0x1008',
            'ranges': [{'offset': 8, 'size': 24}],
            'symbols': {'_method_one': '0x1100', '_method_two': '0x1104'},
            'objects': [{'name': 'vt_00001008', 'address': '0x1008', 'size': 16, 'kind': 'vtable'},
                        {'name': 'str_00001018', 'address': '0x1018', 'size': 8, 'kind': 'string'}],
            'reference_sha256': '0' * 64}


def relocatable(rodata, relocations, symbols, extra_section=None):
    """Minimal ELF32 SH relocatable: .rodata, .rela.rodata, .symtab, .strtab, .shstrtab.
    symbols: [(name, value, size, defined_in_rodata)]; relocations: [(offset, symbol_index, type)]."""
    strtab = b'\0'
    syms = [bytes(16)]
    for name, value, size, defined in symbols:
        syms.append(struct.pack('<IIIBBH', len(strtab), value, size, 0x11, 0, 1 if defined else 0))
        strtab += name.encode() + b'\0'
    symtab = b''.join(syms)
    rela = b''.join(struct.pack('<IIi', off, (index << 8) | kind, 0) for off, index, kind in relocations)
    names = [b'', b'.rodata', b'.rela.rodata', b'.symtab', b'.strtab', b'.shstrtab'] + ([b'.data'] if extra_section else [])
    shstr = b'\0'
    offsets = []
    for n in names[1:]:
        offsets.append(len(shstr)); shstr += n + b'\0'
    blobs = [rodata, rela, symtab, strtab, shstr] + ([extra_section] if extra_section else [])
    body, positions = b'', []
    for blob in blobs:
        positions.append(52 + len(body)); body += blob + bytes(-len(blob) % 4)
    shoff = 52 + len(body)
    headers = [bytes(40)]
    specs = [(1, 2, 0, 0, 4, 0), (4, 0, 3, 1, 4, 12), (2, 0, 4, 1, 4, 16), (3, 0, 0, 0, 1, 0), (3, 0, 0, 0, 1, 0)]
    if extra_section:
        specs.append((1, 3, 0, 0, 4, 0))
    for i, (kind, flags, link, info, align, entsize) in enumerate(specs):
        headers.append(struct.pack('<10I', offsets[i], kind, flags, 0, positions[i], len(blobs[i]), link, info, align, entsize))
    header = b'\x7fELF\x01\x01\x01' + bytes(9) + struct.pack('<HHIIIIIHHHHHH', 1, 42, 1, 0, 0, shoff, 0, 52, 0, 0, 40,
                                                                       len(headers), 5)
    return header + body + b''.join(headers)


ROD = bytes(8) + bytes(8) + b'a;b\0c?\0\0'
SYMS = [('_vt_00001008', 0, 16, True), ('_str_00001018', 16, 8, True), ('_method_one', 0, 0, False), ('_method_two', 0, 0, False)]


class DataManifestTests(unittest.TestCase):
    def setUp(self):
        self.code = {'base_address': '0x1000', 'units': [
            {'id': 'one', 'address': '0x1004', 'source': 'one.c', 'ranges': [{'offset': 4, 'size': 4}]}]}
        self.data = {'schema_version': 1, 'data_extent': {'bytes': 40}, 'units': [unit()]}

    def test_layout_marks_typed_data_separately(self):
        spans = project.layout(self.code, 48, self.data)
        self.assertEqual([(s['offset'], s['size'], s['origin']) for s in spans], [
            (0, 4, 'reference_unreconstructed'), (4, 4, 'compiled_source'),
            (8, 24, 'compiled_data'), (32, 16, 'reference_unreconstructed')])
        self.assertEqual(project.layout(self.code, 48), project.layout(self.code, 48, None))
        image = project.integrate(spans, {'one': b'CODE', 'data_00001008': b'D' * 24}, b'_' * 48)
        self.assertEqual(image, b'____CODE' + b'D' * 24 + b'_' * 16)

    def test_rejects_overlap_untyped_kinds_gaps_and_bad_paths(self):
        code = copy.deepcopy(self.code)
        code['units'][0].update(address='0x1018', ranges=[{'offset': 24, 'size': 4}])
        with self.assertRaisesRegex(ValueError, 'Overlapping'):
            project.layout(code, 48, self.data)
        cases = [lambda u: u['objects'][1].update(kind='bytes'),
                 lambda u: u['objects'][1].update(address='0x1019'),
                 lambda u: u['objects'][1].update(size=4),
                 lambda u: u.update(source='src/objects/data.c'),
                 lambda u: u.update(id='one'),
                 lambda u: u.update(language='c++'),
                 lambda u: u['objects'][0].update(size=14)]
        for change in cases:
            data = copy.deepcopy(self.data)
            change(data['units'][0])
            with self.assertRaises(ValueError):
                project.layout(self.code, 48, data)

    def test_lint_accepts_typed_forms_and_returns_declared_functions(self):
        self.assertEqual(static_data.lint(SOURCE, unit()), {'method_one', 'method_two'})

    def test_lint_rejects_untyped_and_disguised_forms(self):
        for old, new in [('method_two\n', '0x1104\n'),
                         ('method_two\n', '(VirtualFunction)0x1104\n'),
                         ('const char str_00001018[8] =\n    "a;b\\0"\n    "c\\?";',
                          'const unsigned char str_00001018[8] = { 97, 59, 98, 0, 99, 63, 0, 0 };'),
                         ('extern void method_one(void);', '#define method_one 0\nextern void method_one(void);'),
                         ('[8] =', '[9] ='),
                         ('extern void method_two(void);\n', ''),
                         ('"c\\?";', '"c\\?"; int x;'),
                         ('"c\\?";', '"c\\?" + 0;')]:
            with self.subTest(change=new):
                self.assertIn(old, SOURCE)
                with self.assertRaises(ValueError):
                    static_data.lint(SOURCE.replace(old, new), unit())

    def test_object_check_requires_relocated_pointers_and_exact_placement(self):
        good = relocatable(ROD, [(8, 3, 1), (12, 4, 1)], SYMS)
        self.assertEqual(static_data.check_object(good, unit()), {8: '_method_one', 12: '_method_two'})
        bare = bytearray(ROD); bare[12:16] = struct.pack('<I', 0x1104)
        for blob, message in [
                (relocatable(bytes(bare), [(8, 3, 1)], SYMS), 'bare integer'),
                (relocatable(ROD, [(8, 3, 1), (12, 4, 1), (16, 3, 1)], SYMS), 'non-pointer object'),
                (relocatable(ROD, [(8, 3, 1), (12, 4, 2)], SYMS), 'Unexpected relocation'),
                (relocatable(ROD, [(8, 3, 1), (12, 4, 1)], [('_vt_00001008', 0, 12, True)] + SYMS[1:]), 'Object symbol'),
                (relocatable(ROD + b'XXXX', [(8, 3, 1), (12, 4, 1)], SYMS), 'outside the manifest objects'),
                (relocatable(ROD, [(8, 3, 1), (12, 4, 1)], SYMS, extra_section=b'DATA'), 'only .rodata')]:
            with self.subTest(message=message):
                with self.assertRaisesRegex(ValueError, message):
                    static_data.check_object(blob, unit())

    def test_linked_placement_must_match_manifest_addresses(self):
        placed = [('_vt_00001008', 0x1008, 16, True), ('_str_00001018', 0x1018, 8, True)]
        static_data.check_placement(relocatable(ROD, [], placed), unit())
        with self.assertRaisesRegex(ValueError, 'placement'):
            static_data.check_placement(relocatable(ROD, [], [placed[0], ('_str_00001018', 0x1019, 8, True)]), unit())

    def test_totals_and_publication_paths(self):
        self.assertEqual(static_data.totals(self.data), {'string': 8, 'vtable': 16})
        self.assertFalse(issues('src/data/vtables_8c260f70.c', SOURCE.encode()))
        self.assertFalse(issues('config/data.json', b'{"schema_version": 1, "units": []}'))
        self.assertTrue(issues('src/data/blob.bin', b'\x00\x01'))


if __name__ == '__main__':
    unittest.main()
