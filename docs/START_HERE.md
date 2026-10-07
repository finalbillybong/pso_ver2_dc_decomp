# Current reconstruction checkpoint

The current public checkpoint has **135 exact functions in 122 modules**, replacing
14,720 bytes. See [PROGRESS.md](PROGRESS.md) for definitions and the source-bound
verification summary. Start a new checkout with [BUILDING.md](BUILDING.md).

## Unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04` at `0x8c045f04` | 512 bytes | 30 differing bytes; first `0x8c045fdd` | Two angle-conversion regions; virtual dispatch matches |
| `emit_5fbf8` at `0x8c05fbf8` | 388 bytes | 8 differing bytes; first `0x8c05fc56` | Two instruction-order pairs in the loop and final call |
| `emit_or_update_slot` at `0x8c05fd7c` | 448 bytes | 4 differing bytes; first `0x8c05feba` | Shared final-call delay-slot order |
| `initialize_effect_manager` at `0x8c0a7db8` | 280 bytes | 8 differing bytes; first `0x8c0a7e6e` | Five-argument call scheduling; resource loop matches |
| `signed_remainder` at `0x8c18e8a0` | 180 bytes | No complete match | Carry state, preserved registers and zero-divisor behavior |

The queue is in `config/reconstruction-targets.json`. Fully matching C++ is now
authorized. The operation's active C++ candidate improves to 30 differing bytes
but remains unadmitted. Preserve the pinned compiler and optimization settings;
C++ modules explicitly declare their language and add only `-lang c++`. Preserve
repeated radius squaring and the observed skipped vector initialization.

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


## Stage 26 checkpoint

Hierarchy reparenting adds 116 exact ordinary-C bytes. Totals are 76 functions,
65 modules, 8,652 compiled bytes and 4,154,260 retained bytes. All previous matches
and headers are preserved. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass; source-only rejects gaps.
The two primary targets remain incomplete. Two complete C++ visitor diagnostics
remain unadmitted under the current C-only requirement; see RECONSTRUCTION.md.


## Stage 27 checkpoint

Hierarchy description and traversal add 204 exact ordinary-C bytes. Totals are
77 functions, 66 modules, 8,856 compiled bytes and 4,154,056 retained bytes.
All prior matching sources and headers are preserved. Two fresh exact builds,
full-image comparison, five-function proof and all 43 original tests pass;
source-only rejects gaps. Both original primary targets remain incomplete.
See RECONSTRUCTION.md for the successful and failed source hypotheses.


## Stage 28 checkpoint

Root initialization, destruction and output forwarding add three exact C
functions and 688 bytes. Totals are 80 functions, 69 modules, 9,544 compiled bytes
and 4,153,368 retained bytes. All previous matching sources and headers are
preserved. Two fresh exact builds, full-image comparison, five-function proof and
all 43 original tests pass; source-only rejects gaps. Both original primary
targets remain incomplete. See RECONSTRUCTION.md for 49 trials and next work.


## Stage 29 checkpoint

Six timed hierarchy/group operations add 860 exact C bytes. Totals are 86
functions, 75 modules, 10,404 compiled bytes and 4,152,508 retained bytes.
All prior matching sources and headers are preserved. Two fresh exact builds,
full-image comparison, five-function proof and all 43 original tests pass;
source-only rejects gaps. Both original primary targets remain incomplete.
See RECONSTRUCTION.md for the 47 trials and continuing source hypotheses.


## Stage 30 checkpoint

Four C++ hierarchy functions in three modules add 368 complete bytes. Totals are
90 functions, 78 modules, 10,772 compiled bytes and 4,152,140 retained bytes.
All 86 prior C functions and headers are unchanged. Two fresh exact builds,
full-image comparison, five-function proof and all 47 original-workspace tests
pass. Source-only rejects gaps. Both original primary targets remain incomplete;
the active operation is now 512/30. See RECONSTRUCTION.md for language admission,
compiler-generated alignment and continuing hypotheses.


## Stage 31 checkpoint

Eight complete hierarchy-array/resource-buffer functions add 492 bytes. Totals
are 98 functions, 86 modules, 11,264 compiled bytes and 4,151,648 retained bytes.
All 90 prior matches, sources and headers are preserved. Two fresh exact builds,
integrated-image comparison, five-function proof and all 47 original-workspace
tests pass. Source-only rejects gaps. Both original primary targets remain
incomplete at 512/30 and 388/8. Effect advance improves to 800/46 in scratch;
no partial candidate receives matching credit. See RECONSTRUCTION.md for the
74 preserved trials, corrected reporting branch and continuing hypotheses.


## Stage 32 checkpoint

Four complete resource-copy/load functions add 596 bytes. Totals are 102 functions,
90 modules, 11,860 compiled bytes and 4,151,052 retained bytes. All 98 prior matches,
sources and headers are preserved. Two fresh exact builds, integrated-image
comparison, five-function proof and all 47 original-workspace tests pass.
Source-only rejects gaps. Both original primary targets remain incomplete at
512/30 and 388/8; related emission/reuse remains448/4. See RECONSTRUCTION.md for
86 trials, observed failure-path behavior and continuing hypotheses.


## Stage 33 checkpoint

Thirteen complete resource/allocation functions add 720 bytes. Totals are 115
functions, 103 modules, 12,580 compiled bytes and 4,150,332 retained bytes.
All 102 prior matches, sources and headers are preserved. Two fresh exact builds,
integrated-image comparison, five-function proof and all 47 original-workspace
tests pass. Source-only rejects gaps. Both original primary targets remain
incomplete at512/30 and 388/8; related emission/reuse remains448/4. See
RECONSTRUCTION.md for 60 trials and continuing source hypotheses.


## Stage 34 checkpoint

Six complete proximity/shared-base functions add 696 bytes. Totals are 121 functions,
109 modules, 13,276 compiled bytes and 4,149,636 retained bytes. All 115 previous matches,
modules and source/header hashes are preserved. Two fresh exact builds,
integrated-image comparison, five-function proof and all 47 original-workspace tests
pass. Source-only rejects gaps. Both original primary targets remain incomplete.
An overlapping diagnostic effect-setter module was excluded; no duplicate bytes
or functions are counted. See RECONSTRUCTION.md for 44 trials and next hypotheses.


## Stage 35 checkpoint

Nine complete effect creation/release functions add 1,008 bytes. Totals are
130 functions, 117 modules, 14,284 compiled bytes and 4,148,628 retained bytes.
All 121 previous matches, modules and source/header hashes are preserved.
Two fresh exact builds, integrated-image comparison, five-function proof and all
47 original-workspace tests pass. Source-only rejects gaps. Both original primary
targets remain incomplete. See RECONSTRUCTION.md for 41 trials, natural module
alignment and continuing source hypotheses.


## Latest verified checkpoint: stage 36

Five complete effect wrappers and manager lifecycle functions add 436 bytes.
Totals are 135 functions, 122 modules, 14,720 compiled bytes and 4,148,192 retained
reference bytes. All 130 prior matches, module definitions and source/header
hashes are preserved. Two fresh builds, image comparison, compiler proof and all
47 original-workspace tests pass. Source-only rejects remaining gaps. The new
manager initializer is explicit and unresolved at 280/8. Both original primary
targets remain incomplete. See RECONSTRUCTION.md for 59 trials, checked layouts
and failed scheduling hypotheses. Continue the iteration commands above.
