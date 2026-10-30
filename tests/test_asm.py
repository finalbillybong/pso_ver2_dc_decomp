"""Assembly units: text-free manifest, source lint, range subtraction, layout origins,
publication rules and progress accounting. Real generation and assembly need the dump and
the pinned assembler, so those tests skip in CI; everything else uses fixtures."""
import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import asm_units
import asmgen
import progress
import project
from check_publication import allowed, issues

ROOT = Path(__file__).resolve().parents[1]
BASE = 0x1000

HAND = '''! Hand-written routine.
\t.text
\t.global _fn_00001010
_fn_00001010:
\tmov.l .L0000101c, r1
\tfschg
\tfmov @r4+,fr0
\trts
\tfschg
\t.balign 4
.L0000101c:
\t.long _helper
'''

FALLBACK = '''! NOT DECOMPILED.
\t.text
\t.skip 2\t! phase
\t.global _fn_00001022
\t.set .Lx00001010, _fn_00001022 - 0x12
_fn_00001022:
\tbsr .Lx00001010
\tnop
\trts
\tnop
'''


def hand_unit():
    return {'id': 'hand_00001010', 'class': 'hand', 'address': '0x1010',
            'ranges': [{'offset': 0x10, 'size': 16}], 'reference_sha256': '0' * 64,
            'evidence': [{'address': '0x1012', 'instruction': 'fschg'}]}


def fallback_unit():
    return {'id': 'fallback_00001022', 'class': 'fallback', 'address': '0x1022',
            'ranges': [{'offset': 0x22, 'size': 8}], 'reference_sha256': '0' * 64,
            'status': 'not_decompiled'}


def hand_sub():
    return dict(hand_unit(), entries=[{'name': '_fn_00001010', 'address': '0x1010'}],
                symbols={'_helper': '0x1100'})


def fallback_sub():
    return dict(fallback_unit(), entries=[{'name': '_fn_00001022', 'address': '0x1022'}], symbols={})


def manifest(*units):
    return {'schema_version': 1, 'code_extent': {'bytes': 0x80, 'basis': 'fixture'}, 'units': list(units)}


CODE = {'base_address': hex(BASE), 'units': [
    {'id': 'c_00001000', 'source': 'src/c.c', 'address': '0x1000', 'ranges': [{'offset': 0, 'size': 16}],
     'functions': [{'name': 'c_00001000', 'address': '0x1000', 'size': 16}]}]}


class ManifestTests(unittest.TestCase):
    def test_accepts_text_free_units(self):
        asm_units.validate(manifest(hand_unit(), fallback_unit()), BASE, 0x100)

    def test_rejects_text_entries_symbols_bad_class_or_evidence(self):
        bad = []
        u = hand_unit(); u['class'] = 'decompiled'; bad.append(u)
        u = hand_unit(); u['entries'] = [{'name': '_x', 'address': '0x1010'}]; bad.append(u)   # no entries in manifest
        u = hand_unit(); u['symbols'] = {'_helper': '0x1100'}; bad.append(u)                   # no symbols in manifest
        u = hand_unit(); u['text'] = HAND; bad.append(u)                                       # never any text
        u = hand_unit(); u['evidence'] = []; bad.append(u)
        u = hand_unit(); u['evidence'] = [{'address': '0x1012', 'instruction': 'ldc r0,sr'}]; bad.append(u)  # SHC intrinsic
        u = fallback_unit(); del u['status']; bad.append(u)
        for unit in bad:
            with self.subTest(unit=unit), self.assertRaises(ValueError):
                asm_units.validate(manifest(unit), BASE, 0x100)


class LintTests(unittest.TestCase):
    def test_accepts_generated_forms(self):
        self.assertEqual(asm_units.lint(HAND, hand_sub(), {0x1100})['undefined'], ['_helper'])
        self.assertEqual(asm_units.lint(FALLBACK, fallback_sub())['instructions'], 4)

    def test_rejects_binaries_bulk_data_raw_runs_and_absolute_sets(self):
        bad = [HAND.replace('\tfschg\n\tfmov', '\t.incbin "x.bin"\n\tfmov'),
               HAND.replace('\tfschg\n\tfmov', '\t.byte 1\n\tfmov'),
               HAND.replace('\tfschg\n\tfmov', '\t.short 0x1\n\t.short 0x2\n\t.short 0x3\n\tfmov'),
               HAND.replace('\t.long _helper', '\t.long _helper + 4'),
               HAND.replace('.L0000101c:\n', ''),
               FALLBACK.replace('\t.set .Lx00001010, _fn_00001022 - 0x12', '\t.set .Lx00001010, 0x1010')]
        for text in bad:
            with self.subTest(text=text[-50:]), self.assertRaises(ValueError):
                asm_units.lint(text, hand_sub() if text.startswith('! Hand') else fallback_sub())

    def test_literal_block_behind_a_referenced_label_is_not_raw(self):
        text = HAND.replace('\t.long _helper', '\t.long _helper\n\t.long 0x12345678\n\t.short 0x0001')
        self.assertEqual(asm_units.lint(text, hand_sub())['raw_bytes'], 0)

    def test_word_equal_to_symbol_address_is_reported(self):
        text = HAND.replace('\t.long _helper', '\t.long 0x00001100')
        self.assertEqual(asm_units.lint(text, dict(hand_sub(), symbols={}), {0x1100})['unsymbolized'], [0x1100])

    def test_evidence_instruction_must_be_present(self):
        with self.assertRaisesRegex(ValueError, 'Evidence instruction'):
            asm_units.lint(HAND.replace('\tfschg', '\tnop'), hand_sub())


class SubtractTests(unittest.TestCase):
    def test_subtract_removes_admitted_ranges(self):
        self.assertEqual(asm_units.subtract(0x1000, 0x1100, [(0x1040, 0x1060)]), [(0x1000, 0x1040), (0x1060, 0x1100)])
        self.assertEqual(asm_units.subtract(0x1000, 0x1100, [(0x1000, 0x1100)]), [])
        self.assertEqual(asm_units.subtract(0x1000, 0x1100, [(0x0f00, 0x1010), (0x10f0, 0x1200)]), [(0x1010, 0x10f0)])


class LayoutTests(unittest.TestCase):
    def test_assembly_has_its_own_origins(self):
        root = self._root(manifest(hand_unit(), fallback_unit()))
        asm = asm_units.read(root)
        # placed_spans uses ROOT; point it at our fixture via monkeypatching the config dir
        spans = project.layout(CODE, 0x100, {'schema_version': 1, 'units': []},
                               {'schema_version': 1, 'assets': []}, asm)
        # the fixture asm has no overlap; both units appear with assembly origins
        origins = {s.get('unit'): s['origin'] for s in spans if s.get('unit')}
        self.assertEqual(origins.get('hand_00001010'), 'assembled_hand')
        self.assertEqual(origins.get('fallback_00001022'), 'assembled_fallback')
        self.assertEqual(sum(s['size'] for s in spans), 0x100)

    def _root(self, asm):
        d = Path(tempfile.mkdtemp())
        (d / 'config').mkdir()
        (d / 'config/project.json').write_text(json.dumps(CODE))
        (d / 'config/asm.json').write_text(json.dumps(asm))
        self._patch(d)
        return d

    def _patch(self, d):
        # placed_spans/effective_units read ROOT; redirect for the test.
        asm_units.ROOT = d
        project.ROOT = d
        self.addCleanup(lambda: (setattr(asm_units, 'ROOT', ROOT), setattr(project, 'ROOT', ROOT)))


class AccountingTests(unittest.TestCase):
    def test_asm_figures_are_separate_and_need_a_code_extent(self):
        asm = manifest(hand_unit(), fallback_unit()); asm['code_extent']['bytes'] = 0x80
        fig = progress.asm_figures(asm, 16, 8, 8, 16, 8, 0x80, 0x100)
        self.assertEqual(fig['source_buildable_with_dump_bytes'], 56)
        self.assertEqual(fig['retained_code_side_bytes'], 0x80 - 40)
        self.assertIn('NOT decompiled', fig['assembly_metric'])
        for extent in (None, 0x70):
            bad = copy.deepcopy(asm); bad['code_extent']['bytes'] = extent
            with self.subTest(extent=extent), self.assertRaises(ValueError):
                progress.asm_figures(bad, 16, 8, 8, 16, 8, 0x80, 0x100)


class PublicationTests(unittest.TestCase):
    def test_manifest_allowed_but_no_committed_assembly(self):
        self.assertTrue(allowed('config/asm.json'))
        self.assertFalse(allowed('src/asm/hand/x.s'))
        self.assertFalse(allowed('config/asm-installed.json'))
        self.assertIn('assembly source may not be committed', ' '.join(issues('tools/x.s', b'nop\n', '100644')))
        long_value = json.dumps({'u': 'x' * 500})
        self.assertIn('possible embedded disassembly', ' '.join(issues('config/asm.json', long_value.encode())))
        self.assertIn('possible embedded disassembly', ' '.join(issues('config/asm.json', json.dumps({'t': 'mov.l r1,r2\nrts'}).encode())))


@unittest.skipUnless((ROOT / asm_units.RECEIPT).exists() and (ROOT / 'local.json').exists(),
                     'pinned assembler and dump not present (never in CI)')
class RealAssemblerTests(unittest.TestCase):
    def build(self, text, sub):
        with tempfile.TemporaryDirectory() as t:
            src = Path(t) / 'u.s'; src.write_text(text)
            return asm_units.assemble(src, sub, ROOT)

    def test_known_bytes(self):
        sub = dict(hand_sub(), address='0x8c001010', entries=[{'name': '_fn_00001010', 'address': '0x8c001010'}])
        code = self.build(HAND, sub)
        self.assertEqual(code.hex(), '02d1fdf349f00b00fdf30900' + '0011' + '0000')

    def test_unbound_pointer_and_crossing_branch_fail(self):
        sub = dict(hand_sub(), address='0x8c001010', symbols={'_other': '0x1100'},
                   entries=[{'name': '_fn_00001010', 'address': '0x8c001010'}])
        with self.assertRaises(ValueError):
            self.build(HAND, sub)  # _helper not bound

    def test_generator_reassembles_admitted_functions(self):
        import random
        img = asmgen.reference_image(ROOT); enc = asmgen.build_enc(ROOT)
        names, is_code = asm_units.generation_context(ROOT)
        known = asm_units.known_addresses(ROOT)
        man = json.loads((ROOT / 'config/project.json').read_text())
        pool = [u for u in man['units'] if 'compiler' not in u]
        random.seed(3)
        tools = asm_units.load_tools(ROOT)
        for u in random.sample(pool, 12):
            a = int(u['address'], 0); n = u['ranges'][0]['size']
            ent = [int(f['address'], 0) for f in u['functions']]
            text, info = asmgen.generate(img, {}, enc, a, a + n, names, ent, is_code, '', 0x8c010000, known)
            sub = {'id': u['id'], 'class': 'fallback', 'address': hex(a), 'status': 'not_decompiled',
                   'ranges': [{'offset': a - 0x8c010000, 'size': n}],
                   'entries': [{'name': m, 'address': hex(x)} for x, m in zip(sorted(set(ent) | {a}), info['entries'])],
                   'symbols': {k: hex(v) for k, v in sorted(info['undefined'].items())}}
            with tempfile.TemporaryDirectory() as t:
                p = Path(t) / 'u.s'; p.write_text(text)
                self.assertEqual(asm_units.assemble(p, sub, ROOT, tools), bytes(img[a - 0x8c010000:a - 0x8c010000 + n]))


if __name__ == '__main__':
    unittest.main()
