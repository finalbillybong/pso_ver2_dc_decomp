# Reconstruction batch: 229: expanded candidate pool, part 33

62 new matching functions / 9,152 bytes. All 7179 prior functions preserved.

7241 exact functions in 7157 modules; 584,788 compiled function-range bytes; 0 reconstructed data bytes; 3,578,124 retained reference bytes. Whole-image coverage 14.0476% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c184c80 | 0x8c184c80 | 120 |
| operation_8c186ffc | 0x8c186ffc | 64 |
| operation_8c1872c0 | 0x8c1872c0 | 428 |
| operation_8c187884 | 0x8c187884 | 96 |
| operation_8c1878e4 | 0x8c1878e4 | 76 |
| operation_8c18f488 | 0x8c18f488 | 136 |
| operation_8c191654 | 0x8c191654 | 48 |
| operation_8c1916e0 | 0x8c1916e0 | 140 |
| operation_8c192aa8 | 0x8c192aa8 | 108 |
| operation_8c192ec8 | 0x8c192ec8 | 56 |
| operation_8c19c8bc | 0x8c19c8bc | 312 |
| operation_8c19fdf0 | 0x8c19fdf0 | 140 |
| operation_8c1a6acc | 0x8c1a6acc | 492 |
| operation_8c1a70ac | 0x8c1a70ac | 40 |
| operation_8c1ad054 | 0x8c1ad054 | 164 |
| operation_8c1ae0ac | 0x8c1ae0ac | 44 |
| operation_8c1b3468 | 0x8c1b3468 | 52 |
| operation_8c1b831c | 0x8c1b831c | 256 |
| operation_8c1c17fc | 0x8c1c17fc | 96 |
| operation_8c1c6ca0 | 0x8c1c6ca0 | 204 |
| operation_8c1c7424 | 0x8c1c7424 | 64 |
| operation_8c1cd854 | 0x8c1cd854 | 72 |
| operation_8c1e7684 | 0x8c1e7684 | 68 |
| operation_8c1eae4c | 0x8c1eae4c | 200 |
| operation_8c1eb838 | 0x8c1eb838 | 232 |
| operation_8c1f0948 | 0x8c1f0948 | 184 |
| operation_8c1f149c | 0x8c1f149c | 108 |
| operation_8c1f1850 | 0x8c1f1850 | 48 |
| operation_8c1f232c | 0x8c1f232c | 40 |
| operation_8c1f246c | 0x8c1f246c | 188 |
| operation_8c20b178 | 0x8c20b178 | 56 |
| operation_8c217728 | 0x8c217728 | 152 |
| operation_8c217d50 | 0x8c217d50 | 88 |
| operation_8c21d81c | 0x8c21d81c | 508 |
| operation_8c222a20 | 0x8c222a20 | 152 |
| operation_8c222e50 | 0x8c222e50 | 216 |
| operation_8c225cd0 | 0x8c225cd0 | 164 |
| operation_8c2271e0 | 0x8c2271e0 | 164 |
| operation_8c22a090 | 0x8c22a090 | 220 |
| operation_8c22ca64 | 0x8c22ca64 | 180 |
| operation_8c22dfc8 | 0x8c22dfc8 | 252 |
| operation_8c22e978 | 0x8c22e978 | 176 |
| operation_8c231ebc | 0x8c231ebc | 164 |
| operation_8c238260 | 0x8c238260 | 48 |
| operation_8c23f8ec | 0x8c23f8ec | 252 |
| operation_8c242154 | 0x8c242154 | 100 |
| operation_8c24225c | 0x8c24225c | 40 |
| operation_8c2443e4 | 0x8c2443e4 | 312 |
| operation_8c2446d0 | 0x8c2446d0 | 64 |
| operation_8c24766c | 0x8c24766c | 60 |
| operation_8c247bac | 0x8c247bac | 80 |
| operation_8c251944 | 0x8c251944 | 260 |
| operation_8c2531ec | 0x8c2531ec | 316 |
| operation_8c25583c | 0x8c25583c | 164 |
| operation_8c256898 | 0x8c256898 | 84 |
| operation_8c256bb4 | 0x8c256bb4 | 132 |
| operation_8c257e3c | 0x8c257e3c | 36 |
| operation_8c25a8c0 | 0x8c25a8c0 | 40 |
| operation_8c25c2c4 | 0x8c25c2c4 | 68 |
| operation_8c25c454 | 0x8c25c454 | 84 |
| operation_8c25e850 | 0x8c25e850 | 172 |
| operation_8c25ff40 | 0x8c25ff40 | 72 |

## Method

Batches 227–229 come from one generator cycle over every candidate still unmatched after batch 226 (5,001). This is batch 229; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 21–40 lines.

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

62 recorded attempts on 62 targets, all hypotheses and all exact. 62 units / 62 functions / 9,152 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c2446d0`: a search-loop result flag, disclosed in batch 224; not exact. It is admitted as the generated draft.
- The probes of this cycle on targets not admitted are listed in batch 227.
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
