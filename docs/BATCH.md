# Reconstruction batch: 256: expanded candidate pool, part 60

15 new matching functions / 5,324 bytes. All 10389 prior functions preserved.

10404 exact functions in 10320 modules; 1,019,722 compiled function-range bytes; 0 reconstructed data bytes; 3,143,190 retained reference bytes. Whole-image coverage 24.4954% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c026e7c | 0x8c026e7c | 488 |
| operation_8c052434 | 0x8c052434 | 276 |
| operation_8c08f1d4 | 0x8c08f1d4 | 156 |
| operation_8c094acc | 0x8c094acc | 232 |
| operation_8c099d08 | 0x8c099d08 | 552 |
| operation_8c0b94d8 | 0x8c0b94d8 | 292 |
| operation_8c10393c | 0x8c10393c | 396 |
| operation_8c10baf0 | 0x8c10baf0 | 404 |
| operation_8c13ad4c | 0x8c13ad4c | 740 |
| operation_8c18fb94 | 0x8c18fb94 | 196 |
| operation_8c1a9a58 | 0x8c1a9a58 | 328 |
| operation_8c1dd8d4 | 0x8c1dd8d4 | 400 |
| operation_8c1de51c | 0x8c1de51c | 276 |
| operation_8c218998 | 0x8c218998 | 420 |
| operation_8c248664 | 0x8c248664 | 168 |

## Method

Batch 256 comes from hand-finished near misses among the remaining candidate units. The draft generator did not change since batch 254. One separate scratch pass started from the best generated drafts of batch 254's cycle and took the 160 targets differing in 41–80 lines that the previous passes did not reach. It attempted 125 of them before its time ran out. It edited each draft until its whole range compiled exactly, under the rules of batches 241–255:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The pass compiled 187 hypotheses. The most on one target was 9. It made 16 labelled declaration-order comparisons, at most one per target, and none of them decided an admitted source. Where the comparison decided the match, the source is held back and not trialled: `0x8c02d238`, `0x8c24554c`, `0x8c2075c0` and `0x8c0fb864`. Three failed compiles were logged with correction rows.

The pass found 15 exact sources. All were trialled and all are admitted. The history guard refused no attempt. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (15);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

15 recorded attempts on 15 targets, all hypotheses and all exact. 15 units / 15 functions / 5,324 bytes were admitted after two independent reproductions each, all hand-finished from generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand-finishing pass's attempt log.
- All admitted sources in this batch were finished by hand from generated drafts.
- Where a call gained or lost an argument, the callee's own reads of that register or stack slot justify it (`0x8c052434`, `0x8c10baf0`, `0x8c13ad4c`).
- **Per function**, the change that made each draft exact:
  - `0x8c026e7c` (488 bytes): four-short block copy through a sub-record pointer (f3b8 + 0x430; draft split it into int+short stores) and reset through ps = f3b8 + 0x458; structured target-pointer choice.
  - `0x8c052434` (276 bytes): two 24-byte records passed by value to call_8c052750 (callee reads both stack copies at 0x240-0x268); draft had lost the argument copies and passed a pointer.
  - `0x8c08f1d4` (156 bytes): retry loop with continue and named -1, two 12-byte struct copies from f5c+4, parameter used directly (draft copied it to a local).
  - `0x8c094acc` (232 bytes): pointer locals to the f4a0/f4a4 direction pair formed before the switch (draft accessed the fields directly).
  - `0x8c099d08` (552 bytes): behaviour restored: v adjusted in place (draft lost the clamp path), ternary max, dx/dy reused for the key presets as else-if chains.
  - `0x8c0b94d8` (292 bytes): effect table as one 16-byte-row symbol g_8c305368 with idx = i << 4 shared and fields read via CW19 base+k cast barriers (draft used three separate address literals).
  - `0x8c10393c` (396 bytes): row index computed in place on parameter a2 (a2 = (unsigned short)a2 << 3) in each case.
  - `0x8c10baf0` (404 bytes): behaviour restored: all five call_8c028430 calls pass the clamped value in r7 (callee reads r7 and the stack slot; draft dropped it in cases 1-3/default), switch with default, clamp in place.
  - `0x8c13ad4c` (740 bytes): operation_8c18833c arguments restored (&frame stack pointer argument, 0.5f/0.0f floats; draft swapped them) and chained f398 = f3d0 = 1.
  - `0x8c18fb94` (196 bytes): store index as post-incremented counter inside the block-copy destination (draft incremented early) and row offset computed in place on the call result (t1 *= f04).
  - `0x8c1a9a58` (328 bytes): table entry read into a local after each random call (before the float conversion), second column via CW19 base+4 cast barrier.
  - `0x8c1dd8d4` (400 bytes): pad pointer local pad = (char *)&g_8c41cba0 + 0x110 assigned after the first flag test and passed to all five calls (draft used a separate literal).
  - `0x8c1de51c` (276 bytes): size argument a1->f34 + 0.0897f computed into a float local before the frame setup.
  - `0x8c218998` (420 bytes): seed halves converted to unsigned right after each random call (draft kept the raw ints across the next call).
  - `0x8c248664` (168 bytes): two 160-byte block copies (draft unrolled them as goto word loops) with the destination row pointer computed before the source null test.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- Pairs of `dt` copy loops pushing 24-byte blocks before a call are by-value record arguments.
- Drafts both dropped arguments a callee reads and invented arguments it does not; checking the callee's reads fixed several.
- One table literal used with `add #4`, `#8` and `#12` is one row-struct symbol with a shared index, reached behind a cast barrier (CW19).
- Index shifts and clamps were often applied to the parameter itself rather than to a copy.

## Parked and unresolved

- **A different large-offset addressing and constant-register pattern** (literal into `r1`, base into `r0`, one float register reused for both conversion constants, fewer callee-saved registers) blocks about 25 targets. No source spelling reproduced it.
- **Declaration order** decides register assignment in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
