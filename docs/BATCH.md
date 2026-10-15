# Reconstruction batch: 219: expanded candidate pool, part 23

69 new matching functions / 9,960 bytes. All 6498 prior functions preserved.

6567 exact functions in 6483 modules; 491,276 compiled function-range bytes; 0 reconstructed data bytes; 3,671,636 retained reference bytes. Whole-image coverage 11.8013% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c011f00 | 0x8c011f00 | 152 |
| operation_8c01312c | 0x8c01312c | 704 |
| operation_8c014b00 | 0x8c014b00 | 32 |
| operation_8c014ca0 | 0x8c014ca0 | 32 |
| operation_8c01a944 | 0x8c01a944 | 272 |
| operation_8c01aa54 | 0x8c01aa54 | 140 |
| operation_8c01b56c | 0x8c01b56c | 100 |
| operation_8c01d09c | 0x8c01d09c | 188 |
| operation_8c01feec | 0x8c01feec | 108 |
| operation_8c0221ac | 0x8c0221ac | 368 |
| operation_8c02349c | 0x8c02349c | 280 |
| operation_8c02606c | 0x8c02606c | 108 |
| operation_8c02617c | 0x8c02617c | 124 |
| operation_8c0261f8 | 0x8c0261f8 | 168 |
| operation_8c027784 | 0x8c027784 | 56 |
| operation_8c028738 | 0x8c028738 | 220 |
| operation_8c028ccc | 0x8c028ccc | 424 |
| operation_8c029228 | 0x8c029228 | 108 |
| operation_8c029a48 | 0x8c029a48 | 80 |
| operation_8c029a98 | 0x8c029a98 | 92 |
| operation_8c02ad30 | 0x8c02ad30 | 52 |
| operation_8c02cbb0 | 0x8c02cbb0 | 88 |
| operation_8c0316ec | 0x8c0316ec | 164 |
| operation_8c03570c | 0x8c03570c | 208 |
| operation_8c036124 | 0x8c036124 | 24 |
| operation_8c036410 | 0x8c036410 | 268 |
| operation_8c03651c | 0x8c03651c | 40 |
| operation_8c036640 | 0x8c036640 | 68 |
| operation_8c03798c | 0x8c03798c | 64 |
| operation_8c03b2b0 | 0x8c03b2b0 | 68 |
| operation_8c03bce0 | 0x8c03bce0 | 148 |
| operation_8c03c524 | 0x8c03c524 | 132 |
| operation_8c03f908 | 0x8c03f908 | 84 |
| operation_8c04a43c | 0x8c04a43c | 184 |
| operation_8c04a814 | 0x8c04a814 | 36 |
| operation_8c04a888 | 0x8c04a888 | 36 |
| operation_8c04a8dc | 0x8c04a8dc | 36 |
| operation_8c04d324 | 0x8c04d324 | 92 |
| operation_8c04d380 | 0x8c04d380 | 92 |
| operation_8c054228 | 0x8c054228 | 32 |
| operation_8c057438 | 0x8c057438 | 60 |
| operation_8c05a4d8 | 0x8c05a4d8 | 12 |
| operation_8c05b8c0 | 0x8c05b8c0 | 40 |
| operation_8c05b8e8 | 0x8c05b8e8 | 36 |
| operation_8c05bc54 | 0x8c05bc54 | 64 |
| operation_8c06536c | 0x8c06536c | 76 |
| operation_8c067d1c | 0x8c067d1c | 24 |
| operation_8c06ef78 | 0x8c06ef78 | 244 |
| operation_8c074dbc | 0x8c074dbc | 32 |
| operation_8c075894 | 0x8c075894 | 212 |
| operation_8c0802c4 | 0x8c0802c4 | 76 |
| operation_8c080994 | 0x8c080994 | 132 |
| operation_8c080dac | 0x8c080dac | 132 |
| operation_8c080fc0 | 0x8c080fc0 | 192 |
| operation_8c0813dc | 0x8c0813dc | 132 |
| operation_8c0815fc | 0x8c0815fc | 308 |
| operation_8c081cc4 | 0x8c081cc4 | 156 |
| operation_8c084984 | 0x8c084984 | 112 |
| operation_8c08601c | 0x8c08601c | 144 |
| operation_8c087c70 | 0x8c087c70 | 44 |
| operation_8c08953c | 0x8c08953c | 100 |
| operation_8c0899cc | 0x8c0899cc | 100 |
| operation_8c089b90 | 0x8c089b90 | 296 |
| operation_8c089f10 | 0x8c089f10 | 100 |
| operation_8c08a0d4 | 0x8c08a0d4 | 228 |
| operation_8c08a4c0 | 0x8c08a4c0 | 136 |
| operation_8c08c36c | 0x8c08c36c | 388 |
| operation_8c08c4f0 | 0x8c08c4f0 | 352 |
| operation_8c08c7b0 | 0x8c08c7b0 | 360 |

## Method

Batches 219–223 come from one generator cycle over every candidate still unmatched after batch 218 (5,582). This is batch 219; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 5–10 lines.

**Updates and arithmetic:**
- A stored update whose new value is tested or passed on at once becomes a pre-decrement or pre-increment in the test or argument.
- A far field (offset above 60) reached through an `add` is updated through a cast address. An indexed read-modify-write is written through the indexed address.
- Float `x *= k` is kept as a compound update.
- CodeWarrior's unsigned-to-float and float-to-unsigned idioms become `(float)(unsigned int)x` and `(unsigned int)e`.

**Types:**
- A computed value passed in a float argument register is typed float.
- Float arithmetic left in `fr0` gives a float return.
- An `extu.b`-extended byte return gives an `int` return.

**Calls:**
- A call with register arguments and one pushed stack argument is declared variadic after its last register parameter.
- A declared arity above four no longer reads callee-saved registers as arguments.
- Leftover values in argument registers are not taken as arguments when the callee overwrites them at entry.

**Locals:**
- A pointer reused after a store or call without a reload becomes a local.
- A load kept in a callee-saved register across a call becomes a local.
- A parameter plus a constant held in a callee-saved register becomes a local pointer.
- Two words loaded before the first store become an 8-byte struct copy.

**Frames:** address-taken parameter homes sit at the bottom of the frame. Constant stores and read-modify-writes to frame slots whose address escapes are emitted.

**Control flow:**
- A branch over a `bra` to the epilogue is the last term of an `||` return. Consecutive early returns merge into one `if (!A || B) return;`, including in leaf functions and with a call that only feeds the test.
- A constant set in a conditional branch's delay slot becomes the variable's initial value.

**Switches:** single-case switches, defaults with their own body, cases that return, empty cases, case constants loaded into registers, and cases that only set a result variable.

**Addressing:**
- A pool base plus a constant index becomes a member of an extern global.
- An address offset by a pool constant and then a small displacement keeps the sub-object.
- An element field is reached through the index before the displacement.

**Compare order:** a relational compare is written in load order, including the pool address load and float compares. `==` and `!=` keep the order their `cmp/eq` gives.

Calibration: 26/37 on batch 191 (previously 23) and 36/55 on batch 190 (previously 31). The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 211–218 and the targets of the previous cycle, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass, with the ternary mode added. 648 drafts were exact in some mode. Most of the rest were exact for only part of their range, and the batch 193 boundary rule rejects these unchanged. Six further exact drafts were refused by the history guard as historically uncertain and remain blocked:
- `0x8c0a8624`, `0x8c0c7dec`, `0x8c0c7e18`;
- `0x8c0c7e48`, `0x8c0c7e7c`, `0x8c21c40c`.

Before admission, the boundaries of every unit in the five batches were checked:
- each entry follows a literal pool (318) or a function end (34);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

69 recorded attempts on 69 targets, all hypotheses and all exact. 69 units / 69 functions / 9,960 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c02606c`: the element field read with the index before the displacement, alone and with an `int` return; the second was exact.
  - `0x8c028738`: a struct base kept separate from a following displacement, which was exact.
  - `0x8c03798c`: an `||` chain of equality tests as a switch with a default body, which was exact.
  - `0x8c04a814`: a far-field update through a cast address, a pointer local and a plain assignment; the first two were exact.
- **Probes on targets not admitted in this cycle:** `0x8c16c314` (seven jump-table tail-call forms; one with a pointer local was exact but not generalised), `0x8c1e0e18` (five forms for an unfilled final `rts` slot), `0x8c224b6c` (three call-order forms), `0x8c1845e4` (three chained-store forms; two exact, not generalised), `0x8c02452c` (four `-1` compare forms), `0x8c1c1d28` (a far float argument), `0x8c04ca48` (an argument-count experiment, dropped). The other probes of this cycle are listed with the batches that admit their targets.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A stored update that is tested at once is written as a pre-update in the test. A separate store and test makes the compiler reload the field.
- `x = x * 0.0f` is folded to a store of zero, while `x *= 0.0f` keeps the multiply.
- A member reached through a pool-loaded base and a constant index is a member of an extern global. A cast constant address folds the index.
- An early return that branches over a `bra` to the epilogue is the last term of an `||` test. Separate `if` statements thread the return directly.
- For `==` and `!=`, the operand order of `cmp/eq` already follows the source. Only relational compares are written in load order.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Unfilled final `rts` delay slots:** no source form tried reproduces them.
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
