# Reconstruction batch: 240: expanded candidate pool, part 44

52 new matching functions / 14,696 bytes. All 7752 prior functions preserved.

7804 exact functions in 7720 modules; 692,264 compiled function-range bytes; 0 reconstructed data bytes; 3,470,648 retained reference bytes. Whole-image coverage 16.6293% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c017bd4 | 0x8c017bd4 | 424 |
| operation_8c03f734 | 0x8c03f734 | 268 |
| operation_8c04b588 | 0x8c04b588 | 64 |
| operation_8c051a98 | 0x8c051a98 | 356 |
| operation_8c090f94 | 0x8c090f94 | 292 |
| operation_8c09cbcc | 0x8c09cbcc | 92 |
| operation_8c0a2144 | 0x8c0a2144 | 96 |
| operation_8c0a227c | 0x8c0a227c | 96 |
| operation_8c0d23dc | 0x8c0d23dc | 592 |
| operation_8c0ebc00 | 0x8c0ebc00 | 320 |
| operation_8c0ee1d8 | 0x8c0ee1d8 | 296 |
| operation_8c0ee300 | 0x8c0ee300 | 304 |
| operation_8c10c650 | 0x8c10c650 | 1204 |
| operation_8c110d68 | 0x8c110d68 | 152 |
| operation_8c110e00 | 0x8c110e00 | 152 |
| operation_8c131824 | 0x8c131824 | 128 |
| operation_8c131bdc | 0x8c131bdc | 180 |
| operation_8c131d30 | 0x8c131d30 | 180 |
| operation_8c132d00 | 0x8c132d00 | 128 |
| operation_8c13b8d4 | 0x8c13b8d4 | 444 |
| operation_8c1498cc | 0x8c1498cc | 548 |
| operation_8c14a4a4 | 0x8c14a4a4 | 328 |
| operation_8c1528c4 | 0x8c1528c4 | 184 |
| operation_8c156838 | 0x8c156838 | 644 |
| operation_8c157210 | 0x8c157210 | 128 |
| operation_8c15b5e4 | 0x8c15b5e4 | 216 |
| operation_8c1638a8 | 0x8c1638a8 | 88 |
| operation_8c163900 | 0x8c163900 | 88 |
| operation_8c16fe78 | 0x8c16fe78 | 72 |
| operation_8c18833c | 0x8c18833c | 152 |
| operation_8c18bd28 | 0x8c18bd28 | 272 |
| operation_8c1a85a8 | 0x8c1a85a8 | 256 |
| operation_8c1bd17c | 0x8c1bd17c | 940 |
| operation_8c1ccdc8 | 0x8c1ccdc8 | 460 |
| operation_8c1cd1a8 | 0x8c1cd1a8 | 124 |
| operation_8c1cffdc | 0x8c1cffdc | 440 |
| operation_8c1dbdac | 0x8c1dbdac | 448 |
| operation_8c1dc0b4 | 0x8c1dc0b4 | 172 |
| operation_8c1e18bc | 0x8c1e18bc | 204 |
| operation_8c1e1988 | 0x8c1e1988 | 204 |
| operation_8c1f0764 | 0x8c1f0764 | 440 |
| operation_8c219b80 | 0x8c219b80 | 88 |
| operation_8c21a908 | 0x8c21a908 | 232 |
| operation_8c21bf48 | 0x8c21bf48 | 120 |
| operation_8c21e810 | 0x8c21e810 | 272 |
| operation_8c21ef24 | 0x8c21ef24 | 304 |
| operation_8c220460 | 0x8c220460 | 368 |
| operation_8c22ba9c | 0x8c22ba9c | 224 |
| operation_8c2306c4 | 0x8c2306c4 | 232 |
| operation_8c23f590 | 0x8c23f590 | 96 |
| operation_8c254d24 | 0x8c254d24 | 460 |
| operation_8c25506c | 0x8c25506c | 124 |

## Method

Batch 240 comes from one generator cycle over every candidate still unmatched after batch 239 (4,305). The draft generator gained rules for drafts that differed from the reference in 21–40 lines. In this cycle every candidate was drafted in all 19 draft modes in one pass, not 8 modes followed by a supplementary pass.

**Values the source kept in callee-saved registers:**
- A pool address plus a small constant, used across calls, becomes a variable. When the pair is recomputed on separate paths, each path declares its own block-local copy. The same applies to a pool address plus a constant variable, written `v = pool; v += k;`, and to a pool address plus a pool constant used as a loop-end pointer.
- A pool constant held in a callee-saved register and read only by compares becomes a loop-bound variable.
- A stack parameter loaded at entry into a callee-saved register is declared `register`.
- A call result copied into a second callee-saved register becomes a second variable.
- A value built in place from parameters and used across a call becomes a variable, as does a parameter sign-extended once into a callee-saved register.
- A frame array base kept across calls becomes a pointer, and each element reached through it in a loop gets its own pointer.
- The existing call-crossing and element-address variable rules also cover one-operand shifts and offset variables that hold a product.

**Copies and stores:**
- Two halfword copies into the frame through a copy of the stack pointer become one 4-byte block assignment.
- Block-copy coalescing also runs inside switch case bodies.
- A chained store may end in a narrower member, as in `o->a = o->b = x;`.
- An indexed element stored to another object and then used again becomes a variable.
- `x = (x & 0xff) + k` on an unsigned narrow member becomes `x += k`.
- A far field tested by its old value and then stepped becomes a field pointer with a post-decrement.
- An element address plus a byte count is written through `char *`, so it is not scaled.
- A narrow load zero-extended in place and read past a branch becomes an unsigned local.

**Floats:**
- Float scratch variables are declared in the order of their registers (`fr4`, `fr5`, ...), and float call results kept in `fr12`–`fr15` from `fr15` down. This is a fixed rule. It was found by comparing one alternative declaration order on `0x8c157210`; no declaration orders were searched.
- A float computed before a branch and left in `fr4` for a later call becomes a float local.
- Float argument registers last set before the loop that holds a call are not treated as its arguments, and the existing arity limit counts only the callee's integer parameters.

Each rule is guarded by a flag and was narrowed wherever an earlier version lost an exact draft. While the rules were developed, an early version of the parameter-value rule lost one function in two modes. It was fixed before the final run. No target measured further from the reference under the new rules.

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–238 (30 plans), batch 239's accepted drafts and the targets and exact drafts of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass, in 19 draft modes. 52 drafts were accepted: `cast` 38, `extern` 6, `switch2` 6, `bgoto` 1 and `ccast` 1. Six of them are exact-short with an end that meets the batch 193 boundary rule; other exact-short drafts are rejected unchanged. The history guard refused no draft in this batch. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (49) or a function end (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

52 recorded attempts on 52 targets, all hypotheses and all exact. 52 units / 52 functions / 14,696 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c22ba9c`: a pool address plus `0x20` held in a variable, which was exact.
  - `0x8c1cffdc`: the same pair declared block-local at the top of each branch, which was exact.
  - `0x8c0ee1d8`: a `short` local copy of a stack parameter (8 lines), and the declaration-order comparison below.
  - `0x8c157210`: the declaration-order comparison below, which was exact.
  - `0x8c1e18bc`: a second copy of a call result as a loop-bound variable (10 lines).
  - `0x8c219b80`: a byte member stepped with `+= 1`, which was exact.
  - `0x8c110e00`: a hoisted `char *` element address (6 lines) and the two-statement form `v = pool; v += k;`, which was exact.
  - `0x8c163900`: a direct return from the inner test (6 lines) and a separate join variable as in its sibling `0x8c1638a8`, which was exact.
  - `0x8c21ef24`: a frame array base hoisted before the loop (20 lines) and an element pointer at the loop start (6 lines).
  - `0x8c04b588`: a global byte and a field byte loaded first into `unsigned char` locals, which was exact.
- **Probes on targets not admitted:**
  - `0x8c22bb7c`: a `short` join variable, `short` callee parameters and a negated bound in an `int` temporary; the last form was exact. The generator does not yet produce it.
  - `0x8c185378`: a single-exit form with a `short` return and an inverted range test, which was exact. The generator does not yet produce it.
  - `0x8c05406c`: two halfword copies written as one 4-byte block assignment, exact over its first 128 of 328 bytes only.
  - `0x8c010a1c`, `0x8c03aadc`, `0x8c116bbc`, `0x8c2383a0`, `0x8c11046c`, `0x8c0441d8`, `0x8c07383c`, `0x8c12c0c4`, `0x8c1cd7c8`, `0x8c17e620` and `0x8c1120d8`: loop-bound, post-decrement, result-variable, mask, `register` parameter, by-value vector, narrow parameter, Horner-loop and pool-constant forms; best 4 lines, none exact.
- **Declaration-order comparisons:** four probes each compared one fixed alternative declaration order, to learn whether a rule should fix it:
  - `0x8c0ee1d8`: the `short` copy declared before the frame home (8 lines, no change).
  - `0x8c157210`: a later float temporary declared before the join variable, which was exact. The float declaration-order rule above was taken from it.
  - `0x8c11046c`: a parameter copy declared before the frame block (10 lines).
  - `0x8c032b70`: the existing register-order rule applied to three locals (24 lines).

  No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A pool address plus a small constant used across calls was a variable in the source. When the source recomputed it on separate paths, each path declared its own copy.
- The float scratch variables were declared in the order of the registers CodeWarrior gave them, so declaration order sets float register assignment.
- `x = (x & 0xff) + k` on an unsigned byte member came from `x += k`; the mask is CodeWarrior's own.
- Two adjacent halfword copies into the frame came from one 4-byte block assignment.

## Parked and unresolved

- **Scratch-register choices** remain the largest group of near misses: the code is the same but CodeWarrior assigns or orders registers differently.
- **In-place `extu.w`**, **argument-register order around a call's delay slot**, fragments and library-style code remain out of scope.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
