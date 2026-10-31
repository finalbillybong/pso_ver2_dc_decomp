"""Dump extracts and code reachability: manifest rules, re-cutting around other origins,
complete-coverage layout for the source-only build, publication rules, and the
recursive-descent proof that gap bytes are code. Fixtures only; no dump needed."""
import hashlib
import json
import re
import tempfile
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import asmgen
import extracts as X
import project
from check_publication import allowed, issues

BASE = 0x1000


def extract(addr, blob, kind='untyped_bytes'):
    return {'id': 'x_%08x' % addr, 'address': hex(addr), 'offset': addr - BASE, 'size': len(blob),
            'sha256': hashlib.sha256(blob).hexdigest(), 'kind': kind}


CODE = {'base_address': hex(BASE), 'units': [
    {'id': 'c_00001000', 'source': 'src/c.c', 'address': '0x1000', 'ranges': [{'offset': 0, 'size': 16}],
     'functions': [{'name': 'c_00001000', 'address': '0x1000', 'size': 16}]}]}


class ManifestTests(unittest.TestCase):
    def test_accepts_ranges_hashes_and_kinds_only(self):
        doc = {'schema_version': 1, 'extracts': [extract(0x1010, b'\1\2'), extract(0x1012, b'\0\0', 'zero_run')]}
        X.validate(doc, BASE, 0x100)
        for bad in ({'payload': 'AAAA'}, {'kind': 'code'}, {'id': 'x_00001011'}, {'sha256': 'z' * 64}):
            e = dict(extract(0x1010, b'\1\2'), **bad)
            with self.subTest(bad=bad), self.assertRaises(ValueError):
                X.validate({'schema_version': 1, 'extracts': [e]}, BASE, 0x100)

    def test_hash_is_checked_against_the_dump(self):
        ref = bytes(range(32))
        doc = {'schema_version': 1, 'extracts': [extract(0x1010, ref[0x10:0x14])]}
        X.check(ref, doc)
        with self.assertRaisesRegex(ValueError, 'hash mismatch'):
            X.check(bytes(32), doc)


class PlacementTests(unittest.TestCase):
    def test_extracts_are_recut_around_every_other_origin(self):
        doc = {'schema_version': 1, 'extracts': [extract(0x1000, bytes(0x40))]}
        placed = X.placed(doc, BASE, [(0x1000, 0x1010), (0x1020, 0x1028)])
        self.assertEqual([(p['offset'], p['size']) for p in placed], [(0x10, 0x10), (0x28, 0x18)])
        self.assertEqual([p['id'] for p in placed], ['x_00001000_0', 'x_00001000_1'])

    def test_complete_coverage_allows_a_source_only_integration(self):
        image = bytes(range(16)) + bytes(16)
        doc = {'schema_version': 1, 'extracts': [extract(0x1010, image[16:])]}
        spans = project.layout(CODE, len(image), {'schema_version': 1, 'units': []},
                               {'schema_version': 1, 'assets': []}, None, doc)
        self.assertEqual([s['origin'] for s in spans], ['compiled_source', 'dump_extract'])
        project.require_source_coverage(spans)  # no reference gaps remain
        out = project.integrate(spans, {'c_00001000': image[:16], 'x_00001010': image[16:]}, None)
        self.assertEqual(out, image)
        # Without the extract the gap still requires the reference.
        spans = project.layout(CODE, len(image), None, None, None, None)
        with self.assertRaisesRegex(ValueError, 'Source-only'):
            project.require_source_coverage(spans)

    def test_extracts_never_count_as_compiled_or_typed(self):
        doc = {'schema_version': 1, 'extracts': [extract(0x1010, bytes(16))]}
        spans = project.layout(CODE, 32, None, None, None, doc)
        self.assertEqual(sum(s['size'] for s in spans if s['origin'] in ('compiled_source', 'compiled_data')), 16)


class PublicationTests(unittest.TestCase):
    def test_manifest_allowed_payload_rejected(self):
        self.assertTrue(allowed('config/extracts.json'))
        self.assertIn('long value', ' '.join(issues('config/extracts.json', json.dumps({'b': 'A' * 300}).encode())))


class ReachTests(unittest.TestCase):
    """asmgen.reach_code proves gap bytes are code only by a clean executed path."""

    def setUp(self):
        asmgen.ENC_CACHE.clear()
        asmgen.ENC_CACHE.update({0x4f22: 'sts.l PR,@-r15', 0x000b: 'rts', 0x0009: 'nop', 0x4f26: 'lds.l @r15+,PR',
                                 0xe001: 'mov #0x1,r0', 0x2fe6: 'mov.l r14,@-r15'})

    def image(self, halfwords):
        return struct.pack('<%dH' % len(halfwords), *halfwords)

    def test_function_shaped_entry_after_a_terminator_is_reached(self):
        # c: rts; nop | gap: sts.l pr; mov #1,r0; lds.l pr; rts; nop
        img = self.image([0x000b, 0x0009, 0x4f22, 0xe001, 0x4f26, 0x000b, 0x0009, 0x0009])
        own = bytearray(len(img)); own[0:4] = b'\2' * 4
        stats = asmgen.reach_code(img, BASE, own, set(), {BASE, BASE + 2})
        self.assertEqual(bytes(own[4:14]), b'\2' * 10)
        self.assertEqual(stats['function_shaped'], 10)

    def test_invalid_encoding_on_an_executed_path_rejects_the_entry(self):
        img = self.image([0x000b, 0x0009, 0x4f22, 0xffff, 0x000b, 0x0009])
        own = bytearray(len(img)); own[0:4] = b'\2' * 4
        stats = asmgen.reach_code(img, BASE, own, set(), {BASE, BASE + 2})
        self.assertEqual(bytes(own[4:]), bytes(len(img) - 4))
        self.assertEqual(stats['entries_rejected'], 1)

    def test_typed_function_pointer_is_a_referenced_entry(self):
        img = self.image([0xe001, 0x000b, 0x0009, 0x0009])
        own = bytearray(len(img))
        stats = asmgen.reach_code(img, BASE, own, {0x1000}, set())
        self.assertEqual(bytes(own[0:6]), b'\2' * 6)
        self.assertEqual(stats['referenced'], 6)


class SeedTests(unittest.TestCase):
    """Recursive descent is seeded from data structure (declared functions bound in typed
    data), never from symbol names, so renaming symbols cannot change the plan."""

    SOURCE = '''typedef void (*VirtualFunction)(void);
extern void {f}(void);
extern const char {d}[];
VirtualFunction const vt_00001100[3] = {{ 0, 0, {f} }};
const void *const d_0000110c[1] = {{ {d} }};
'''

    def targets(self, f, d):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            (root / 'src/data').mkdir(parents=True)
            (root / 'src/data/m.c').write_text(self.SOURCE.format(f=f, d=d))
            unit = {'source': 'src/data/m.c', 'symbols': {'_' + f: '0x1200', '_' + d: '0x1300'}}
            return asmgen.function_pointer_targets(root, {'units': [unit]})

    def test_declared_functions_are_seeds_whatever_their_name(self):
        self.assertEqual(self.targets('fn_00001200', 'str_00001300'), {0x1200})
        self.assertEqual(self.targets('game_main_00001200', 'title_text'), {0x1200})
        self.assertEqual(self.targets('fn_x', 'fn_00001300'), {0x1200})  # a data object named fn_ is not a seed

    def test_renaming_every_committed_data_symbol_keeps_the_seed_set(self):
        root = Path(__file__).resolve().parents[1]
        data = json.loads((root / 'config/data.json').read_text())
        before = asmgen.function_pointer_targets(root, data)
        self.assertTrue(before)
        names = sorted({n for u in data['units'] for n in u.get('symbols', {})})
        rename = {n: '_renamed_%05d' % i for i, n in enumerate(names)}
        ident = re.compile(r'\b[A-Za-z_][A-Za-z_0-9]*\b')
        swap = lambda m: rename['_' + m[0]][1:] if '_' + m[0] in rename else m[0]
        with tempfile.TemporaryDirectory() as t:
            tmp = Path(t)
            units = []
            for u in data['units']:
                text = (root / u['source']).read_text()
                text = ident.sub(swap, text)
                (tmp / u['source']).parent.mkdir(parents=True, exist_ok=True)
                (tmp / u['source']).write_text(text)
                units.append(dict(u, symbols={rename[n]: a for n, a in u.get('symbols', {}).items()}))
            self.assertEqual(asmgen.function_pointer_targets(tmp, {'units': units}), before)


if __name__ == '__main__':
    unittest.main()
