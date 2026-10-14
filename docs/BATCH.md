# Reconstruction batch: 216: expanded candidate pool, part 20

59 new matching functions / 7,156 bytes. All 6310 prior functions preserved.

6369 exact functions in 6285 modules; 465,436 compiled function-range bytes; 0 reconstructed data bytes; 3,697,476 retained reference bytes. Whole-image coverage 11.1805% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01bae8 | 0x8c01bae8 | 72 |
| operation_8c02c930 | 0x8c02c930 | 84 |
| operation_8c05b16c | 0x8c05b16c | 48 |
| operation_8c060d94 | 0x8c060d94 | 184 |
| operation_8c076580 | 0x8c076580 | 108 |
| operation_8c077d2c | 0x8c077d2c | 112 |
| operation_8c07d248 | 0x8c07d248 | 220 |
| operation_8c07dca8 | 0x8c07dca8 | 292 |
| operation_8c09caac | 0x8c09caac | 64 |
| operation_8c0b68a0 | 0x8c0b68a0 | 84 |
| operation_8c0baf70 | 0x8c0baf70 | 84 |
| operation_8c0cdcb8 | 0x8c0cdcb8 | 176 |
| operation_8c0d02f8 | 0x8c0d02f8 | 32 |
| operation_8c0d4b30 | 0x8c0d4b30 | 128 |
| operation_8c0d50ac | 0x8c0d50ac | 364 |
| operation_8c0e90f4 | 0x8c0e90f4 | 176 |
| operation_8c0f3884 | 0x8c0f3884 | 80 |
| operation_8c103744 | 0x8c103744 | 56 |
| operation_8c11ebf4 | 0x8c11ebf4 | 284 |
| operation_8c1591d4 | 0x8c1591d4 | 48 |
| operation_8c1597d8 | 0x8c1597d8 | 188 |
| operation_8c15aec4 | 0x8c15aec4 | 204 |
| operation_8c1bcf9c | 0x8c1bcf9c | 84 |
| operation_8c1bcff0 | 0x8c1bcff0 | 56 |
| operation_8c1ca1b0 | 0x8c1ca1b0 | 56 |
| operation_8c1cbabc | 0x8c1cbabc | 56 |
| operation_8c1ce0dc | 0x8c1ce0dc | 184 |
| operation_8c1d2478 | 0x8c1d2478 | 68 |
| operation_8c1d78fc | 0x8c1d78fc | 68 |
| operation_8c1ddafc | 0x8c1ddafc | 128 |
| operation_8c1de234 | 0x8c1de234 | 72 |
| operation_8c1f9f84 | 0x8c1f9f84 | 56 |
| operation_8c2089ac | 0x8c2089ac | 192 |
| operation_8c2091fc | 0x8c2091fc | 192 |
| operation_8c209a88 | 0x8c209a88 | 80 |
| operation_8c217834 | 0x8c217834 | 96 |
| operation_8c2179bc | 0x8c2179bc | 36 |
| operation_8c21dd94 | 0x8c21dd94 | 56 |
| operation_8c21e29c | 0x8c21e29c | 36 |
| operation_8c21f840 | 0x8c21f840 | 60 |
| operation_8c2238d0 | 0x8c2238d0 | 40 |
| operation_8c2267dc | 0x8c2267dc | 36 |
| operation_8c22f12c | 0x8c22f12c | 56 |
| operation_8c23024c | 0x8c23024c | 184 |
| operation_8c231f60 | 0x8c231f60 | 256 |
| operation_8c23a6e0 | 0x8c23a6e0 | 224 |
| operation_8c23d938 | 0x8c23d938 | 128 |
| operation_8c23f1b0 | 0x8c23f1b0 | 112 |
| operation_8c23fdc0 | 0x8c23fdc0 | 112 |
| operation_8c240b90 | 0x8c240b90 | 280 |
| operation_8c2476a8 | 0x8c2476a8 | 64 |
| operation_8c24dae4 | 0x8c24dae4 | 24 |
| operation_8c2512ec | 0x8c2512ec | 124 |
| operation_8c252dec | 0x8c252dec | 124 |
| operation_8c254278 | 0x8c254278 | 112 |
| operation_8c256688 | 0x8c256688 | 48 |
| operation_8c25adc8 | 0x8c25adc8 | 72 |
| operation_8c25d488 | 0x8c25d488 | 424 |
| operation_8c25f818 | 0x8c25f818 | 72 |

## Method

Batch 216 is a generator cycle over every candidate still unmatched after batch 215, 5,772 in all. The draft generator gained compile fixes for drafts the compiler rejected. Each one only changes output for shapes that failed to compile, or that compiled to class-scaled or mistyped arithmetic:
- **Pointer comparisons and arguments:** when only one side of a comparison is a pointer, that side is cast to `int`. Pointers passed to `int` or float parameters are cast, as are floats passed to pointer parameters. Arguments in calls with a different argument count are cast to the known parameter types.
- **Virtual calls:** a slot keeps an `int` return when a result is used. A slot called with different argument counts is declared variadic. A class pointer plus a constant is a byte offset.
- **Repeated factory results:** a second or later allocated object in one block gets its own name. A stored float call result is declared `float`.
- **Incomplete struct arithmetic:** operands are cast to `int`, and pointer casts parenthesize their value when it starts with a binary operator.
- **Members:**
  - classes are forward-declared;
  - a block copied inside a larger block is reached through that block;
  - overlapping members are reached by byte offset;
  - block copies keep their own inner types and names;
  - an extern global or field whose value is dereferenced or called through points at that type;
  - differently typed stores into it are cast.
- **Syntax:** dereference casts are bracketed before `->`, computed bases in `&base->f` are wrapped, and pointer-typed indexes and float stores into pointer members are cast.
- **Signatures:**
  - parameters that are read are added to the signature;
  - a byte-addressed global that is also declared under another type gets its own symbol for the same address;
  - a `short` or `char` value passed to an `int` parameter of an unadmitted callee gives that parameter the narrower type.

Calibration: 23/37 on batch 191 and 31/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged.

The rules were tested on drafts that failed to compile in earlier cycles (285 targets), then all 5,772 remaining candidates were redrafted in one pass. Of those, 320 drafts were exact in some mode. Most of the rest were exact for only part of their range, and the batch 193 boundary rule rejects these unchanged.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (56) or a function end (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

59 recorded attempts on 59 targets, all hypotheses and all exact. 59 units / 59 functions / 7,156 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Research work in separate scratch copies of the generator, none admitted:**
  - The compile fixes above were developed against generated drafts only, with no hand probes.
  - The narrow-parameter rule came out of the `extu.w` research disclosed in batch 215.
  - **A goto rendering for control flow the generator cannot yet structure** (not used in this batch's drafts). Hand probes on `0x8c03ed70`, an inline string-compare loop:
    - a `while` loop with assignments in the condition;
    - a goto rendering in address order;
    - a static inline helper;
    - five type and loop variants of the helper (casts on loads, `unsigned char` parameters, a `for (;;)` form).

    The branch layout matched in the goto forms and the registers matched only in the helper forms. None was exact.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- Pointer and integer mixing that CodeWarrior rejects outright can usually be cast away without changing the generated code. About one in six drafts fixed this way was exact once it compiled.
- A function called through a class slot with different argument counts in one unit compiles as variadic, but the compiler then passes the arguments on the stack. Such a slot is a sign of a misread live register, not of a real variadic method.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Exact-short drafts** remain rejected by the boundary rule.

Code-only completion and total function count remain unknown.
