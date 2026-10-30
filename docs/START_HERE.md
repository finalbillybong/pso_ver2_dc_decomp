# Current reconstruction checkpoint

The current public checkpoint has **11389 exact functions in 11049 modules**, replacing
**1,160,380 bytes** of the 4,162,912-byte decoded executable (**27.8742% code-range coverage**).
Typed static data adds 493,552 bytes ([DATA.md](DATA.md)), for **39.7302% image coverage**.
It retains **313,847 reference bytes**. This is a hybrid build; code-only completion and total function count are
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

## Second compiler (Hitachi SHC)

SDK and library code compiled with Hitachi SHC can now be admitted as pool-group
units ([SHC.md](SHC.md)). 200 pool groups (32,118 bytes, 456 functions) are in.
Candidate groups: the `0x8c1f0000`–`0x8c205000` library block (about 61 KB
SHC-shaped) and the SDK region from `0x8c340888`; a unit needs every function that
shares its literal pool.

## Assembly units

Assembly is not decompiled code and is never committed ([ASM.md](ASM.md)). 88 hand-written routines
(29,990 bytes) carry evidence that no compiler produced them; 4,888 fallback units (1,784,958 bytes) are
generated from your dump for code without matching C and labelled not_decompiled. Both are
regenerated at build time and earn no code or matching credit.

## Latest integration batch: 270: expanded candidate pool, part 74

78 new functions / 12,408 bytes. See [BATCH.md](BATCH.md) for measured gains, investigation-only work and verification.

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

## Verified continuation (batches 189 to 270)

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
Batch 232 admitted 54 functions / 9,708 bytes, near-miss rules for values reused across blocks, frame stores and loop write-backs (7,377 functions in 7,293 modules / 614,928 bytes).
Batch 233 admitted 43 functions / 9,088 bytes, near-miss rules for constants, sub-object and member-pointer calls, switches and returns (7,420 functions in 7,336 modules / 624,016 bytes).
Batch 234 admitted 55 functions / 9,072 bytes, near-miss rules for constants, sub-object and member-pointer calls, switches and returns (7,475 functions in 7,391 modules / 633,088 bytes).
Batch 235 admitted 74 functions / 10,508 bytes, near-miss rules for carried loads, index temporaries, frames and returns (7,549 functions in 7,465 modules / 643,596 bytes).
Batch 236 admitted 55 functions / 6,700 bytes, near-miss rules for interpreter table reads, values kept across calls and block copies (7,604 functions in 7,520 modules / 650,296 bytes).
Batch 237 admitted 48 functions / 10,172 bytes, near-miss rules for frame blocks, float values kept past branches, loops and narrow values (7,652 functions in 7,568 modules / 660,468 bytes).
Batch 238 admitted 59 functions / 9,856 bytes, near-miss rules for pool entries, branch joins, call arguments and frame addresses (7,711 functions in 7,627 modules / 670,324 bytes).
Batch 239 admitted 41 functions / 7,244 bytes, near-miss rules for values kept across calls, switch trees and copies, and further draft modes (7,752 functions in 7,668 modules / 677,568 bytes).
Batch 240 admitted 52 functions / 14,696 bytes, near-miss rules for values kept in callee-saved registers, copies and float declaration order (7,804 functions in 7,720 modules / 692,264 bytes).
Batch 241 admitted 59 functions / 10,132 bytes, near-miss rules for values kept across calls and loops, and the first hand-finished near misses (7,863 functions in 7,779 modules / 702,396 bytes).
Batch 242 admitted 196 functions / 30,216 bytes, hand-finished near misses from the 1-20 line bands (8,059 functions in 7,975 modules / 732,612 bytes).
Batch 243 admitted 328 functions / 37,914 bytes, corrected candidate boundaries and hand-finished near misses (8,387 functions in 8,303 modules / 770,526 bytes).
Batch 244 admitted 233 functions / 15,824 bytes, candidate units found by the boundary review (8,620 functions in 8,536 modules / 786,350 bytes).
Batch 245 admitted 234 functions / 20,236 bytes, candidate units found by the boundary review (8,854 functions in 8,770 modules / 806,586 bytes).
Batch 246 admitted 234 functions / 21,056 bytes, candidate units found by the boundary review (9,088 functions in 9,004 modules / 827,642 bytes).
Batch 247 admitted 233 functions / 21,652 bytes, candidate units found by the boundary review (9,321 functions in 9,237 modules / 849,294 bytes).
Batch 248 admitted 234 functions / 25,404 bytes, candidate units found by the boundary review (9,555 functions in 9,471 modules / 874,698 bytes).
Batch 249 admitted 234 functions / 24,476 bytes, candidate units found by the boundary review (9,789 functions in 9,705 modules / 899,174 bytes).
Batch 250 admitted 188 functions / 26,728 bytes, near-miss rules for arguments and delay-slot values, and delay-slot instructions the listing omitted (9,977 functions in 9,893 modules / 925,902 bytes).
Batch 251 admitted 113 functions / 23,548 bytes, hand-finished near misses among the reviewed candidate units (10,090 functions in 10,006 modules / 949,450 bytes).
Batch 252 admitted 47 functions / 10,192 bytes, remaining candidate units drafted in all modes (10,137 functions in 10,053 modules / 959,642 bytes).
Batch 253 admitted 67 functions / 12,460 bytes, hand-finished near misses among the remaining candidate units (10,204 functions in 10,120 modules / 972,102 bytes).
Batch 254 admitted 130 functions / 27,280 bytes, generator rules from hand-finished pairs, and hand-finished near misses (10,334 functions in 10,250 modules / 999,382 bytes).
Batch 255 admitted 55 functions / 15,016 bytes, hand-finished near misses among the remaining candidate units (10,389 functions in 10,305 modules / 1,014,398 bytes).
Batch 256 admitted 15 functions / 5,324 bytes, hand-finished near misses among the remaining candidate units (10,404 functions in 10,320 modules / 1,019,722 bytes).
Batch 257 admitted 53 functions / 13,608 bytes, a generator cycle with new rules and hand-finished near misses among the remaining candidate units (10,457 functions in 10,373 modules / 1,033,330 bytes).
Batch 258 admitted 23 functions / 5,748 bytes, a generator cycle with new rules and hand-finished near misses among the remaining candidate units (10,480 functions in 10,396 modules / 1,039,078 bytes).
Batch 259 admitted 12 functions / 5,980 bytes, hand-finished near misses and an extra-mode redraft among the remaining candidate units (10,492 functions in 10,408 modules / 1,045,058 bytes).
Batch 260 admitted 24 functions / 7,556 bytes, two generator cycles with new rules and hand-finished near misses among the remaining candidate units (10,516 functions in 10,432 modules / 1,052,614 bytes).
Batch 261 admitted 124 functions / 8,324 bytes, two generator cycles, hand-finished near misses and units whose exact code ends at a trailing alignment halfword among the remaining candidate units (10,640 functions in 10,556 modules / 1,060,938 bytes).
Batch 262 admitted 19 functions / 5,464 bytes, Thirteen generated drafts from three redrafts and six hand-finished near misses, matched exactly after two generator rule passes. (10,659 functions in 10,575 modules / 1,066,402 bytes).
Batch 263 admitted 35 functions / 7,746 bytes, Thirty-five hand-finished near misses, most of them parked targets re-tried with their remaining hypothesis budget, matched exactly. (10,694 functions in 10,610 modules / 1,074,148 bytes).
Batch 264 admitted 23 functions / 7,272 bytes, Twenty-three hand-finished near misses from parked targets of 17 to 40 differing lines, matched exactly. (10,717 functions in 10,633 modules / 1,081,420 bytes).
Batch 265 admitted 16 functions / 7,206 bytes, Sixteen hand-finished near misses from parked targets of 41 to 80 differing lines, matched exactly. (10,733 functions in 10,649 modules / 1,088,626 bytes).
Batch 266 admitted 24 functions / 6,632 bytes, Twenty-two near misses matched exactly by automated source search, and two hand-finished sources earlier held for prototype review. (10,757 functions in 10,673 modules / 1,095,258 bytes).
Batch 267 admitted 33 functions / 6,012 bytes, Thirty-three near misses matched exactly by automated source search. (10,790 functions in 10,706 modules / 1,101,270 bytes).
Batch 268 admitted 28 functions / 6,292 bytes, Two generated drafts from new generator rules and twenty-six near misses matched exactly by automated source search. (10,818 functions in 10,734 modules / 1,107,562 bytes).
Batch 269 admitted 37 functions / 8,292 bytes, Thirty-seven near misses matched exactly by automated source search, including results earlier held for their temporaries. (10,855 functions in 10,771 modules / 1,115,854 bytes).
Batch 270 admitted 78 functions / 12,408 bytes, Seventy-five hand-finished sources earlier held for declaration placement and three found by register-guided search, matched exactly. (10,939 functions in 10,853 modules / 1,128,430 bytes).

Generated sources keep mechanical identifiers for later naming. All prior sources/headers are unchanged;
two fresh builds, 93 tests and the source-only guard passed for each. Batches are
published after these checks under a standing authorization.

Many unadmitted routines are C++ members: `mov #off,r2; add r0,r2` after loading
`@(0x18,this)` is a virtual call (slot (off-8)/4). Next, continue the C++ virtual-call
pool (306 unmatched functions), the remaining `initialize_hierarchy_node` constructors and
call-ready 100–600-byte routines with REA/Ghidra evidence. Batch 270 near misses and
deferred candidates are listed in [BATCH.md](BATCH.md) (earlier batches in its history); the batch 188 parked targets, selection/view budget and original
primary targets are unchanged.

Private trials, specs, probes and receipts remain under `pso-rea`; earlier receipts
remain under `reconstruction-throughput-continuation`.
