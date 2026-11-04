# Reconstruction batch: 282: expanded candidate pool, part 86

2 new matching functions / 1,172 bytes. All 12304 prior functions preserved.

12306 exact functions in 11375 modules; 1,278,590 compiled function-range bytes; 524,768 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.7138%, image coverage 43.3196%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01dea8 | 0x8c01dea8 | 572 |
| operation_8c040ab8 | 0x8c040ab8 | 600 |

## Method

Batch 282 consists of two hand-finished sources from near misses that already compiled to the exact size.

**Hand pass.** One scratch hand pass took 14 size-exact near misses from earlier passes, using the readable repo state:
- shared class headers;
- admitted sibling functions;
- the non-matching archive.

Two became exact:
- One was ported almost directly from an admitted sibling of the same class family, found by searching the admitted sources for the target's callees.
- The other was fixed by moving a pointer assignment into its first use, which changes the load order and the scratch-register colouring.

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

2 recorded attempts on 2 targets, both exact. 2 units / 2 functions / 1,172 bytes were admitted after two independent reproductions each, both hand-finished sources.

Disclosure:
- Both admitted functions were first found exact in a scratch comparison, as logged in the hand pass's attempt log.
- **Per function**, the change that made each source exact:
  - `0x8c01dea8` (572 bytes), the pad poll:
    - the pointer `src` is assigned inside the store that follows the read of `prev`: `prev = g_8c41ccec.cur; g_8c41ccec.cur = (src = g_8c41ccfc)->cur;`. Its load then comes after the `&g_8c41ccec` literal, so `src` takes r1 and the base takes r3, as in the reference;
    - each of the hold counters is its own block with a block-scoped `short v`;
    - the edge byte is computed through a dead `int k`, which gives the double `extu.b`.
  - `0x8c040ab8` (600 bytes), a quad-sprite render, ported from the admitted sibling `TQuadSpriteNormal_render_8c040804`:
    - the head is `a = g_8c575528.f00; sx0 = a * g_8c57555c; sy0 = a * g_8c575560;`;
    - the half sizes are scaled in place in `sx`/`sy` (`sx *= f2c->f14; sy *= f2c->f18; sx *= s->w; sy *= s->h;`);
    - DECL-ORDER: the sibling's declaration order (`inv, x, y, sx, sy, z`) decides the float colouring;
    - the loop test assigns `d = o->f2c`, a local introduced so that the body reuses the test's load.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- The other 12 size-exact near misses stay parked. Their residues:
  - callee-saved and scratch register colouring;
  - literal hoisting;
  - delay-slot argument order;
  - in-place extension;
  - angle-constant scheduling.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
