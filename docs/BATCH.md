# Reconstruction batch: 258: expanded candidate pool, part 62

23 new matching functions / 5,748 bytes. All 10457 prior functions preserved.

10480 exact functions in 10396 modules; 1,039,078 compiled function-range bytes; 0 reconstructed data bytes; 3,123,834 retained reference bytes. Whole-image coverage 24.9604% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02bfd8 | 0x8c02bfd8 | 112 |
| operation_8c032e7c | 0x8c032e7c | 160 |
| operation_8c03de60 | 0x8c03de60 | 208 |
| operation_8c04b8dc | 0x8c04b8dc | 256 |
| operation_8c052b5c | 0x8c052b5c | 220 |
| operation_8c0800ec | 0x8c0800ec | 168 |
| operation_8c083fd8 | 0x8c083fd8 | 156 |
| operation_8c0849f4 | 0x8c0849f4 | 220 |
| operation_8c096ae0 | 0x8c096ae0 | 288 |
| operation_8c0f1e04 | 0x8c0f1e04 | 212 |
| operation_8c0f8030 | 0x8c0f8030 | 216 |
| operation_8c103ce4 | 0x8c103ce4 | 88 |
| operation_8c107f34 | 0x8c107f34 | 164 |
| operation_8c140d50 | 0x8c140d50 | 264 |
| operation_8c14d710 | 0x8c14d710 | 296 |
| operation_8c197dc8 | 0x8c197dc8 | 384 |
| operation_8c1aa184 | 0x8c1aa184 | 184 |
| operation_8c1b19d8 | 0x8c1b19d8 | 216 |
| operation_8c1b4b0c | 0x8c1b4b0c | 400 |
| operation_8c1b5e00 | 0x8c1b5e00 | 368 |
| operation_8c1def88 | 0x8c1def88 | 780 |
| operation_8c1dfee8 | 0x8c1dfee8 | 280 |
| operation_8c2481b4 | 0x8c2481b4 | 108 |

## Method

Batch 258 has two parts: drafts from a generator cycle with new rules, and hand-finished near misses.

**Generator rules.** A scratch pass compared the 50 sources hand-finished in batch 257 and earlier held candidates with the generator's drafts for the same functions, and turned the recurring differences into generator rules. Each rule is guarded by a flag.

*Drafts that lost or changed behaviour:*
- two or more structure arguments pushed in consecutive stack areas before one call are by-value structure arguments, last-pushed first; the drafts dropped them;
- a known callee with float parameters and stack arguments takes its integer, pushed and float arguments in the order of its definition's parameter types; the drafts passed a pushed frame address as a float;
- a jump-table switch whose default leads to the shared epilogue breaks to a `return` after the switch, and table entries that list the default body are `case k: default:` sharing it; the drafts refused both shapes or called an in-range address;
- a jump-table function whose listing lacks reached halfwords takes the raw decoding of them inside the generator (no effect on the cases checked; kept as a safety net).

*Source forms:*
- a run of word copies whose bases change every three words is separate `Vector3` copies, not one block copy;
- a copy source address formed between a half's load and its store is written inline, without a typed pointer local;
- a float call argument read from members before earlier stores is a float local assigned before them;
- a float-to-int conversion read twice before its register is rewritten is an `int` local assigned at the conversion, also when the conversion sits in a call's delay slot;
- a switch on an `unsigned` bound check of an `int` parameter declares the parameter `unsigned int` and switches on `(int)aN`;
- a narrow signed load extended and copied straight back for an immediate test is an `int` local;
- a table word read right after a call, before the result's conversion, is an `int` local;
- three or more adjacent halfword copies through one base each side are one struct-of-shorts copy;
- a member address of a global or a loaded pointer kept in a callee-saved register across a call, tested against null, or copied into argument registers two or more times is a local pointer;
- a float call result compared once and read nowhere else is called inside the condition;
- one pool constant used only to index loads from two or more bases is an `int` offset local;
- an integer value computed from a member read and used twice in one statement is a local before it, in load order;
- a switch left straight to `return K0` with two or more such case bodies is written `if (!c) return K1; break;`;
- a computed sub-object base under a `(char *)` cast is parenthesised (the drafts did not compile);
- a pointer parameter copied into a callee-saved register only after PR is saved, and read through by the next instruction, is a local copy `T *base = aN`;
- a parameter register shifted in place and then read twice is an `int` local holding the scaled index.

While the rules were developed, intermediate versions lost exact (function, mode) drafts in admitted functions (for example 14 functions under an early form of the parameter-copy rule, and three functions under a chained-constant rule, which was removed); the responsible rules were narrowed or removed, and the final rules lose none. Rules tried and removed: an in-place parameter transform, an early virtual-call object local, and the chained one-constant assignment.

Calibration: 32/37 on batch 191, 44/55 on batch 190, and 8 of the 13 admitted jump-table functions. Across all admitted plans, the jump-table set and every earlier cycle's result list, no exact draft was lost. Of the 50 recently hand-finished functions, the generator now drafts 28 exactly by itself, up from none.

A redraft of the 3,435 remaining candidates in 11 modes found 135 exact drafts; 16 were new. All 16 are exact over their full reviewed range.

**Hand-finished near misses.** Two separate scratch passes took 160 candidates whose best draft differed from the reference in 82–98 lines, none probed by an earlier pass. They used the rules of batches 241–257:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The passes compiled 383 hypotheses; no target had more than ten. They found 7 exact sources; all were trialled and all are admitted. Six targets were skipped as out of scope (library-style serial and runtime code, a frame-pointer function, argument-register order around a call's delay slot, an in-place `extu.w` call argument). The history guard refused no attempt.

**Declaration-order comparisons.** The passes made 12 labelled comparisons, at most one per target. Held back and not trialled, because the comparison decided the match: `0x8c1ae374`, `0x8c192558` and `0x8c256c7c`. No admitted source depends on its declaration placement.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (21) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

23 recorded attempts on 23 targets, all hypotheses and all exact. 23 units / 23 functions / 5,748 bytes were admitted after two independent reproductions each: 16 unedited generated drafts and 7 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/` or in the hand-finishing passes' attempt logs.
- The 16 generated drafts are unedited. The other admitted sources were finished by hand from generated drafts.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms for the rules above, on functions admitted in batch 257: two on `0x8c12942c` (the first a failed edit that compiled the unchanged draft), one on `0x8c10e728` and one on `0x8c1b4c9c`. No probe source is admitted, and no probe compared declaration orders.
- A separate scratch study of a family of 37 factory functions (264–268 bytes) compiled hypotheses on several members without finding an exact form; none of its sources is admitted, and none of its members is in this batch.
- `0x8c052b5c` passes two 24-byte records by value; the callee's reads of both stack copies justify it.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c032e7c` (160 bytes): result flag preset v12 = 0 moved to the top of the function (reference sets it in the first guard's bt/s slot).
  - `0x8c04b8dc` (256 bytes): behaviour restored: string width loop advancing the parameter in place (c = *s++, second byte *s++), unsigned width compared to a float max at newline and end, (unsigned int) return; draft goto form lost the pointer post-increments.
  - `0x8c052b5c` (220 bytes): behaviour restored: two by-value 24-byte records passed to call_8c052750(frame.a, frame.v) (draft passed &frame.f48 after garbled block self-copies), records as members of one Frame struct matching the reference stack offsets, shifted table index.
  - `0x8c0f8030` (216 bytes): stride offset off = a1<<3 assigned once inside the guard and reused for v12 = o + off + 0x3d4, a1++ in place, ushort f396 masked & 0xffff before the halfword frame store (CW20).
  - `0x8c197dc8` (384 bytes): six id/sub-id checks read the entry bytes as (t2 + base)[k] and ((t2 + base) + k)[1] with (unsigned short) promotion (draft addressed the second byte from t2 directly and compared with & 0xffff).
  - `0x8c1b19d8` (216 bytes): parameters swapped and advanced in place (draft copied them into v2/v3/v5), accumulator preset before the random call, || range guard, shared (f3a8>>12)&0xf local.
  - `0x8c1b5e00` (368 bytes): void function (draft invented int returns) and the two repeated 2-bit fields read and masked once into locals a = f3b0 & 3, b = f3a8 & 3 for the second packed call argument.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- CodeWarrior copies a multi-word run whose bases change every three words as separate three-word copies, and a single 24-byte or larger block in a `dt` loop.
- A pool offset shared by loads from two bases needs its own local; written as plain members, the offset is rematerialised.

## Parked and unresolved

- **A factory family** of 37 functions keeps a residue in the scheduling of a tail constant before the first `Vector3` copy (the temporary lands in r12 in the reference); 30 hypotheses did not resolve it.
- **Declaration order** decides register assignment in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
