# Reconstruction batch: 281: expanded candidate pool, part 85

2 new matching functions / 1,792 bytes. All 12302 prior functions preserved.

12304 exact functions in 11373 modules; 1,277,418 compiled function-range bytes; 493,028 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.6857%, image coverage 42.5290%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0eac00 | 0x8c0eac00 | 1260 |
| operation_8c1744ec | 0x8c1744ec | 532 |

## Method

Batch 281 admits two exact sources held back since batches 262 and 266. Each passes an argument its callee does not read.

**Rule refinement.** Sources that pass an argument the callee does not read were not admitted, because such an argument can be invented to steer code generation. The rule is now narrower. An unread parameter is admissible when both of these hold:
- the reference's own call site loads the value into that argument register;
- removing the argument changes the bytes.

The argument is then part of the original call, for example an unused `this` or a trailing flag. Arguments added only to steer code generation, or that no reference instruction sets, stay excluded. The same refinement admitted two SHC units with unread parameters (published separately; see docs/SHC.md, "Unread parameters").

Both units here pass the test:
- `0x8c0eac00` (case 2) calls `operation_8c0eb5c0` with `o`. The reference sets r4 from r14 in the call's delay slot, and the admitted callee never reads r4.
- `0x8c1744ec` calls the empty stub `operation_8c156d30` with a fourth argument 0. The reference sets r7 to 0 before the call, and the admitted callers `0x8c107084`, `0x8c1d41b4` and `0x8c1a38c4` also pass four arguments.

Without the argument, neither source produces the reference's register load. The per-file extern prototypes therefore differ from the admitted callee definitions, as several admitted units already do (batch 266).

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no argument that no reference instruction sets;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

2 recorded attempts on 2 targets, both exact. 2 units / 2 functions / 1,792 bytes were admitted after two independent reproductions each, both hand-finished sources.

Disclosure:
- Both admitted functions were first found exact in scratch comparisons in earlier hand passes and held under the previous rule.
- **Per function**, the change that made each source exact:
  - `0x8c0eac00` (1,260 bytes): switch rewrite with a float-first prototype for operation_8c04b230(float, float, int, int), as in admitted `0x8c097b8c`. The first call computes `(float)(unsigned)t1` and the colour inline as arguments. Outer case 0 ends with `break`, so the inner jump table's empty cases reach the epilogue. Case 2 calls `operation_8c0eb5c0(o)`, an unread argument set by the reference.
  - `0x8c1744ec` (532 bytes): CW21 scoped base copy of the stack-homed `o` for the f60 test and the variadic call arguments. `operation_8c156d30` gets its fourth argument 0, an unread argument set by the reference and passed by the other admitted callers.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- The `(v >= 0 ? v : v)` state-index family (`0x8c0f8b64` … `0x8c0fa73c`) and the 20+-temporary search results (`0x8c109ecc`, `0x8c17963c`) stay held.
- `0x8c08076c` stays held: its source needs a dead store.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
