# Reconstruction batch: 232: expanded candidate pool, part 36

54 new matching functions / 9,708 bytes. All 7323 prior functions preserved.

7377 exact functions in 7293 modules; 614,928 compiled function-range bytes; 0 reconstructed data bytes; 3,547,984 retained reference bytes. Whole-image coverage 14.7716% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c19f5c0 | 0x8c19f5c0 | 336 |
| operation_8c19f710 | 0x8c19f710 | 348 |
| operation_8c1a2ba8 | 0x8c1a2ba8 | 240 |
| operation_8c1a8310 | 0x8c1a8310 | 372 |
| operation_8c1a8484 | 0x8c1a8484 | 292 |
| operation_8c1a8ecc | 0x8c1a8ecc | 68 |
| operation_8c1aa840 | 0x8c1aa840 | 168 |
| operation_8c1b46d8 | 0x8c1b46d8 | 116 |
| operation_8c1b5bb8 | 0x8c1b5bb8 | 80 |
| operation_8c1b6738 | 0x8c1b6738 | 136 |
| operation_8c1c53c4 | 0x8c1c53c4 | 72 |
| operation_8c1cb998 | 0x8c1cb998 | 188 |
| operation_8c1cd974 | 0x8c1cd974 | 236 |
| operation_8c1d02fc | 0x8c1d02fc | 104 |
| operation_8c1d3a64 | 0x8c1d3a64 | 248 |
| operation_8c1d4ba4 | 0x8c1d4ba4 | 160 |
| operation_8c1d4f08 | 0x8c1d4f08 | 124 |
| operation_8c1d52b0 | 0x8c1d52b0 | 268 |
| operation_8c1d53bc | 0x8c1d53bc | 192 |
| operation_8c1d547c | 0x8c1d547c | 180 |
| operation_8c1d5c38 | 0x8c1d5c38 | 156 |
| operation_8c1d7fa0 | 0x8c1d7fa0 | 344 |
| operation_8c1dd57c | 0x8c1dd57c | 152 |
| operation_8c1e5f80 | 0x8c1e5f80 | 148 |
| operation_8c1e8dc8 | 0x8c1e8dc8 | 152 |
| operation_8c1e90d4 | 0x8c1e90d4 | 164 |
| operation_8c1e9fa0 | 0x8c1e9fa0 | 256 |
| operation_8c1ea9e0 | 0x8c1ea9e0 | 208 |
| operation_8c1f0e28 | 0x8c1f0e28 | 408 |
| operation_8c1f1a9c | 0x8c1f1a9c | 188 |
| operation_8c206ee4 | 0x8c206ee4 | 236 |
| operation_8c20978c | 0x8c20978c | 28 |
| operation_8c216410 | 0x8c216410 | 124 |
| operation_8c21ada4 | 0x8c21ada4 | 164 |
| operation_8c21f3f0 | 0x8c21f3f0 | 64 |
| operation_8c2238f8 | 0x8c2238f8 | 140 |
| operation_8c224fb0 | 0x8c224fb0 | 132 |
| operation_8c2274e8 | 0x8c2274e8 | 32 |
| operation_8c228848 | 0x8c228848 | 144 |
| operation_8c229cdc | 0x8c229cdc | 172 |
| operation_8c22ea28 | 0x8c22ea28 | 248 |
| operation_8c2326f4 | 0x8c2326f4 | 216 |
| operation_8c23679c | 0x8c23679c | 268 |
| operation_8c23a040 | 0x8c23a040 | 76 |
| operation_8c23a08c | 0x8c23a08c | 148 |
| operation_8c23cda8 | 0x8c23cda8 | 92 |
| operation_8c23fa8c | 0x8c23fa8c | 104 |
| operation_8c243ed4 | 0x8c243ed4 | 320 |
| operation_8c2468a0 | 0x8c2468a0 | 180 |
| operation_8c250878 | 0x8c250878 | 160 |
| operation_8c251aec | 0x8c251aec | 104 |
| operation_8c255200 | 0x8c255200 | 188 |
| operation_8c256254 | 0x8c256254 | 96 |
| operation_8c260710 | 0x8c260710 | 168 |

## Method

Batches 230–232 come from one generator cycle over every candidate still unmatched after batch 229 (4,825). This is batch 232; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 41–80 lines.

**Values reused across blocks.** The largest group: the draft re-read loads that the source kept in a variable.
- A word load read again past a join, a taken branch, or a later block after a store or call becomes a local. Narrow loads become `char` or `short` locals, unsigned when followed by a zero-extend.
- The same applies to `int` expressions built from loads that are never used as an address, and to a load not read in its own block but read after the branch. CodeWarrior moves no loads above a branch.
- Such locals are `int` unless used as a struct pointer.
- A fall-through crossing counts only after a store or call, a second boundary only if the block in between did real work, and a store to a different global does not end the value's reuse.

**Frame stores the draft dropped:** non-constant and float stores to a frame slot that is never read back are emitted, and narrow frame stores that are read back are field stores.

**Join and loop variables:**
- Call results kept in callee-saved registers are declared in register order with the other variables, by the same fixed rule as in batch 227.
- Joins coalesce scratch registers in leaf functions and float registers, but not when the register is dead after the join.
- A parameter moved to a callee-saved register and stepped by a loop is used directly as the loop variable.

**Draft bugs where the C was wrong:**
- Loop write-backs were emitted in the wrong order (`i++` before `sum += t[i]`), and join and loop-exit assignments likewise.
- A do-while test now uses the written-back variable.
- A stored read-modify-write value is re-read from its variable, fixing `g + 1` after `g += 1`.
- Registers clobbered by a call stay unknown across joins, and clobbered argument registers are no longer taken as arguments.

**Floats and values kept across calls:**
- Computed values and addresses held in `r8`–`r14` across a call become variables.
- Float values in `fr12`–`fr15` across a call become variables, including in-place updates, call results, copies and float constants.
- A value set in a `jsr` delay slot counts as live across that call.

**Rendering and typing:**
- A copy of a float variable is a float, and float variables passed as arguments are declared `float`.
- Float compare operand order follows register numbering.
- An `int` stepped down by a small constant is written `v -= k`, which CodeWarrior compiles to an immediate; `v = v - k` loads the constant from the pool.
- Compile fixes for pointer compares, unknown objects, empty switches and argument casts.

All remaining candidates were redrafted in one pass. 138 drafts were exact over their full range. Most other exact drafts were exact for only part of their range, and the batch 193 boundary rule rejects these unchanged. Two further exact drafts, `0x8c03efc0` and `0x8c0b49c0`, were refused by the history guard as historically uncertain and remain blocked. The three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit in the three batches were checked:
- each entry follows a literal pool (130) or a function end (6);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

Calibration: 29/37 on batch 191 (previously 26) and 43/55 on batch 190 (previously 42). The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–223, the targets of the previous cycles and the functions admitted in batches 224–226, no exact draft was lost in any mode.

## Measured attempts

54 recorded attempts on 54 targets, all hypotheses and all exact. 54 units / 54 functions / 9,708 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c1b46d8`: a clamp written `v1 -= 4`, `v1 = v1 - 4` and `v1 = (int)(v1 - 4)`; only `-=` was exact.
- The probes of this cycle on targets not admitted are listed in batch 230.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A load the source keeps in a variable is not re-read after a branch, a join, a store or a call. A draft that repeats the expression makes the compiler reload it.
- CodeWarrior does not move a load above a branch, so a value first read after a branch was assigned after it in the source.
- `v -= k` compiles to an immediate add, while `v = v - k` and `v = (int)(v - k)` load the constant from the pool.
- A float compare is written with the operand in the lower-numbered register first.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Register allocation** of hoisted constants and parameters in larger functions remains the largest group of near misses.
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
