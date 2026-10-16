# Current reconstruction checkpoint

The current public checkpoint has **7323 exact functions in 7239 modules**, replacing
**605,220 bytes** of the 4,162,912-byte decoded executable (**14.5384% image coverage**).
It retains **3,557,692 reference bytes** and has no separately reconstructed static
data. This is a hybrid build; code-only completion and total function count are
unknown. See [PROGRESS.md](PROGRESS.md) for source-bound verification and
[BUILDING.md](BUILDING.md) to configure a new checkout with your own game dump.

## Parked unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04`, `0x8c045f04` | 512 bytes | 30 differing; first `0x8c045fdd` | Two angle conversions; radius and virtual dispatch regions match |
| `emit_5fbf8`, `0x8c05fbf8` | 388 bytes | 8 differing; first `0x8c05fc56` | Loop ordering and final-call scheduling |
| `emit_or_update_slot`, `0x8c05fd7c` | 448 bytes | 4 differing; first `0x8c05feba` | Shared final-call scheduling |
| `initialize_effect_manager`, `0x8c0a7db8` | 280 bytes | 8 differing; first `0x8c0a7e6e` | Five-argument text-buffer call; resource-copy loop matches |
| `signed_remainder`, `0x8c18e8a0` | 180 bytes | No complete match | Incoming R0/carry, register preservation and zero-divisor behavior |

The authoritative queue is `config/reconstruction-targets.json`; unmatched
sources remain in `src/provisional`. Both original primary targets remain parked
and incomplete. Their original objective has not been achieved; their recorded
blockers and revisit conditions still apply. Resolving them is not a prerequisite
for broader reconstruction work. Preserve repeated radius squaring and skipped vector
initialization as observed; do not introduce speculative behavior fixes.

Other private scratch blockers include effect update 536/25, effect advance
800/46, shared-base initialization 200 versus 196 expected with 170 differences,
and a position setter producing 30 versus 32 bytes. Missing alignment gets no
credit. Check every proposed range against existing modules before integration.

## Latest integration batch: 231: expanded candidate pool, part 35

50 new functions / 10,180 bytes. See [BATCH.md](BATCH.md) for measured gains, investigation-only work and verification.

## Autonomous iteration

The active priority is project-wide verified-byte throughput. See
[THROUGHPUT.md](THROUGHPUT.md) for the bounded demonstration and
[RECONSTRUCTION_WORKFLOW.md](RECONSTRUCTION_WORKFLOW.md) for enforced history,
diagnostics and reporting. Global code-completion percentage remains unknown.

Inspect → implement → compile → compare → collect → verify.
Publication of the verified batch 188 to 193 checkpoints was explicitly authorized after
review; later batches are published under a standing authorization once every local check
and CI pass.
Prioritize credible exact-match opportunities. Record each distinct hypothesis
and its predicted instruction change; consult history and group identical outputs.
Park after two unsuccessful hypotheses without improvement; a third requires
referenced actionable evidence. Park after the third failure, and never exceed
ten lifetime unsuccessful hypotheses. Reopening requires a new observation
addressing the recorded blocker. Record its precise blocker and evidence-based revisit condition.
Counts persist across sessions. Prior parked targets remain parked; this policy
does not reset their history. Continue to another productive target after each
checkpoint. Publish only reviewed public source and sanitized receipts; preserve
the separate research workspace, original data and private saves.

## Compiler and acceptance rules

Use the [matching cookbook](MATCHING_COOKBOOK.md) to look up observed CodeWarrior
source patterns before trying a new hypothesis. Its historical examples do not
override the queue's parked status or the current iteration limits.

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

## Verified continuation (batches 189 to 231)

Batch 189 admitted 151 functions / 5,320 bytes (2,391 functions / 188,332 bytes).
Batch 190 admitted 55 functions / 5,264 bytes, 40 of them C++ units (2,446 functions in 2,362 modules / 193,596 bytes).
Batch 191 admitted 37 functions / 5,320 bytes, mostly object constructors and factories (2,483 functions in 2,399 modules / 198,916 bytes).
Batch 192 admitted 211 functions / 11,456 bytes, found by a private draft generator (2,694 functions in 2,610 modules / 210,372 bytes).
Batch 193 admitted 87 functions / 6,060 bytes, including 48 boundary-reviewed short ranges (2,781 functions in 2,697 modules / 216,432 bytes).
Batch 194 admitted 75 functions / 5,136 bytes, from near-miss fixes and new generator idioms (2,856 functions in 2,772 modules / 221,568 bytes).
Batch 195 admitted 31 functions / 5,252 bytes, after forward-goto support (2,887 functions in 2,803 modules / 226,820 bytes).
Batch 196 admitted 63 functions / 5,280 bytes, from new call forms, predicates and restructured guards (2,950 functions in 2,866 modules / 232,100 bytes).
Batch 197 admitted 154 functions / 10,608 bytes, the first part of an expanded candidate pool (3,104 functions in 3,020 modules / 242,708 bytes).
Batch 198 admitted 135 functions / 10,724 bytes, part 2 of the expanded candidate pool (3,239 functions in 3,155 modules / 253,432 bytes).
Batch 199 admitted 133 functions / 10,628 bytes, part 3 of the expanded candidate pool (3,372 functions in 3,288 modules / 264,060 bytes).
Batch 200 admitted 142 functions / 10,632 bytes, part 4 of the expanded candidate pool (3,514 functions in 3,430 modules / 274,692 bytes).
Batch 201 admitted 139 functions / 10,212 bytes, part 5 of the expanded candidate pool (3,653 functions in 3,569 modules / 284,904 bytes).
Batch 202 admitted 67 functions / 5,940 bytes, expanded candidate pool, part 6 (byte-extension and literal-offset rules) (3,720 functions in 3,636 modules / 290,844 bytes).
Batch 203 admitted 61 functions / 5,152 bytes, expanded candidate pool, part 7 (type repairs, pass-through and flag-polarity variants) (3,781 functions in 3,697 modules / 295,996 bytes).
Batch 204 admitted 74 functions / 6,092 bytes, expanded candidate pool, part 8 (argument-copy, virtual-offset and repair rules) (3,855 functions in 3,771 modules / 302,088 bytes).
Batch 205 admitted 39 functions / 5,912 bytes, expanded candidate pool, part 9 (post-increment, return-order and label-continuation rules) (3,894 functions in 3,810 modules / 308,000 bytes).
Batch 206 admitted 106 functions / 16,340 bytes, expanded candidate pool, part 10 (jump-table switches, element locals, loop variables) (4,000 functions in 3,916 modules / 324,340 bytes).
Batch 207 admitted 395 functions / 19,012 bytes, new candidate survey and loop rules (4,395 functions in 4,311 modules / 343,352 bytes).
Batch 208 admitted 336 functions / 19,060 bytes, new candidate survey, continued (4,731 functions in 4,647 modules / 362,412 bytes).
Batch 209 admitted 368 functions / 19,048 bytes, new candidate survey, continued (5,099 functions in 5,015 modules / 381,460 bytes).
Batch 210 admitted 323 functions / 19,064 bytes, new candidate survey, continued (5,422 functions in 5,338 modules / 400,524 bytes).
Batch 211 admitted 305 functions / 19,048 bytes, new candidate survey, continued (5,727 functions in 5,643 modules / 419,572 bytes).
Batch 212 admitted 42 functions / 5,204 bytes, check loops, global casts, if/else orientation (5,769 functions in 5,685 modules / 424,776 bytes).
Batch 213 admitted 390 functions / 22,904 bytes, data-referenced functions survey (6,159 functions in 6,075 modules / 447,680 bytes).
Batch 214 admitted 113 functions / 5,224 bytes, data-region rescan and full redraft (6,272 functions in 6,188 modules / 452,904 bytes).
Batch 215 admitted 38 functions / 5,376 bytes, generator rules for loops, casts and data arrays (6,310 functions in 6,226 modules / 458,280 bytes).
Batch 216 admitted 59 functions / 7,156 bytes, generator compile fixes for casts, classes and signatures (6,369 functions in 6,285 modules / 465,436 bytes).
Batch 217 admitted 72 functions / 7,952 bytes, goto fallback, idioms and near-miss rules (6,441 functions in 6,357 modules / 473,388 bytes).
Batch 218 admitted 57 functions / 7,928 bytes, goto fallback, idioms and near-miss rules, second part (6,498 functions in 6,414 modules / 481,316 bytes).
Batch 219 admitted 69 functions / 9,960 bytes, near-miss rules for updates, calls, switches and early returns (6,567 functions in 6,483 modules / 491,276 bytes).
Batch 220 admitted 57 functions / 9,632 bytes, near-miss rules for updates, calls, switches and early returns (6,624 functions in 6,540 modules / 500,908 bytes).
Batch 221 admitted 71 functions / 9,852 bytes, near-miss rules for updates, calls, switches and early returns (6,695 functions in 6,611 modules / 510,760 bytes).
Batch 222 admitted 78 functions / 9,704 bytes, near-miss rules for updates, calls, switches and early returns (6,773 functions in 6,689 modules / 520,464 bytes).
Batch 223 admitted 77 functions / 9,740 bytes, near-miss rules for updates, calls, switches and early returns (6,850 functions in 6,766 modules / 530,204 bytes).
Batch 224 admitted 66 functions / 8,944 bytes, near-miss rules for locals, updates, struct arguments and joins (6,916 functions in 6,832 modules / 539,148 bytes).
Batch 225 admitted 69 functions / 8,968 bytes, near-miss rules for locals, updates, struct arguments and joins (6,985 functions in 6,901 modules / 548,116 bytes).
Batch 226 admitted 81 functions / 8,856 bytes, near-miss rules for locals, updates, struct arguments and joins (7,066 functions in 6,982 modules / 556,972 bytes).
Batch 227 admitted 65 functions / 9,456 bytes, near-miss rules for frame stores, register order and loop variables (7,131 functions in 7,047 modules / 566,428 bytes).
Batch 228 admitted 48 functions / 9,208 bytes, near-miss rules for frame stores, register order and loop variables (7,179 functions in 7,095 modules / 575,636 bytes).
Batch 229 admitted 62 functions / 9,152 bytes, near-miss rules for frame stores, register order and loop variables (7,241 functions in 7,157 modules / 584,788 bytes).
Batch 230 admitted 32 functions / 10,252 bytes, near-miss rules for values reused across blocks, frame stores and loop write-backs (7,273 functions in 7,189 modules / 595,040 bytes).
Batch 231 admitted 50 functions / 10,180 bytes, near-miss rules for values reused across blocks, frame stores and loop write-backs (7,323 functions in 7,239 modules / 605,220 bytes).

Generated sources keep mechanical identifiers for later naming. All prior sources/headers are unchanged;
two fresh builds, 93 tests and the source-only guard passed for each. Batches are
published after these checks under a standing authorization.

Many unadmitted routines are C++ members: `mov #off,r2; add r0,r2` after loading
`@(0x18,this)` is a virtual call (slot (off-8)/4). Next, continue the C++ virtual-call
pool (306 unmatched functions), the remaining `initialize_hierarchy_node` constructors and
call-ready 100–600-byte routines with REA/Ghidra evidence. Batch 231 near misses and
deferred candidates are listed in [BATCH.md](BATCH.md) (earlier batches in its history); the batch 188 parked targets, selection/view budget and original
primary targets are unchanged.

Private trials, specs, probes and receipts remain under `pso-rea`; earlier receipts
remain under `reconstruction-throughput-continuation`.
