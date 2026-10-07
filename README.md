# Phantasy Star Online Ver. 2 — Dreamcast decompilation

[![Checks](https://github.com/finalbillybong/pso_ver2_dc_decomp/actions/workflows/checks.yml/badge.svg)](https://github.com/finalbillybong/pso_ver2_dc_decomp/actions/workflows/checks.yml)
[![Image coverage](docs/progress.svg)](docs/PROGRESS.md)

A work-in-progress matching decompilation of **Phantasy Star Online Ver. 2** for
Sega Dreamcast. The goal is ordinary source that rebuilds the original decoded
executable byte for byte.

Supported reference: **Europe, `MK-5119350`, `V1.000`, header date `20020110`**.
Other releases are not currently supported.

## Progress

**98 exact matching functions in 86 modules**, replacing **11,264 bytes** of the
4,162,912-byte decoded executable (**0.2706% image coverage**). Function ranges
include their literals and padding. **4,151,648 bytes still come from the original
reference**; separately reconstructed static data is zero.

This is an early hybrid reconstruction. It cannot yet build from source alone.
The code-only completion percentage and total function count are not established.
An exact hybrid image is not evidence of a complete decompilation.

[Detailed progress](docs/PROGRESS.md) · [Current targets](docs/START_HERE.md) ·
[Machine-readable progress](progress.json)

## Building

You must supply your own matching game dump. No game binaries, assets, SDK
binaries, serial numbers, access keys or saves are distributed here. Registration
credentials are not needed to extract, compile or compare the executable.

See **[BUILDING.md](docs/BUILDING.md)** for Linux setup, reference hashes and the
pinned compiler. Once configured:

```sh
python3 -B tools/project.py build
python3 -B tools/verify_source.py
python3 -B tools/candidates.py
```

The admitted compiler is CodeWarrior for Dreamcast 2.4, Engineering Build
March 21, 2000, with SH-4 hardware floating point and `-O2`. Every admitted
function range must match completely, including literals and padding. C++ modules
explicitly declare `"language": "c++"` and add only `-lang c++` to these settings.

Checks that need no game dump or compiler:

```sh
python3 -m pip install -r requirements-dev.txt
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --check
python3 -B tools/check_publication.py
```

CI runs these checks and uploads progress metadata. Exact game builds are
verified locally; CI does not claim to rebuild the game.

## Repository layout

| Path | Purpose |
| --- | --- |
| `src/objects`, `src/effects`, `src/math`, `src/runtime` | Admitted matching C/C++ modules |
| `src/include` | Provisional types with checked offsets |
| `src/samples` | Five-function compiler proof |
| `src/provisional` | Unmatched candidates, excluded from progress |
| `config` | Reference hashes, matching manifest, dependency addresses and queue |
| `tools` | Extraction, compilation, exact comparison and analysis utilities |
| `tests` | Host-side tooling tests using synthetic fixtures |
| `docs` | Build instructions, findings, progress and contributor handoff |
| `orig` | Place for private inputs; contents ignored except its README |

## Contributing

Start with [CONTRIBUTING.md](CONTRIBUTING.md) and [the current targets](docs/START_HERE.md).
Names and structures are inferred; they are not recovered original identifiers.
The reconstruction has used AI-assisted analysis and iteration, with admission
based on complete byte comparison rather than generated source alone.

Progress conventions follow projects such as [Twilight Princess](https://github.com/zeldaret/tp)
and [Melee](https://github.com/doldecomp/melee), listed on
[decomp.dev](https://decomp.dev/projects). This repository is **not yet registered**
on that tracker; see [tracker integration status](docs/TRACKER.md).

This project is not affiliated with or endorsed by Sega or Sonic Team.
See [NOTICE.md](NOTICE.md) for provenance and licensing status.
