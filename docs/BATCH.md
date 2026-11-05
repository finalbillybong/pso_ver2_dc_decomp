# Reconstruction batch: 285: expanded candidate pool, part 89

2 new matching functions / 144 bytes. All 12325 prior functions preserved.

12327 exact functions in 11396 modules; 1,285,474 compiled function-range bytes; 524,768 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.8792%, image coverage 43.4850%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c029bc0 | 0x8c029bc0 | 84 |
| operation_8c2552bc | 0x8c2552bc | 60 |

## Method

Batch 285 consists of two sources ported from admitted sibling functions.

**Sibling ports, round 3.** This round looked for siblings by what functions reference rather than by instruction similarity. Admitted functions were ranked for each unmatched function by the Jaccard similarity of their referenced callees and globals (at least 0.5), with these further conditions:
- size within ±25%;
- the same number of calls;
- an opcode-sequence ratio of at least 0.70.

This gave 146 pairs over 77 unmatched functions. Two targets became exact by adapting their sibling's C.

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

2 recorded attempts on 2 targets, both exact. 2 units / 2 functions / 144 bytes were admitted after two independent reproductions each, both hand-finished sources.

Disclosure:
- Both admitted functions were first found exact in a scratch comparison, as logged in the pass's attempt log.
- **Per function**, the change that made each source exact:
  - `0x8c029bc0` (84 bytes): a packet send ported from `operation_8c02688c`.
    - The packet header is overwritten to 0x0c/3, the same way the sibling overwrites 0x1a/1 with 0x2d/1.
    - It also takes an 8-byte struct parameter, passed on the caller's stack and copied into the frame at +4.
  - `0x8c2552bc` (60 bytes): an item update ported from `TItemMag_v44_8c07d1ac`.
    - It calls `call_8c1931d4(o->f13c->f20, 1, o->f138 - 0x27, -1)` without the sibling's clamp and stores the result to f1c4.
    - The struct layout is copied in under a neutral name; the source does not claim the sibling's class.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- The new near misses are parked. Their residues:
  - scratch-register choice for a block-local draw pointer and an OR temporary;
  - callee-saved colouring in a quest-opcode reader;
  - delay-slot argument order.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
