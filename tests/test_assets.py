import copy
import hashlib
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import assets as dump_assets
import project
from check_publication import issues


def manifest():
    blob = b'ASSETBYTES'
    return blob, {'schema_version': 1, 'policy': 'ranges and hashes only', 'assets': [
        {'id': 'file_1008', 'address': '0x1008', 'offset': 8, 'size': len(blob),
         'sha256': hashlib.sha256(blob).hexdigest(), 'kind': 'embedded_file', 'format': 'test resource'}]}


class AssetTests(unittest.TestCase):
    def setUp(self):
        self.code = {'base_address': '0x1000', 'units': [
            {'id': 'one', 'address': '0x1000', 'source': 'one.c', 'ranges': [{'offset': 0, 'size': 4}]}]}
        self.blob, self.assets = manifest()
        self.reference = b'CODE' + b'____' + self.blob + b'+' * 6

    def test_assets_are_a_separate_origin_extracted_from_the_dump(self):
        spans = project.layout(self.code, 24, None, self.assets)
        self.assertEqual([(s['offset'], s['size'], s['origin']) for s in spans], [
            (0, 4, 'compiled_source'), (4, 4, 'reference_unreconstructed'), (8, 10, 'dump_asset'),
            (18, 6, 'reference_unreconstructed')])
        extracted = dump_assets.extract(self.reference, self.assets)
        image = project.integrate(spans, {'one': b'CODE', **extracted}, self.reference)
        self.assertEqual(image, self.reference)

    def test_source_only_reports_reference_bytes_and_assets_separately(self):
        spans = project.layout(self.code, 24, None, self.assets)
        with self.assertRaisesRegex(ValueError, r'10 bytes still require the reference \(separately, 10 asset bytes'):
            project.integrate(spans, {'one': b'CODE', **dump_assets.extract(self.reference, self.assets)})
        full = copy.deepcopy(self.code)
        full['units'].append({'id': 'two', 'address': '0x1004', 'source': 'two.c', 'ranges': [{'offset': 4, 'size': 4}]})
        full['units'].append({'id': 'three', 'address': '0x1012', 'source': 'three.c', 'ranges': [{'offset': 18, 'size': 6}]})
        spans = project.layout(full, 24, None, self.assets)
        outputs = {'one': b'CODE', 'two': b'____', 'three': b'+' * 6, **dump_assets.extract(self.reference, self.assets)}
        self.assertEqual(project.integrate(spans, outputs), self.reference)

    def test_hash_mismatch_overlap_and_payload_fields_rejected(self):
        with self.assertRaisesRegex(ValueError, 'hash mismatch'):
            dump_assets.extract(self.reference.replace(b'ASSET', b'XSSET'), self.assets)
        for change in [lambda a: a.update(offset=2, address='0x1002'),
                       lambda a: a.update(bytes='41535345'),
                       lambda a: a.update(kind='code'),
                       lambda a: a.update(format='x' * 500),
                       lambda a: a.update(sha256='0' * 63)]:
            assets = copy.deepcopy(self.assets)
            change(assets['assets'][0])
            with self.assertRaises(ValueError):
                project.layout(self.code, 24, None, assets)

    def test_publication_allows_the_manifest_but_not_payloads(self):
        import json
        self.assertFalse(issues('config/assets.json', json.dumps(self.assets).encode()))
        self.assertTrue(issues('config/assets.json', json.dumps({'data': 'QUJD' * 100}).encode()))
        self.assertTrue(issues('src/assets/file_1008.bin', self.blob))
        self.assertTrue(issues('config/file_1008.bin', self.blob))


if __name__ == '__main__':
    unittest.main()
