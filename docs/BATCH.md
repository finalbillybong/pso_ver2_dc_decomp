# Reconstruction batch: 239: expanded candidate pool, part 43

41 new matching functions / 7,244 bytes. All 7711 prior functions preserved.

7752 exact functions in 7668 modules; 677,568 compiled function-range bytes; 0 reconstructed data bytes; 3,485,344 retained reference bytes. Whole-image coverage 16.2763% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01bbec | 0x8c01bbec | 172 |
| operation_8c01d3b0 | 0x8c01d3b0 | 276 |
| operation_8c0384b8 | 0x8c0384b8 | 512 |
| operation_8c03d304 | 0x8c03d304 | 52 |
| operation_8c04fa44 | 0x8c04fa44 | 164 |
| operation_8c05956c | 0x8c05956c | 120 |
| operation_8c07711c | 0x8c07711c | 132 |
| operation_8c0773e4 | 0x8c0773e4 | 164 |
| operation_8c083bd0 | 0x8c083bd0 | 348 |
| operation_8c08b944 | 0x8c08b944 | 100 |
| operation_8c08de70 | 0x8c08de70 | 100 |
| operation_8c094bb4 | 0x8c094bb4 | 180 |
| operation_8c09a5d0 | 0x8c09a5d0 | 112 |
| operation_8c0babf0 | 0x8c0babf0 | 300 |
| operation_8c0d3c00 | 0x8c0d3c00 | 284 |
| operation_8c0dcdfc | 0x8c0dcdfc | 276 |
| operation_8c0e9730 | 0x8c0e9730 | 120 |
| operation_8c0ed180 | 0x8c0ed180 | 100 |
| operation_8c0f3970 | 0x8c0f3970 | 32 |
| operation_8c1402bc | 0x8c1402bc | 148 |
| operation_8c169230 | 0x8c169230 | 144 |
| operation_8c16c54c | 0x8c16c54c | 84 |
| operation_8c16ca00 | 0x8c16ca00 | 88 |
| operation_8c16d27c | 0x8c16d27c | 56 |
| operation_8c1819e8 | 0x8c1819e8 | 188 |
| operation_8c18f418 | 0x8c18f418 | 112 |
| operation_8c1a9c84 | 0x8c1a9c84 | 144 |
| operation_8c1abc70 | 0x8c1abc70 | 296 |
| operation_8c1cdd08 | 0x8c1cdd08 | 88 |
| operation_8c1f1508 | 0x8c1f1508 | 100 |
| operation_8c21d3ec | 0x8c21d3ec | 292 |
| operation_8c222ab8 | 0x8c222ab8 | 360 |
| operation_8c222f28 | 0x8c222f28 | 336 |
| operation_8c2232f8 | 0x8c2232f8 | 112 |
| operation_8c22dd9c | 0x8c22dd9c | 252 |
| operation_8c2378fc | 0x8c2378fc | 156 |
| operation_8c23e1b4 | 0x8c23e1b4 | 192 |
| operation_8c247bfc | 0x8c247bfc | 140 |
| operation_8c24a49c | 0x8c24a49c | 268 |
| operation_8c24e274 | 0x8c24e274 | 100 |
| operation_8c2534b4 | 0x8c2534b4 | 44 |

## Method

Batch 239 comes from one generator cycle over every candidate still unmatched after batch 238 (4,346). The draft generator gained rules for drafts that differed from the reference in 11–20 lines.

**Values kept across calls:**
- An address-taken parameter reloaded into a callee-saved register and used across a call becomes a block-local copy, `{ T *base = o; ... }`. The same applies to a call result kept in the frame.
- A field-offset pool constant held in a callee-saved register and used only as an `r0` index across a call becomes an offset variable, when it is loaded after an unconditional first call. An offset variable added to a freshly loaded pointer inside a loop with a call is also kept, and such variables are not declared as constants.
- A register written a few instructions before an `rts` inside a loop is the return value, not a loop variable.

**Calls and arguments:**
- A direct call result sign-extended once into a callee-saved register means the callee returns `char` or `short`, and redundant casts of its results are dropped.
- A word loaded into the next argument register, copied for an update and then passed, is also an argument.
- One address copied into two argument registers becomes a local passed twice.

**Switches and branches:**
- In switch mode, CodeWarrior's binary compare tree is read as one `switch`. The case mapping is checked by simulating the tree on values around every constant, and partial trees are refused.
- In back-branch mode, join copies that cost no code and that the fall-through path does not read are set before the loop test, giving `bt top` in place of `bf; bra; nop`. A constant set in a `bra` delay slot goes after the join assignments, and a store that fills a `bra` delay slot does not get a constant variable.

**Copies and draft bugs:**
- Word-copy `dt` loops up to 1,024 iterations become a block copy.
- A scaled index is parenthesised as `(i) << k`. Before, `x & 0xffff << 2` was emitted with the wrong precedence.
- In unstructured regions, a constant live on entry and never redefined is used as itself.

Each rule is guarded by a flag and was narrowed wherever an earlier version lost an exact draft. While the rules were developed, an early version of the duplicated-argument rule and the switch-tree rule lost exact drafts on 24 functions. Both were fixed before the final run. No target measured further from the reference under the new rules.

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–238 (30 plans) and the targets and exact drafts of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in two passes with the same generator:
- **Main pass** over 4,346 candidates in the 8 draft modes used by earlier cycles. 14 drafts were accepted.
- **Supplementary pass** over the 4,333 still unmatched, in 11 further draft modes that the generator already had but the earlier cycles' pool runs did not use: `switch2ext`, `passext`, `ccast`, `ccastext`, `bgoto`, `bgotoext`, `uc`, `uctern`, `movcseext`, `retflip` and `retflipext`. 28 drafts were accepted: `switch2ext` 7, `ccast` 5, `passext` 5, `bgoto` 3, `bgotoext` 3, `movcseext` 2, `uc` 1, and 2 exact-short. These modes switch on existing generator options (extern symbols, call casts, back-branch gotos and similar). They are not new rules. The research agents had already scored them, and some functions in this batch had drafted exactly in them before without being collected.

Acceptance is the same in both passes: exact over the full range, or exact-short with an end that meets the batch 193 boundary rule. Other exact-short drafts are rejected unchanged. One further exact draft, `0x8c0b39cc`, was refused by the history guard as historically uncertain and remains blocked. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (35) or a function end (6);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

41 recorded attempts on 41 targets, all hypotheses and all exact. 41 units / 41 functions / 7,244 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c22dd9c`: four forms of a narrow call result; the callee returning `char` with an `int` temporary and no casts was exact.
  - `0x8c03d304`: an array-pointer local (14 lines), swapped index operands (16 lines) and a constant base with no variable, which was exact.
  - `0x8c0dcdfc`: the compare tree written as a `switch`, which was exact.
  - `0x8c23e1b4`: a vector member passed twice (12 lines) and the duplicated address held in a local, which was exact.
  - `0x8c2534b4`: a 6,788-byte struct copy, which was exact.
  - `0x8c04fa44`: a compare tree written as a `switch`, probed in an earlier cycle and exact then. It was not disclosed before because the function was not admitted.
- **Probes on targets not admitted:** `0x8c0b39cc` (a direct field store, 14 lines, and two block-alias forms, both exact; refused by the history guard), `0x8c07d9a8` (eight offset-variable forms, best 4 lines), `0x8c184828` (statement-order and loop forms, best 16 lines), and `0x8c014e3c`, `0x8c044018`, `0x8c054040`, `0x8c065578`, `0x8c0ac300`, `0x8c0afe6c`, `0x8c0bf250`, `0x8c10b814`, `0x8c12b510`, `0x8c144c30`, `0x8c1588b8`, `0x8c19cedc`, `0x8c19e7c8` and `0x8c22d538` (alias, offset, mask, loop and address-temporary forms; none exact).
- **Declaration-order comparisons:** two probes each compared one fixed alternative declaration order, to learn whether a rule should fix it: `0x8c07d9a8` (an offset variable declared last, 22 lines) and `0x8c184828` (a loop counter declared first, 16 lines). Neither matched, and no rule was taken from them. No declaration orders were searched.
- One logged probe of `0x8c0afe6c` was a failed invocation (its edit did not apply). It is marked as failed in the log and has no result.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- An address-taken parameter used across a call was copied into a block-local pointer in the source; the copy is what moves it into a callee-saved register.
- CodeWarrior compiles a dense `switch` without a jump table as a binary compare tree, so a tree of `cmp/gt`, `cmp/ge` and `cmp/eq` tests came from one `switch`.
- A call result sign-extended once into a callee-saved register came from a callee declared to return `char` or `short`.
- A word-copy `dt` loop of up to 1,024 words is a struct assignment.

## Parked and unresolved

- **Scratch-register choices** (about 205 targets in this band) remain the largest group: the code is the same but CodeWarrior assigns or orders registers differently.
- **Effect constructors** with a global address loaded into `r0` versus `r1` (7 targets at 6–8 lines), string-duplication helpers that reuse the parameter register, and `& -2` compiled as a pool mask were tried and not reproduced.
- **In-place `extu.w`**, **argument-register order around a call's delay slot**, fragments and library-style code remain out of scope.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
