# Reconstruction batch: 220: expanded candidate pool, part 24

57 new matching functions / 9,632 bytes. All 6567 prior functions preserved.

6624 exact functions in 6540 modules; 500,908 compiled function-range bytes; 0 reconstructed data bytes; 3,662,004 retained reference bytes. Whole-image coverage 12.0326% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c08c918 | 0x8c08c918 | 360 |
| operation_8c08daa8 | 0x8c08daa8 | 84 |
| operation_8c08eadc | 0x8c08eadc | 356 |
| operation_8c08eda0 | 0x8c08eda0 | 584 |
| operation_8c0910b8 | 0x8c0910b8 | 200 |
| operation_8c094fb0 | 0x8c094fb0 | 124 |
| operation_8c0965dc | 0x8c0965dc | 156 |
| operation_8c09971c | 0x8c09971c | 100 |
| operation_8c09a6f4 | 0x8c09a6f4 | 28 |
| operation_8c09ce2c | 0x8c09ce2c | 48 |
| operation_8c09fe44 | 0x8c09fe44 | 312 |
| operation_8c0b6448 | 0x8c0b6448 | 196 |
| operation_8c0c1df4 | 0x8c0c1df4 | 236 |
| operation_8c0cc734 | 0x8c0cc734 | 200 |
| operation_8c0cfc38 | 0x8c0cfc38 | 224 |
| operation_8c0d1afc | 0x8c0d1afc | 180 |
| operation_8c0d2028 | 0x8c0d2028 | 76 |
| operation_8c0dc9ac | 0x8c0dc9ac | 612 |
| operation_8c0dd670 | 0x8c0dd670 | 156 |
| operation_8c0dd874 | 0x8c0dd874 | 64 |
| operation_8c0ddc88 | 0x8c0ddc88 | 116 |
| operation_8c0ddcfc | 0x8c0ddcfc | 104 |
| operation_8c0ddfd4 | 0x8c0ddfd4 | 168 |
| operation_8c0de3cc | 0x8c0de3cc | 88 |
| operation_8c0e1374 | 0x8c0e1374 | 44 |
| operation_8c0e2648 | 0x8c0e2648 | 240 |
| operation_8c0e2b40 | 0x8c0e2b40 | 56 |
| operation_8c0e8360 | 0x8c0e8360 | 304 |
| operation_8c0e9b88 | 0x8c0e9b88 | 240 |
| operation_8c0ee944 | 0x8c0ee944 | 240 |
| operation_8c0eeb58 | 0x8c0eeb58 | 52 |
| operation_8c0f1574 | 0x8c0f1574 | 116 |
| operation_8c0f17a0 | 0x8c0f17a0 | 188 |
| operation_8c0f233c | 0x8c0f233c | 224 |
| operation_8c0f241c | 0x8c0f241c | 128 |
| operation_8c0f7e0c | 0x8c0f7e0c | 152 |
| operation_8c0fc620 | 0x8c0fc620 | 176 |
| operation_8c0fcc20 | 0x8c0fcc20 | 144 |
| operation_8c107040 | 0x8c107040 | 68 |
| operation_8c10ace0 | 0x8c10ace0 | 60 |
| operation_8c10aea8 | 0x8c10aea8 | 304 |
| operation_8c10e5c4 | 0x8c10e5c4 | 152 |
| operation_8c11160c | 0x8c11160c | 152 |
| operation_8c111e18 | 0x8c111e18 | 176 |
| operation_8c1122b0 | 0x8c1122b0 | 188 |
| operation_8c112618 | 0x8c112618 | 148 |
| operation_8c1165f0 | 0x8c1165f0 | 136 |
| operation_8c11a1f0 | 0x8c11a1f0 | 80 |
| operation_8c11a414 | 0x8c11a414 | 148 |
| operation_8c11a63c | 0x8c11a63c | 148 |
| operation_8c11cdc0 | 0x8c11cdc0 | 172 |
| operation_8c1222c8 | 0x8c1222c8 | 184 |
| operation_8c12261c | 0x8c12261c | 96 |
| operation_8c123cc0 | 0x8c123cc0 | 92 |
| operation_8c123d1c | 0x8c123d1c | 44 |
| operation_8c128b80 | 0x8c128b80 | 48 |
| operation_8c128c7c | 0x8c128c7c | 160 |

## Method

Batches 219–223 come from one generator cycle over every candidate still unmatched after batch 218 (5,582). This is batch 220; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 5–10 lines.

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

57 recorded attempts on 57 targets, all hypotheses and all exact. 57 units / 57 functions / 9,632 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c0eeb58`: a float compare written in load order, which then matched only part of the range.
- The probes on targets not admitted are listed in batch 219.
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
