# Reconstruction batch: 237: expanded candidate pool, part 41

48 new matching functions / 10,172 bytes. All 7604 prior functions preserved.

7652 exact functions in 7568 modules; 660,468 compiled function-range bytes; 0 reconstructed data bytes; 3,502,444 retained reference bytes. Whole-image coverage 15.8655% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02a194 | 0x8c02a194 | 428 |
| operation_8c02a340 | 0x8c02a340 | 248 |
| operation_8c0352d4 | 0x8c0352d4 | 56 |
| operation_8c0612d0 | 0x8c0612d0 | 212 |
| operation_8c075edc | 0x8c075edc | 176 |
| operation_8c078240 | 0x8c078240 | 224 |
| operation_8c0ac284 | 0x8c0ac284 | 124 |
| operation_8c0ac6c4 | 0x8c0ac6c4 | 312 |
| operation_8c0b045c | 0x8c0b045c | 300 |
| operation_8c0b3bd0 | 0x8c0b3bd0 | 244 |
| operation_8c0b4544 | 0x8c0b4544 | 64 |
| operation_8c0b8cac | 0x8c0b8cac | 68 |
| operation_8c0badf4 | 0x8c0badf4 | 244 |
| operation_8c0bb69c | 0x8c0bb69c | 96 |
| operation_8c0c6e98 | 0x8c0c6e98 | 244 |
| operation_8c0e25cc | 0x8c0e25cc | 124 |
| operation_8c0f8108 | 0x8c0f8108 | 260 |
| operation_8c104434 | 0x8c104434 | 128 |
| operation_8c109bd0 | 0x8c109bd0 | 464 |
| operation_8c124d74 | 0x8c124d74 | 248 |
| operation_8c138598 | 0x8c138598 | 208 |
| operation_8c141b88 | 0x8c141b88 | 456 |
| operation_8c14bb54 | 0x8c14bb54 | 176 |
| operation_8c14efe0 | 0x8c14efe0 | 328 |
| operation_8c15a28c | 0x8c15a28c | 136 |
| operation_8c169184 | 0x8c169184 | 172 |
| operation_8c175de4 | 0x8c175de4 | 316 |
| operation_8c18548c | 0x8c18548c | 376 |
| operation_8c190050 | 0x8c190050 | 112 |
| operation_8c1900c0 | 0x8c1900c0 | 136 |
| operation_8c1adadc | 0x8c1adadc | 276 |
| operation_8c1aeda0 | 0x8c1aeda0 | 84 |
| operation_8c1aee50 | 0x8c1aee50 | 76 |
| operation_8c1eaab0 | 0x8c1eaab0 | 244 |
| operation_8c21c820 | 0x8c21c820 | 136 |
| operation_8c225b70 | 0x8c225b70 | 80 |
| operation_8c2268ac | 0x8c2268ac | 140 |
| operation_8c22c1c4 | 0x8c22c1c4 | 144 |
| operation_8c2357b8 | 0x8c2357b8 | 60 |
| operation_8c23f4b8 | 0x8c23f4b8 | 216 |
| operation_8c240044 | 0x8c240044 | 272 |
| operation_8c240664 | 0x8c240664 | 224 |
| operation_8c245a9c | 0x8c245a9c | 328 |
| operation_8c24f534 | 0x8c24f534 | 240 |
| operation_8c24f850 | 0x8c24f850 | 240 |
| operation_8c25219c | 0x8c25219c | 296 |
| operation_8c252388 | 0x8c252388 | 248 |
| operation_8c254718 | 0x8c254718 | 188 |

## Method

Batch 237 comes from one generator cycle over every candidate still unmatched after batch 236 (4,453). The draft generator gained rules for drafts that differed from the reference in 41–80 lines.

**Frame blocks and arguments:**
- A call result stored narrow, or into an already-set field of a frame block whose address is taken, is a field store, not the result's home. The same applies to unread slots and float results.
- A stack adjustment, stores through the stack pointer, a call and the restoring adjustment are a structure argument passed by value.
- Halfword and byte copy loops are written as one block assignment.

**Float values kept past a branch:**
- A float load or float arithmetic result read past a conditional branch becomes a float local. This holds at a join, after a store, around a loop, and on the fall-through path. A taken branch counts for computed values, and for loads only at joins or around loops.
- Branches inside a float-to-unsigned conversion are ignored.
- These locals are ordered by when their addresses were computed.
- Float arithmetic on float locals means the function returns `float`. A read of `fr0` does not make a callee return `float` when its own source declares another return type.

**Loops and values kept across calls:**
- A counter stepped only in the back branch's delay slot is written `while (i++ < n)`.
- A callee-saved register set only on some loop passes and read after the loop is a loop variable. Registers a call clobbers are not carried around a loop unless the call path leaves it.
- An outer loop variable stepped by the inner loop stays one variable, and a register's own variable is reused as a loop variable.
- A load or a float conversion before a loop, untouched by it and read after it, becomes a local, as does a value computed before a copy loop and read after it.
- A parameter plus a constant held in a callee-saved register and read after a call becomes a pointer local. A far field pointer is allowed in more functions.
- An offset constant can be a variable even when its register is reused after its loop.
- An accumulator updated in place across calls is written `v += x`.

**Narrow values, indexes and globals:**
- A narrow load extended, tested and reused past the branch becomes a narrow local.
- An indexed element address used as a base by two statements with a store between becomes a pointer local. An index scaled and added to two bases with a store between becomes an `int` local.
- An index product in `r0` is named before stores that may alias it.
- A global tested and then used after a store is read once into a local.

**Draft bugs where the C was wrong:**
- Function-pointer and undeclared calls no longer pass a trailing argument register that was set before a loop and used there as a variable.
- An indexed load was taken as an address use of its destination register.

Each rule is guarded by a flag. Four further rules lost exact drafts or made drafts worse and were removed. Five targets measure further from the reference under the new rules, though none was exact. Three of them are farther only because the extra argument is gone.

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–236 and the targets of the previous cycles, no exact draft was lost in any mode. The research agent's own regression skipped batches 220–229 by mistake, so they were checked separately before the rules were merged: 692 exact pairs whose draft text changed, none lost.

All remaining candidates were redrafted in one pass. 50 drafts were accepted: exact over their full range, or exact-short with an end that meets the batch 193 boundary rule. Other exact-short drafts are rejected unchanged. Two further exact drafts were refused by the history guard as historically uncertain and remain blocked: `0x8c119e6c` and `0x8c21b8a4`. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (46) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

48 recorded attempts on 48 targets, all hypotheses and all exact. 48 units / 48 functions / 10,172 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c190050`: a rotated loop with the counter stepped in the back branch's delay slot, written `while (i++ < n)`, which was exact.
  - `0x8c0352d4`: float values loaded before a clamp's branch as float locals, the clamped value updated in place, which was exact.
- **Probes on targets not admitted:**
  - `0x8c011e10`: float locals for two loaded fields, assigned first (34 lines) or in the order of their first use after the branch (exact; the source of the fall-through float rule, but the generated draft is not yet exact);
  - `0x8c024840`: five forms of index, float and field-pointer locals and an element struct (best 26 lines);
  - `0x8c01399c`: a global read once into a local and three global struct-array forms (best 38 lines);
  - `0x8c102cd0`: four global struct-array forms (best 60 lines);
  - `0x8c16c648`: four byte-buffer read forms (best 12 lines; only a callee-saved register permutation remained, which was not pursued);
  - `0x8c0116c4` (five counter, break and output-pointer forms, best 60 lines), `0x8c01164c` (counter stepped before the test, 52 lines), `0x8c04b5c8` (parameter modified in place, 70 lines), `0x8c06c088` (far-field compound assignment, 46 lines), `0x8c08b454` (swapped operands, 16 lines), `0x8c0a6a10` (narrow and `int` locals for a global byte, 22 lines), `0x8c107f34` (empty conversion leftover removed, 30 lines), `0x8c083070` (two direct call-result stores, 42 lines) and `0x8c250918` (a flag merged with a loop counter, 42 lines);
  - a mechanical set of 51 files over 40 targets, replacing a join local copied from a parameter with the parameter itself. Three targets improved and the others did not, so the rule was not adopted.
- No declaration orders were compared or searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A loop counter stepped only in the back branch's delay slot comes from `while (i++ < n)`; the same loop written with the step in the body fills the delay slot differently.
- Float values loaded before a branch and read after it were float locals in the source, and their declaration follows the order the loads' addresses were computed.
- A field address used as a base by two statements with a store between was kept in a pointer local.

## Parked and unresolved

- **Global struct arrays** written per field (`0x8c01399c`, `0x8c102cd0`): the reference computes base plus field and then adds the index product for each store, while every form tried lets CodeWarrior compute the element address once.
- **Callee-saved register permutations** left after all other lines match are not pursued, because they would need declaration orders to be searched.
- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
