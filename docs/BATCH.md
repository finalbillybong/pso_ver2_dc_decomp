# Reconstruction batch: 225: expanded candidate pool, part 29

69 new matching functions / 8,968 bytes. All 6916 prior functions preserved.

6985 exact functions in 6901 modules; 548,116 compiled function-range bytes; 0 reconstructed data bytes; 3,614,796 retained reference bytes. Whole-image coverage 13.1666% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0e75c8 | 0x8c0e75c8 | 88 |
| operation_8c0e7620 | 0x8c0e7620 | 96 |
| operation_8c0e7680 | 0x8c0e7680 | 84 |
| operation_8c0e8a80 | 0x8c0e8a80 | 632 |
| operation_8c0ec300 | 0x8c0ec300 | 40 |
| operation_8c0eeb00 | 0x8c0eeb00 | 88 |
| operation_8c0f2804 | 0x8c0f2804 | 108 |
| operation_8c0f2b54 | 0x8c0f2b54 | 108 |
| operation_8c0f2ea4 | 0x8c0f2ea4 | 108 |
| operation_8c0f4ec0 | 0x8c0f4ec0 | 280 |
| operation_8c0f5484 | 0x8c0f5484 | 80 |
| operation_8c0f5884 | 0x8c0f5884 | 320 |
| operation_8c0f651c | 0x8c0f651c | 320 |
| operation_8c0f72e4 | 0x8c0f72e4 | 232 |
| operation_8c0fc0c4 | 0x8c0fc0c4 | 92 |
| operation_8c0fc244 | 0x8c0fc244 | 40 |
| operation_8c1005d0 | 0x8c1005d0 | 48 |
| operation_8c1031e4 | 0x8c1031e4 | 64 |
| operation_8c107084 | 0x8c107084 | 260 |
| operation_8c10a844 | 0x8c10a844 | 72 |
| operation_8c10dad8 | 0x8c10dad8 | 84 |
| operation_8c10e53c | 0x8c10e53c | 136 |
| operation_8c113564 | 0x8c113564 | 80 |
| operation_8c1145a4 | 0x8c1145a4 | 108 |
| operation_8c11635c | 0x8c11635c | 148 |
| operation_8c11649c | 0x8c11649c | 340 |
| operation_8c11afa0 | 0x8c11afa0 | 80 |
| operation_8c11df84 | 0x8c11df84 | 124 |
| operation_8c11e150 | 0x8c11e150 | 72 |
| operation_8c120374 | 0x8c120374 | 432 |
| operation_8c122380 | 0x8c122380 | 144 |
| operation_8c12a468 | 0x8c12a468 | 176 |
| operation_8c135520 | 0x8c135520 | 76 |
| operation_8c1366dc | 0x8c1366dc | 76 |
| operation_8c136fa4 | 0x8c136fa4 | 172 |
| operation_8c13cb88 | 0x8c13cb88 | 148 |
| operation_8c144a0c | 0x8c144a0c | 212 |
| operation_8c150054 | 0x8c150054 | 132 |
| operation_8c152240 | 0x8c152240 | 80 |
| operation_8c156b58 | 0x8c156b58 | 64 |
| operation_8c156b98 | 0x8c156b98 | 64 |
| operation_8c1574cc | 0x8c1574cc | 136 |
| operation_8c15e688 | 0x8c15e688 | 220 |
| operation_8c162c78 | 0x8c162c78 | 76 |
| operation_8c1671b8 | 0x8c1671b8 | 200 |
| operation_8c169ac0 | 0x8c169ac0 | 208 |
| operation_8c169cf8 | 0x8c169cf8 | 232 |
| operation_8c169de0 | 0x8c169de0 | 220 |
| operation_8c16a718 | 0x8c16a718 | 144 |
| operation_8c16ac98 | 0x8c16ac98 | 160 |
| operation_8c16ad38 | 0x8c16ad38 | 152 |
| operation_8c16bad0 | 0x8c16bad0 | 116 |
| operation_8c16c314 | 0x8c16c314 | 20 |
| operation_8c16c3ec | 0x8c16c3ec | 72 |
| operation_8c16c844 | 0x8c16c844 | 104 |
| operation_8c16cbf4 | 0x8c16cbf4 | 32 |
| operation_8c16cc64 | 0x8c16cc64 | 32 |
| operation_8c16cc84 | 0x8c16cc84 | 24 |
| operation_8c16cc9c | 0x8c16cc9c | 44 |
| operation_8c16ccc8 | 0x8c16ccc8 | 36 |
| operation_8c16ccec | 0x8c16ccec | 32 |
| operation_8c16cd24 | 0x8c16cd24 | 32 |
| operation_8c16cd5c | 0x8c16cd5c | 32 |
| operation_8c16cdac | 0x8c16cdac | 44 |
| operation_8c16cdd8 | 0x8c16cdd8 | 36 |
| operation_8c16e674 | 0x8c16e674 | 60 |
| operation_8c171154 | 0x8c171154 | 244 |
| operation_8c1714a8 | 0x8c1714a8 | 76 |
| operation_8c1714f4 | 0x8c1714f4 | 76 |

## Method

Batches 224–226 come from one generator cycle over every candidate still unmatched after batch 223 (5,224). This is batch 225; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 11–20 lines.

**Draft bugs where the C was wrong:**
- The old value of a field updated in place is used when a conversion or test still needs it.
- Stores of loaded values and of `param + K` addresses into a frame block whose address is passed on are now emitted.
- `@(d,rN)` stores are no longer misread as carried values, and a global pointer stepped by its element size is written correctly.

**Locals and variables:**
- A shifted index kept in a callee-saved register across a call becomes an offset variable.
- A value tested by one `if` and tested again by a later `if`, without a reload, becomes a local. The same applies to a computed value or an indexed element pointer that is tested and then passed on.
- A pool constant held in a callee-saved register across calls becomes a variable.
- A loaded pointer used as a base again after a store, and an element address kept across a call, become local pointers.
- Join variables of float registers are declared `float`.

**Updates and expressions:**
- `lv op= x` when the stored location is an operand of `|`, `&`, `^`, `+` or `*`.
- A far-field read-modify-write goes through a block-local pointer, and a far pointer field is stepped through its cast address.
- `a = b = value` when one load feeds two stores.
- A float-of-unsigned conversion used once is written inside the store.
- A float update tested at once is a pre-update in the test.

**Calls and arguments:**
- Words copied to the outgoing stack area are a struct passed by value.
- A frame address offset by a constant is the address of a frame struct member.
- A frame field re-read from memory and passed with `extu.w` is passed as `(unsigned short)`, and a stack parameter read with `mov.w` is `unsigned short`.
- A result variable's constant set in a call's delay slot is assigned before the call.

**Control flow and switches:**
- A result set before an `if` and changed by a nested test becomes one `&&` test, including when the second term is a call result.
- The `||`-to-`&&` rewrite covers integer relations.
- `while ((v = L) != 0)` when the body reuses the test's load.
- Switch result registers become join variables, and branches from a case to the join become `break`.

**Addressing:** in extern mode, a pool base plus `add #K` plus an index is written as the field of an extern global plus a byte index.

Calibration: 26/37 on batch 191 and 39/55 on batch 190 (previously 36). The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–223 and the targets of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass. 223 drafts were exact over their full range. Most other exact drafts were exact for only part of their range, and the batch 193 boundary rule rejects these unchanged. Four further exact drafts were refused by the history guard as historically uncertain and remain blocked: `0x8c037eb8`, `0x8c117fec`, `0x8c214ed8` and `0x8c24e644`.

Three exact drafts, `0x8c12a86c`, `0x8c12ad54` and `0x8c131a78`, are held back. Their trials ran while a batch integration was writing the history file. Both processes saved it at once, so the history lacks the records of those three trials. Their receipts are kept, and the three are not admitted until the history covers them.

Before admission, the boundaries of every unit in the three batches were checked:
- each entry follows a literal pool (211) or a function end (5);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

69 recorded attempts on 69 targets, all hypotheses and all exact. 69 units / 69 functions / 8,968 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c0e75c8`: four forms of a call through a 12-byte table entry; none was exact. It is admitted as the extern-mode generated draft.
  - `0x8c0fc244`: the frame as a struct of two `Vector3` members, passed by member address, which was exact.
  - `0x8c135520`: a switch whose cases set a result variable joined after the switch, which was exact.
  - `0x8c16cc64`: no hand source; the generated `*=` update was checked, which was exact.
  - `0x8c16c314`: seven jump-table tail-call forms, disclosed in batch 219; one with a pointer local was exact but was not generalised.
- The probes of this cycle on targets not admitted are listed in batch 224.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A value tested twice without a reload is a local in the source. Writing the test twice makes the compiler reload the field.
- A result set before an `if` and changed by a nested test compiles from one `&&` test. Nested `if` statements give an extra join.
- An 8-byte struct passed by value is copied word by word to the outgoing stack area before the call.
- `&frame.f0c` keeps the member's offset as a separate `add` from the frame pointer, like the address of a struct member elsewhere.
- A constant the compiler places in a call's delay slot is assigned before the call in the source.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Register allocation** between sibling functions with the same source shape remains the largest group of near misses.
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
