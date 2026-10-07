#!/usr/bin/env python3
"""Two fresh exact project builds and deterministic full-payload disc checks."""
import json
from pathlib import Path

import project
import test_disc
from matching import sha, ROOT


def main():
    cfg = json.loads((ROOT / 'local.json').read_text())
    scratch = Path(cfg['scratch'])
    evidence = scratch / 'project-validation'
    evidence.mkdir(exist_ok=True)
    builds, discs = [], []
    for index in range(2):
        status = project.build()
        build = json.loads((scratch / 'project-build/build.json').read_text())
        (evidence / f'build-{index + 1}.json').write_text(json.dumps(build, indent=2) + '\n')
        builds.append(build)
        test_disc.main()
        disc = json.loads((scratch / 'test-disc/receipt.json').read_text())
        (evidence / f'disc-{index + 1}.json').write_text(json.dumps(disc, indent=2) + '\n')
        discs.append(disc)
    if builds[0] != builds[1]: raise ValueError('Fresh builds differ')
    if discs[0] != discs[1]: raise ValueError('Repacking is not deterministic')
    if any(d['files_verified'] != 5897 for d in discs): raise ValueError('Incomplete disc payload verification')
    result = {'checks': ['two_fresh_exact_builds', 'integrated_image_exact',
                         'two_deterministic_repacks', '5897_payloads_verified_each_run'],
              'status': status, 'project_provenance': project.provenance(json.loads((ROOT / 'config/project.json').read_text())),
              'driver_sha256': sha(Path(__file__)),
              'artifacts': {str(p): sha(p) for p in evidence.glob('*.json')},
              'runtime_verified_by_this_command': False}
    (ROOT / 'config/project-validation.json').write_text(json.dumps(result, indent=2) + '\n')
    print('Two exact builds and two deterministic 5,897-payload repacks verified.')


if __name__ == '__main__':
    main()
