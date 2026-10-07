# Building and verifying

## Host requirements

The supported workflow is Linux x86-64 with Python 3.12+, Git, CMake, Make,
GCC/G++, zlib development headers, and standard GNU binutils build prerequisites
(including bison, flex and texinfo). Decoder compilation requires a C++23-capable
G++. Other host platforms have not been verified.

## Private inputs

```sh
git clone https://github.com/finalbillybong/pso_ver2_dc_decomp.git
cd pso_ver2_dc_decomp
cp config/local.example.json local.json
```

Edit `local.json`: set absolute paths for your extracted data-track ISO, original
raw Track 3, a writable scratch directory, and `<scratch>/build/pso-decode`.
Create the scratch directory. Keep originals read-only. Neither a serial number
nor an access key belongs in this configuration or is needed for static builds.

The expected disc identity and complete ISO/track SHA-256 hashes are in
[`config/reference.json`](../config/reference.json). The decoded image is
4,162,912 bytes with SHA-256
`11e3ad63a73c6d0ff4b5c883ae3df194d873925f8b9925af6435c7b97f6b73b0`.
A different revision is rejected; do not change the pins to accept it.

## Extract and decode

```sh
python3 -B tools/setup.py
python3 -B pso.py extract
python3 -B pso.py decode
```

The decoder uses pinned upstream newserv/phosg revisions. It is a host utility,
not a game server. It decodes the executable without personal registration data.
All game outputs remain under the private scratch directory.

## Install and configure the matching compiler

```sh
python3 -B tools/setup_compilers.py
python3 -B tools/setup_matching.py
python3 -B configure.py
```

Installers download hash-pinned tools and build GNU SH binutils 2.44 locally.
They generate ignored, machine-specific installation receipts. `configure.py`
checks the receipts and pins this machine's paths and hashes in the ignored
`config/toolchain.json`. It does not change compiler flags. Existing differing
pins are rejected; review the cause before explicitly using `--refresh`.

The initial compiler installer also installs historical Hitachi candidates for
comparison. Admitted project modules use CodeWarrior Dreamcast 2.4 Engineering
Build, March 21, 2000, with:

```text
-proc SH4 -endian little -mw_fp hardware -Cpp_exceptions off -O2
```

## Exact builds

```sh
python3 -B tools/project.py build
python3 -B tools/project.py report
python3 -B tools/verify_source.py
python3 -B tools/verify_source.py --check
python3 -B -m unittest discover -s tests -v
```

`verify_source.py` runs two fresh exact project builds, compares the integrated
image, and reproduces the five-function compiler proof. `--check` checks existing
local evidence without rebuilding. Compiler outputs and receipts go into scratch;
local validation summaries are ignored by Git.

```sh
python3 -B tools/project.py build --source-only
```

**Expected to fail** while reference gaps remain (currently 4,158,972 bytes).
That rejection is an intentional completion gate. No fallback is silently used.

To compare unresolved candidates:

```sh
python3 -B tools/candidates.py
```

Candidates remain outside the matching manifest until their entire range matches.
This command is diagnostic and currently reports mismatches.

## Analysis and historical tools

`tools/setup_analysis.py` installs pinned Ghidra/JDK releases locally;
`tools/analyze.py` creates local projects and `tools/dossier.py` creates focused
exports. Historical findings reference local receipts and scratch experiments
that are intentionally not shipped. Generate fresh evidence for your machine.

Runtime and disc-packaging utilities are retained for research, but their private
configuration, scenarios, screenshots and saves are excluded. They are not part
of the build instructions, CI or current reconstruction acceptance criteria.
