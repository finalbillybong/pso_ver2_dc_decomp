#!/usr/bin/env python3
"""Exercise installed SHC releases with C/C++, clean rebuilds and a link failure."""
import json
from pathlib import Path
from shc import ROOT, VERSIONS, compile_unit

C_PROBE = '''
typedef struct { int count; float weight; } State;
int helper(int x) { return x + 3; }
int probe(int a, int b) { return a + b; }
int branch(int x) { if (x < 0) return -x; return x + 3; }
int loop(const int *p, int n) { int sum = 0; while (n-- > 0) sum += *p++; return sum; }
int access(State *p) { p->count = helper(p->count); return p->count; }
float scale(float x) { return x * 2.0f + 1.0f; }
'''
CPP_PROBE = '''
class Counter {
public:
    int value;
    int advance(int amount) { value += amount; return value; }
};
extern "C" int probe(Counter *p, int amount) { return p->advance(amount); }
'''


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    work = Path(cfg['scratch']) / 'compiler-validation'
    work.mkdir(exist_ok=True)
    (work / 'probe.c').write_text(C_PROBE)
    (work / 'probe.cpp').write_text(CPP_PROBE)
    (work / 'bad.c').write_text('extern int missing(int); int probe(int x) { return missing(x); }\n')
    report = {}
    for version in VERSIONS:
        output = work / version
        output.mkdir(exist_ok=True)
        runs = []
        for optimize in ('0', '1'):
            first = compile_unit(work / 'probe.c', output / ('c' + optimize + '.bin'),
                                 version, optimize=optimize)
            second = compile_unit(work / 'probe.c', output / ('repeat' + optimize + '.bin'),
                                  version, optimize=optimize)
            assert first['output_sha256'] == second['output_sha256'], 'Non-reproducible code bytes'
            first['repeat_build_identical'] = True
            runs.append(first)
        cpp = compile_unit(work / 'probe.cpp', output / 'cpp.bin', version)
        bad_output = output / 'bad.bin'
        bad_output.write_bytes(b'stale output')
        try:
            compile_unit(work / 'bad.c', bad_output, version)
        except ValueError as error:
            if 'UNDEFINED EXTERNAL SYMBOL' not in str(error):
                raise
        else:
            raise AssertionError('Undefined external symbol accepted')
        assert not bad_output.exists(), 'Stale output survived a failed build'
        report[version] = {'c_runs': runs, 'cpp': cpp,
                           'undefined_symbol_rejected': True, 'stale_output_removed': True}
        print(version + ': C at O0/O1, C++, identical rebuilds, unresolved-symbol rejection: PASS')
    (ROOT / 'config/compiler-validation.json').write_text(json.dumps(report, indent=2) + '\n')


if __name__ == '__main__':
    main()
