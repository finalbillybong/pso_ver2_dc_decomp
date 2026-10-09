import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import reconstruct


class ReconstructionWorkflowTests(unittest.TestCase):
    def test_resolved_target_preserves_complete_parked_history(self):
        unit = dict(id='target', address='0x1000', entry='_target',
                    ranges=[dict(offset=0, size=4)], functions=[], reference_sha256='same')
        previous = dict(unit, source='src/provisional/target.c', status='parked',
                        hypotheses_tested=7, reason='Observed call scheduling differs')
        evidence = dict(path=__file__, sha256=reconstruct.digest(Path(__file__).read_bytes()),
                        blocker_sha256=reconstruct.digest(previous['reason'].encode()),
                        observation='New exact related call context', addresses_blocker='Proven call schedule')
        result = reconstruct.matched_target(dict(unit, id='renamed', entry='_renamed', source='src/objects/target.c'),
                                           {'revisit_evidence': evidence}, previous)
        self.assertEqual(result['status'], 'matched')
        self.assertEqual(result['previous_target'], previous)
        self.assertEqual(previous['status'], 'parked')
        self.assertEqual(result['previous_target']['hypotheses_tested'], 7)

    def test_resolved_target_rejects_missing_evidence_changed_range_or_prior_match(self):
        unit = dict(id='target', address='0x1000', entry='_target',
                    ranges=[dict(offset=0, size=4)], functions=[], reference_sha256='same')
        previous = dict(unit, status='parked')
        for candidate, evidence, old in [
                (unit, {}, previous),
                (dict(unit, ranges=[dict(offset=0, size=8)]), {'revisit_evidence': 'new'}, previous),
                (dict(unit, reference_sha256='changed'), {'revisit_evidence': 'new'}, previous),
                (unit, {'revisit_evidence': 'new'}, dict(previous, status='matched'))]:
            with self.subTest(candidate=candidate, old=old), self.assertRaisesRegex(ValueError, 'unchanged identity'):
                reconstruct.matched_target(candidate, evidence, old)

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


class PersistentHistoryTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.history = reconstruct.History(self.root / 'history.json')
        self.key = 'reference:0x1000'
        self.spec = dict(hypothesis_id='h1', hypothesis='test', predicted_change='register lifetime')

    def evidence(self, blocker=''):
        path = self.root / 'observation.txt'
        path.write_text('Independent callee inspection: return is a signed short.')
        return dict(path=str(path), sha256=reconstruct.digest(path.read_bytes()),
                    blocker_sha256=reconstruct.digest(blocker.encode()),
                    observation='Signed short return observed', addresses_blocker='Removes redundant extension')

    def record(self, number, diff=8, kind='hypothesis', exact=False):
        row = dict(history_key=self.key, hypothesis_id='h' + str(number), kind=kind,
                   exact=exact, differing_bytes=diff, first_difference='0x1002',
                   input_sha256=str(number), name='renamed', expected_size=16)
        path = self.root / ('receipt' + str(number) + '.json')
        self.history.record(row, path)
        return row

    def test_rename_restart_and_duplicate_reuses_receipt(self):
        self.record(1)
        restarted = reconstruct.History(self.history.path)
        result = restarted.prepare(self.key, dict(self.spec, unit={'id': 'new_name'}), '1', 'hypothesis')
        self.assertEqual(result['hypothesis_id'], 'h1')
        self.assertEqual(len(restarted.data['attempts']), 1)
        self.assertNotEqual(reconstruct.target_key(b'a', {'address': '0x1000'}),
                            reconstruct.target_key(b'b', {'address': '0x1000'}))

    def test_two_failures_park_and_reopen_requires_new_blocker_evidence(self):
        self.record(1)
        self.record(2)
        target = self.history.target(self.key)
        self.assertTrue(target['parked'])
        with self.assertRaisesRegex(ValueError, 'blocker'):
            self.history.prepare(self.key, dict(self.spec, hypothesis_id='h3'), '3', 'hypothesis')
        evidence = self.evidence(target['blocker'])
        spec = dict(self.spec, hypothesis_id='h3', reopen_evidence=evidence)
        self.history.prepare(self.key, spec, '3', 'hypothesis')
        self.assertEqual(target['epoch'], 0)
        self.assertFalse(target['parked'])
        self.record(3)
        self.record(4)
        with self.assertRaises(ValueError):
            self.history.prepare(self.key, dict(spec, hypothesis_id='h5'), '5', 'hypothesis')

    def test_third_failure_parks_even_with_improvement(self):
        self.record(1, 20)
        self.record(2, 10)
        target = self.history.target(self.key)
        self.assertFalse(target['parked'])
        with self.assertRaises(ValueError):
            self.history.prepare(self.key, dict(self.spec, hypothesis_id='h3'), '3', 'hypothesis')
        self.history.prepare(self.key, dict(self.spec, hypothesis_id='h3',
            third_evidence=self.evidence(target['blocker'])), '3', 'hypothesis')
        self.record(3, 4)
        self.assertTrue(target['parked'])

    def test_lifetime_limit_and_unknown_history_fail_closed(self):
        target = self.history.target(self.key)
        target['uncertain'] = True
        with self.assertRaisesRegex(ValueError, 'uncertain'):
            self.history.prepare(self.key, self.spec, '1', 'hypothesis')
        target.update(uncertain=False, historical_failures=10)
        with self.assertRaisesRegex(ValueError, 'Lifetime'):
            self.history.prepare(self.key, self.spec, '1', 'hypothesis')
        self.assertIsNone(self.history.prepare(self.key, self.spec, '1', 'reproduction'))

    def test_legacy_index_is_idempotent_preserves_receipts_and_flags_uncertainty(self):
        directory = self.root / 'reconstruction-old' / 'renamed'
        directory.mkdir(parents=True)
        reference = b'abcd'
        unit = dict(id='old', address='0x1000', ranges=[dict(offset=0, size=4)],
                    reference_sha256=reconstruct.digest(reference))
        reconstruct.write(directory / 'spec.json', dict(unit=unit, hypothesis='H1'))
        reconstruct.write(directory / 'comparison.json', dict(exact=False, name='old'))
        original = (directory / 'comparison.json').read_bytes()
        self.history.index(reference, [self.root])
        self.history.index(reference, [self.root])
        self.assertEqual(len(self.history.data['attempts']), 1)
        self.assertTrue(self.history.target(reconstruct.target_key(reference, unit))['uncertain'])
        self.assertEqual(original, (directory / 'comparison.json').read_bytes())

    def test_duplicate_input_and_compiler_dependency_invalidation_and_fresh_reproductions(self):
        reference = b'abcd'
        unit = dict(id='a', address='0x1000', entry='_a', ranges=[dict(offset=0, size=4)],
                    reference_sha256=reconstruct.digest(reference), headers=[])
        spec = dict(self.spec, unit=unit, code='void a(void) {}', boundary_review='reviewed')
        calls = []
        def compile_unit(source, output, unit):
            calls.append(source)
            output.write_bytes(reference)
            reconstruct.write(output.with_suffix('.compiler.json'), {'complete': True})
        with patch.object(reconstruct, 'compiler_inputs', return_value={'source': 'a', 'header': 'h', 'compiler': 'v1'}) as inputs, patch.object(reconstruct.project.matching, 'compile_unit', side_effect=compile_unit):
            reconstruct.trial(spec, self.root / 'a', reference, self.history)
            reconstruct.trial(spec, self.root / 'duplicate', reference, self.history)
            self.assertFalse((self.root / 'duplicate').exists())
            self.assertEqual(len(calls), 1)
            for number, changed in [(2, {'header': 'changed'}), (3, {'compiler': 'v2'})]:
                inputs.return_value = changed
                reconstruct.trial(dict(spec, hypothesis_id='h'+str(number)), self.root / str(number), reference, self.history)
            for number in [4, 5]:
                reconstruct.trial(spec, self.root / str(number), reference, self.history, kind='reproduction')
            self.assertEqual(len(calls), 5)
            self.assertEqual([r['kind'] for r in self.history.data['attempts']].count('reproduction'), 2)

    def test_correction_requires_existing_hypothesis(self):
        with self.assertRaisesRegex(ValueError, 'Correction'):
            self.history.prepare(self.key, self.spec, '1', 'correction')
        self.record(1)
        self.history.prepare(self.key, dict(self.spec, correction_of='h1',
            correction_evidence='callee returns short'), '2', 'correction')


class DiagnosticsAndAccountingTests(unittest.TestCase):
    def test_classification_overlap_bounds_and_reconciliation(self):
        span = dict(offset=0, size=4, kind='instructions', evidence='reviewed return and delay')
        self.assertEqual(reconstruct.classification_audit(8, [span]),
                         dict(instructions=4, literals=0, tables=0, padding=0, unknown=4))
        for spans in [[span, span], [dict(span, size=10)], [dict(span, size=3)], [dict(span, evidence='')]]:
            with self.assertRaises(ValueError):
                reconstruct.classification_audit(8, spans)

    def test_disassembly_preserves_registers_operands_delays_and_ignores_literals(self):
        a = ' 1000: 43 61 mov r4,r1\n 1002: 0b 42 jsr @r2\n 1004: 00 e7 mov #0,r7\n 1006: 34 12 mov.l r3,@(16,r2)\n'
        spans = [dict(offset=0, size=6, kind='instructions', evidence='reviewed'),
                 dict(offset=6, size=2, kind='literals', evidence='pool')]
        before = reconstruct.parse_listing(a, 0x1000, spans)
        after = reconstruct.parse_listing(a.replace('r4,r1', 'r1,r4').replace('#0,r7', '#1,r7'), 0x1000, spans)
        report = reconstruct.instruction_differences(before, after)
        self.assertEqual(len(before), 3)
        self.assertTrue(before[-1]['delay_slot'])
        categories = {c for g in report['groups'] for c in g['categories']}
        self.assertTrue({'registers', 'immediates', 'delay_slots'} <= categories)
        inserted = reconstruct.instruction_differences(before, before[:1] + [dict(offset=1, mnemonic='nop', operands='', delay_slot=False)] + before[1:])
        self.assertIn('instruction_count', inserted['groups'][0]['categories'])
        self.assertEqual(reconstruct.parse_listing(a, 0x1000, []), [])

    def test_accounting_excludes_carried_failed_reproductions_and_tooling(self):
        rows = [dict(history_key='carry', kind='legacy', exact=True, expected_size=100, binary_sha256='a'),
                dict(history_key='new', kind='hypothesis', hypothesis_id='h1', exact=True, expected_size=200, binary_sha256='b'),
                dict(history_key='failed', kind='hypothesis', hypothesis_id='h1', exact=False, binary_sha256='c'),
                dict(history_key='failed', kind='hypothesis', hypothesis_id='h2', exact=False, binary_sha256='c'),
                dict(history_key='new', kind='reproduction', exact=True, expected_size=200, binary_sha256='b')]
        report = reconstruct.measured_report(rows, carried=['carry'], tooling_seconds=99, aggregate_goal_counter=123)
        self.assertEqual(report['new_exact_bytes'], 200)
        self.assertEqual(report['unintegrated_candidate_bytes'], 300)
        self.assertEqual(report['admitted_bytes'], 0)
        self.assertEqual(report['hypotheses'], 3)
        self.assertEqual(report['compiler_attempts'], 4)
        self.assertEqual(report['verification_attempts'], 1)
        self.assertEqual(report['unsuccessful_duplicates'], 1)
        self.assertIsNone(report['attributable_tokens'])
        self.assertEqual(report['observed_aggregate_goal_counter'], 123)

    def test_screen_cache_invalidates_actual_inputs(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'screen.json'
            from unittest.mock import Mock
            scan = Mock(return_value=[])
            reconstruct.cached_screen(path, {'reference': 'a', 'policy': 'v1'}, scan)
            reconstruct.cached_screen(path, {'reference': 'a', 'policy': 'v1'}, scan)
            self.assertEqual(scan.call_count, 1)
            reconstruct.cached_screen(path, {'reference': 'a', 'policy': 'v2'}, scan)
            self.assertEqual(scan.call_count, 2)

    def test_reachable_diagnostics_do_not_decode_literals_or_padding(self):
        blob = bytes.fromhex('01d00b000900000034127856')
        listing = ('1000: 01 d0 mov.l 0x1008,r0\n1002: 0b 00 rts\n'
                   '1004: 09 00 nop\n1006: 00 00 .word 0x0000\n'
                   '1008: 34 12 mov.l r3,@(16,r2)\n100a: 78 56 mov.l @(32,r7),r6\n')
        spans = reconstruct.reachable_classification(blob, 0x1000, listing)
        audit = reconstruct.classification_audit(len(blob), spans)
        self.assertEqual(audit['instructions'], 6)
        self.assertEqual(audit['literals'], 4)
        self.assertEqual(audit['unknown'], 2)
        self.assertEqual(len(reconstruct.parse_listing(listing, 0x1000, spans)), 3)

    def test_subsystem_overlap_and_unknown_ranges(self):
        entry = dict(address='0x1000', size=8, classification=[])
        self.assertEqual(reconstruct.audit_subsystem([entry])['classified_bytes']['unknown'], 8)
        with self.assertRaisesRegex(ValueError, 'Overlapping'):
            reconstruct.audit_subsystem([entry, dict(entry, address='0x1004')])

    def test_actual_dependency_and_compiler_inputs_change_identity(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / 'field.h').write_text('typedef short Field;')
            spec = dict(code='void f(void) {}', unit=dict(address='0x1000', entry='_f',
                ranges=[dict(offset=0, size=4)], reference_sha256='ref', headers=['field.h']))
            with patch.object(reconstruct.project, 'ROOT', root), patch.object(reconstruct, 'compiler_profile', return_value={'compiler': 'one'}) as profile:
                first = reconstruct.stable_hash(reconstruct.compiler_inputs(spec))
                (root / 'field.h').write_text('typedef int Field;')
                second = reconstruct.stable_hash(reconstruct.compiler_inputs(spec))
                self.assertNotEqual(first, second)
                profile.return_value = {'compiler': 'two'}
                third = reconstruct.stable_hash(reconstruct.compiler_inputs(spec))
                self.assertNotEqual(second, third)
                spec['unit']['symbols'] = {'_callee': '0x2000'}
                self.assertNotEqual(third, reconstruct.stable_hash(reconstruct.compiler_inputs(spec)))

    def test_batch_and_initial_family_limits(self):
        with tempfile.TemporaryDirectory() as directory:
            history = reconstruct.History(Path(directory) / 'history.json')
            spec = dict(hypothesis_id='new', hypothesis='new', batch=dict(id='batch', family='first', initial_family='first'))
            history.data['attempts'] = [dict(history_key='old', kind='hypothesis', hypothesis_id=str(i), exact=True, batch=spec['batch']) for i in range(10)]
            with self.assertRaisesRegex(ValueError, 'Initial subsystem'):
                history.prepare('new', spec, 'new', 'hypothesis')
            spec['batch'] = dict(id='batch', family='second', initial_family='first')
            self.assertIsNone(history.prepare('new', spec, 'new', 'hypothesis'))
            history.data['attempts'] *= 4
            with self.assertRaisesRegex(ValueError, 'forty'):
                history.prepare('new', spec, 'new', 'hypothesis')

    def test_interrupted_attempt_survives_restart_and_requires_review(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            history = reconstruct.History(root / 'history.json')
            row = dict(history_key='ref:0x1000', hypothesis_id='h1', kind='hypothesis', input_sha256='same')
            history.reserve(row, root / 'comparison.json')
            restarted = reconstruct.History(history.path)
            self.assertEqual(len(restarted.data['attempts']), 1)
            with self.assertRaisesRegex(ValueError, 'uncertain'):
                restarted.prepare(row['history_key'], dict(hypothesis_id='h2'), 'same', 'hypothesis')

    def test_incomplete_reference_range_is_rejected_before_compiler(self):
        unit = dict(ranges=[dict(offset=0, size=8)], reference_sha256=reconstruct.digest(b'abcd'))
        with tempfile.TemporaryDirectory() as directory:
            with self.assertRaisesRegex(ValueError, 'Incomplete'):
                reconstruct.trial(dict(unit=unit, hypothesis='x', predicted_change='y', boundary_review='z'),
                                  Path(directory) / 'trial', b'abcd')

    def test_legacy_input_reuse_without_rewriting_original_receipt(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            folder = root / 'reconstruction-old' / 'candidate'
            folder.mkdir(parents=True)
            reference = b'abcd'
            unit = dict(id='old', address='0x1000', entry='_old', symbols={},
                        ranges=[dict(offset=0, size=4)], reference_sha256=reconstruct.digest(reference))
            spec = dict(unit=unit, code='void old(void) {}', hypothesis='old hypothesis')
            reconstruct.write(folder / 'spec.json', spec)
            reconstruct.write(folder / 'comparison.json', dict(name='old', exact=True))
            (folder / 'candidate.bin').write_bytes(reference)
            reconstruct.write(folder / 'candidate.compiler.json', dict(installed_tools_sha256='tools',
                source_sha256=reconstruct.digest(spec['code'].encode()), output_sha256=reconstruct.digest(reference),
                flags=reconstruct.project.matching.unit_flags(unit), entry='_old', linker='gnu', symbols={}))
            original = (folder / 'comparison.json').read_bytes()
            profile = dict(installed_sha256='tools', adapter_sha256='adapter', tools={})
            with patch.object(reconstruct, 'compiler_profile', return_value=profile):
                history = reconstruct.History(root / 'history.json')
                history.index(reference, [root])
                fingerprint = reconstruct.stable_hash(dict(reference_image_sha256=reconstruct.digest(reference),
                                                           **reconstruct.compiler_inputs(spec)))
                result = history.prepare(reconstruct.target_key(reference, unit), spec, fingerprint, 'hypothesis')
            self.assertTrue(result['exact'])
            self.assertEqual(original, (folder / 'comparison.json').read_bytes())

    def test_small_integration_is_rejected_without_creating_artifacts(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / 'config').mkdir()
            reconstruct.write(root / 'config/project.json', {'units': []})
            reconstruct.write(root / 'config/reconstruction-targets.json', {'targets': []})
            folder = root / 'candidate';folder.mkdir()
            reconstruct.write(folder / 'spec.json', {'unit': {'ranges': [{'size': 1432}]}})
            output = root / 'integration'
            with patch.object(reconstruct.project, 'ROOT', root), self.assertRaisesRegex(ValueError, '5,120'):
                reconstruct.integrate([folder], output, bytes(2000))
            self.assertFalse(output.exists())

    def test_checkout_history_configuration_can_share_reference_history(self):
        config = dict(scratch='/scratch/public', reconstruction_history='/scratch/history.json')
        self.assertEqual(reconstruct.history_path(config), Path('/scratch/history.json'))

    def test_orphan_legacy_unit_review_survives_reindex(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory);folder=root/'reconstruction-old'/'orphan';folder.mkdir(parents=True)
            unit=dict(id='lost',address='0x1000')
            reconstruct.write(folder/'unit.json',unit)
            history=reconstruct.History(root/'history.json');history.index(b'abcd',[root])
            target=history.target(reconstruct.target_key(b'abcd',unit))
            self.assertTrue(target['uncertain'])
            target['uncertain']=False;target['history_review']={'reviewed':True};history.save()
            history.index(b'abcd',[root])
            self.assertFalse(target['uncertain'])
