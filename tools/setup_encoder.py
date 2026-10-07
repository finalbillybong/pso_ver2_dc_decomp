#!/usr/bin/env python3
"""Build the test-disc encoder from the already pinned decoder dependencies."""
import json
from pathlib import Path
import subprocess
import setup

ROOT = Path(__file__).resolve().parents[1]


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    scratch = Path(cfg['scratch'])
    decoder = json.loads((ROOT / 'config/decoder-build.json').read_text())
    for name, commit in setup.PINS.items():
        repo = scratch / 'vendor' / name
        head = subprocess.check_output(['git', '-C', str(repo), 'rev-parse', 'HEAD'], text=True).strip()
        dirty = subprocess.check_output(['git', '-C', str(repo), 'status', '--porcelain'], text=True)
        if head != commit or dirty:
            raise ValueError('Encoder dependency changed: ' + name)
    output = scratch / 'build/pso-encode'
    command = [str(ROOT / 'tools/encode_main.cc') if a == str(ROOT / 'tools/decode_main.cc')
               else str(output) if a == cfg['decoder'] else a for a in decoder['command']]
    subprocess.run(command, check=True)
    record = {'encoder': str(output), 'encoder_sha256': setup.sha(output),
              'wrapper_sha256': setup.sha(ROOT / 'tools/encode_main.cc'),
              'source_revisions': setup.PINS, 'command': command, 'pr2_seed': '0x01020304'}
    (ROOT / 'config/encoder-build.json').write_text(json.dumps(record, indent=2) + '\n')
    print('Test-disc encoder built')


if __name__ == '__main__':
    main()
