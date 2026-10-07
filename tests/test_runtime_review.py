import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from matching import sha
from verify_runtime import REQUIRED, verify


class ReviewTests(unittest.TestCase):
    def test_review_requires_current_receipts_and_equivalent_seeds(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            shot = root / 'shot.png'; shot.write_bytes(b'checkpoint')
            executed = root / 'actions.json'; executed.write_text('{"steps": []}')
            review = {'gameplay_verified': True, 'runs': {}}
            for target in ('baseline', 'rebuilt'):
                receipt = {'target': target, 'status': 'captured', 'cleanup_complete': True,
                           'actions': [], 'inputs': {}, 'executed_scenario': str(executed),
                           'initial_vmu_sha256': {'vmu': 'same'},
                           'artifacts': {str(shot): sha(shot), str(executed): sha(executed)}}
                path = root / (target + '.json'); path.write_text(json.dumps(receipt))
                review['runs'][target] = {'receipt': str(path), 'receipt_sha256': sha(path),
                    'observations': {key: {'path': str(shot), 'sha256': sha(shot),
                                           'observed': 'Fixture review'} for key in REQUIRED}}
            path = root / 'review.json'; path.write_text(json.dumps(review))
            self.assertTrue(verify(path)['gameplay_review_current'])
            changed = root / 'rebuilt.json'
            receipt['initial_vmu_sha256']['vmu'] = 'different'
            changed.write_text(json.dumps(receipt))
            with self.assertRaisesRegex(ValueError, 'Changed reviewed receipt'):
                verify(path)
            review['runs']['rebuilt']['receipt_sha256'] = sha(changed)
            path.write_text(json.dumps(review))
            with self.assertRaisesRegex(ValueError, 'Unequal initial save states'):
                verify(path)
