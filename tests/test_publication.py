import importlib.util
import json
from pathlib import Path
import shutil
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import progress
from check_publication import issues


class PublicationTests(unittest.TestCase):
    def test_private_files_rejected_even_when_force_added(self):
        for name in ['local.json', 'config/runtime.json', 'config/source-validation.json',
                     'orig/save.vmu', 'docs/registration.png', 'src/secret.bin', '.env']:
            with self.subTest(name=name):
                self.assertTrue(issues(name, b'private'))

    def test_credentials_binary_and_symlinks_rejected_without_echoing_values(self):
        value = 'EXAMPLE' + '1234567'
        for blob in [('access_' + 'key = ' + value).encode(),
                     ('serial_' + 'number: ' + value).encode(), b'\x00binary', b'\xff\xfe']:
            errors = issues('src/example.c', blob)
            self.assertTrue(errors)
            self.assertNotIn(value, str(errors))
        self.assertTrue(issues('src/example.c', b'elsewhere', '120000'))
        self.assertFalse(issues('src/example.c', b'int example(void) { return 1; }'))
        self.assertFalse(issues('src/example.cpp', b'extern "C" int example() { return 1; }'))
        self.assertTrue(issues('src/example.cpp', b'\x00binary'))
        self.assertTrue(issues('src/example.cpp', ('access_' + 'key = ' + value).encode()))

    def test_changed_source_cannot_keep_old_progress(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            for name in progress.read(ROOT, 'config/progress-proof.json')['inputs_sha256']:
                dest = root / name
                dest.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / name, dest)
            shutil.copyfile(ROOT / 'config/progress-proof.json', root / 'config/progress-proof.json')
            report = progress.summary(root)
            self.assertEqual(report['compiled_range_bytes'] + report['retained_reference_bytes'],
                             report['decoded_image_bytes'])
            self.assertIsNone(report['code_completion_percent'])
            self.assertIsNone(report['total_functions'])
            manifest = progress.read(root, 'config/project.json')
            sample = progress.read(root, 'config/samples.json')['samples'][-1]
            for name in [manifest['units'][0]['source'], sample['source']]:
                with self.subTest(source=name):
                    source = root / name
                    original = source.read_bytes()
                    source.write_text('int changed;\n')
                    with self.assertRaisesRegex(ValueError, 'checkpoint is stale'):
                        progress.summary(root)
                    source.write_bytes(original)

    def test_incomplete_verification_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            for name in progress.read(ROOT, 'config/progress-proof.json')['inputs_sha256']:
                dest = root / name
                dest.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / name, dest)
            proof = progress.read(ROOT, 'config/progress-proof.json')
            proof['checks'] = ['integrated_image_exact']
            (root / 'config/progress-proof.json').write_text(json.dumps(proof))
            with self.assertRaisesRegex(ValueError, 'Incomplete exact-build verification'):
                progress.summary(root)

    def test_changed_module_language_settings_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            for name in progress.read(ROOT, 'config/progress-proof.json')['inputs_sha256']:
                dest = root / name
                dest.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / name, dest)
            proof = progress.read(ROOT, 'config/progress-proof.json')
            first = next(iter(proof['unit_flags']))
            proof['unit_flags'][first] = progress.FLAGS + ['-O0']
            (root / 'config/progress-proof.json').write_text(json.dumps(proof))
            with self.assertRaisesRegex(ValueError, 'module language settings changed'):
                progress.summary(root)


if __name__ == '__main__':
    unittest.main()
