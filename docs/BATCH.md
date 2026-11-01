# Reconstruction batch: 280: expanded candidate pool, part 84

1 new matching functions / 856 bytes. All 12282 prior functions preserved.

12283 exact functions in 11367 modules; 1,269,310 compiled function-range bytes; 493,028 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.4909%, image coverage 42.3343%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c121734 | 0x8c121734 | 856 |

## Method

Batch 280 consists of one hand-finished source, a large target (366 differing lines in its first draft) brought to exact over three successive hand passes.

**Hand passes.**
1. The first pass restored the draft's lost behaviour: the draft was 156 bytes short.
2. A second pass took it to 8 lines, using header bindings and a local that packs the colour value.
3. A third pass finished it.

The same round triaged 44 other never-attempted large targets and parked three after attempts.

**Header bindings.** The unit's header binds 12 state globals and 5 callees by address. Each address is a literal-pool value the reference loads. An extern function or global bound by the address the reference uses is the normal binding mechanism. When the same globals are written as cast absolute addresses, the compiler assumes they may alias and reloads them, which costs 128 differing lines.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of the unit were checked:
- the entry follows a literal pool (1);
- the unit overlaps no admitted function;
- no branch from outside the unit lands in it;
- the entry is 4-aligned.

## Measured attempts

1 recorded attempt on 1 target, exact. 1 unit / 1 function / 856 bytes was admitted after two independent reproductions, a hand-finished source.

Disclosure:
- The admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Per function**, the change that made the source exact:
  - `0x8c121734` (856 bytes): clean rewrite of the colour/state blend. Changes:
    - behaviour restored: the draft was 156 bytes short;
    - the state globals are bound in the header (above);
    - the colour is packed through a local: `c = R << 16; c |= G << 8; p->color = B | c`. Declaring `c` before `ca`/`cb` matters: declared after them, the same source is 82 lines off;
    - the red channel's first operand goes through one float local, `f = (float)((ca >> 16) & 0xff)`, before `cb = b->color` is read. This places the `cb` load after the first unsigned-to-float fix-up branch, as in the reference. `f` is the one introduced temporary;
    - the table is indexed by `(k << 2)` pointer arithmetic.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- The VMU load/verify routine `0x8c17fc24` (CRC-32 over the save buffer) now has a behaviour-correct rewrite at the exact size. Its residue is register allocation in the CRC loops.
- Several targets remain close at the exact size: `0x8c01dea8` and `0x8c0a9cbc` (24 lines each), `0x8c212c9c` (180 lines). They seed later passes.
- **Just-in-time address computation through r0/r1 for float fields**, **register relabelling after a join**, **angle-constant float scheduling**, **callee-saved colouring**, **argument-register order around a call's delay slot** and **in-place extension** remain the main residue classes.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
