# Reconstruction batch: 284: expanded candidate pool, part 88

2 new matching functions / 676 bytes. All 12323 prior functions preserved.

12325 exact functions in 11394 modules; 1,285,330 compiled function-range bytes; 524,768 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.8757%, image coverage 43.4815%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0402c8 | 0x8c0402c8 | 584 |
| operation_8c0900a0 | 0x8c0900a0 | 92 |

## Method

Batch 284 consists of two sources ported from admitted sibling functions.

**Sibling ports, round 2.** The similarity search was repeated against the admitted set after batch 283, at a looser threshold: opcode-sequence ratio of at least 0.80, size within 15%. This gave 1,209 pairs over 177 unmatched functions. One new CodeWarrior target became exact by porting a function admitted in batch 283. Two further exact sources need the Hitachi SHC compiler and go through the SHC track separately.

**Second attempt at `0x8c0402c8`.** In batch 283 the first trial of this unit failed to link: its source included a shared class header the trial unit could not declare, and the inlined form was compiled as C++ and mangled the entry symbol. That trial is recorded as non-exact. The resubmitted source is self-contained C: the class layout is defined in the unit and there is no include. It is recorded as a new, distinct hypothesis that addresses the recorded blocker. The history guard accepted it; it was not forced.

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

2 recorded attempts on 2 targets, both exact (one is the second hypothesis for `0x8c0402c8`, after the non-exact first trial in batch 283). 2 units / 2 functions / 676 bytes were admitted after two independent reproductions each, both hand-finished sources.

Disclosure:
- Both admitted functions were first found exact in a scratch comparison, as logged in the pass's attempt log.
- **Per function**, the change that made each source exact:
  - `0x8c0402c8` (584 bytes), a quad-sprite render ported from the admitted `TQuadSpriteNormal_render_8c040804`:
    - no early return;
    - `sq_header3` at the top of the visible branch;
    - the flush inside the group loop.
    - The `TQuadSpriteNormal` layout is defined in the unit, with its dispatch pointer at 0x18.
  - `0x8c0900a0` (92 bytes), an area-table lookup ported from the batch-283 admission `operation_8c08da4c`:
    - table 0x8c2ee8b8;
    - compare `k == id`;
    - the index is incremented before the 16-byte entry step, and this statement order decides the add placement.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- The new sibling near misses are parked. Their residues are:
  - delay-slot argument order;
  - argument scheduling for `draw_extended_at`;
  - the home-reload placement in `TFontSmallTask` constructor variants;
  - register choice for a record copy.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
