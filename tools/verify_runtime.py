#!/usr/bin/env python3
"""Check provenance of manually reviewed offline gameplay evidence."""
import json
from pathlib import Path

from matching import ROOT, sha
from runtime import validate

REQUIRED = {'character', 'offline', 'pioneer_movement', 'forest', 'enemy_defeated',
            'returned', 'saved', 'reloaded'}


def verify(path):
    review = json.loads(Path(path).read_text())
    if not review.get('gameplay_verified'):
        raise ValueError('Gameplay review incomplete')
    seeds = []
    for target in ('baseline', 'rebuilt'):
        run = review['runs'][target]
        if sha(run['receipt']) != run['receipt_sha256']:
            raise ValueError('Changed reviewed receipt: ' + target)
        receipt = json.loads(Path(run['receipt']).read_text())
        if receipt['target'] != target:
            raise ValueError('Wrong runtime target')
        validate(receipt)
        seeds.append(receipt['initial_vmu_sha256'])
        if not REQUIRED <= run['observations'].keys():
            raise ValueError('Missing gameplay checkpoints: ' + target)
        for observation in run['observations'].values():
            if not observation.get('observed'):
                raise ValueError('Missing visual review')
            if receipt['artifacts'].get(observation['path']) != observation['sha256']:
                raise ValueError('Observation is not a captured artifact')
    if seeds[0] != seeds[1]:
        raise ValueError('Unequal initial save states')
    return {'gameplay_review_current': True, 'equivalent_initial_saves': True,
            'full_source_reconstruction_complete': False}


if __name__ == '__main__':
    print(json.dumps(verify(ROOT / 'config/runtime-validation.json'), indent=2))
