# Reconstruction batch: 275: expanded candidate pool, part 79

11 new matching functions / 5,368 bytes. All 12173 prior functions preserved.

12184 exact functions in 11293 modules; 1,238,270 compiled function-range bytes; 493,036 typed static-data bytes; 0 retained reference bytes. Code-range coverage 29.7453%, image coverage 41.5888%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c015ad4 | 0x8c015ad4 | 512 |
| operation_8c028430 | 0x8c028430 | 100 |
| operation_8c02c1d4 | 0x8c02c1d4 | 312 |
| operation_8c07faf0 | 0x8c07faf0 | 428 |
| operation_8c0cea60 | 0x8c0cea60 | 740 |
| operation_8c0fe1f4 | 0x8c0fe1f4 | 256 |
| operation_8c11b9c0 | 0x8c11b9c0 | 248 |
| operation_8c11d1d0 | 0x8c11d1d0 | 188 |
| operation_8c1ac704 | 0x8c1ac704 | 672 |
| operation_8c1decf0 | 0x8c1decf0 | 412 |
| operation_8c234ed8 | 0x8c234ed8 | 1500 |

## Method

Batch 275 combines drafts from a new generator rule set with hand-finished near misses. It is the first code batch since the source-only build, so every unit is verified in builds that take nothing from the reference.

**Jump-table recovery.** A scratch research pass found that the draft generator sometimes replaced a jump-table switch with a call to one of the table's targets, losing whole case bodies. It added these rules, each behind its own flag:
- the table is redrafted around the real join when a case leaves elsewhere;
- a case that branches to the epilogue becomes `return`;
- extra compare-chain cases folded into the table's range check become case labels;
- case bodies that branch to the join become `break`, with result variables for callee-saved values the join reads;
- tables inside goto regions become a `switch` of `goto`s;
- the assignment kept by a negated test is preserved.

Two smaller rules were added as well:
- the pool masks -4, -0x100 and 0xffff0000 are named in a local, because CodeWarrior otherwise turns them into shift pairs;
- a stack parameter whose register is only scaled in place is declared `register`.

Calibration stayed at its previous level (34 / 44 / 8). Per-function, per-mode regressions over every admitted plan (190, 191, 211–274) and earlier agents' result lists lost no exact draft. The redraft of the remaining candidates found 12 new exact drafts. Of these:
- 9 are admitted here;
- two had already been admitted from hand passes;
- one is held by the history guard.

The pass's probes are scratch only and are not admitted.

**Hand pass.** A scratch hand pass on 28 targets that earlier passes had brought within a few lines made 3 more exact. One of them was refused by the history guard and not forced: `0x8c03ef88`.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (11);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

12 recorded attempts on 12 targets, all exact; 1 was refused by the history guard. 11 units / 11 functions / 5,368 bytes were admitted after two independent reproductions each: 9 unedited generated drafts and 2 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison: in the generator redraft, or as logged in the hand pass's attempt log.
- **Per function**, the change that made each source exact:
  - `0x8c015ad4` (512 bytes): unedited generated draft (jump-table recovery)
  - `0x8c02c1d4` (312 bytes): unedited generated draft (jump-table recovery)
  - `0x8c07faf0` (428 bytes): unedited generated draft (jump-table recovery)
  - `0x8c0cea60` (740 bytes): unedited generated draft (jump-table recovery)
  - `0x8c0fe1f4` (256 bytes): unedited generated draft (jump-table recovery)
  - `0x8c11b9c0` (248 bytes): unedited generated draft (jump-table recovery)
  - `0x8c1ac704` (672 bytes): unedited generated draft (jump-table recovery)
  - `0x8c1decf0` (412 bytes): unedited generated draft (jump-table recovery)
  - `0x8c234ed8` (1,500 bytes): unedited generated draft (jump-table recovery)
  - `0x8c028430` (100 bytes): register List *a4 stack parameter used directly (alias l removed) puts i = 0 in the bra delay slot as in ref; DECL-ORDER i, d 
  - `0x8c11d1d0` (188 bytes): all three offsets named (k = 0x400, k2 = 0x404, k3 = 0x330 used for the o->f330 store and both sub-object f330 reads); assignment order k2, k3, k (ssweep) gives 0x400 r5 / 0x330 r6; DECL-ORDER k, k2, k3 

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- 30 of 364 functions with jump tables still draft a call in place of the table. The causes are compare trees with a table leaf, tables nested in blocks, and listing gaps.
- **Argument-register order around a call's delay slot** and **in-place extension** remain the largest groups.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
