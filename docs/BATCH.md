# Reconstruction batch: 228: expanded candidate pool, part 32

48 new matching functions / 9,208 bytes. All 7131 prior functions preserved.

7179 exact functions in 7095 modules; 575,636 compiled function-range bytes; 0 reconstructed data bytes; 3,587,276 retained reference bytes. Whole-image coverage 13.8277% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0e7fb4 | 0x8c0e7fb4 | 404 |
| operation_8c0eb5c0 | 0x8c0eb5c0 | 212 |
| operation_8c0fbdf0 | 0x8c0fbdf0 | 260 |
| operation_8c10b1e8 | 0x8c10b1e8 | 68 |
| operation_8c110360 | 0x8c110360 | 56 |
| operation_8c110398 | 0x8c110398 | 100 |
| operation_8c11056c | 0x8c11056c | 40 |
| operation_8c110b74 | 0x8c110b74 | 112 |
| operation_8c111268 | 0x8c111268 | 76 |
| operation_8c1116c8 | 0x8c1116c8 | 92 |
| operation_8c1134ec | 0x8c1134ec | 120 |
| operation_8c1221b4 | 0x8c1221b4 | 64 |
| operation_8c12586c | 0x8c12586c | 524 |
| operation_8c132708 | 0x8c132708 | 256 |
| operation_8c1337b8 | 0x8c1337b8 | 52 |
| operation_8c1354cc | 0x8c1354cc | 84 |
| operation_8c136688 | 0x8c136688 | 84 |
| operation_8c13ba90 | 0x8c13ba90 | 188 |
| operation_8c13cc1c | 0x8c13cc1c | 532 |
| operation_8c13ee7c | 0x8c13ee7c | 140 |
| operation_8c13f140 | 0x8c13f140 | 140 |
| operation_8c145e80 | 0x8c145e80 | 1120 |
| operation_8c14a5ec | 0x8c14a5ec | 272 |
| operation_8c1516d8 | 0x8c1516d8 | 376 |
| operation_8c156644 | 0x8c156644 | 120 |
| operation_8c157764 | 0x8c157764 | 76 |
| operation_8c162c24 | 0x8c162c24 | 84 |
| operation_8c164710 | 0x8c164710 | 120 |
| operation_8c169528 | 0x8c169528 | 240 |
| operation_8c169618 | 0x8c169618 | 260 |
| operation_8c16971c | 0x8c16971c | 264 |
| operation_8c169824 | 0x8c169824 | 252 |
| operation_8c16a18c | 0x8c16a18c | 160 |
| operation_8c16a22c | 0x8c16a22c | 208 |
| operation_8c16a2fc | 0x8c16a2fc | 196 |
| operation_8c16a50c | 0x8c16a50c | 268 |
| operation_8c16a618 | 0x8c16a618 | 256 |
| operation_8c16a7a8 | 0x8c16a7a8 | 228 |
| operation_8c16fa30 | 0x8c16fa30 | 52 |
| operation_8c16fa64 | 0x8c16fa64 | 52 |
| operation_8c1702c0 | 0x8c1702c0 | 68 |
| operation_8c170304 | 0x8c170304 | 68 |
| operation_8c17057c | 0x8c17057c | 56 |
| operation_8c172b64 | 0x8c172b64 | 116 |
| operation_8c174270 | 0x8c174270 | 364 |
| operation_8c181074 | 0x8c181074 | 108 |
| operation_8c1810e0 | 0x8c1810e0 | 96 |
| operation_8c181aa4 | 0x8c181aa4 | 124 |

## Method

Batches 227–229 come from one generator cycle over every candidate still unmatched after batch 226 (5,001). This is batch 228; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 21–40 lines.

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

48 recorded attempts on 48 targets, all hypotheses and all exact. 48 units / 48 functions / 9,208 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- No function admitted in this batch was hand-probed.
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
