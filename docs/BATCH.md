# Reconstruction batch: 241: expanded candidate pool, part 45

59 new matching functions / 10,132 bytes. All 7804 prior functions preserved.

7863 exact functions in 7779 modules; 702,396 compiled function-range bytes; 0 reconstructed data bytes; 3,460,516 retained reference bytes. Whole-image coverage 16.8727% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01640c | 0x8c01640c | 452 |
| operation_8c01e888 | 0x8c01e888 | 152 |
| operation_8c025f7c | 0x8c025f7c | 80 |
| operation_8c02e0f0 | 0x8c02e0f0 | 100 |
| operation_8c02f304 | 0x8c02f304 | 112 |
| operation_8c031678 | 0x8c031678 | 84 |
| operation_8c036ac8 | 0x8c036ac8 | 132 |
| operation_8c05a1b4 | 0x8c05a1b4 | 152 |
| operation_8c05a24c | 0x8c05a24c | 156 |
| operation_8c05b77c | 0x8c05b77c | 64 |
| operation_8c0605a0 | 0x8c0605a0 | 192 |
| operation_8c074278 | 0x8c074278 | 228 |
| operation_8c074b30 | 0x8c074b30 | 108 |
| operation_8c074b9c | 0x8c074b9c | 108 |
| operation_8c075730 | 0x8c075730 | 356 |
| operation_8c078c14 | 0x8c078c14 | 196 |
| operation_8c07a1dc | 0x8c07a1dc | 572 |
| operation_8c07ad7c | 0x8c07ad7c | 296 |
| operation_8c098be8 | 0x8c098be8 | 184 |
| operation_8c098ca0 | 0x8c098ca0 | 180 |
| operation_8c09b2ec | 0x8c09b2ec | 80 |
| operation_8c09cb84 | 0x8c09cb84 | 72 |
| operation_8c09cc48 | 0x8c09cc48 | 180 |
| operation_8c09e994 | 0x8c09e994 | 48 |
| operation_8c0bf250 | 0x8c0bf250 | 340 |
| operation_8c0c1ba4 | 0x8c0c1ba4 | 304 |
| operation_8c0ce82c | 0x8c0ce82c | 564 |
| operation_8c0d1f80 | 0x8c0d1f80 | 168 |
| operation_8c0d20f8 | 0x8c0d20f8 | 32 |
| operation_8c0d9e70 | 0x8c0d9e70 | 48 |
| operation_8c0e24f8 | 0x8c0e24f8 | 212 |
| operation_8c0e3c4c | 0x8c0e3c4c | 156 |
| operation_8c0f5158 | 0x8c0f5158 | 200 |
| operation_8c104148 | 0x8c104148 | 108 |
| operation_8c11bf68 | 0x8c11bf68 | 164 |
| operation_8c11f1f0 | 0x8c11f1f0 | 244 |
| operation_8c1221f4 | 0x8c1221f4 | 28 |
| operation_8c1264f0 | 0x8c1264f0 | 224 |
| operation_8c1265d0 | 0x8c1265d0 | 128 |
| operation_8c126fd0 | 0x8c126fd0 | 164 |
| operation_8c128538 | 0x8c128538 | 208 |
| operation_8c128bdc | 0x8c128bdc | 160 |
| operation_8c12964c | 0x8c12964c | 168 |
| operation_8c129958 | 0x8c129958 | 176 |
| operation_8c13a5bc | 0x8c13a5bc | 96 |
| operation_8c13d3b4 | 0x8c13d3b4 | 108 |
| operation_8c13f3f0 | 0x8c13f3f0 | 56 |
| operation_8c14081c | 0x8c14081c | 44 |
| operation_8c157460 | 0x8c157460 | 108 |
| operation_8c18b6e8 | 0x8c18b6e8 | 124 |
| operation_8c198d30 | 0x8c198d30 | 104 |
| operation_8c1ad004 | 0x8c1ad004 | 80 |
| operation_8c1c060c | 0x8c1c060c | 372 |
| operation_8c1cd4ec | 0x8c1cd4ec | 108 |
| operation_8c1cdc30 | 0x8c1cdc30 | 80 |
| operation_8c1dc324 | 0x8c1dc324 | 108 |
| operation_8c1f2718 | 0x8c1f2718 | 472 |
| operation_8c22016c | 0x8c22016c | 100 |
| operation_8c2454f0 | 0x8c2454f0 | 92 |

## Method

Batch 241 comes from one generator cycle over every candidate still unmatched after batch 240, and from a first pass of hand-finished near misses. The draft generator gained rules for drafts that differed from the reference in 41–80 lines. Candidates are drafted in 11 of the 19 draft modes: `switch2ext`, `extern`, `bgotoext`, `switch2`, `uctern`, `passext`, `ccastext`, `retflip2`, `ternext`, `retflipext` and `movcseext`. Across the two previous full-mode cycles, every function exact in any mode was exact in one of these 11. All 19 modes are rerun every fourth cycle to check this.

**Values the source kept in locals:**
- A value computed into a callee-saved register, passed to a call and read after it becomes a local. Frame addresses are typed `char *`; parameter field addresses are excluded.
- A pointer reused after a store into a frame whose address is passed to a call becomes a local. So does an element pointer used for field-by-field float copies and reused as a base after the stores.
- A float load read both before and after an aliasing store becomes a float local. A float expression used in arithmetic and then passed in its argument register becomes a float local.
- A loaded word whose scaled index is read after a store past the test becomes a local, and an index from a loaded word stepped in place after a store reads the word into a local.
- `x + k` stored back and then read without a reload keeps the new value in a local.
- A `0xfffffffe` pool mask used by `and` becomes an `int` local. A literal `-2` would be folded to a shift pair.

**Loops:**
- A load made before a loop and only read inside it becomes a local.
- A loop variable started from a narrow local gets the narrow type, and a do-while variable stepped in place before a test that may reset it is assigned in place.
- Float registers carried around a loop, including through float compares, become float locals. A float parameter moved into a callee-saved register at entry is itself the loop variable.
- A copy of a constant held in another register gives a fresh loop variable.
- `bt`/`bf` over `bra head; nop` is read as the loop's back edge. The movcse modes keep the earlier goto form as an alternative.

**Calls, types and expressions:**
- A call's delay slot runs before the call, so a value used there is not treated as live across the call. This is not applied inside loops.
- A `0xffff` or `0xff` local loaded raw, extended only where tested and passed or returned raw becomes `unsigned short` or `unsigned char`, with a matching narrow parameter or return type. A join of a narrow load and a small constant gets a narrow type.
- `tst rM,rN; movt` is written `!(x & m)`, and a predicate computed between a call's stack-argument pushes stays inline.
- A three-word copy done one word at a time is written as field assignments, not a block copy.
- An indexed element plus a far member offset, used as a base in two or more blocks, becomes an element pointer.
- A frame store scheduled into a float division's latency is placed after the division's statement.
- An `&&` chain of three or more tests whose else is reached by a goto keeps its order for joined values.

Each rule is guarded by a flag and was narrowed wherever an earlier version lost an exact draft. While the rules were developed, early versions of the delay-slot rule, the call-crossing local rule and the carried-float rule lost exact drafts. Each was fixed before the final run. Eight targets measure further from the reference under the new rules, by 2 to 18 lines; none was exact.

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–239 (31 plans), the accepted drafts and targets of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass, in the 11 draft modes above, over 4,253 candidates. 19 drafts were accepted, all in `switch2ext`. Two of them, `0x8c05b77c` and `0x8c1f2718`, are exact-short with an end that meets the batch 193 boundary rule; other exact-short drafts are rejected unchanged. One further exact draft, `0x8c21c694`, was refused by the history guard as historically uncertain and remains blocked.

**Hand-finished near misses.** From this batch on, near misses can also be finished by hand. A separate scratch pass took generated drafts that differed from the reference in 1–10 lines and edited them until the whole range compiled exactly. It used the project's rules for source hypotheses:
- at most ten distinct hypotheses per target, counting earlier scratch probes of the same address;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order comparisons.

The pass tried 94 targets with 167 compiled hypotheses, at most 9 on one target, and found 43 exact. Two of the 43, `0x8c0bc1c4` and `0x8c0c2db0`, were refused by the history guard and remain blocked; the other 41 are admitted here. Three further exact sources were held back and not trialled, because each passes a call argument that the callee was not shown to read: `0x8c0cb478`, `0x8c08b2d8` and `0x8c120658`.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (59);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

59 recorded attempts on 59 targets, all hypotheses and all exact. 59 units / 59 functions / 10,132 bytes were admitted after two independent reproductions each:
- 18 unedited generated drafts (2,628 bytes);
- 41 hand-finished sources (7,504 bytes).

The two hand-finished sources refused by the history guard were recorded attempts too, and are not counted above.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/` or in the hand-finishing pass's attempt log.
- The 18 generated drafts were not edited by hand.
- **Hand-finished sources and the change that made each exact:**
  - **Float parameter before the second pointer in the logical prototype of `operation_8c04a43c`** (cookbook CW12; the callee's registers are unchanged): `0x8c07ad7c`, `0x8c07a1dc`, `0x8c0bf250`, `0x8c0ce82c`, `0x8c128bdc`, `0x8c1264f0`, `0x8c1265d0`, `0x8c126fd0`, `0x8c128538`. The admitted callee is declared `(Object *, Arg1 *, float)`; the callers declare it with the float second, which passes the same values in the same registers.
  - **`short` return type and `short` accumulator:** `0x8c074b30` and its sibling `0x8c074b9c`.
  - **A loop tail reordered to `v2 <<= 1;` before `v3 = v6 + 1;`:** `0x8c098ca0`, `0x8c098be8`.
  - **One 12-byte struct copy** in place of an 8-byte block copy and a word: `0x8c078c14`.
  - **`0xffff` held in an `int` local assigned after the call** and compared through `(unsigned short)`: `0x8c0c1ba4`.
  - **Rewritten as a switch:**
    - the tail as a two-case switch: `0x8c01640c`;
    - a goto chain ending `default: return;`: `0x8c11bf68`;
    - a goto draft, with the loop's if/else in reference order: `0x8c09cc48`;
    - an outer switch with the trailing code in `default`: `0x8c0e3c4c`;
    - a case 0 that breaks to the shared `return 0`: `0x8c13d3b4`.
  - **A goto draft rewritten as two `for` loops** with the list head in a local: `0x8c0e24f8`.
  - **The condition swapped to `t2 != 0 && f104 > -1.0f`:** `0x8c11f1f0`.
  - **One constant assigned to two globals in a chained assignment:** `0x8c0605a0`, `0x8c075730`.
  - **The loop test written `(unsigned short)i < count`:** `0x8c129958`, and `0x8c12964c`, which also merges the draft's flag copies into one result variable.
  - **An `unsigned short` return type,** with the final conditional written as `if`/`return`: `0x8c13a5bc`.
  - **Stack arguments:**
    - a third by-value 8-byte parameter, read beyond the frame: `0x8c02f304`;
    - the variadic call's third pushed argument: `0x8c036ac8`;
    - stack-passed byte arguments typed `int`, since they are sign-extended before the push: `0x8c02e0f0`;
    - a stack-passed `short` typed `int`, with 12-byte entries stepped by `v2++`: `0x8c031678`. This also corrects the draft, which tested the wrong offset.
  - **A call argument the callee reads:**
    - the pre-increment counter as the second argument (the callee reads `r5`): `0x8c0d1f80`;
    - the copy length (the callee reads `r6`): `0x8c09cb84`.
  - **A post-increment inside the destination index:** `0x8c074278`.
  - **Chained table stores and a scaled-index local:** `0x8c09b2ec`.
  - **A cast barrier** `(char *)(int *)(o + K) + (i << 2)` (cookbook CW19): `0x8c0d20f8`, `0x8c025f7c`.
  - **A result variable set to 0 before the loop:** `0x8c09e994`.
  - **An unsigned range test through a result variable:** `0x8c1221f4`.
  - **`if (t1 == 0) return;` after the store:** `0x8c13f3f0`.
  - **`if (--*g >= 0) return;`:** `0x8c14081c`.

  Seven of these reuse a source form that an earlier scratch probe of the generator had already found exact, as noted below: `0x8c074b30`, `0x8c09e994`, `0x8c0e3c4c`, `0x8c1221f4`, `0x8c13d3b4`, `0x8c13f3f0` and `0x8c14081c`.
- **Hand probes in separate scratch copies of the generator.** They were used to learn source forms; the generator rules above came from them. Probed functions admitted in this batch:
  - **As generated drafts:**
    - `0x8c157460`: a `short` counter and bound held before the do-while; two forms were exact.
    - `0x8c198d30`: four mask forms (54 lines), then a mask in an `int` local, which was exact.
    - `0x8c1ad004`: a global count read once into a local, which was exact.
    - `0x8c0f5158`: three narrow-local forms (best 4 lines), then the form the generator now produces, which was exact.
    - `0x8c05a1b4`: the form the generator now produces, which was exact.
    - `0x8c05b77c`: three mask-constant forms in an earlier cycle (10 lines).
  - **As hand-finished sources:**
    - `0x8c14081c`: `if (*g >= 0) return;` (2 lines) and `if (--*g >= 0) return;`, which was exact.
    - `0x8c13f3f0`: an empty `if` and a `goto` (2 lines each), and `if (t1 == 0) return;`, which was exact.
    - `0x8c1221f4`: two direct returns of the range test (6 lines) and a result variable, which was exact.
    - `0x8c13d3b4`: the case 0 `break`, which was exact.
    - `0x8c0e3c4c`: two nested one-case switches (4 lines) and the outer switch with `default`, which was exact. In an earlier cycle, a `bt` over `bra` form was not reproduced.
    - `0x8c09e994`: a result variable set to 0 before the loop, exact in two forms. An earlier cycle found the same form exact without making it a rule.
    - `0x8c074b30`: a `short` return alone (2 lines) and with a `short` accumulator, which was exact. In an earlier cycle, three other forms were tried (best 4 lines).
    - `0x8c07a1dc`: three argument forms in an earlier cycle (4 lines each).
    - `0x8c0bf250`: three call-result forms in an earlier cycle (best 8 lines).
    - `0x8c1264f0` and `0x8c126fd0`: an earlier cycle's trial rule that put float arguments first fixed these but lost other exact drafts, so it was not adopted.
- **Probes on targets not admitted:** `0x8c18cb7c`, `0x8c102c8c`, `0x8c036708`, `0x8c185e30`, `0x8c13f258`, `0x8c21b760`, `0x8c1181ec`, `0x8c1aab54`, `0x8c11e000`, `0x8c0f7fbc`, `0x8c102f9c`, `0x8c0577f8`, `0x8c1b1884`, `0x8c1002d0`, `0x8c218c14`, `0x8c016354`, `0x8c0e9cc4`, `0x8c1ad0f8` and `0x8c245398`. These covered loop, alias, statement-order, element-pointer and float forms. One, `0x8c102f9c`, was exact with a global store written before another global's load. That form did not become a rule, and the function is not admitted.
- **Declaration-order comparisons:** three probes each compared one fixed declaration order of the existing register-order rule, to learn whether a rule should change: `0x8c1aab54`, `0x8c0f7fbc` and `0x8c102f9c`. None was exact, and no rule was taken from them. No declaration orders were searched, and the hand-finishing pass made none.
- Failed probe invocations are marked as failed in the logs and have no result.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A float zero in `fr4` set in a call's delay slot came from a prototype that lists the float before a pointer argument; the physical registers are unchanged (CW12).
- Small chains of `tst`/`cmp/eq` tests ending in `bra; nop` came from switches. A dead branch to the epilogue after the last case is `default: return;`.
- A register stored to two globals came from a chained assignment, with the first-stored global innermost.
- CodeWarrior also uses `r4`–`r7` as plain temporaries before a call, so an argument register set before a call is not evidence of an argument by itself.

## Parked and unresolved

- **Scratch-register choices** remain the largest group of near misses. The hand-finishing pass parked 35 targets in this group after one to five hypotheses: mask tests with swapped `and` operands, a global's address landing in `r0`, zero and address registers swapped on consecutive stores, and unfilled delay slots after global stores.
- **Catalogued ranges that include a following routine** (6 targets) and **missing alignment padding** (3 targets) were parked for boundary review.
- **In-place `extu.w`**, **argument-register order around a call's delay slot**, fragments and library-style code remain out of scope.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
