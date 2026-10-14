# Reconstruction batch: 215: expanded candidate pool, part 19

38 new matching functions / 5,376 bytes. All 6272 prior functions preserved.

6310 exact functions in 6226 modules; 458,280 compiled function-range bytes; 0 reconstructed data bytes; 3,704,632 retained reference bytes. Whole-image coverage 11.0086% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c03f960 | 0x8c03f960 | 256 |
| operation_8c0505a4 | 0x8c0505a4 | 196 |
| operation_8c0783b0 | 0x8c0783b0 | 116 |
| operation_8c080050 | 0x8c080050 | 48 |
| operation_8c0895a0 | 0x8c0895a0 | 104 |
| operation_8c0953b4 | 0x8c0953b4 | 212 |
| operation_8c09cfb4 | 0x8c09cfb4 | 116 |
| operation_8c09d058 | 0x8c09d058 | 116 |
| operation_8c0a2a4c | 0x8c0a2a4c | 212 |
| operation_8c0a531c | 0x8c0a531c | 144 |
| operation_8c0fbf00 | 0x8c0fbf00 | 96 |
| operation_8c107188 | 0x8c107188 | 264 |
| operation_8c11bc2c | 0x8c11bc2c | 216 |
| operation_8c11e1fc | 0x8c11e1fc | 284 |
| operation_8c11e6f8 | 0x8c11e6f8 | 284 |
| operation_8c122da0 | 0x8c122da0 | 112 |
| operation_8c128e3c | 0x8c128e3c | 168 |
| operation_8c14fd04 | 0x8c14fd04 | 236 |
| operation_8c175b54 | 0x8c175b54 | 112 |
| operation_8c176958 | 0x8c176958 | 320 |
| operation_8c17a14c | 0x8c17a14c | 132 |
| operation_8c196e78 | 0x8c196e78 | 76 |
| operation_8c21d170 | 0x8c21d170 | 144 |
| operation_8c2318cc | 0x8c2318cc | 184 |
| operation_8c23de88 | 0x8c23de88 | 140 |
| operation_8c248d14 | 0x8c248d14 | 132 |
| operation_8c252510 | 0x8c252510 | 116 |
| operation_8c252a00 | 0x8c252a00 | 112 |
| operation_8c252ce4 | 0x8c252ce4 | 96 |
| operation_8c254864 | 0x8c254864 | 104 |
| operation_8c281e80 | 0x8c281e80 | 56 |
| operation_8c281ec8 | 0x8c281ec8 | 68 |
| operation_8c281f5c | 0x8c281f5c | 36 |
| operation_8c281f80 | 0x8c281f80 | 112 |
| operation_8c281ff0 | 0x8c281ff0 | 68 |
| operation_8c282244 | 0x8c282244 | 48 |
| operation_8c2825bc | 0x8c2825bc | 72 |
| operation_8c284518 | 0x8c284518 | 68 |

## Method

Batch 215 is a generator cycle over the candidates still unmatched after batch 214. The draft generator gained:
- **Pointer-stepping loop tests:** in `while ((e = *p++) != 0)` the pointer step sits in the back branch's delay slot. The element is assigned in the condition, and the pointer is declared as a pointer to the element type.
- **Block copies:** a copy between two blocks is written through a block type of the copy's size, even when the source or destination field type is unknown.
- **Function addresses as values:** an admitted function whose address is passed or stored is declared and bound.
- **Class sub-blocks:** a member inside a block field of a C++ class is reached through the class's data view.
- **Cast precedence:** the base of a `(char *)` address cast is parenthesized when it is compound.
- **Pointer-typed fields in arithmetic:** cast to `int` in shifts, products and masks.
- **Data arrays:** in extern mode, a data address used in `+` arithmetic becomes an extern `char` array symbol, so the compiler keeps the field offset separate. The same address elsewhere in the function uses the same symbol.

Calibration: 23/37 on batch 191 (previously 22) and 31/55 on batch 190, unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged.

The rules were tested on hand-probed drafts first, then the remaining pool was redrafted in two passes:
- **First pass:** 1,533 candidates whose earlier drafts showed the affected shapes.
- **Second pass:** the other 4,275.

Most exact drafts in the second pass were exact for only part of their range (252). The batch 193 boundary rule rejects these unchanged.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool or a function end;
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

38 recorded attempts on 38 targets, all hypotheses and all exact. 38 units / 38 functions / 5,376 bytes were admitted after two independent reproductions each:
- 34 come from the first pass (4,852 bytes);
- 4 come from the second pass (524 bytes).

All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes by the session:**
  - `0x8c025f7c` (nested member array forms);
  - `0x8c0262a0` (diff inspection only).

  The probes behind the rules above are disclosed in batch 214.
- **Research probes made in separate scratch copies of the generator, none admitted:**
  - **The in-place `extu.w` family.** About 55 compiles on:
    - `0x8c2404cc` (about 30 forms: field and parameter types, casts, locals, inline helpers, C++ wrappers, bitfields, `volatile`, unprototyped and variadic callees, optimization and scheduling pragmas);
    - `0x8c05be98`, `0x8c03c00c`, `0x8c0f44dc`, `0x8c1ddafc`, `0x8c16cb54`;
    - scratch snippets.
  - **The argument-order family.** On `0x8c118e50`, `0x8c1089b0` and `0x8c1d5038`:
    - argument temporaries, multiply and shift forms, member addresses;
    - `register`, block-local copies and constants, narrow parameters;
    - C++ destructor and virtual destructor forms;
    - inline helpers, reference parameters.

    Scratch snippets covered argument position and types, preceding calls, unprototyped, variadic and indirect callees, member calls, address forms and pragmas. One diagnostic compile at a different optimization level was made only to compare scheduling and is not admissible.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A data address that is indexed and then offset by a field is kept as a separate `add` when the base is an extern symbol. A constant address folds the two.
- Address-only uses of the same data in one function share one pool entry only when they name the same symbol.

## Parked and unresolved

- **In-place `extu.w`:** treated as not reproducible from source. Across the reference binary, unsigned short loads through an indexed address that are passed to a call are extended in place every time (294 cases). The pinned compiler, at the pinned settings, always loads into a temporary for every source form tried.
- **Argument-register order around a call's delay slot:** treated as not reproducible from source. Among admitted call sites, a constant argument fills the delay slot in 385 cases and the pointer copy in 3, all forced by dependencies. Near-identical functions in the same unit disagree, so the deciding factor is not visible in the source.
- **Exact-short drafts** (252 in this cycle) remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
