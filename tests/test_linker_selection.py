"""Explicit native linking must retain source settings and reject hidden output."""
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
from test_matching import elf


def compiler_object():
    data = elf()
    struct.pack_into('<H', data, 16, 1)
    return data


class LinkerSelectionTests(unittest.TestCase):
    def test_explicit_selection_keeps_compiler_flags(self):
        self.assertEqual(matching.unit_linker({}), 'gnu')
        self.assertEqual(matching.unit_flags({'linker': 'codewarrior'}), matching.FLAGS)
        with self.assertRaisesRegex(ValueError, 'Unsupported matching linker'):
            matching.unit_flags({'linker': 'unrecorded'})

    def test_native_object_rejects_allocated_data_and_bss(self):
        matching.require_text_only_object(compiler_object())
        for section_type in (1, 8):
            data = compiler_object()
            struct.pack_into('<I', data, 208 + 4, section_type)
            struct.pack_into('<I', data, 208 + 8, 2)
            with self.assertRaisesRegex(ValueError, 'Unexpected allocated'):
                matching.require_text_only_object(data)

    def test_native_object_rejects_nonrelocatable_input(self):
        with self.assertRaisesRegex(ValueError, 'relocatable SuperH'):
            matching.require_text_only_object(elf())

    def run_native(self, strip_changes_bytes=False, pinned=True):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'config').mkdir()
            native = root / 'mwldshx.exe'
            native.write_bytes(b'pinned linker fixture')
            files = {str(native): matching.sha(native)} if pinned else {}
            (root / 'config/matching-installed.json').write_text(json.dumps({'files': files}))
            (root / 'local.json').write_text(json.dumps({'scratch': str(root)}))
            source = root / 'example.c'
            source.write_text('int example(void) { return 1; }\n')
            output = root / 'example.bin'
            output.write_bytes(b'stale output')
            unit = {'address': '0x8c010000', 'entry': '_example',
                    'linker': 'codewarrior', 'symbols': {'_external': '0x8c020000'}}
            tools = {n: root / n for n in ['runner', 'compiler', 'linker', 'objcopy', 'objdump']}
            commands = []

            def run(command, cwd, **kwargs):
                commands.append(command)
                work = Path(cwd)
                if command[0] == str(tools['runner']):
                    if command[1] == str(tools['compiler']):
                        self.assertEqual(command[2:-3], matching.FLAGS)
                        (work / 'unit.o').write_bytes(compiler_object())
                    else:
                        self.assertEqual(command[1], str(native))
                        self.assertIn('-nodeadstrip', command)
                        self.assertIn('_external = 0x8c020000;', (work / 'unit.lcf').read_text())
                        (work / 'unit.native.elf').write_bytes(elf())
                        (work / 'unit.native.elf.xMAP').write_text('native map')
                elif command[0] == str(tools['objcopy']):
                    if '--strip-all' in command:
                        data = elf()
                        if strip_changes_bytes:
                            data[64] ^= 1
                        (work / 'unit.elf').write_bytes(data)
                    else:
                        (work / command[-1]).write_bytes(b'code')
                return subprocess.CompletedProcess(command, 0, '', '')

            with patch.object(matching, 'ROOT', root), patch.object(matching, 'load_tools', return_value=tools), patch.object(matching.subprocess, 'run', side_effect=run):
                if not pinned or strip_changes_bytes:
                    message = 'not pinned' if not pinned else 'metadata changed code bytes'
                    with self.assertRaisesRegex(ValueError, message):
                        matching.compile_unit(source, output, unit)
                    self.assertFalse(output.exists())
                    self.assertFalse(output.with_suffix('.compiler.json').exists())
                    return
                receipt = matching.compile_unit(source, output, unit)
                self.assertEqual(receipt['linker'], 'codewarrior')
                self.assertEqual(receipt['flags'], matching.FLAGS)
                self.assertEqual(output.read_bytes(), b'code')
                self.assertTrue(output.with_suffix('.native.elf').exists())
                self.assertFalse(any(c[0] == str(tools['linker']) for c in commands))

    def test_native_command_and_receipt_keep_complete_bytes(self):
        self.run_native()

    def test_metadata_strip_cannot_change_code(self):
        self.run_native(strip_changes_bytes=True)

    def test_unpinned_native_linker_is_rejected(self):
        self.run_native(pinned=False)
