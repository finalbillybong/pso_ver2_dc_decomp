"""Hitachi SHC pool-group units: selection, fixed flags, symbol modules, linker map,
program-header extraction and command plumbing. Real compiles run only when the
pinned SHC installation is present (never in CI); every other test uses fixtures."""
import json
from pathlib import Path
import struct
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import matching
import shc_units

SHC = {'compiler': 'shc-v5.1r13', 'address': '0x8c37e9a8', 'entry': '_first'}


def lnk_elf(base=0x8c37e9a8, code=b'\x0b\x00\x09\x00', entry=None, extra=(), memory=None):
    """ELF executable shaped like Hitachi LNK output: program headers, no sections."""
    segments = [(1, base, code, len(code) if memory is None else memory)] + list(extra)
    phoff = 52
    data = bytearray(phoff + 32 * len(segments))
    data[:7] = b'\x7fELF\x01\x01\x01'
    struct.pack_into('<HHI', data, 16, 2, 42, 1)
    struct.pack_into('<II', data, 24, base if entry is None else entry, phoff)
    struct.pack_into('<HH', data, 42, 32, len(segments))
    for i, (kind, address, blob, memory) in enumerate(segments):
        struct.pack_into('<8I', data, phoff + 32 * i, kind, len(data), address, address, len(blob), memory, 5, 4)
        data.extend(blob)
    return bytes(data)


MAP = """SECTION NAME                         START    -     END        LENGTH
              UNIT NAME                        MODULE NAME


ATTRIBUTE  :   CODE  NOSHR

P                                 H'8C37E9A8  -  H'8C37E9C7  H'00000020
              unit                             unit
                                  H'8C37E9C8  -  H'8C37E9C8  H'00000000
              symbols                          symbols

* TOTAL ADDRESS *                 H'8C37E9A8  -  H'8C37E9C7  H'00000020
"""


class SelectionTests(unittest.TestCase):
    def test_codewarrior_settings_are_unchanged(self):
        self.assertEqual(shc_units.unit_compiler({}), 'codewarrior')
        for unit in [{}, {'language': 'c++'}, {'linker': 'codewarrior'}]:
            self.assertEqual(shc_units.unit_flags(unit), matching.unit_flags(unit))
            self.assertEqual(shc_units.unit_linker(unit), matching.unit_linker(unit))
        self.assertEqual(shc_units.unit_flags({}), matching.FLAGS)

    def test_dispatch_never_sends_shc_units_to_codewarrior(self):
        with patch.object(matching, 'compile_unit', side_effect=AssertionError('CodeWarrior used')), \
                patch.object(shc_units, 'compile_shc_unit', return_value='shc') as built:
            self.assertEqual(shc_units.compile_unit('a.c', 'a.bin', SHC), 'shc')
            built.assert_called_once()
        with patch.object(matching, 'compile_unit', return_value='cw') as cw, \
                patch.object(shc_units, 'compile_shc_unit', side_effect=AssertionError('SHC used')):
            self.assertEqual(shc_units.compile_unit('a.c', 'a.bin', {'address': '0x8c010000'}), 'cw')
            cw.assert_called_once_with('a.c', 'a.bin', {'address': '0x8c010000'})  # same call as before

    def test_shc_has_one_fixed_flag_set(self):
        self.assertEqual(shc_units.unit_flags(SHC), ['-cpu=sh4', '-endian=little', '-fpu=single',
                                                    '-optimize=1', '-macsave=0'])
        self.assertEqual(shc_units.unit_linker(SHC), 'hitachi')
        self.assertIsNot(shc_units.unit_flags(SHC), shc_units.SHC_FLAGS)

    def test_rejects_other_compilers_languages_and_linkers(self):
        for unit in [{'compiler': 'shc-v5.0r31'}, {'compiler': 'gcc'}, dict(SHC, language='c++'),
                     dict(SHC, linker='gnu'), dict(SHC, linker='codewarrior')]:
            with self.subTest(unit=unit), self.assertRaises(ValueError):
                shc_units.unit_flags(unit)


class SymbolModuleTests(unittest.TestCase):
    def test_exports_absolute_symbols_only(self):
        text = shc_units.symbol_module({'_b': '0x8c562834', '_a': '0x10'})
        self.assertEqual(text.splitlines(), ['          .EXPORT     _a', '          .EXPORT     _b',
                                             "_a: .EQU H'00000010", "_b: .EQU H'8C562834", '          .END'])

    def test_rejects_invalid_names_and_values(self):
        for symbols in [{'a': '0x1'}, {'_a b': '0x1'}, {'_a': '0x100000000'}, {'_a': '-1'}, {'_a\n.DATA': '0'}]:
            with self.subTest(symbols=symbols), self.assertRaises(ValueError):
                shc_units.symbol_module(symbols)


class DiagnosticTests(unittest.TestCase):
    def test_compiler_warning_or_error_fails(self):
        shc_units.diagnostics('', 'compiler')
        for text in ['unit.c(3) : 1200 (W) Illegal type', 'unit.c(1) : 2500 (E) Illegal token',
                     '(0) : 3321 (F) Illegal environment variable', 'Object not created']:
            with self.subTest(text=text), self.assertRaises(ValueError):
                shc_units.diagnostics(text, 'compiler')

    def test_any_linker_message_fails(self):
        ok = 'H SERIES LINKAGE EDITOR Ver. 6.0E\n: exit\n\nLINKAGE EDITOR COMPLETED\n'
        shc_units.diagnostics(ok, 'linker')
        for text in [ok + '** 105 UNDEFINED EXTERNAL SYMBOL(unit._x)\n',
                     ok.replace('LINKAGE EDITOR COMPLETED', 'LINKAGE EDITOR ABORT'),
                     ok + '** 121 CANNOT FIND SECTION(B)\n']:
            with self.subTest(text=text), self.assertRaises(ValueError):
                shc_units.diagnostics(text, 'linker')

    def test_assembler_requires_zero_errors_and_warnings(self):
        shc_units.diagnostics('*****TOTAL ERRORS       0\n*****TOTAL WARNINGS     0\n', 'assembler')
        with self.assertRaises(ValueError):
            shc_units.diagnostics('*****TOTAL ERRORS       1\n*****TOTAL WARNINGS     0\n', 'assembler')


class LinkedImageTests(unittest.TestCase):
    def test_map_sections_ignore_empty_module_rows(self):
        self.assertEqual(shc_units.map_sections(MAP), [('P', 0x8c37e9a8, 0x20)])
        extra = MAP + "\nATTRIBUTE  :   DATA  NOSHR\n\nB                                 H'00000000  -  H'00000003  H'00000004\n"
        self.assertEqual([n for n, _, _ in shc_units.map_sections(extra)], ['P', 'B'])

    def test_extracts_single_load_segment(self):
        self.assertEqual(shc_units.load_image(lnk_elf(), 0x8c37e9a8), b'\x0b\x00\x09\x00')

    def test_rejects_wrong_entry_extra_segment_bss_and_truncation(self):
        bad = [lnk_elf(entry=0x8c37e9ac), lnk_elf(extra=[(1, 0x8c400000, b'\0\0\0\0', 4)]),
               lnk_elf(memory=8),
               lnk_elf()[:60], lnk_elf(base=0x8c37e9ac)]
        for data in bad:
            with self.subTest(size=len(data)), self.assertRaises(ValueError):
                shc_units.load_image(data, 0x8c37e9a8)


class CommandTests(unittest.TestCase):
    def run_fixture(self, unit, map_text=MAP, source='int first(void) { return 0; }\n'):
        temp = tempfile.TemporaryDirectory()
        self.addCleanup(temp.cleanup)
        root = Path(temp.name)
        (root / 'config').mkdir()
        (root / shc_units.SHC_RECEIPT).write_text('{}')
        (root / 'local.json').write_text(json.dumps({'scratch': str(root)}))
        (root / 'unit.c').write_text(source)
        tools = {'runner': Path('runner'), 'bin': root, 'compiler': Path('shc'),
                 'assembler': Path('asm'), 'linker': Path('lnk')}
        calls = []

        def run(command, cwd, **kwargs):
            calls.append(command)
            work = Path(cwd)
            if command[1] == 'shc':
                self.assertEqual(command[3:3 + len(shc_units.SHC_FLAGS)], shc_units.SHC_FLAGS)
                (work / command[-1].split('=', 1)[1]).write_text('object')
                out = ''
            elif command[1] == 'asm':
                self.assertIn('.EQU', (work / 'symbols.src').read_text())
                (work / 'symbols.obj').write_text('symbols')
                out = '*****TOTAL ERRORS       0\n*****TOTAL WARNINGS     0\n'
            else:
                link = (work / 'link.sub').read_text()
                self.assertIn('start P(8C37E9A8)\n', link)
                self.assertIn('entry _first\n', link)
                (work / 'unit.elf').write_bytes(lnk_elf(code=b'\x0b\x00' * 16))
                (work / 'unit.map').write_text(map_text)
                out = 'LINKAGE EDITOR COMPLETED\n'
            return subprocess.CompletedProcess(command, 0, out, '')

        with patch.object(shc_units, 'ROOT', root), patch.object(shc_units, 'load_shc_tools', return_value=tools), \
                patch.object(shc_units.subprocess, 'run', side_effect=run):
            receipt = shc_units.compile_unit(root / 'unit.c', root / 'unit.bin', unit)
        return root, receipt, calls

    def test_compile_link_extract_and_receipt(self):
        unit = dict(SHC, symbols={'_g': '0x8c562834'})
        root, receipt, calls = self.run_fixture(unit)
        self.assertEqual((root / 'unit.bin').read_bytes(), b'\x0b\x00' * 16)
        self.assertEqual(receipt['flags'], shc_units.SHC_FLAGS)
        self.assertEqual(receipt['linker'], 'hitachi')
        self.assertEqual(receipt['commands'], calls)
        self.assertEqual(len(calls), 4)  # object, assembly listing, symbol module, link

    def test_rejects_data_sections_and_misaligned_or_headered_units(self):
        data_map = MAP + "\nATTRIBUTE  :   DATA  NOSHR\n\nB                                 H'8C37E9C8  -  H'8C37E9CB  H'00000004\n"
        with self.assertRaisesRegex(ValueError, 'only code section P'):
            self.run_fixture(dict(SHC), map_text=data_map)
        for unit in [dict(SHC, address='0x8c37e9aa'), dict(SHC, headers=['src/include/x.h'])]:
            with self.subTest(unit=unit), self.assertRaises(ValueError):
                self.run_fixture(unit)


class ReconstructProfileTests(unittest.TestCase):
    def test_profiles_are_per_compiler_and_codewarrior_fields_unchanged(self):
        import reconstruct
        m = reconstruct.project.matching
        tools = {'runner': Path('r'), 'bin': Path('b'), 'compiler': Path('c'), 'assembler': Path('a'), 'linker': Path('l')}
        with patch.object(m, 'load_tools', return_value={'compiler': Path('cw')}), \
                patch.object(shc_units, 'load_shc_tools', return_value=tools), patch.object(m, 'sha', return_value='h'):
            cw = reconstruct.compiler_profile()
            self.assertEqual(reconstruct.compiler_profile({}), cw)
            self.assertEqual(cw, {'tools': {'compiler': 'h'}, 'installed_sha256': 'h', 'adapter_sha256': 'h'})
            shc = reconstruct.compiler_profile(SHC)
            self.assertEqual(shc['compiler'], 'shc-v5.1r13')
            self.assertEqual(set(shc['tools']), {'runner', 'compiler', 'assembler', 'linker'})
            inputs = reconstruct.compiler_inputs({'unit': dict(SHC, ranges=[], reference_sha256='x'), 'code': 'int x;'})
            self.assertEqual((inputs['flags'], inputs['linker']), (shc_units.SHC_FLAGS, 'hitachi'))


def installed():
    try:
        shc_units.load_shc_tools()
        json.loads((matching.ROOT / 'local.json').read_text())['scratch']
    except (OSError, ValueError, KeyError):
        return False
    return True


@unittest.skipUnless(installed(), 'pinned SHC installation not present (CI)')
class RealCompilerTests(unittest.TestCase):
    """Self-contained bytes, no game data: a positive and two negative controls."""
    def compile(self, code, **unit):
        temp = tempfile.TemporaryDirectory()
        self.addCleanup(temp.cleanup)
        source = Path(temp.name) / 'unit.c'
        source.write_text(code)
        shc_units.compile_unit(source, Path(temp.name) / 'unit.bin', dict(SHC, address='0x8c010000', **unit))
        return (Path(temp.name) / 'unit.bin').read_bytes()

    def test_known_bytes_with_literal_pool(self):
        code = self.compile('extern int g;\nint first(void) { return g + 1; }\n', symbols={'_g': '0x8c562834'})
        # mov.l @(disp,pc),r3 / mov.l @r3,r0 / rts / add #1,r0 / pool word 0x8c562834
        self.assertEqual(code, bytes.fromhex('01d3 3260 0b00 0170 3428 568c'))

    def test_negative_control_static_data_is_rejected(self):
        with self.assertRaisesRegex(ValueError, 'only code section P'):
            self.compile('static int counter;\nint first(void) { return ++counter; }\n')

    def test_negative_control_unresolved_extern_is_rejected(self):
        with self.assertRaisesRegex(ValueError, 'linker diagnostics'):
            self.compile('extern int g;\nint first(void) { return g; }\n')


if __name__ == '__main__':
    unittest.main()
