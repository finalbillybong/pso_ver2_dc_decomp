# Reconstruction batch: 231: expanded candidate pool, part 35

50 new matching functions / 10,180 bytes. All 7273 prior functions preserved.

7323 exact functions in 7239 modules; 605,220 compiled function-range bytes; 0 reconstructed data bytes; 3,557,692 retained reference bytes. Whole-image coverage 14.5384% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c09dea8 | 0x8c09dea8 | 280 |
| operation_8c0a1b78 | 0x8c0a1b78 | 128 |
| operation_8c0a21a4 | 0x8c0a21a4 | 216 |
| operation_8c0a237c | 0x8c0a237c | 108 |
| operation_8c0a3b74 | 0x8c0a3b74 | 268 |
| operation_8c0b7d40 | 0x8c0b7d40 | 392 |
| operation_8c0c349c | 0x8c0c349c | 168 |
| operation_8c0c8888 | 0x8c0c8888 | 452 |
| operation_8c0dda80 | 0x8c0dda80 | 172 |
| operation_8c0de07c | 0x8c0de07c | 260 |
| operation_8c0e1114 | 0x8c0e1114 | 92 |
| operation_8c0e15a8 | 0x8c0e15a8 | 136 |
| operation_8c0e35bc | 0x8c0e35bc | 68 |
| operation_8c0e3600 | 0x8c0e3600 | 248 |
| operation_8c0e6c54 | 0x8c0e6c54 | 200 |
| operation_8c0f82f0 | 0x8c0f82f0 | 264 |
| operation_8c0f83f8 | 0x8c0f83f8 | 272 |
| operation_8c0fd3dc | 0x8c0fd3dc | 220 |
| operation_8c0fe2f4 | 0x8c0fe2f4 | 80 |
| operation_8c100ebc | 0x8c100ebc | 164 |
| operation_8c102b5c | 0x8c102b5c | 192 |
| operation_8c10f764 | 0x8c10f764 | 424 |
| operation_8c11c71c | 0x8c11c71c | 328 |
| operation_8c11f2e4 | 0x8c11f2e4 | 244 |
| operation_8c127d88 | 0x8c127d88 | 500 |
| operation_8c136854 | 0x8c136854 | 144 |
| operation_8c136c98 | 0x8c136c98 | 184 |
| operation_8c1378d4 | 0x8c1378d4 | 196 |
| operation_8c137ec8 | 0x8c137ec8 | 176 |
| operation_8c13f2ac | 0x8c13f2ac | 244 |
| operation_8c143528 | 0x8c143528 | 172 |
| operation_8c156bd8 | 0x8c156bd8 | 76 |
| operation_8c157138 | 0x8c157138 | 156 |
| operation_8c15c914 | 0x8c15c914 | 228 |
| operation_8c161874 | 0x8c161874 | 148 |
| operation_8c1692c0 | 0x8c1692c0 | 96 |
| operation_8c16ca5c | 0x8c16ca5c | 48 |
| operation_8c16ce78 | 0x8c16ce78 | 68 |
| operation_8c16e318 | 0x8c16e318 | 124 |
| operation_8c176a98 | 0x8c176a98 | 204 |
| operation_8c1776a0 | 0x8c1776a0 | 92 |
| operation_8c1794e8 | 0x8c1794e8 | 88 |
| operation_8c17f648 | 0x8c17f648 | 476 |
| operation_8c186e28 | 0x8c186e28 | 92 |
| operation_8c18c904 | 0x8c18c904 | 104 |
| operation_8c191454 | 0x8c191454 | 108 |
| operation_8c194b48 | 0x8c194b48 | 296 |
| operation_8c196624 | 0x8c196624 | 280 |
| operation_8c19801c | 0x8c19801c | 148 |
| operation_8c198da4 | 0x8c198da4 | 356 |

## Method

Batches 230–232 come from one generator cycle over every candidate still unmatched after batch 229 (4,825). This is batch 231; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 41–80 lines.

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

50 recorded attempts on 50 targets, all hypotheses and all exact. 50 units / 50 functions / 10,180 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c0e3600`: the generated draft with the float compare written in the other operand order, which was exact.
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
