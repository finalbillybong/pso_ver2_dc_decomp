# Reconstruction batch: 218: expanded candidate pool, part 22

57 new matching functions / 7,928 bytes. All 6441 prior functions preserved.

6498 exact functions in 6414 modules; 481,316 compiled function-range bytes; 0 reconstructed data bytes; 3,681,596 retained reference bytes. Whole-image coverage 11.5620% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c172348 | 0x8c172348 | 88 |
| operation_8c174184 | 0x8c174184 | 204 |
| operation_8c179a10 | 0x8c179a10 | 120 |
| operation_8c179ed4 | 0x8c179ed4 | 84 |
| operation_8c17adb4 | 0x8c17adb4 | 88 |
| operation_8c17b4b0 | 0x8c17b4b0 | 120 |
| operation_8c17e108 | 0x8c17e108 | 140 |
| operation_8c1876d8 | 0x8c1876d8 | 80 |
| operation_8c18a97c | 0x8c18a97c | 96 |
| operation_8c192738 | 0x8c192738 | 44 |
| operation_8c192ffc | 0x8c192ffc | 164 |
| operation_8c1a0010 | 0x8c1a0010 | 108 |
| operation_8c1a38c4 | 0x8c1a38c4 | 128 |
| operation_8c1a70d4 | 0x8c1a70d4 | 32 |
| operation_8c1a7304 | 0x8c1a7304 | 140 |
| operation_8c1a73c8 | 0x8c1a73c8 | 60 |
| operation_8c1a7404 | 0x8c1a7404 | 64 |
| operation_8c1a7444 | 0x8c1a7444 | 64 |
| operation_8c1a7484 | 0x8c1a7484 | 100 |
| operation_8c1bdd4c | 0x8c1bdd4c | 112 |
| operation_8c1c1190 | 0x8c1c1190 | 12 |
| operation_8c1c119c | 0x8c1c119c | 12 |
| operation_8c1c1a08 | 0x8c1c1a08 | 96 |
| operation_8c1d7ef0 | 0x8c1d7ef0 | 176 |
| operation_8c1dccb4 | 0x8c1dccb4 | 316 |
| operation_8c1dd454 | 0x8c1dd454 | 204 |
| operation_8c1ddcb8 | 0x8c1ddcb8 | 332 |
| operation_8c1de1d8 | 0x8c1de1d8 | 92 |
| operation_8c1ecf70 | 0x8c1ecf70 | 112 |
| operation_8c1f19a0 | 0x8c1f19a0 | 72 |
| operation_8c207304 | 0x8c207304 | 84 |
| operation_8c208704 | 0x8c208704 | 368 |
| operation_8c208f8c | 0x8c208f8c | 236 |
| operation_8c2097e4 | 0x8c2097e4 | 44 |
| operation_8c220d04 | 0x8c220d04 | 104 |
| operation_8c220e6c | 0x8c220e6c | 140 |
| operation_8c221888 | 0x8c221888 | 156 |
| operation_8c221924 | 0x8c221924 | 84 |
| operation_8c221d2c | 0x8c221d2c | 84 |
| operation_8c22529c | 0x8c22529c | 156 |
| operation_8c2283d0 | 0x8c2283d0 | 240 |
| operation_8c231d9c | 0x8c231d9c | 80 |
| operation_8c234a0c | 0x8c234a0c | 316 |
| operation_8c239c1c | 0x8c239c1c | 136 |
| operation_8c23c204 | 0x8c23c204 | 104 |
| operation_8c23ce80 | 0x8c23ce80 | 152 |
| operation_8c2407b0 | 0x8c2407b0 | 88 |
| operation_8c247dac | 0x8c247dac | 52 |
| operation_8c24bdc4 | 0x8c24bdc4 | 136 |
| operation_8c24c8b0 | 0x8c24c8b0 | 92 |
| operation_8c24dbcc | 0x8c24dbcc | 80 |
| operation_8c24f4f4 | 0x8c24f4f4 | 64 |
| operation_8c24f810 | 0x8c24f810 | 64 |
| operation_8c25a0ec | 0x8c25a0ec | 616 |
| operation_8c25e254 | 0x8c25e254 | 248 |
| operation_8c25f050 | 0x8c25f050 | 124 |
| operation_8c25f3f4 | 0x8c25f3f4 | 420 |

## Method

Batch 218 is the second part of the generator cycle of batch 217, a cycle over every candidate still unmatched after batch 216. Batch 217 covers the units up to `0x8c1722f4` and batch 218 those after it.

The draft generator gained three groups of rules.

**Goto fallback for unstructured control flow.** When the structurer cannot place a region, the region is rendered as gotos in address order:
- each branch becomes a conditional or unconditional `goto`, with a label at each target;
- a branch to the epilogue becomes `return` and a branch to an infinite loop's exit becomes `break`;
- a register gets a variable only when it is written in the region and live at a label;
- values are written back to those variables at each `goto` and label, in dependency order;
- if a region still cannot be placed, the whole function is rendered this way.

The fallback works from whole-function register liveness. In that pass a call clobbers registers after its delay slot and reads the argument registers set since the previous call. Within it:
- loads are kept in locals only when still live at a branch, label or store;
- single-assignment values are used directly;
- each def-use web gets its own variable, so a register reused for a pointer and an integer gets two separately typed variables;
- a comparison is kept across a label when every predecessor carries the same one.

**Idioms and shapes:**
- An inline byte-string compare loop becomes a call to a `static inline` helper taking `const unsigned char *` parameters.
- A loop test that loads a narrow value once becomes `while ((c = *p) != 0)` with `c` narrow.
- A value loaded before a loop and only read by its test becomes a local.
- Frames larger than an immediate, calls through `bsr`, and listings that end in misparsed data are handled; the last of these gives a TODO draft instead of an error.
- In extern mode, the address of a scalar extern global and indexed access off an absolute global address are written through the symbol, so uses share one pool entry.
- A pointer stored into a narrow member, a struct pointer returned through an arity cast, a virtual slot called with different pointer types, and `+=` on a global pointing to an incomplete struct are cast so that they compile.

**Near-miss rules:**
- A void `return;` before a labelled continuation is kept. Before, it was dropped, which made the draft wrong.
- A float left in `fr0` is the return value when `r0` is not set.
- A narrow value re-extended into an argument register means the callee's parameter is `int`. A narrow value re-extended before `rts` means the return type is `int`, except for `unsigned char`.
- No arguments are assumed for a callee that takes none, and no float arguments for a leaf callee that reads no float argument register. Untouched float parameters are passed through when a later float argument is set.
- When the right operand of a compare is loaded first, the relation is written mirrored, because CodeWarrior evaluates the left operand first.
- `x += -k` is written `x -= k`, and a struct pointer stepped back by its element size is written `p--`.
- `tst #k; movt` becomes `!(x & k)`.
- A member reached through a base plus a constant is written through a cast to the sub-object, which the compiler does not fold.
- In switch mode, the subject left in `r0` is not taken as a return value, and a default that is also the last case's body becomes `case k: default:`.

Calibration: 23/37 on batch 191 and 31/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. The rules were also checked against the functions admitted in batches 211–216, in every draft mode, and no exact draft was lost.

All candidates were redrafted in two passes with the generator at different stages:
- **First pass:** 969 candidates whose drafts still had TODOs or did not compile, drafted with the goto fallback and idioms (14 exact, all in batch 217).
- **Second pass:** the other 5,699, drafted with all three groups of rules (115 exact).

The second pass found 385 exact drafts, but most were exact for only part of their range. The batch 193 boundary rule rejects these unchanged.

Before admission, the boundaries of every unit in both batches were checked:
- each entry follows a literal pool (117) or a function end (12);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

57 recorded attempts on 57 targets, all hypotheses and all exact. 57 units / 57 functions / 7,928 bytes were admitted after two independent reproductions each. All are unedited generated drafts from the second pass.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in separate scratch copies of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c192738`: an `int` return for a re-extended `unsigned short` load, which was exact.
  - `0x8c1de1d8`: `!(x & 1)` and `(x & 1) == 0`; the first was exact.
  - `0x8c23c204`: a nested member, a cast to the sub-object and a byte-offset form; the cast form was exact.

  The other probes of this cycle are listed in batch 217.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- CodeWarrior keeps branch layout in source order. A goto rendering in address order reproduces the layout of loops the structurer cannot express, and leaves only register allocation to match.
- `x += -k` loads `-k` from the pool, while `x -= k` uses an immediate. A pointer stepped back with `p--` does the same.
- For a compare of two loads, the operand loaded first is the left operand in the source.
- A member reached through a cast to a sub-object keeps the sub-object's offset as a separate add. A nested member access folds the two offsets.
- A `short` value extended in place before a call or return means the receiving type is `int`.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215). Together they account for about a quarter of the 0–4 line near misses.
- **Unfilled final `rts` delay slots:** no source form tried reproduces them.
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
