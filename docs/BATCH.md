# Reconstruction batch: 217: expanded candidate pool, part 21

72 new matching functions / 7,952 bytes. All 6369 prior functions preserved.

6441 exact functions in 6357 modules; 473,388 compiled function-range bytes; 0 reconstructed data bytes; 3,689,524 retained reference bytes. Whole-image coverage 11.3716% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0363a4 | 0x8c0363a4 | 108 |
| operation_8c03ed70 | 0x8c03ed70 | 148 |
| operation_8c03ee04 | 0x8c03ee04 | 76 |
| operation_8c03ee50 | 0x8c03ee50 | 64 |
| operation_8c03f6d8 | 0x8c03f6d8 | 12 |
| operation_8c0400b0 | 0x8c0400b0 | 148 |
| operation_8c04b21c | 0x8c04b21c | 20 |
| operation_8c04b230 | 0x8c04b230 | 20 |
| operation_8c051d5c | 0x8c051d5c | 44 |
| operation_8c051d88 | 0x8c051d88 | 44 |
| operation_8c05cd8c | 0x8c05cd8c | 180 |
| operation_8c05d130 | 0x8c05d130 | 280 |
| operation_8c066b00 | 0x8c066b00 | 148 |
| operation_8c077488 | 0x8c077488 | 156 |
| operation_8c07d5cc | 0x8c07d5cc | 144 |
| operation_8c07e998 | 0x8c07e998 | 252 |
| operation_8c08cb24 | 0x8c08cb24 | 228 |
| operation_8c08cc38 | 0x8c08cc38 | 184 |
| operation_8c08f270 | 0x8c08f270 | 192 |
| operation_8c08f360 | 0x8c08f360 | 180 |
| operation_8c09abf4 | 0x8c09abf4 | 120 |
| operation_8c09cea0 | 0x8c09cea0 | 276 |
| operation_8c0afdec | 0x8c0afdec | 128 |
| operation_8c0c5774 | 0x8c0c5774 | 120 |
| operation_8c0c5810 | 0x8c0c5810 | 120 |
| operation_8c0cd3e8 | 0x8c0cd3e8 | 160 |
| operation_8c0d4ec0 | 0x8c0d4ec0 | 64 |
| operation_8c0de288 | 0x8c0de288 | 132 |
| operation_8c0e1294 | 0x8c0e1294 | 72 |
| operation_8c0e1bbc | 0x8c0e1bbc | 76 |
| operation_8c0e6988 | 0x8c0e6988 | 48 |
| operation_8c0e70b0 | 0x8c0e70b0 | 76 |
| operation_8c0e8630 | 0x8c0e8630 | 76 |
| operation_8c0ec120 | 0x8c0ec120 | 256 |
| operation_8c0ecf78 | 0x8c0ecf78 | 264 |
| operation_8c0f1a98 | 0x8c0f1a98 | 168 |
| operation_8c0f3954 | 0x8c0f3954 | 28 |
| operation_8c0f42a8 | 0x8c0f42a8 | 296 |
| operation_8c0fc26c | 0x8c0fc26c | 152 |
| operation_8c0fd718 | 0x8c0fd718 | 40 |
| operation_8c1075c8 | 0x8c1075c8 | 68 |
| operation_8c129408 | 0x8c129408 | 36 |
| operation_8c129a30 | 0x8c129a30 | 24 |
| operation_8c12adf8 | 0x8c12adf8 | 4 |
| operation_8c12adfc | 0x8c12adfc | 4 |
| operation_8c12ae04 | 0x8c12ae04 | 4 |
| operation_8c137778 | 0x8c137778 | 348 |
| operation_8c144594 | 0x8c144594 | 68 |
| operation_8c14490c | 0x8c14490c | 16 |
| operation_8c14ae60 | 0x8c14ae60 | 304 |
| operation_8c151678 | 0x8c151678 | 92 |
| operation_8c15945c | 0x8c15945c | 216 |
| operation_8c159d78 | 0x8c159d78 | 92 |
| operation_8c165910 | 0x8c165910 | 216 |
| operation_8c16d03c | 0x8c16d03c | 52 |
| operation_8c16d09c | 0x8c16d09c | 52 |
| operation_8c16d1bc | 0x8c16d1bc | 52 |
| operation_8c16d21c | 0x8c16d21c | 52 |
| operation_8c16d5e0 | 0x8c16d5e0 | 184 |
| operation_8c16ec90 | 0x8c16ec90 | 156 |
| operation_8c16fed4 | 0x8c16fed4 | 36 |
| operation_8c16fef8 | 0x8c16fef8 | 36 |
| operation_8c16ff1c | 0x8c16ff1c | 36 |
| operation_8c16ff40 | 0x8c16ff40 | 36 |
| operation_8c16ff64 | 0x8c16ff64 | 36 |
| operation_8c16ff88 | 0x8c16ff88 | 36 |
| operation_8c16ffac | 0x8c16ffac | 36 |
| operation_8c16ffd0 | 0x8c16ffd0 | 36 |
| operation_8c16fff4 | 0x8c16fff4 | 36 |
| operation_8c170018 | 0x8c170018 | 36 |
| operation_8c170f38 | 0x8c170f38 | 168 |
| operation_8c1722f4 | 0x8c1722f4 | 84 |

## Method

Batches 217 and 218 come from one generator cycle over every candidate still unmatched after batch 216. Batch 217 covers the units up to `0x8c1722f4` and batch 218 those after it.

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

72 recorded attempts on 72 targets, all hypotheses and all exact. 72 units / 72 functions / 7,952 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Two further exact drafts, `0x8c0c55f8` and `0x8c0c56d8`, were refused by the history guard as historically uncertain. They were not forced and remain blocked.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in separate scratch copies of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c03ed70`: string-compare loop forms, disclosed in batch 216.
  - `0x8c03ee04`: the inline compare helper with `char` and `unsigned char` parameters, in plain and extern form. The extern form was exact.
  - `0x8c03ee50`: the narrow loop-test variable form, with and without a temporary for the compare result. Both were exact.
  - `0x8c03f6d8`: an `int` return for a re-extended `char` load, which was exact.
  - `0x8c077488`: `-=` in place of `+= -k`, which was exact.
  - `0x8c08cc38`: an `int` callee parameter, which was exact.
  - `0x8c0e1bbc`: seven pointer-step forms; `v--` and `v -= 1` were exact.
  - `0x8c0e70b0`: `<=` and mirrored compare forms; the mirrored form was exact.
- **Probes on targets not admitted:**
  - `0x8c04bfa0` (6 loop forms, best 2 lines);
  - `0x8c1a8224` (2 loop forms, 30 lines);
  - `0x8c0b3b3c`, `0x8c01e180`, `0x8c21dcdc`, `0x8c191880`, `0x8c04a838`, `0x8c09dc30`, `0x8c013620`, `0x8c17b7e8`, `0x8c1c9a64`, `0x8c1302d4`, `0x8c21e328` and `0x8c12b000` (parameter, return, compare, switch and constant forms; none exact except `0x8c1c9a64` in the existing ternary mode).
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
