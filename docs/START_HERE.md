# Current reconstruction checkpoint

The current public checkpoint has **192 exact functions in 177 modules**, replacing
**21,960 bytes** of the 4,162,912-byte decoded executable (**0.5275% image coverage**).
It retains **4,140,952 reference bytes** and has no separately reconstructed static
data. This is a hybrid build; code-only completion and total function count are
unknown. See [PROGRESS.md](PROGRESS.md) for source-bound verification and
[BUILDING.md](BUILDING.md) to configure a new checkout with your own game dump.

## Active unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04`, `0x8c045f04` | 512 bytes | 30 differing; first `0x8c045fdd` | Two angle conversions; radius and virtual dispatch regions match |
| `emit_5fbf8`, `0x8c05fbf8` | 388 bytes | 8 differing; first `0x8c05fc56` | Loop ordering and final-call scheduling |
| `emit_or_update_slot`, `0x8c05fd7c` | 448 bytes | 4 differing; first `0x8c05feba` | Shared final-call scheduling |
| `initialize_effect_manager`, `0x8c0a7db8` | 280 bytes | 8 differing; first `0x8c0a7e6e` | Five-argument text-buffer call; resource-copy loop matches |
| `signed_remainder`, `0x8c18e8a0` | 180 bytes | No complete match | Incoming R0/carry, register preservation and zero-divisor behavior |

The authoritative queue is `config/reconstruction-targets.json`; unmatched
sources remain in `src/provisional`. Both original primary targets must match
completely to finish their batch. Supporting matches never replace that
acceptance criterion. Preserve repeated radius squaring and skipped vector
initialization as observed; do not introduce speculative behavior fixes.

Other private scratch blockers include effect update 536/25, effect advance
800/46, shared-base initialization 200 versus 196 expected with 170 differences,
and a position setter producing 30 versus 32 bytes. Missing alignment gets no
credit. Check every proposed range against existing modules before integration.

## Latest batch: stage 51

Integer highlighting and hexadecimal field helpers add eight functions in seven
modules, totaling 460 bytes. Adjacent hexadecimal configuration/clear entries
share their natural compiler alignment in one module. All 184 previous matches,
module definitions and source/header hashes are preserved. Since the original
checkpoint, 158 functions replace 18,316 bytes. All 66 trials are retained with no
compiler/linker rejections. Hexadecimal highlighting remains 144/8; both original
primary targets and frame setup remain unresolved.

Two fresh exact builds, integrated-image comparison, five-function proof and all
53 original-workspace tests pass. The public suite has 58 tests. Source-only
rejects remaining reference gaps without changing artifacts. Historical behavior,
failed hypotheses and checkpoint details are in [RECONSTRUCTION.md](RECONSTRUCTION.md).
Private scratch paths mentioned there are not public build dependencies.

## Compiler and acceptance rules

Keep the pinned CodeWarrior compiler and base optimization settings. C++ is
allowed when explicitly declared with `"language": "c++"`; it adds only
`-lang c++`. All functions must match their complete range, including literals,
jump tables and padding. No assembly substitutions, copied runtime objects,
reference-informed output patches or shortened comparison ranges are admitted.

GNU remains the default linker. A module can explicitly declare
`"linker": "codewarrior"` for the already-pinned native linker's handling of
compiler RELA addends. Metadata stripping must leave all code/literal bytes
unchanged, and the same strict final ELF and full-range checks apply. Stage 38
records the 123-module native compatibility test and negative checks. Compiler
flags are identical for both link paths.

## Iteration commands

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py
python3 -B tools/verify_source.py
python3 -B tools/progress.py --record
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --check
python3 -B tools/project.py build --source-only
python3 -B tools/check_publication.py
```

The source-only command is expected to reject the current gaps. Record progress
after fresh exact verification and before tests of the source-bound public
checkpoint. Admit only full matches, update queue status explicitly, and preserve
source snapshots, hypotheses and compiler/comparison receipts for each experiment.
Focused Ghidra exports use a disposable database copy and are reused while their
inputs remain current. Raw instructions, delay slots, literals and adjacent
entries establish boundaries; pseudocode alone does not.

Keep serial/access keys, saves, runtime settings, captures and game/tool binaries
out of publication. Check the staged allowlist and redacted history scan before
pushing, then verify CI for the exact commit. Gameplay, disc repacking and
analysis-tool integration are outside the reconstruction loop. Continue from
verified checkpoints; they are progress records, not requests to stop.
