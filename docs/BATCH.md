# Reconstruction batch: 230: expanded candidate pool, part 34

32 new matching functions / 10,252 bytes. All 7241 prior functions preserved.

7273 exact functions in 7189 modules; 595,040 compiled function-range bytes; 0 reconstructed data bytes; 3,567,872 retained reference bytes. Whole-image coverage 14.2938% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c010f34 | 0x8c010f34 | 120 |
| operation_8c01a514 | 0x8c01a514 | 308 |
| operation_8c020300 | 0x8c020300 | 320 |
| operation_8c02718c | 0x8c02718c | 332 |
| operation_8c029900 | 0x8c029900 | 260 |
| operation_8c02f0c4 | 0x8c02f0c4 | 116 |
| operation_8c02f138 | 0x8c02f138 | 120 |
| operation_8c031a68 | 0x8c031a68 | 280 |
| operation_8c031b80 | 0x8c031b80 | 280 |
| operation_8c0326b0 | 0x8c0326b0 | 152 |
| operation_8c053ad8 | 0x8c053ad8 | 64 |
| operation_8c067634 | 0x8c067634 | 256 |
| operation_8c068510 | 0x8c068510 | 336 |
| operation_8c06f06c | 0x8c06f06c | 1848 |
| operation_8c070180 | 0x8c070180 | 1732 |
| operation_8c0746c8 | 0x8c0746c8 | 292 |
| operation_8c07da28 | 0x8c07da28 | 96 |
| operation_8c07db40 | 0x8c07db40 | 180 |
| operation_8c07f694 | 0x8c07f694 | 380 |
| operation_8c086cdc | 0x8c086cdc | 212 |
| operation_8c087a20 | 0x8c087a20 | 124 |
| operation_8c08b3cc | 0x8c08b3cc | 136 |
| operation_8c08d378 | 0x8c08d378 | 320 |
| operation_8c08fa3c | 0x8c08fa3c | 304 |
| operation_8c0911f4 | 0x8c0911f4 | 68 |
| operation_8c0966d8 | 0x8c0966d8 | 116 |
| operation_8c097058 | 0x8c097058 | 316 |
| operation_8c0976b0 | 0x8c0976b0 | 116 |
| operation_8c09b960 | 0x8c09b960 | 356 |
| operation_8c09d9f4 | 0x8c09d9f4 | 224 |
| operation_8c09db50 | 0x8c09db50 | 224 |
| operation_8c09dcc8 | 0x8c09dcc8 | 264 |

## Method

Batches 230–232 come from one generator cycle over every candidate still unmatched after batch 229 (4,825). This is batch 230; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 41–80 lines.

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

32 recorded attempts on 32 targets, all hypotheses and all exact. 32 units / 32 functions / 10,252 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c010f34`: the generated draft with a table pointer loaded once, tested and reused in both branches, which was exact.
  - `0x8c08b3cc`: the generated draft with the parameter used directly as the do-while list pointer, which was exact.
- **Probes on targets not admitted in this cycle:** `0x8c013a04` (three struct-array forms), `0x8c09c42c` (two loop forms), `0x8c08fefc` (three accumulator-update forms), `0x8c0116c4` (a counter step before its test), `0x8c113aa4` (five forms of a clamp held in a variable; the best differed in 4 lines) and `0x8c18a4ac` (two float scale forms). None was exact.
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
