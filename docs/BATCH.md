# Reconstruction batch: 227: expanded candidate pool, part 31

65 new matching functions / 9,456 bytes. All 7066 prior functions preserved.

7131 exact functions in 7047 modules; 566,428 compiled function-range bytes; 0 reconstructed data bytes; 3,596,484 retained reference bytes. Whole-image coverage 13.6065% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c011214 | 0x8c011214 | 124 |
| operation_8c011290 | 0x8c011290 | 120 |
| operation_8c0113bc | 0x8c0113bc | 120 |
| operation_8c013528 | 0x8c013528 | 72 |
| operation_8c016d30 | 0x8c016d30 | 224 |
| operation_8c016e10 | 0x8c016e10 | 168 |
| operation_8c016eb8 | 0x8c016eb8 | 152 |
| operation_8c017010 | 0x8c017010 | 204 |
| operation_8c017334 | 0x8c017334 | 288 |
| operation_8c017454 | 0x8c017454 | 208 |
| operation_8c01a8a4 | 0x8c01a8a4 | 124 |
| operation_8c01ac34 | 0x8c01ac34 | 204 |
| operation_8c01b488 | 0x8c01b488 | 228 |
| operation_8c01b98c | 0x8c01b98c | 52 |
| operation_8c01ba80 | 0x8c01ba80 | 104 |
| operation_8c01bb7c | 0x8c01bb7c | 112 |
| operation_8c01d7bc | 0x8c01d7bc | 136 |
| operation_8c020bd0 | 0x8c020bd0 | 320 |
| operation_8c023a9c | 0x8c023a9c | 160 |
| operation_8c023b3c | 0x8c023b3c | 120 |
| operation_8c024260 | 0x8c024260 | 128 |
| operation_8c0243ec | 0x8c0243ec | 112 |
| operation_8c02445c | 0x8c02445c | 104 |
| operation_8c025e70 | 0x8c025e70 | 268 |
| operation_8c027b20 | 0x8c027b20 | 44 |
| operation_8c02c7f4 | 0x8c02c7f4 | 44 |
| operation_8c02e324 | 0x8c02e324 | 176 |
| operation_8c02fd98 | 0x8c02fd98 | 44 |
| operation_8c030c28 | 0x8c030c28 | 160 |
| operation_8c0319fc | 0x8c0319fc | 108 |
| operation_8c03538c | 0x8c03538c | 72 |
| operation_8c0365a8 | 0x8c0365a8 | 104 |
| operation_8c038970 | 0x8c038970 | 452 |
| operation_8c03bdcc | 0x8c03bdcc | 56 |
| operation_8c03c0e4 | 0x8c03c0e4 | 72 |
| operation_8c03c12c | 0x8c03c12c | 84 |
| operation_8c03f868 | 0x8c03f868 | 160 |
| operation_8c03fadc | 0x8c03fadc | 132 |
| operation_8c052548 | 0x8c052548 | 108 |
| operation_8c05a03c | 0x8c05a03c | 96 |
| operation_8c071eb0 | 0x8c071eb0 | 128 |
| operation_8c073eb4 | 0x8c073eb4 | 60 |
| operation_8c073f9c | 0x8c073f9c | 96 |
| operation_8c074ac4 | 0x8c074ac4 | 108 |
| operation_8c074c30 | 0x8c074c30 | 104 |
| operation_8c074c98 | 0x8c074c98 | 76 |
| operation_8c074ea0 | 0x8c074ea0 | 36 |
| operation_8c075274 | 0x8c075274 | 140 |
| operation_8c076d7c | 0x8c076d7c | 188 |
| operation_8c07cf34 | 0x8c07cf34 | 136 |
| operation_8c07da88 | 0x8c07da88 | 56 |
| operation_8c07ffcc | 0x8c07ffcc | 132 |
| operation_8c082fc0 | 0x8c082fc0 | 176 |
| operation_8c08feb8 | 0x8c08feb8 | 68 |
| operation_8c09857c | 0x8c09857c | 108 |
| operation_8c09d9a8 | 0x8c09d9a8 | 76 |
| operation_8c09dad4 | 0x8c09dad4 | 124 |
| operation_8c0b9fb8 | 0x8c0b9fb8 | 160 |
| operation_8c0c1ee0 | 0x8c0c1ee0 | 220 |
| operation_8c0dc854 | 0x8c0dc854 | 48 |
| operation_8c0dd490 | 0x8c0dd490 | 116 |
| operation_8c0df720 | 0x8c0df720 | 184 |
| operation_8c0df7d8 | 0x8c0df7d8 | 332 |
| operation_8c0e7c80 | 0x8c0e7c80 | 336 |
| operation_8c0e7dd0 | 0x8c0e7dd0 | 484 |

## Method

Batches 227–229 come from one generator cycle over every candidate still unmatched after batch 226 (5,001). This is batch 227; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 21–40 lines.

**Draft bugs where the C was wrong:**
- A parameter stored into a field of a frame struct whose address is passed on is a field store, not the parameter's home.
- The loop analysis no longer treats `cmp/*` as writing its register, so a real loop counter is no longer drafted as a constant.
- A branch ending in `rts` is no longer merged into the fall-through.
- An uninitialised `r0` at return no longer makes a void function return a value.
- Float field copies are no longer merged into integer block copies.
- Used-variable marking repeats until stable, so assignments to join variables are no longer dropped.
- A load, or a value computed from loads, taken before a store that may alias it and read afterwards becomes a local before the store.
- A callee-saved register never set on one path is left uninitialised instead of drafted as `0`.

**Variables follow register use:**
- A pool offset kept in a callee-saved register and used in a loop that calls is an `int` offset variable.
- A constant, a pool address or a product held in a callee-saved register across calls is a variable.
- Joins and `goto` labels keep the register's existing local instead of copying it.
- A variable already in a loop's register becomes the loop variable.
- A single-write word load into a callee-saved register read after a call is a local.
- A variable only read through sign extension and fed narrow loads is declared `short` or `char`.

**Pointer locals:** `param + far offset` used at least three times, `param + param`, a loaded pointer plus an offset, a pointer computed before a branch, and a sub-object of an indexed element. A zero-extended field and a field address read before a loop are loop-invariant locals.

**Order:**
- Callee-saved variables are declared in register order, the first getting `r14`, unless a parameter holds the top register. Scratch-register variables are declared in the order `r4`–`r7`, `r1`–`r3`. This follows a fixed rule from the listing; declaration orders were not searched.
- Loop updates and loop variable initialisation follow listing order.
- A constant set in a `bra` delay slot, or a pool load just before the `bra`, is the last statement before the loop.

**Copies and expressions:**
- Block copies to absolute destinations, `*p++ = *q++` copies, and separate pool loads kept separate.
- The last named argument goes on the stack for variadic callees.
- A value tested and then stored or copied through is named once.
- A zero-extend before a narrow store is written `& 0xff`, and `x &= k` on unsigned bytes is kept.
- A constant compared at run time is a variable.

All remaining candidates were redrafted in one pass. 176 drafts were exact over their full range. Most other exact drafts were exact for only part of their range, and the batch 193 boundary rule rejects these unchanged. One further exact draft, `0x8c1e8d18`, was refused by the history guard as historically uncertain and remains blocked. The three drafts held back in batch 224 (`0x8c12a86c`, `0x8c12ad54`, `0x8c131a78`) remain held back.

Before admission, the boundaries of every unit in the three batches were checked:
- each entry follows a literal pool (165) or a function end (10);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

Calibration: 26/37 on batch 191 and 42/55 on batch 190 (previously 39). The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–223 and the targets of the previous cycles, no exact draft was lost in any mode.

## Measured attempts

65 recorded attempts on 65 targets, all hypotheses and all exact. 65 units / 65 functions / 9,456 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c01ba80`: nested loops with an element pointer, without and with an `int` offset variable; the offset variable was exact. The exact form also declared the offset variable first, which with the two probes below led to the fixed declaration-order rule.
  - `0x8c01bb7c`: four loop forms with an element pointer and a constant `-1`; one, with the constant and counter set before the loop, was exact.
  - `0x8c027b20`: a post-increment block-copy loop as a void function, hand-written and as the generated draft with the copy changed; both were exact.
  - `0x8c02c7f4`: the generated draft with the pointer step before the counter step, and the same with the counter declared first; the second was exact.
  - `0x8c03538c`: a pointer local declared first with a constant compared at run time, which was exact, and the generated draft with the statements in the other order, which was not.
  - `0x8c052548`: the generated draft without the constant variable, and with the loop counter set before it; the second was exact.
  - `0x8c0df7d8`: `&=` on an unsigned byte field, which was exact.
- **Probes on targets not admitted in this cycle:** `0x8c010778` (two char-read forms), `0x8c025764` (two short-return forms), `0x8c010934` (a constant variable in a compare), `0x8c01c440` (a canonical CRC-32 loop) and `0x8c07bb94` (an offset variable; what remains is in-place `extu.w`). None was exact.
- Three hand probes, on `0x8c01ba80`, `0x8c02c7f4` and `0x8c03538c`, compared two declaration orders of one function each. They led to the fixed register-order rule above, which drafts every function the same way. No declaration orders were searched for any admitted function.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- CodeWarrior assigns callee-saved registers in declaration order, the first variable getting `r14`, and scratch registers in the order `r4`–`r7`, `r1`–`r3`. A draft that declares variables in the order the listing uses them gets the same assignment.
- A constant or pool offset the compiler keeps in a callee-saved register across a loop is a variable in the source. A literal is re-materialised at each use.
- A parameter stored into a frame struct whose address is passed on is a field store. Treating it as the parameter's home drops the store.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Register allocation** where the source gives no ordering signal remains the largest group of near misses.
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
