#!/usr/bin/env python3
"""Repeat real PSO builds and exercise failure cases without changing reference data."""
import contextlib
import io
import json
from pathlib import Path
import shutil
import sys
import tempfile
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import pso
import matching


def must_reject(action, message):
    try:
        action()
    except ValueError as e:
        if message not in str(e):
            raise
        return
    raise AssertionError('Expected rejection: ' + message)


def main():
    cfg = pso.read_json(ROOT / 'local.json')
    scratch = Path(cfg['scratch'])
    samples = pso.samples()
    hashes = []
    for run in range(2):
        pso.build(cfg)
        with contextlib.redirect_stdout(io.StringIO()):
            assert pso.compare(cfg) == 0
        hashes.append({s['id']: pso.file_hash(scratch / 'candidates' / (s['id'] + '.bin'))
                       for s in samples})
    assert hashes[0] == hashes[1]
    reference = (scratch / 'orig/DP_ADDRESS.dec.bin').read_bytes()
    checks = ['two_fresh_builds_exact_and_identical']
    with tempfile.TemporaryDirectory(prefix='match-validation-', dir=scratch) as tmp:
        work = Path(tmp)
        sample = next(s for s in samples if s['id'] == 'query_flag')
        original = (ROOT / sample['source']).read_text()
        expected = b''.join(reference[r['offset']:r['offset'] + r['size']] for r in sample['ranges'])
        for label, old, new in [('changed_mask', '& 8', '& 16'),
                                ('changed_call_target', '0x8c02a980', '0x8c02a984')]:
            assert old in original
            source = work / (label + '.c')
            source.write_text(original.replace(old, new))
            output = work / (label + '.bin')
            matching.compile_unit(source, output, sample)
            assert not pso.compare_bytes(expected, output.read_bytes())['exact']
            checks.append(label + '_fails_exact_comparison')
        source = work / 'undefined.c'
        source.write_text('extern int missing_function(void);\n'
                          'unsigned int query_flag(void *p) { return missing_function(); }\n')
        output = work / 'undefined.bin'
        output.write_bytes(b'stale output')
        must_reject(lambda: matching.compile_unit(source, output, sample), 'undefined reference')
        assert not output.exists()
        checks.append('undefined_symbol_rejected_and_stale_output_removed')

        # Copies keep the working sources, binaries and installed tools intact.
        copied = work / 'root'
        shutil.copytree(ROOT / 'config', copied / 'config')
        shutil.copytree(ROOT / 'src', copied / 'src')
        (copied / sample['source']).write_text(original + '\n/* changed */\n')
        with patch.object(pso, 'ROOT', copied):
            must_reject(lambda: pso.compare(cfg), 'Reference hash mismatch')
        checks.append('changed_source_rejected_by_receipt')

        installation = pso.read_json(ROOT / 'config/matching-installed.json')
        compiler = Path(installation['roles']['compiler'])
        bad = work / 'altered-compiler.exe'
        blob = bytearray(compiler.read_bytes())
        blob[-1] ^= 1
        bad.write_bytes(blob)
        installation['files'] = {str(bad): installation['files'][str(compiler)]}
        pso.write_json(copied / 'config/matching-installed.json', installation)
        with patch.object(matching, 'ROOT', copied):
            must_reject(matching.load_tools, 'Matching tool hash mismatch')
        checks.append('altered_compiler_rejected_before_execution')

    pso.write_json(ROOT / 'config/matching-validation.json', {
        'exact_functions': len(samples), 'total_compared_bytes': sum(
            r['size'] for s in samples for r in s['ranges']),
        'source_sha256': {s['source']: pso.file_hash(ROOT / s['source']) for s in samples},
        'samples_sha256': pso.file_hash(ROOT / 'config/samples.json'),
        'toolchain_sha256': pso.file_hash(ROOT / 'config/toolchain.json'),
        'output_sha256': hashes[0], 'checks': checks,
        'whole_game_matched': False, 'runtime_tested': False})
    print('5/5 exact matches reproduced twice; all negative checks passed')


if __name__ == '__main__':
    main()
