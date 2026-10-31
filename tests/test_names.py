import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import names
import progress

BASE, END = 0x8c010000, 0x8c010000 + 0x1000


def entry(**kw):
    e = dict(address='0x8c010080', kind='function', name='example', confidence='high', set='curated',
             evidence='short reason')
    e.update(kw)
    return e


class NamesManifestTests(unittest.TestCase):
    def test_committed_manifest_is_clean(self):
        doc = names.read()
        self.assertEqual(names.lint(doc, *names.image_range()), [])
        self.assertTrue(doc['names'])

    def test_manifest_is_not_a_build_input(self):
        manifest = json.loads((ROOT / 'config/project.json').read_text())
        self.assertNotIn(names.MANIFEST, progress.inputs(ROOT, manifest))

    def test_lint_accepts_valid_entries(self):
        doc = {'schema_version': 1, 'names': [entry(), entry(address='0x8c418a00', kind='global', name='g_x')]}
        self.assertEqual(names.lint(doc, BASE, END), [])

    def test_lint_rejects_bad_entries(self):
        cases = [
            [entry(), entry(address='0x8c010082')],          # duplicate name
            [entry(), entry(name='other')],                  # duplicate address
            [entry(name='1bad')],                            # not an identifier
            [entry(name='struct')],                          # C keyword
            [entry(address='0x8c020000')],                   # function outside image
            [entry(address='0x8c010081')],                   # odd function address
            [entry(address='0x8e000000', kind='global')],   # global outside RAM
            [entry(confidence='low')],
            [entry(set='other')],
            [entry(evidence='')],
            [entry(address='0x8C010080')],                   # non-canonical spelling
        ]
        for names_list in cases:
            with self.subTest(names=names_list):
                self.assertTrue(names.lint({'schema_version': 1, 'names': names_list}, BASE, END))


if __name__ == '__main__':
    unittest.main()
