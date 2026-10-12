# Reconstruction batch: 203: expanded candidate pool, part 7

61 new matching functions / 5,152 bytes. All 3720 prior functions preserved.

3781 exact functions in 3697 modules; 295,996 compiled function-range bytes; 0 reconstructed data bytes; 3,866,916 retained reference bytes. Whole-image coverage 7.1103% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c017d7c | 0x8c017d7c | 24 |
| operation_8c032648 | 0x8c032648 | 104 |
| operation_8c03669c | 0x8c03669c | 64 |
| operation_8c03c084 | 0x8c03c084 | 20 |
| operation_8c05c184 | 0x8c05c184 | 32 |
| operation_8c0649f4 | 0x8c0649f4 | 32 |
| operation_8c081fe0 | 0x8c081fe0 | 36 |
| operation_8c087c18 | 0x8c087c18 | 88 |
| operation_8c08b3a0 | 0x8c08b3a0 | 44 |
| operation_8c08dc38 | 0x8c08dc38 | 136 |
| operation_8c090238 | 0x8c090238 | 132 |
| operation_8c09d974 | 0x8c09d974 | 52 |
| operation_8c0e71c8 | 0x8c0e71c8 | 180 |
| operation_8c0f8adc | 0x8c0f8adc | 32 |
| operation_8c100e14 | 0x8c100e14 | 44 |
| operation_8c102f40 | 0x8c102f40 | 92 |
| operation_8c103020 | 0x8c103020 | 72 |
| operation_8c103068 | 0x8c103068 | 60 |
| operation_8c105b04 | 0x8c105b04 | 112 |
| operation_8c105b74 | 0x8c105b74 | 112 |
| operation_8c12213c | 0x8c12213c | 40 |
| operation_8c13f504 | 0x8c13f504 | 144 |
| operation_8c144bf8 | 0x8c144bf8 | 56 |
| operation_8c169508 | 0x8c169508 | 32 |
| operation_8c181920 | 0x8c181920 | 72 |
| operation_8c188a30 | 0x8c188a30 | 112 |
| operation_8c188aa0 | 0x8c188aa0 | 112 |
| operation_8c189480 | 0x8c189480 | 112 |
| operation_8c1894f0 | 0x8c1894f0 | 112 |
| operation_8c190704 | 0x8c190704 | 124 |
| operation_8c192084 | 0x8c192084 | 172 |
| operation_8c1995fc | 0x8c1995fc | 44 |
| operation_8c1a2db4 | 0x8c1a2db4 | 136 |
| operation_8c1a7128 | 0x8c1a7128 | 36 |
| operation_8c1a714c | 0x8c1a714c | 36 |
| operation_8c1a7170 | 0x8c1a7170 | 36 |
| operation_8c1a7194 | 0x8c1a7194 | 32 |
| operation_8c1a71b4 | 0x8c1a71b4 | 36 |
| operation_8c1a71d8 | 0x8c1a71d8 | 36 |
| operation_8c1a72a0 | 0x8c1a72a0 | 76 |
| operation_8c1a7550 | 0x8c1a7550 | 40 |
| operation_8c1c7d48 | 0x8c1c7d48 | 140 |
| operation_8c1c9378 | 0x8c1c9378 | 32 |
| operation_8c1d03c8 | 0x8c1d03c8 | 108 |
| operation_8c1d24bc | 0x8c1d24bc | 152 |
| operation_8c1dd290 | 0x8c1dd290 | 136 |
| operation_8c1dd318 | 0x8c1dd318 | 316 |
| operation_8c1ddbbc | 0x8c1ddbbc | 68 |
| operation_8c1e22ec | 0x8c1e22ec | 68 |
| operation_8c1e25c8 | 0x8c1e25c8 | 52 |
| operation_8c1ed9b0 | 0x8c1ed9b0 | 112 |
| operation_8c1efcdc | 0x8c1efcdc | 144 |
| operation_8c1f15c8 | 0x8c1f15c8 | 72 |
| operation_8c207bf0 | 0x8c207bf0 | 184 |
| operation_8c21696c | 0x8c21696c | 92 |
| operation_8c21db24 | 0x8c21db24 | 52 |
| operation_8c225c84 | 0x8c225c84 | 76 |
| operation_8c2273a4 | 0x8c2273a4 | 84 |
| operation_8c237f48 | 0x8c237f48 | 76 |
| operation_8c241658 | 0x8c241658 | 60 |
| operation_8c247f2c | 0x8c247f2c | 64 |

## Method

Batch 203 is a generator cycle over the remaining expanded candidate pool. The draft generator gained:
- **Caller's first argument passed through (`pass` variant):** when the prologue saves PR before loading the first call's address, the function's own first argument is still in r4 at that call and is passed on.
- **Pointer and integer casts:** compound arguments are parenthesised before a prototype cast. Pointer-to-integer comparisons cast the pointer side. A non-pointer value returned from a pointer function is cast to the return type. A pointer returned from an `int` function, stored into an `int` slot, used in `^`, `&`, `*` or shifts, negated, or added to another pointer is cast to `int`. A store into a pointer-typed extern global casts the value. These casts cost no code on SH-4.
- **Literal base plus displacement in stores:** a pool address followed by `add #k` and a store is written `*(T *)(g_base + k)` with `extern char g_base[]`, like the delay-slot argument case from batch 202.
- **Single-extended byte updates:** `mov.b; extu.b; or #k; mov.b` is `f |= k` on an `unsigned char` field. The explicit `(f & 0xff) | k` extends twice.
- **Pass-through generalised:** the `pass` variant also applies when callee-saved registers are pushed before PR.
- **Flag if/else polarity (`flip` variants):** when both arms only set a flag to constants, the source tests the opposite condition, with De Morgan applied, and swaps the arms.
- **Mixed call arity:** a call site whose argument count differs from the first call to the same function is made through a typed pointer to that symbol.
- **Type repairs for drafts that did not compile:** block copies between differently typed blocks go through a common block type; field accesses through an integer expression cast the base; `+=` on a pointer-typed field steps in bytes through `int`; negative displacements use raw pointer arithmetic; members reached through a field typed by a callee's return struct are added to that struct.

Calibration: 20/37 on batch 191 and 31/55 on batch 190, both unchanged after every rule. No previously exact calibration draft was lost.

## Measured attempts

61 recorded attempts on 61 targets, all hypotheses and all exact. 61 units / 61 functions / 5,152 bytes were admitted after two independent reproductions each:
- 54 are unedited generated drafts from several passes over the remaining candidates (4,178, then 84, 957, 957, 871 and 64);
- 7 are hand-finished drafts. These are six members of one family (`0x8c105b04`, `0x8c105b74`, `0x8c188a30`, `0x8c188aa0`, `0x8c189480`, `0x8c1894f0`), whose repeated `o->fXX` base is held in a block-scoped local pointer, and `0x8c21db24`, whose global value, still in r5 at the call, is the callee's second argument.

Disclosure:
- Every admitted function was first found exact in a scratch comparison: the 54 generated drafts as logged under `drafttest/`, and the seven hand-finished drafts as edited copies of their generated drafts.
- Before each rule was added, a few scratch edits on motivating examples established the idiom: `0x8c247f2c` (three store forms), `0x8c2273a4` (four update forms), `0x8c13c370` (one cast), and single compiles of regenerated drafts for the type repairs.
- Unsuccessful scratch probes, none admitted: `0x8c0262a0` (seven forms for an unfolded `add #0`), `0x8c11d9c8` and `0x8c13c81c` (twenty-two forms for an argument load followed by `extu.w` in the call's delay slot), `0x8c1dc4b8` (one operand swap), `0x8c01fa18` (four prototype forms for argument order), `0x8c15c2ac` (three declaration forms), and `0x8c05605c` (one prototype fix).
- Apart from the seven hand-finished drafts above, the admitted sources are the regenerated drafts, not the hand edits. Hand probes on those seven: one edit form for the family (then applied to each member) and one for `0x8c21db24`.
- Further unsuccessful probes, none admitted: `0x8c1d5e2c` (four compare and store forms), `0x8c1c7d48` (four boolean forms before the flip rule), and `0x8c02ae70` (four float-argument forms).
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A pool address followed by `add #k,rN` and a store through `rN` comes from `g_base + k` on an `extern char` array. A constant address is loaded already folded.
- `mov.b; extu.b; or #k` before a byte store is `f |= k` on an `unsigned char` field.
- One load of `o->fXX` reused as the base of later field accesses, across a read-modify-write and a test, comes from a local pointer. Repeating `o->fXX->` reloads it.
- A flag set to constants on both arms of an if/else keeps the source's branch polarity. The negated condition with swapped arms gives the opposite `bt`/`bf`.

## Parked and unresolved

- An argument loaded straight into r4 and zero-extended with `extu.w r4,r4` in the call's delay slot occurs 275 times in the binary, and no admitted function has it. Twenty-two source forms were tried, covering signed and unsigned fields, prototypes, casts, locals, inline wrappers and `volatile`. Every form loads into another register and extends into r4.
- Argument-order and operand-order residues around `jsr` delay slots (`0x8c01fa18`, `0x8c1dc4b8`, `0x8c1280d0`, `0x8c21cac8`) did not respond to source changes.
- An unfolded `add #0,r0` before a field load (`0x8c0262a0`) is not reproduced.
- Large drafts that compile after a single repair are usually far from exact, because float locals are typed as `int`.

Code-only completion and total function count remain unknown.
