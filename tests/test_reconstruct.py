import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import reconstruct


class ReconstructionWorkflowTests(unittest.TestCase):
    def test_complete_comparison_rejects_missing_and_extra_tail(self):
        for actual in (b'ab', b'abcd'):
            result = reconstruct.compare(b'abc', actual, 4096)
            self.assertFalse(result['exact'])
            self.assertEqual(result['differing_bytes'], 1)
            self.assertIsNotNone(result['first_difference'])

    def test_trial_requires_prediction_and_boundary(self):
        with tempfile.TemporaryDirectory() as directory:
            destination = Path(directory) / 'trial'
            with self.assertRaisesRegex(ValueError, 'prediction'):
                reconstruct.trial({'unit': {}}, destination, b'')
            self.assertFalse(destination.exists())

    def test_summary_groups_duplicate_outputs_without_crediting_errors(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            for name, row in [('a', dict(binary_sha256='same', exact=False)),
                              ('b', dict(binary_sha256='same', exact=False)),
                              ('c', dict(error='compiler failure'))]:
                (root / name).mkdir()
                reconstruct.write(root / name / 'comparison.json', dict(name=name, **row))
            report = reconstruct.summarize(root)
            self.assertEqual((report['trials'], report['exact'], report['errors'], report['duplicate_outputs']), (3, 0, 1, 1))

    def test_pattern_requires_boundary_unchanged_instructions_and_no_history(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = 'void *destroy_actor_mode_state(void){return (void *)0x1010;}\n'
            (root / 'template.c').write_text(source)
            shape = bytes(range(52)) + b''.join(v.to_bytes(4, 'little') for v in (0x1010, 0x1020, 0x9000, 0x1030))
            reference = shape + bytes(60) + shape + bytes(60)
            unit = dict(id='destroy_actor_mode_state', source='template.c', headers=[],
                        ranges=[dict(offset=0, size=68)], reference_sha256=reconstruct.digest(shape))
            manifest = dict(base_address='0x1000', units=[unit])
            with patch.object(reconstruct.project, 'ROOT', root):
                def candidates(blob=reference, catalog={0x1080}, prior=set(), reviewed=set()):
                    return list(reconstruct.destructor_candidates(manifest, blob, catalog, prior, reviewed))
                self.assertEqual(candidates(), [])
                self.assertEqual(len(candidates(reviewed={0x1080})), 1)
                self.assertEqual(len(candidates(catalog=set(), reviewed={0x1080})), 1)
                self.assertEqual(len(candidates(catalog={0x1080, 0x10c4})), 1)
                self.assertEqual(candidates(prior={0x1080}, reviewed={0x1080}), [])
                changed = bytearray(reference);changed[128] ^= 1
                self.assertEqual(candidates(blob=changed, reviewed={0x1080}), [])

    def test_evidence_reuse_rejects_changed_target_range(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / 'config').mkdir()
            reconstruct.write(root / 'config/reconstruction-targets.json', {'targets': []})
            reference = bytes(64)
            receipt = root / 'old.json'
            reconstruct.write(receipt, dict(requests=[dict(id='target', address=4096, size=4)], reference_sha256=reconstruct.digest(reference)))
            manifest = dict(base_address='0x1000', units=[dict(id='target', address='0x1000', ranges=[dict(size=8)])])
            output = root / 'reused.json'
            with patch.object(reconstruct.project, 'ROOT', root), patch.object(reconstruct.project, 'inputs', return_value=(None, manifest, reference, None)):
                with self.assertRaisesRegex(ValueError, 'targets/reference changed'):
                    reconstruct.reuse_dossier(receipt, output)
            self.assertFalse(output.exists())
