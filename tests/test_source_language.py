"""Language selection must reach the compiler and invalidate old build evidence."""
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import matching
import project
from test_matching import elf


class SourceLanguageTests(unittest.TestCase):
    def test_compiler_command_and_receipt_preserve_c_and_explicit_cpp(self):
        for language, suffix in [('c', '.c'), ('c++', '.cpp')]:
            with self.subTest(language=language), tempfile.TemporaryDirectory() as temp:
                root = Path(temp)
                (root / 'config').mkdir()
                (root / 'config/matching-installed.json').write_text('{}')
                (root / 'local.json').write_text(json.dumps({'scratch': str(root)}))
                source = root / ('example' + suffix)
                code = 'int example(void) { return 1; }\n'
                if language == 'c++':
                    code = 'extern "C" ' + code
                source.write_text(code)
                unit = {'address': '0x8c010000', 'entry': '_example'}
                if language == 'c++':
                    unit['language'] = language
                tools = {n: Path(n) for n in ['runner', 'compiler', 'linker', 'objcopy', 'objdump']}
                calls = []

                def run(command, cwd, **kwargs):
                    calls.append(command)
                    work = Path(cwd)
                    if command[0] == 'runner':
                        self.assertEqual(command[-1], 'unit' + suffix)
                        self.assertEqual((work / command[-1]).read_text(), code)
                        expected = matching.FLAGS + (['-lang', 'c++'] if language == 'c++' else [])
                        self.assertEqual(command[2:-3], expected)
                        (work / 'unit.o').write_bytes(b'object fixture')
                    elif command[0] == 'linker':
                        (work / 'unit.elf').write_bytes(elf())
                        (work / 'unit.map').write_text('map fixture')
                    elif command[0] == 'objcopy':
                        (work / 'unit.bin').write_bytes(b'code')
                    return subprocess.CompletedProcess(command, 0, 'fixture', '')

                with patch.object(matching, 'ROOT', root), patch.object(matching, 'load_tools', return_value=tools), patch.object(matching.subprocess, 'run', side_effect=run):
                    receipt = matching.compile_unit(source, root / 'example.bin', unit)
                self.assertEqual((root / 'example.bin').read_bytes(), b'code')
                self.assertEqual(receipt['flags'], matching.unit_flags(unit))
                self.assertEqual(receipt['commands'], calls)
                self.assertEqual(receipt['size'], 4)

    def test_invalid_or_implicit_cpp_never_reaches_compiler(self):
        for suffix, language in [('.cpp', None), ('.c', 'c++'), ('.cpp', 'c'), ('.c', 'rust'), ('.S', None)]:
            with self.subTest(suffix=suffix, language=language), tempfile.TemporaryDirectory() as temp:
                root = Path(temp)
                source = root / ('example' + suffix)
                source.write_text('int example;')
                unit = {} if language is None else {'language': language}
                with patch.object(matching, 'load_tools') as load:
                    with self.assertRaises(ValueError):
                        matching.compile_unit(source, root / 'example.bin', unit)
                    load.assert_not_called()

    def check_stale_report(self, change, expected):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            for directory in ['config', 'tools', 'project-build']:
                (root / directory).mkdir()
            for name in ['project.json', 'toolchain.json']:
                (root / 'config' / name).write_text('{}')
            (root / 'tools/matching.py').write_text('compiler adapter fixture')
            (root / 'example.c').write_text('int example(void) {return 1;}')
            manifest = {'units': [{'id': 'example', 'source': 'example.c'}]}
            with patch.object(project, 'ROOT', root), patch.object(matching, 'ROOT', root):
                before = project.provenance(manifest)
                (root / 'project-build/build.json').write_text(json.dumps(before))
                change(root, manifest)
                with patch.object(project, 'inputs', return_value=({'scratch': str(root)}, manifest, b'', [])):
                    with self.assertRaisesRegex(ValueError, 'Stale project build: ' + expected):
                        project.report()

    def test_changed_language_invalidates_build_receipt(self):
        self.check_stale_report(lambda root, manifest: manifest['units'][0].update(language='c++'), 'compiler_flags')

    def test_changed_compiler_adapter_invalidates_build_receipt(self):
        self.check_stale_report(lambda root, manifest: (root / 'tools/matching.py').write_text('changed adapter'), 'matching_driver_sha256')
