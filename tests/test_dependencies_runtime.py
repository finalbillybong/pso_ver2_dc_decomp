import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import matching
import project
import runtime


class HeaderTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        (self.root / 'inc').mkdir()
        self.source = self.root / 'test.c'
        self.source.write_text('#include "inc/a.h"\nint test(void) { return VALUE; }\n')
        (self.root / 'inc/a.h').write_text('#include "inc/b.h"\n')
        (self.root / 'inc/b.h').write_text('#define VALUE 1\n')
        self.unit = {'headers': ['inc/a.h', 'inc/b.h']}

    def test_header_change_invalidates_provenance_even_without_code_change(self):
        initial = matching.dependencies(self.source, self.unit, self.root)
        (self.root / 'inc/b.h').write_text('#define VALUE 1\n/* changed */\n')
        self.assertNotEqual(initial, matching.dependencies(self.source, self.unit, self.root))

    def test_transitive_headers_must_be_declared(self):
        with self.assertRaisesRegex(ValueError, 'Undeclared include'):
            matching.dependencies(self.source, {'headers': ['inc/a.h']}, self.root)

    def test_rejects_macro_system_import_and_alternative_includes(self):
        for directive in ['#include <inc/a.h>', '#include HEADER', '#include_next "inc/a.h"',
                          '#import "inc/a.h"', '%:include "inc/a.h"', '??=include "inc/a.h"',
                          '#inc\\\nlude "missing.h"']:
            with self.subTest(directive=directive):
                self.source.write_text(directive + '\n')
                with self.assertRaises(ValueError):
                    matching.dependencies(self.source, self.unit, self.root)

    def test_rejects_escape_duplicate_and_symlink(self):
        (self.root / 'inc/out.h').symlink_to('/etc/hostname')
        for headers in [['../outside.h'], ['/tmp/absolute.h'], ['inc/a.h', 'inc/a.h'], ['inc/out.h'], [None]]:
            with self.subTest(headers=headers), self.assertRaises(ValueError):
                matching.dependencies(self.source, {'headers': headers}, self.root)

    def test_failed_dependency_validation_removes_stale_binary_and_receipt(self):
        out = self.root / 'test.bin'
        out.write_bytes(b'stale')
        out.with_suffix('.compiler.json').write_text('{}')
        with patch.object(matching, 'ROOT', self.root), patch.object(matching, 'load_tools', return_value={}):
            with self.assertRaisesRegex(ValueError, 'Undeclared include'):
                matching.compile_unit(self.source, out, {})
        self.assertFalse(out.exists())
        self.assertFalse(out.with_suffix('.compiler.json').exists())

    def test_project_report_rejects_changed_header(self):
        (self.root / 'config').mkdir()
        (self.root / 'tools').mkdir()
        (self.root / 'tools/matching.py').write_text('fixture')
        for name in ('project.json', 'toolchain.json'):
            (self.root / 'config' / name).write_text('{}')
        self.unit.update(id='test', source='test.c')
        manifest = {'units': [self.unit]}
        out = self.root / 'project-build'; out.mkdir()
        with patch.object(project, 'ROOT', self.root), patch.object(matching, 'ROOT', self.root):
            before = project.provenance(manifest)
            (out / 'build.json').write_text(json.dumps(before))
            (self.root / 'inc/b.h').write_text('#define VALUE 2\n')
            with patch.object(project, 'inputs', return_value=({'scratch': str(self.root)}, manifest, b'', [])):
                with self.assertRaisesRegex(ValueError, 'Stale project build: headers_sha256'):
                    project.report()


class RuntimeTests(unittest.TestCase):
    def test_changed_inputs_and_screenshots_invalidate_runtime_evidence(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            scenario = root / 'scenario.json'; scenario.write_text('{"steps": []}')
            shot = root / 'shot.png'; shot.write_bytes(b'pixels')
            executed = root / 'executed.json'; executed.write_text('{"steps": []}')
            receipt = {'status': 'captured', 'cleanup_complete': True, 'actions': [],
                       'executed_scenario': str(executed),
                       'inputs': {str(scenario): matching.sha(scenario)},
                       'artifacts': {str(shot): matching.sha(shot), str(executed): matching.sha(executed)}}
            runtime.validate(receipt)
            scenario.write_text('{"steps": [{"key": "start"}]}')
            with self.assertRaisesRegex(ValueError, 'Stale runtime evidence'):
                runtime.validate(receipt)
            scenario.write_text('{"steps": []}')
            shot.write_bytes(b'other pixels')
            with self.assertRaisesRegex(ValueError, 'Changed runtime artifact'):
                runtime.validate(receipt)

    def test_failed_run_cleans_up_only_owned_processes_and_records_failure(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'config').mkdir(); (root / 'runtime').mkdir(); (root / 'orig').mkdir(); (root / 'tools').mkdir()
            (root / 'tools/matching.py').write_text('fixture')
            (root / 'tools/game_keyboard.py').write_text('fixture')
            (root / 'orig/DP_ADDRESS.dec.bin').write_bytes(b'executable')
            (root / 'disc.gdi').write_text('1\n3 45000 4 2048 track.iso 0\n')
            (root / 'track.iso').write_bytes(b'disc')
            (root / 'seed.bin').write_bytes(b'blank')
            script = '#!' + sys.executable + '\nimport os,time\n'
            xvfb = root / 'xvfb'
            xvfb.write_text(script + 'import sys\nos.write(int(sys.argv[2]), b"99\\n")\nprint(os.getpid(), flush=True)\ntime.sleep(90)\n')
            emulator = root / 'emulator'
            emulator.write_text(script + 'print(os.getpid(), flush=True)\ntime.sleep(90)\n')
            for path in (xvfb, emulator): path.chmod(0o755)
            (root / 'local.json').write_text(json.dumps({'scratch': str(root)}))
            (root / 'config/runtime.json').write_text(json.dumps({'xvfb': str(xvfb), 'emulator': str(emulator),
                'baseline': str(root / 'disc.gdi'), 'seeds': {'vmu.bin': {'path': str(root / 'seed.bin'), 'sha256': matching.sha(root / 'seed.bin')}}}))
            scenario = root / 'scenario.json'; scenario.write_text('{"steps": []}')
            unrelated = subprocess.Popen([sys.executable, '-c', 'import time; time.sleep(90)'], start_new_session=True)
            owned = []
            real_stop = runtime.stop_owned
            def stop(processes):
                owned.extend(processes); real_stop(processes)
            try:
                with patch.object(runtime, 'ROOT', root), patch.object(runtime, 'Input', side_effect=RuntimeError('input setup failed')), patch.object(runtime, 'stop_owned', side_effect=stop):
                    with self.assertRaisesRegex(RuntimeError, 'input setup failed'):
                        runtime.run('baseline', scenario)
                self.assertEqual(len(owned), 2)
                self.assertTrue(all(p.poll() is not None for p in owned))
                self.assertIsNone(unrelated.poll())
                receipt = json.loads(next((root / 'runtime').glob('*/receipt.json')).read_text())
                self.assertEqual(receipt['status'], 'failed')
                self.assertTrue(receipt['cleanup_complete'])
                with self.assertRaisesRegex(ValueError, 'did not finish'): runtime.validate(receipt)
            finally:
                unrelated.terminate(); unrelated.wait(timeout=5)
