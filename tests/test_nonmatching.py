import json
from pathlib import Path
import shutil
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import nonmatching
from check_publication import issues

HEADER = '''/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c001000
 * function: {func}
 * language: c
 * reference size: 40 bytes
 * compiled size: {got} bytes (+0.0%)
 * differing lines: 3 of 20 reference instruction lines
 * differing bytes: 9
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated; not proven
 *   equivalent to the original
 */
'''
BODY = 'extern int call_8c002000(int);\nint {func}(int a)\n{{\n    return {expr};\n}}\n'


class NonmatchingArchiveTests(unittest.TestCase):
    def fixture(self, func='operation_8c001000', got=40, expr='call_8c002000(a) + 1', admitted=None, names=()):
        temp = Path(tempfile.mkdtemp())
        self.addCleanup(shutil.rmtree, temp)
        (temp / 'config').mkdir()
        units = [{'id': 'u', 'source': 'src/objects/u.c', 'address': admitted, 'ranges': [{'offset': int(admitted, 16) - 0x8c000000, 'size': 16}],
                  'functions': [{'name': 'u', 'address': admitted, 'size': 16}]}] if admitted else []
        (temp / 'config/project.json').write_text(json.dumps({'base_address': '0x8c000000', 'units': units}))
        (temp / 'config/names.json').write_text(json.dumps({'names': [
            {'address': a, 'kind': 'function', 'name': n, 'confidence': 'high', 'set': 'curated'} for a, n in names]}))
        (temp / 'nonmatching/objects').mkdir(parents=True)
        (temp / 'nonmatching/README.md').write_text('archive\n')
        rel = 'nonmatching/objects/%s.c' % func
        (temp / rel).write_text(HEADER.format(func=func, got=got) + BODY.format(func=func, expr=expr))
        entry = {'address': '0x8c001000', 'file': rel, 'function': func, 'language': 'c', 'reference_size': 40,
                 'compiled_size': got, 'differing_lines': 3, 'differing_bytes': 9,
                 'provenance': 'generator draft (mode extern)', 'symbols': {'call_8c002000': '0x8c002000'}}
        (temp / 'config/nonmatching.json').write_text(json.dumps({'entries': [entry]}))
        return temp

    def test_consistent_archive_passes(self):
        self.assertEqual(nonmatching.check(self.fixture()), [])

    def test_header_continuation_lines_are_joined(self):
        fields = nonmatching.parse_header(HEADER.format(func='f_8c001000', got=40))
        self.assertEqual(fields['known gaps'], 'machine-generated; not proven equivalent to the original')
        self.assertEqual(nonmatching.header_values(fields)['compiled_size'], 40)

    def test_missing_header_unlisted_file_and_metric_drift_fail(self):
        root = self.fixture()
        path = root / 'nonmatching/objects/operation_8c001000.c'
        path.write_text(path.read_text().replace('differing bytes: 9', 'differing bytes: 8'))
        (root / 'nonmatching/objects/stray_8c003000.c').write_text('int x;\n')
        problems = '\n'.join(nonmatching.check(root))
        self.assertIn('differing_bytes differs', problems)
        self.assertIn('stray_8c003000.c: file is not listed', problems)
        path.write_text('int operation_8c001000(void) { return 0; }\n')
        self.assertIn('missing the leading NON-MATCHING header', '\n'.join(nonmatching.check(root)))

    def test_quality_gate(self):
        self.assertIn('within 25%', '\n'.join(nonmatching.check(self.fixture(got=51))))
        self.assertEqual(nonmatching.check(self.fixture(got=50)), [])
        for expr, label in [('call_8c002000(a) /* TODO: rest */', 'TODO'),
                            ('(a >= 0 ? a : a) + call_8c002000(a)', 'steering form'),
                            ('call_8c002000(a); if (0) a = 1', 'steering form')]:
            with self.subTest(expr=expr):
                self.assertIn(label, '\n'.join(nonmatching.check(self.fixture(expr=expr))))
        # Banned words inside comments are not code.
        self.assertEqual(nonmatching.check(self.fixture(expr='call_8c002000(a) /* not if (0) */')), [])

    def test_overlap_with_admitted_unit_fails_and_prune_removes(self):
        root = self.fixture(admitted='0x8c001010')
        self.assertIn('overlaps admitted unit u', '\n'.join(nonmatching.check(root)))
        nonmatching.regenerate(root, prune=True)
        self.assertFalse((root / 'nonmatching/objects/operation_8c001000.c').exists())
        self.assertEqual(json.loads((root / 'config/nonmatching.json').read_text())['entries'], [])
        self.assertEqual(nonmatching.check(self.fixture(admitted='0x8c001028')), [])

    def test_regenerate_applies_names_to_function_and_callees(self):
        root = self.fixture(names=[('0x8c001000', 'init_thing'), ('0x8c002000', 'helper')])
        changes = nonmatching.regenerate(root, write=False)
        self.assertTrue(any('renamed' in c for c in changes))
        self.assertTrue((root / 'nonmatching/objects/operation_8c001000.c').exists())
        nonmatching.regenerate(root)
        path = root / 'nonmatching/objects/init_thing_8c001000.c'
        text = path.read_text()
        self.assertIn(' * function: init_thing_8c001000', text)
        self.assertIn('int init_thing_8c001000(int a)', text)
        self.assertIn('return helper_8c002000(a) + 1;', text)
        entry = json.loads((root / 'config/nonmatching.json').read_text())['entries'][0]
        self.assertEqual(entry['symbols'], {'helper_8c002000': '0x8c002000'})
        self.assertEqual(nonmatching.check(root), [])
        self.assertEqual(nonmatching.regenerate(root), [])

    def test_class_header_pointer_is_added_and_checked(self):
        root = self.fixture(names=[('0x8c001000', 'TObjThing_update')])
        (root / 'src/include/classes').mkdir(parents=True)
        (root / 'src/include/classes/TObjThing.h').write_text('struct TObjThing;\n')
        (root / 'src/include/classes/TObj.h').write_text('struct TObj;\n')
        nonmatching.regenerate(root)
        text = (root / 'nonmatching/objects/TObjThing_update_8c001000.c').read_text()
        self.assertIn(' * class header: src/include/classes/TObjThing.h ', text)
        self.assertLess(text.index('class header:'), text.index('*/'))
        self.assertIn('TObjThing_update_8c001000(int a)', text)  # the draft keeps its own types
        self.assertEqual(nonmatching.check(root), [])
        (root / 'src/include/classes/TObjThing.h').unlink()
        self.assertIn('class header should be', '\n'.join(nonmatching.check(root)))
        nonmatching.regenerate(root)
        self.assertNotIn('class header:', (root / 'nonmatching/objects/TObjThing_update_8c001000.c').read_text())
        self.assertEqual(nonmatching.check(root), [])

    def set_runtime(self, root, runtime):
        path = root / 'config/nonmatching.json'
        manifest = json.loads(path.read_text())
        manifest['entries'][0]['runtime'] = runtime
        path.write_text(json.dumps(manifest))

    def test_runtime_verdict_line_is_written_preserved_and_validated(self):
        root = self.fixture()
        scenario = nonmatching.RUNTIME_SCENARIOS[2]
        self.set_runtime(root, {'verdict': 'diverged', 'scenarios': [scenario],
                                'first_divergence': 'call 1 returns 0 where the original returns 1'})
        self.assertIn('runtime header line does not match', '\n'.join(nonmatching.check(root)))
        nonmatching.regenerate(root)
        path = root / 'nonmatching/objects/operation_8c001000.c'
        text = path.read_text()
        self.assertIn(' * runtime: DIVERGED on offline start: new character to Pioneer 2 (call 1 returns 0', text)
        self.assertIn('known incorrect', text)
        self.assertLess(text.index('runtime:'), text.index('*/'))
        self.assertEqual(nonmatching.check(root), [])
        # regenerate keeps the record and re-renders the (wrapped) line unchanged
        self.assertEqual(nonmatching.regenerate(root), [])
        self.assertEqual(json.loads((root / 'config/nonmatching.json').read_text())['entries'][0]['runtime']['verdict'], 'diverged')
        self.assertEqual(nonmatching.parse_header(path.read_text())['runtime'],
                         nonmatching.runtime_line({'verdict': 'diverged', 'scenarios': [scenario],
                                                   'first_divergence': 'call 1 returns 0 where the original returns 1'}))
        for bad, msg in [({'verdict': 'equal', 'scenarios': ['my house']}, 'scenarios must be'),
                         ({'verdict': 'passed', 'scenarios': [scenario]}, 'verdict must be'),
                         ({'verdict': 'suspect', 'scenarios': [scenario]}, 'needs exactly the keys'),
                         ({'verdict': 'suspect', 'scenarios': [scenario], 'bytes_differ': 0}, 'positive integer')]:
            with self.subTest(runtime=bad):
                self.set_runtime(root, bad)
                self.assertIn(msg, '\n'.join(nonmatching.check(root)))
        self.set_runtime(root, None)
        manifest = json.loads((root / 'config/nonmatching.json').read_text())
        del manifest['entries'][0]['runtime']
        (root / 'config/nonmatching.json').write_text(json.dumps(manifest))
        self.assertIn('runtime header line without', '\n'.join(nonmatching.check(root)))
        nonmatching.regenerate(root)
        self.assertNotIn('runtime:', path.read_text())
        self.assertEqual(nonmatching.check(root), [])

    def test_runtime_lines(self):
        a, b = nonmatching.RUNTIME_SCENARIOS[:2]
        self.assertEqual(nonmatching.runtime_line({'verdict': 'equal', 'scenarios': [a, b]}),
                         'equal on boot+title+opening movie; menu to registration screen '
                         '(emulator A/B: RAM, trace and sampled call I/O); not proof')
        self.assertEqual(nonmatching.runtime_line({'verdict': 'suspect', 'scenarios': [a], 'bytes_differ': 24}),
                         'suspect on boot+title+opening movie (24 bytes differ, I/O equal); not proof')
        self.assertIn('replaces a draft that DIVERGED', nonmatching.runtime_line({'verdict': 'unverified', 'scenarios': [a]}))
        self.assertIn('offline start: Pioneer 2 office walk and NPC dialogue', nonmatching.RUNTIME_SCENARIOS)
        self.assertEqual(nonmatching.runtime_issues({'verdict': 'diverged', 'scenarios': list(nonmatching.RUNTIME_SCENARIOS),
                                                     'first_divergence': 'crashes the emulator at vblank 8014'}), [])

    def test_register_holes_fail_the_gate(self):
        self.assertIn('register or value hole', '\n'.join(nonmatching.check(self.fixture(expr='call_8c002000(a /* ? r3 */)'))))

    def test_publication_allowlist(self):
        self.assertFalse(issues('nonmatching/objects/operation_8c001000.c', b'int x;'))
        self.assertFalse(issues('nonmatching/README.md', b'archive'))
        self.assertFalse(issues('config/nonmatching.json', b'{}'))
        self.assertTrue(issues('nonmatching/objects/notes.txt', b'x'))
        self.assertTrue(issues('nonmatching/objects/x.s', b'x'))

    def test_repository_archive_is_consistent_and_outside_the_build(self):
        if not (ROOT / nonmatching.MANIFEST).exists():
            self.skipTest('no archive')
        self.assertEqual(nonmatching.check(ROOT), [])
        manifest = json.loads((ROOT / 'config/project.json').read_text())
        sources = {u['source'] for u in manifest['units']}
        self.assertFalse(any(s.startswith('nonmatching/') for s in sources))
        proof = json.loads((ROOT / 'config/progress-proof.json').read_text())
        self.assertFalse(any(n.startswith('nonmatching/') or n == nonmatching.MANIFEST for n in proof['inputs_sha256']))


if __name__ == '__main__':
    unittest.main()
