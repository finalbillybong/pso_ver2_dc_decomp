import signal
import subprocess
import sys
import unittest
from pathlib import Path
from unittest.mock import Mock, patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import dossier


class DossierTests(unittest.TestCase):
    def test_ranges_use_manifest_and_explicit_queue_end(self):
        manifest = {'base_address': '0x1000', 'units': [
            {'id': 'matched', 'address': '0x1010', 'ranges': [{'size': 16}]}]}
        queue = {'targets': [{'id': 'pending', 'address': '0x1040', 'end': '0x1060'}]}
        self.assertEqual(dossier.requested_ranges(manifest, queue, ['pending', 'matched'], 256),
                         [{'id': 'pending', 'address': 0x1040, 'size': 32},
                          {'id': 'matched', 'address': 0x1010, 'size': 16}])
        with self.assertRaisesRegex(ValueError, 'Unknown target'):
            dossier.requested_ranges(manifest, queue, ['missing'], 256)
        with self.assertRaisesRegex(ValueError, 'Invalid target range'):
            dossier.requested_ranges(manifest, queue, ['pending'], 100)

    def test_timeout_cleans_owned_process_group(self):
        process = Mock(pid=12345)
        process.wait.side_effect = [subprocess.TimeoutExpired(['headless'], 1), 0, 0]
        with patch.object(dossier.subprocess, 'Popen', return_value=process) as start, \
             patch.object(dossier.os, 'killpg') as kill:
            with self.assertRaises(subprocess.TimeoutExpired):
                dossier.run_headless(['headless'], {}, None, timeout=1)
            self.assertTrue(start.call_args.kwargs['start_new_session'])
            self.assertEqual(kill.call_args_list[0].args, (12345, signal.SIGTERM))
            self.assertEqual(kill.call_args_list[1].args, (12345, signal.SIGKILL))

    def test_failed_process_keeps_original_error_after_group_exits(self):
        process = Mock(pid=12345)
        process.wait.return_value = 2
        with patch.object(dossier.subprocess, 'Popen', return_value=process), \
             patch.object(dossier.os, 'killpg', side_effect=ProcessLookupError):
            with self.assertRaises(subprocess.CalledProcessError):
                dossier.run_headless(['headless'], {}, None)

    def test_receipt_checks_artifacts_and_database_identity(self):
        receipt = {'project_inputs_sha256': {}, 'artifacts_sha256': {'evidence': 'abc'},
                   'tool_inputs_sha256': {}, 'database_sha256': {'db': 'old'}}
        with patch.object(dossier.project.pso, 'read_json', return_value=receipt), \
             patch.object(dossier.project.pso, 'check_hash') as check, \
             patch.object(dossier.project, 'inputs', return_value=({'scratch': '/scratch'}, None, None, None)), \
             patch.object(dossier, 'project_hashes', return_value={'db': 'changed'}):
            with self.assertRaisesRegex(ValueError, 'database changed'):
                dossier.verify_receipt(Path('receipt'))
            check.assert_called_once_with(Path('evidence'), 'abc')


if __name__ == '__main__':
    unittest.main()
