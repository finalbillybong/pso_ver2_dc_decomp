# Reconstruction batch: 224: expanded candidate pool, part 28

66 new matching functions / 8,944 bytes. All 6850 prior functions preserved.

6916 exact functions in 6832 modules; 539,148 compiled function-range bytes; 0 reconstructed data bytes; 3,623,764 retained reference bytes. Whole-image coverage 12.9512% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01e148 | 0x8c01e148 | 56 |
| operation_8c0226c4 | 0x8c0226c4 | 84 |
| operation_8c022bbc | 0x8c022bbc | 136 |
| operation_8c026144 | 0x8c026144 | 56 |
| operation_8c02668c | 0x8c02668c | 116 |
| operation_8c0292ec | 0x8c0292ec | 112 |
| operation_8c029af4 | 0x8c029af4 | 72 |
| operation_8c02b2a4 | 0x8c02b2a4 | 52 |
| operation_8c02b818 | 0x8c02b818 | 224 |
| operation_8c02c728 | 0x8c02c728 | 204 |
| operation_8c02c998 | 0x8c02c998 | 176 |
| operation_8c02e910 | 0x8c02e910 | 76 |
| operation_8c02ed00 | 0x8c02ed00 | 96 |
| operation_8c02ed60 | 0x8c02ed60 | 76 |
| operation_8c02edac | 0x8c02edac | 76 |
| operation_8c02f818 | 0x8c02f818 | 112 |
| operation_8c02f888 | 0x8c02f888 | 112 |
| operation_8c02f8f8 | 0x8c02f8f8 | 56 |
| operation_8c02f9c0 | 0x8c02f9c0 | 80 |
| operation_8c02fa10 | 0x8c02fa10 | 76 |
| operation_8c02fa5c | 0x8c02fa5c | 80 |
| operation_8c02faac | 0x8c02faac | 80 |
| operation_8c02fb34 | 0x8c02fb34 | 96 |
| operation_8c02fbcc | 0x8c02fbcc | 120 |
| operation_8c02fc44 | 0x8c02fc44 | 120 |
| operation_8c02fde0 | 0x8c02fde0 | 44 |
| operation_8c02fe0c | 0x8c02fe0c | 280 |
| operation_8c03ebbc | 0x8c03ebbc | 200 |
| operation_8c03ff08 | 0x8c03ff08 | 300 |
| operation_8c04c2f0 | 0x8c04c2f0 | 72 |
| operation_8c04ff30 | 0x8c04ff30 | 336 |
| operation_8c05af80 | 0x8c05af80 | 96 |
| operation_8c05b5b4 | 0x8c05b5b4 | 44 |
| operation_8c05b5e0 | 0x8c05b5e0 | 44 |
| operation_8c05b60c | 0x8c05b60c | 44 |
| operation_8c05b638 | 0x8c05b638 | 44 |
| operation_8c061bbc | 0x8c061bbc | 256 |
| operation_8c067c1c | 0x8c067c1c | 132 |
| operation_8c067ca0 | 0x8c067ca0 | 124 |
| operation_8c0726e8 | 0x8c0726e8 | 200 |
| operation_8c07d1f0 | 0x8c07d1f0 | 88 |
| operation_8c07d3f8 | 0x8c07d3f8 | 232 |
| operation_8c07f914 | 0x8c07f914 | 60 |
| operation_8c0806ec | 0x8c0806ec | 128 |
| operation_8c0913a4 | 0x8c0913a4 | 224 |
| operation_8c094a44 | 0x8c094a44 | 136 |
| operation_8c0968f4 | 0x8c0968f4 | 480 |
| operation_8c096d14 | 0x8c096d14 | 232 |
| operation_8c097630 | 0x8c097630 | 64 |
| operation_8c097670 | 0x8c097670 | 64 |
| operation_8c09a5a8 | 0x8c09a5a8 | 40 |
| operation_8c09a738 | 0x8c09a738 | 188 |
| operation_8c09bb80 | 0x8c09bb80 | 140 |
| operation_8c09de04 | 0x8c09de04 | 64 |
| operation_8c0a1810 | 0x8c0a1810 | 152 |
| operation_8c0b6d7c | 0x8c0b6d7c | 140 |
| operation_8c0b9640 | 0x8c0b9640 | 28 |
| operation_8c0c5aa0 | 0x8c0c5aa0 | 152 |
| operation_8c0c9ffc | 0x8c0c9ffc | 296 |
| operation_8c0cb3dc | 0x8c0cb3dc | 52 |
| operation_8c0cb66c | 0x8c0cb66c | 52 |
| operation_8c0d00d0 | 0x8c0d00d0 | 72 |
| operation_8c0d485c | 0x8c0d485c | 32 |
| operation_8c0d705c | 0x8c0d705c | 204 |
| operation_8c0dcc10 | 0x8c0dcc10 | 456 |
| operation_8c0e58d0 | 0x8c0e58d0 | 408 |

## Method

Batches 224–226 come from one generator cycle over every candidate still unmatched after batch 223 (5,224). This is batch 224; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 11–20 lines.

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

66 recorded attempts on 66 targets, all hypotheses and all exact. 66 units / 66 functions / 8,944 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c02b2a4`: a result flag set before an `&&` of a global test and a `char` call result, which was exact.
  - `0x8c02f8f8`: a re-read frame field passed with `unsigned short` field and parameter types and with a cast to an `int` parameter; the cast form was exact.
  - `0x8c05b5b4`: an 8-byte global passed as a struct by value to a virtual call, which was exact.
  - `0x8c07f914`: a result constant assigned before the call that sets it in its delay slot, which was exact.
  - `0x8c0d00d0`: four forms of a far-field low-bit clear (bitfield, bitfield with a cast read, pointer local, byte-offset cast); the pointer local was exact.
- **Probes on targets not admitted in this cycle:** `0x8c2331b0` (five polling-loop forms), `0x8c010728` (five forms for bytes of a short parameter), `0x8c0a8da0` (three `- 1` argument forms), `0x8c105bec` (two pointer-array index forms), `0x8c0c5018` (three float-scale forms), `0x8c17867c` (an `unsigned short` local; in-place `extu.w`), `0x8c1fd14c` (a byte fill loop), `0x8c1fa580` (a `short` callee parameter), `0x8c1f6298` (a global pointer local), `0x8c16e624` (three table-argument forms), `0x8c2446d0` (a search-loop result flag), `0x8c201edc` (a short-field update), `0x8c1588b8` (three decremented-parameter forms), `0x8c144c30` (three mask forms), `0x8c12b510` (two table-test forms), `0x8c18635c` (two struct-pointer loop forms), `0x8c0e3c4c` (two case-body test forms), `0x8c1aaabc` (four range-test forms), `0x8c05113c` (two post-decrement test forms), `0x8c244bfc` and `0x8c03809c` (exact-short), and `0x8c12ad54` (a conversion inside the store, exact; held back as above). None was exact except where noted. A generator trial that reordered float arguments was dropped because it lost three admitted functions. The other probes of this cycle are listed with the batches that admit their targets.
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
