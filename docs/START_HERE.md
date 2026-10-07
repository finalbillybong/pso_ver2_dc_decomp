# Current reconstruction checkpoint

The current public checkpoint has **76 exact functions in 65 modules**, replacing
8,652 bytes. See [PROGRESS.md](PROGRESS.md) for definitions and the source-bound
verification summary. Start a new checkout with [BUILDING.md](BUILDING.md).

## Unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04` at `0x8c045f04` | 512 bytes | 46 differing bytes; first `0x8c045fdd` | Angle conversions and indirect dispatch |
| `emit_5fbf8` at `0x8c05fbf8` | 388 bytes | 8 differing bytes; first `0x8c05fc56` | Two instruction-order pairs in the loop and final call |
| `emit_or_update_slot` at `0x8c05fd7c` | 448 bytes | 4 differing bytes; first `0x8c05feba` | Shared final-call delay-slot order |
| `signed_remainder` at `0x8c18e8a0` | 180 bytes | No complete match | Carry state, preserved registers and zero-divisor behavior |

The queue is in `config/reconstruction-targets.json`. Scratch C++ virtual dispatch
reduces the operation diagnostic to 30 differing bytes, but is not admitted. Keep
the fixed C compiler contract unchanged. Preserve repeated radius squaring and
the observed skipped vector initialization; do not introduce speculative fixes.

An earlier five-function dependency batch included `angle_difference` (28 bytes),
`operation_43fb4` (100), `angle_halfway` (24), `angle_step` (56), and
`choose_emit_slot` (88). They preserve the original 34 matches and replace 296
reference bytes. The two primary targets remain incomplete.

Stage 15 preserved 172 additional scratch trials with six expected rejections.
Literal spellings, assignment trees, constants, wrappers, scoped invariants,
column relationships, declaration context, angle typedefs and calling-convention
syntax produced no improvement. Sources and receipts remain in the original
private research workspace. [RECONSTRUCTION.md](RECONSTRUCTION.md) preserves
historical findings; missing scratch paths are not public build dependencies.

## Iteration commands

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py
python3 -B tools/verify_source.py
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --record
python3 -B tools/progress.py --check
```

After resolving these targets, follow their dependencies into effect initialization,
matrix/vector helpers and referenced static data. Full source-only reconstruction
remains the objective. Gameplay, disc repacking and analysis-tool integration are
outside the current batch.

## Stage 16 checkpoint

309 preserved compile/compare trials produced two complete fixed-C matches:
`clear_emit_slots` (100 bytes) and the direct dependency `prepare_emit_slot`
(532 bytes). Independently scoping the emission field bases also reduces its
mismatch from 18 to 8 bytes; only the shift/base-copy order at `8c05fc56/58`
and final-call argument order at `8c05fd08/0e` remain. The operation is unchanged.
All original 39 matches are preserved. Full details are in RECONSTRUCTION.md.
The new listener layout uses declared, checked offsets. No compiler settings,
comparison rules, game assets, runtime data or registration details changed.


## Stage 17 checkpoint

Six adjacent emission-control entries add 372 exact compiled bytes, preserving
all previous 41 matches. Totals are 47 functions, 38 modules, 4,944 compiled bytes
and 4,157,968 retained reference bytes. The related `emit_or_update_slot` is now
448/4 and explicitly remains provisional. Both primary targets remain incomplete.
All 174 trials and three rejected signed-division experiments are preserved in
private scratch; sources and hypotheses are summarized in RECONSTRUCTION.md.
Two fresh exact project builds, full-image comparison, the five-function proof
and all 43 original tests pass. Source-only rejects the remaining gaps.
Continue the shared call-order and angle-conversion investigations, then follow
observed effect initialization and matrix/vector dependencies. Registration data,
private runtime files and generated game content remain outside this repository.


## Stage 18 checkpoint

Four complete effect routines add 652 bytes, preserving all 47 previous matches.
Current totals: 51 functions, 42 modules, 5,596 compiled bytes and 4,157,316
retained reference bytes. A declared provisional 0x68-byte effect layout checks
every accessed offset. All 12 compile comparisons are exact. Two fresh project
builds, integrated-image comparison, five-function proof and all 43 original
tests pass; source-only rejects remaining gaps. Primary candidates remain
512/46 and 388/8, and the related emission/reuse candidate remains 448/4.
See RECONSTRUCTION.md for boundaries, behavior and continuing hypotheses.


## Stage 19 checkpoint

Ten functions in eight modules add 1,336 bytes, including the complete 848-byte
effect update. Current totals: 61 functions, 50 modules, 6,932 compiled bytes and
4,155,980 retained bytes. All previous 51 matches are unchanged. Each final source
matches twice with declared checked layouts; 127 scratch comparisons preserve
successful and failed hypotheses. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass. Source-only rejects remaining
gaps. Primary results remain 512/46 and 388/8, with related emission/reuse 448/4.
Continue the shared scheduling investigation and explicit effect dependencies;
see RECONSTRUCTION.md for boundaries, behavior and reproducible comparisons.


## Stage 20 checkpoint

Four direct effect dependencies add 468 bytes. Current totals are 65 functions,
54 modules, 7,400 compiled bytes and 4,155,512 retained bytes. All previous matching
ranges are preserved. Unsigned-short spawn declarations refine the update source
without changing its complete bytes. Each final source matches twice; 38 scratch
trials preserve hypotheses and receipts. Two fresh exact builds, full-image
comparison, five-function proof and all 43 original tests pass. Source-only rejects
remaining gaps. Primary results remain 512/46 and 388/8, with related emission/reuse
448/4. Continue scheduling hypotheses and spawned-effect constructors; see
RECONSTRUCTION.md for boundaries, behavior and reproducible comparisons.


## Stage 21 checkpoint

Three spawned-effect lifecycle functions add 480 bytes. Current totals are
68 functions, 57 modules, 7,880 compiled bytes and 4,155,032 retained bytes.
All 65 previous matches and sources are unchanged. Checked provisional layouts,
complete literal pools and alignment match independently twice. Two fresh exact
builds, full-image comparison, five-function proof and all 43 original tests pass.
Source-only still rejects the remaining gaps. The primary candidates remain
512/46 and 388/8, with related emission/reuse 448/4 after 96 further scheduling
trials. The larger randomized constructor is scratch-only at 488/137. See
RECONSTRUCTION.md for the failed hypotheses and next dependency work.


## Stage 22 diagnostics

223 additional scratch trials produce no new match. The verified checkpoint
remains 68 functions and 7,880 compiled bytes. Primary results remain 512/46 and
388/8, related emission/reuse 448/4, and the randomized constructor 488/137.
No admitted sources or build inputs changed; existing exact-build receipts are
current. See stage 22 in RECONSTRUCTION.md before repeating these hypotheses.


## Stage 23 checkpoint

Two exact spawned-effect dependencies add 124 bytes: the completion check and
alternate allocation wrapper. Totals are 70 functions, 59 modules, 8,004 compiled
bytes and 4,154,908 retained bytes. All previous 68 matches and sources are
preserved. Two fresh exact builds, integrated-image comparison, five-function
proof and all 43 original tests pass; source-only rejects remaining gaps.
Primary results remain 512/46 and 388/8, related emission/reuse 448/4. New scratch
diagnostics isolate the angle schedule at 120/7 and improve an adjacent random
constructor to 424/79; neither earns matching-byte credit. See RECONSTRUCTION.md
for 116 preserved trials, boundaries and continuing hypotheses.


## Stage 24 checkpoint

Vector stepping and signed angular delta add 284 exact bytes. Totals are 72
functions, 61 modules, 8,288 compiled bytes and 4,154,624 retained bytes. All prior
70 matches and sources are preserved. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass; source-only rejects gaps.
Primary results remain 512/46 and 388/8, related emission/reuse 448/4. The new
spawned-effect update candidate is 536/25 and remains scratch-only. See
RECONSTRUCTION.md for 59 preserved trials and continuing hypotheses.


## Stage 25 checkpoint

Three shared hierarchy routines add 248 exact bytes. Totals are 75 functions,
64 modules, 8,536 compiled bytes and 4,154,376 retained bytes. All prior 72 matches,
sources and headers are preserved. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass; source-only rejects gaps.
Primary results remain 512/46 and 388/8, related emission/reuse 448/4. The effect
advance candidate improves to 800/51 and remains unadmitted. See RECONSTRUCTION.md
for 113 trials, corrected color behavior and the continuing hypotheses.


## Latest verified checkpoint: stage 26

Hierarchy reparenting adds 116 exact ordinary-C bytes. Totals are 76 functions,
65 modules, 8,652 compiled bytes and 4,154,260 retained bytes. All previous matches
and headers are preserved. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass; source-only rejects gaps.
The two primary targets remain incomplete. Two complete C++ visitor diagnostics
remain unadmitted under the current C-only requirement; see RECONSTRUCTION.md.
