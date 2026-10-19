# Reconstruction batch: 252: expanded candidate pool, part 56

47 new matching functions / 10,192 bytes. All 10090 prior functions preserved.

10137 exact functions in 10053 modules; 959,642 compiled function-range bytes; 0 reconstructed data bytes; 3,203,270 retained reference bytes. Whole-image coverage 23.0522% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c012008 | 0x8c012008 | 236 |
| operation_8c01379c | 0x8c01379c | 60 |
| operation_8c0137d8 | 0x8c0137d8 | 60 |
| operation_8c0219c4 | 0x8c0219c4 | 396 |
| operation_8c025814 | 0x8c025814 | 156 |
| operation_8c02ea04 | 0x8c02ea04 | 376 |
| operation_8c02eb7c | 0x8c02eb7c | 388 |
| operation_8c034a70 | 0x8c034a70 | 176 |
| operation_8c04a99c | 0x8c04a99c | 40 |
| operation_8c05237c | 0x8c05237c | 184 |
| operation_8c05c8f8 | 0x8c05c8f8 | 124 |
| operation_8c05ed04 | 0x8c05ed04 | 212 |
| operation_8c07cb70 | 0x8c07cb70 | 284 |
| operation_8c07f5d8 | 0x8c07f5d8 | 184 |
| operation_8c0a5bf8 | 0x8c0a5bf8 | 892 |
| operation_8c0bda08 | 0x8c0bda08 | 180 |
| operation_8c0c1760 | 0x8c0c1760 | 488 |
| operation_8c0c58e4 | 0x8c0c58e4 | 112 |
| operation_8c10962c | 0x8c10962c | 316 |
| operation_8c112940 | 0x8c112940 | 52 |
| operation_8c11c5b0 | 0x8c11c5b0 | 364 |
| operation_8c11cf18 | 0x8c11cf18 | 160 |
| operation_8c129160 | 0x8c129160 | 456 |
| operation_8c158698 | 0x8c158698 | 160 |
| operation_8c1588b8 | 0x8c1588b8 | 64 |
| operation_8c15a7e4 | 0x8c15a7e4 | 284 |
| operation_8c15c5c4 | 0x8c15c5c4 | 168 |
| operation_8c162de4 | 0x8c162de4 | 176 |
| operation_8c179354 | 0x8c179354 | 148 |
| operation_8c17ae44 | 0x8c17ae44 | 64 |
| operation_8c180c48 | 0x8c180c48 | 152 |
| operation_8c184cf8 | 0x8c184cf8 | 52 |
| operation_8c186ae4 | 0x8c186ae4 | 80 |
| operation_8c189b7c | 0x8c189b7c | 276 |
| operation_8c18eeb4 | 0x8c18eeb4 | 76 |
| operation_8c1a9d58 | 0x8c1a9d58 | 140 |
| operation_8c1b8888 | 0x8c1b8888 | 180 |
| operation_8c1bc0c4 | 0x8c1bc0c4 | 200 |
| operation_8c1c6ac8 | 0x8c1c6ac8 | 244 |
| operation_8c1d8224 | 0x8c1d8224 | 380 |
| operation_8c1e2110 | 0x8c1e2110 | 180 |
| operation_8c21b3f4 | 0x8c21b3f4 | 368 |
| operation_8c21eb78 | 0x8c21eb78 | 148 |
| operation_8c23c7cc | 0x8c23c7cc | 144 |
| operation_8c2423cc | 0x8c2423cc | 120 |
| operation_8c246efc | 0x8c246efc | 188 |
| operation_8c24a264 | 0x8c24a264 | 304 |

## Method

Batch 252 comes from one full generator cycle over every remaining reviewed candidate unit (3,820 units, drafted in all 19 modes at the reviewed ranges). The draft generator and the listing are unchanged since batch 250; this cycle adds the eight modes that batch 250's cycle left out, and covers the units that earlier cycles had not drafted with the batch-250 rules.

The cycle drafted 170 exact functions. 118 of them were already admitted, already trialled or blocked. 52 were new: 47 exact over the full reviewed range and 5 exact on a range ending at a literal-pool reference (the batch-193 boundary rule). The history guard refused all 5 of the short-range attempts, because those targets carry recorded history that the new attempt does not address. They stay blocked and are not in this batch. The 47 admitted functions are all exact over their full reviewed range, and every one of them is also exact in at least one of the 11 modes used in the reduced cycles.

Calibration is unchanged from batch 250: 31/37 on batch 191 and 44/55 on batch 190. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (45) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

52 recorded attempts on 52 targets, all hypotheses. 47 were exact, and the history guard refused 5. 47 units / 47 functions / 10,192 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- No generator rule changed for this batch, and no new scratch probes informed it.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A full 19-mode cycle after a reduced 11-mode cycle found no exact draft that only the eight omitted modes produce among the new functions.

## Parked and unresolved

- **Argument-register order around a call's delay slot** and **in-place `extu.w`** remain out of scope; the pinned compiler does not produce either shape.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
