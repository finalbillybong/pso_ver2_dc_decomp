# Reconstruction batch: 238: expanded candidate pool, part 42

59 new matching functions / 9,856 bytes. All 7652 prior functions preserved.

7711 exact functions in 7627 modules; 670,324 compiled function-range bytes; 0 reconstructed data bytes; 3,492,588 retained reference bytes. Whole-image coverage 16.1023% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c011308 | 0x8c011308 | 180 |
| operation_8c01e648 | 0x8c01e648 | 236 |
| operation_8c020a24 | 0x8c020a24 | 412 |
| operation_8c0244c4 | 0x8c0244c4 | 72 |
| operation_8c0260d8 | 0x8c0260d8 | 44 |
| operation_8c03bb4c | 0x8c03bb4c | 52 |
| operation_8c03d280 | 0x8c03d280 | 128 |
| operation_8c04bfa0 | 0x8c04bfa0 | 40 |
| operation_8c04ca48 | 0x8c04ca48 | 144 |
| operation_8c05b0ec | 0x8c05b0ec | 124 |
| operation_8c05bc18 | 0x8c05bc18 | 60 |
| operation_8c08f8f0 | 0x8c08f8f0 | 332 |
| operation_8c0a4828 | 0x8c0a4828 | 156 |
| operation_8c0bc8fc | 0x8c0bc8fc | 164 |
| operation_8c0ed490 | 0x8c0ed490 | 304 |
| operation_8c103424 | 0x8c103424 | 168 |
| operation_8c109da0 | 0x8c109da0 | 300 |
| operation_8c1104dc | 0x8c1104dc | 144 |
| operation_8c15b200 | 0x8c15b200 | 88 |
| operation_8c16c5a0 | 0x8c16c5a0 | 76 |
| operation_8c16c9b4 | 0x8c16c9b4 | 76 |
| operation_8c173f64 | 0x8c173f64 | 376 |
| operation_8c17945c | 0x8c17945c | 48 |
| operation_8c17a3ac | 0x8c17a3ac | 240 |
| operation_8c187758 | 0x8c187758 | 76 |
| operation_8c19f19c | 0x8c19f19c | 204 |
| operation_8c19f3ac | 0x8c19f3ac | 172 |
| operation_8c19f458 | 0x8c19f458 | 172 |
| operation_8c1a6cb8 | 0x8c1a6cb8 | 296 |
| operation_8c1a72ec | 0x8c1a72ec | 24 |
| operation_8c1a779c | 0x8c1a779c | 340 |
| operation_8c1ae010 | 0x8c1ae010 | 156 |
| operation_8c1ae104 | 0x8c1ae104 | 80 |
| operation_8c1ae154 | 0x8c1ae154 | 80 |
| operation_8c1ae23c | 0x8c1ae23c | 168 |
| operation_8c1b1668 | 0x8c1b1668 | 224 |
| operation_8c1b3b48 | 0x8c1b3b48 | 280 |
| operation_8c1b4088 | 0x8c1b4088 | 220 |
| operation_8c1b4d80 | 0x8c1b4d80 | 192 |
| operation_8c1b5760 | 0x8c1b5760 | 236 |
| operation_8c1b5ac4 | 0x8c1b5ac4 | 244 |
| operation_8c1b5cb4 | 0x8c1b5cb4 | 288 |
| operation_8c1b81b4 | 0x8c1b81b4 | 164 |
| operation_8c1bdffc | 0x8c1bdffc | 420 |
| operation_8c1bfe90 | 0x8c1bfe90 | 288 |
| operation_8c1cda9c | 0x8c1cda9c | 120 |
| operation_8c1e2058 | 0x8c1e2058 | 68 |
| operation_8c1e2a18 | 0x8c1e2a18 | 312 |
| operation_8c1e2e84 | 0x8c1e2e84 | 192 |
| operation_8c21d3a8 | 0x8c21d3a8 | 68 |
| operation_8c2259fc | 0x8c2259fc | 96 |
| operation_8c232500 | 0x8c232500 | 56 |
| operation_8c232538 | 0x8c232538 | 56 |
| operation_8c232570 | 0x8c232570 | 56 |
| operation_8c2325a8 | 0x8c2325a8 | 56 |
| operation_8c2325e0 | 0x8c2325e0 | 56 |
| operation_8c240854 | 0x8c240854 | 184 |
| operation_8c24759c | 0x8c24759c | 48 |
| operation_8c2600e0 | 0x8c2600e0 | 200 |

## Method

Batch 238 comes from one generator cycle over every candidate still unmatched after batch 237 (4,405). The draft generator gained rules for drafts that differed from the reference in 10 lines or fewer.

**Globals and pool entries:**
- A pool base plus `add #d` plus an index is written `(char *)&g.fD + i` against an extern table, so the field offset is not folded into the pool constant. An indexed field of a byte-addressed table is written `(char *)(g + K) + i`.
- An indexed access to a byte-addressed global uses the same symbol, so both uses share one pool entry.
- A run of stores of one value to different globals is written in pool-slot order.
- A pointer load reused without a reload after a store, copy or call in straight-line code is kept in a local.

**Branches and returns:**
- A conditional branch whose join assignments cost no code no longer becomes a branch over a `bra`. When only a `return` follows, the test is inverted and returns early. Otherwise the assignments move above the test, and the test reads the variable where it can.
- An early return that branches to the shared epilogue with its value in the register the epilogue returns becomes `if (c) v = K; else { ... } return v;`.
- An early return placed after the function's last return becomes a `goto` to a trailing return.
- A narrow local returned without extension gives the function that narrow return type. A single-return leaf ending `rts; extu.b r0,r0` returns `int`.

**Calls and arguments:**
- A narrow load extended in its own register and copied into an argument register gives the callee an `unsigned short` or `unsigned char` parameter.
- Argument registers beyond the callee's own source arity are dropped when they are only loop leftovers. Pointers left in r4–r7 by an unrolled block-copy loop are not call arguments.
- `t = f(); g(t); v = t;` becomes `t = f(); v = t; g(t);` when the listing copies the result to the join variable first.
- `f(e, e + k)` with `e` computed once keeps `e` in a local.

**Frames:**
- A frame address passed beside pushed stack arguments is written as a member's address, and an odd-offset frame address beside it in the same call as a byte member's address.
- The sub-object split now covers block copies, and a narrow read of a frame member is written as a cast access.

**Draft bugs where the C was wrong:**
- Frame reads after `mov.l rX,@-r15` pushes ignored the push depth.
- A copy of a variable set from an immediate, inside a loop that steps it, used the initial constant.
- A callee-saved register never set on one path produced a `v = 0` placeholder.

Each rule is guarded by a flag and was narrowed wherever an earlier version lost an exact draft. While the rules were developed, early versions of the pool-order, hoisted-test, arity, reused-load and narrow-return rules lost exact drafts, and each was fixed before the final run. No target measured further from the reference under the new rules.

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–237 (29 plans) and the targets and exact drafts of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass. 60 drafts were accepted: exact over their full range, or exact-short with an end that meets the batch 193 boundary rule. Other exact-short drafts are rejected unchanged. One further exact draft, `0x8c19f300`, was refused by the history guard as historically uncertain and remains blocked. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (56) or a function end (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

59 recorded attempts on 59 targets, all hypotheses and all exact. 59 units / 59 functions / 9,856 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c1ae104`: four array-of-struct field forms (10 lines each) and four extern-symbol base forms; one symbol-base form was exact.
  - `0x8c04bfa0`: the join assignment hoisted above the test (2 lines) and the inverted test with an early return, which was exact. Earlier loop forms were disclosed in batch 217.
  - `0x8c08f8f0`: an `if`/`else` rendering (4 lines) and the join assignments hoisted above the test, which was exact.
  - `0x8c16c5a0`: four forms of an `unsigned short` frame field passed to a function pointer; two were exact.
  - `0x8c21d3a8`: global stores in pool order (exact) and as a chained assignment (12 lines).
  - `0x8c0244c4`: the innermost return inverted (exact-short) and a `goto` to a tail return after the final return, which was exact.
  - `0x8c1a6cb8`: a narrow read of a frame member through a cast of its address, which was exact.
  - `0x8c0260d8`: a leaf returning an `unsigned char` load as `int`, which was exact.
  - `0x8c1e2058`: a frame `char` array member at an odd offset in place of a cast frame address, which was exact.
  - `0x8c020a24`: a frame array member's address beside a pushed stack argument, exact-short.
  - `0x8c05b0ec`: an element address shared by two arguments through a local (exact-short) and through a cast offset (10 lines).
  - `0x8c05bc18`: nine forms of a flag and clamp ordering, probed in an earlier cycle and not disclosed before because the function was not admitted; three were exact. The generated draft now matches through the new shared-epilogue return rule.
  - `0x8c04ca48`: an earlier cycle's experiment trimming call arguments to the callee's source arity, which was dropped then; the narrower arity rule above now makes the generated draft exact.
- **Probes on targets not admitted:** `0x8c19f300` (two join-order forms, both exact; refused by the history guard), `0x8c010778` (exact-short; the draft is exact-short and not accepted), `0x8c1eaf14` (two frame-address forms, 2 and 6 lines), `0x8c022428` (three join forms, best 8 lines), and `0x8c0262a0`, `0x8c05b77c`, `0x8c074b30`, `0x8c07a1dc`, `0x8c07bb94`, `0x8c0c60b0`, `0x8c103d6c`, `0x8c1e6f50`, `0x8c1eda20`, `0x8c21d598`, `0x8c21dcdc`, `0x8c220f60`, `0x8c22a55c` and `0x8c2821d8` (extension, frame store, pool order, thunk and mask forms; none exact).
- The research agent removed seven lines from its probe log for invocations that failed before producing a result (a wrong edit, a missing file or a compile error from its own edit). Every completed probe remains in the log.
- No declaration orders were compared or searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- When the assignments on the taken side of a branch cost no code, CodeWarrior's layout shows whether the source assigned before the test or inverted the test; a block ending in `goto` produces a branch over a `bra` instead.
- A field of an extern table reached with a separate `add #d` came from taking the field's address on the symbol, not from a folded offset.
- A copy of a call result to its join variable before the next use shows the assignment came first in the source.
- Frame addresses beside pushed stack arguments come from member addresses, which keep one stack-pointer offset.

## Parked and unresolved

- **Argument-register order around a call's delay slot** (117 targets in this band, including `fldi0`/`fldi1` into `fr4`) and **in-place `extu.w`** (76) are still treated as not reproducible from source (see batch 215).
- **Fragments** without their own prologue and epilogue (164 targets) are out of scope.
- **Register allocation** (192 targets) remains the largest group, mostly sibling functions that allocate differently from identical source shapes.
- Character indexing with `exts.b` after an indexed byte load, frame float stores through `@(r0,r15)`, and `add #0` were tried and not reproduced.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
