# Reconstruction batch: 279: expanded candidate pool, part 83

1 new matching functions / 1,328 bytes. All 12281 prior functions preserved.

12282 exact functions in 11366 modules; 1,268,454 compiled function-range bytes; 493,028 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.4704%, image coverage 42.3137%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c1209d8 | 0x8c1209d8 | 1328 |

## Method

Batch 279 consists of one hand-finished source from a large target (476 or more differing lines) that no earlier hand pass had attempted.

**Hand passes.** Three scratch hand passes ran in this round:
- one on 42 never-attempted targets of 476 lines or more;
- one on 23 never-attempted targets of 302–454 lines;
- one on 5 near misses from earlier passes.

Only the first produced an exact source. As in batch 278, the draft had lost behaviour:
- an invented call argument;
- a dropped result store;
- a float converted again at each use instead of once.

A clean rewrite restored it.

Header bindings: an extern function or global bound by the address the reference uses is the normal binding mechanism, and hand passes may now add such bindings. The admitted unit uses its seed header unchanged.

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

1 recorded attempt on 1 target, exact. 1 unit / 1 function / 1,328 bytes was admitted after two independent reproductions, a hand-finished source.

Disclosure:
- The admitted function was first found exact in a scratch comparison, as logged in the hand pass's attempt log.
- **Per function**, the change that made the source exact:
  - `0x8c1209d8` (1,328 bytes): clean C++ rewrite of the switch draft:
    - the angle `int ang = (int)(atan2 * 65536 / 2pi)` is computed once after call_8c37f6f0 (the draft converted the float again at each use);
    - the virtual slot-0x94 method is called with one argument (the draft passed an invented second argument);
    - `o->f64 = angle_step(...)` stores the result the draft dropped;
    - the message blocks are explicit frame stores;
    - the case-1 loader blocks are flat `&&` chains joined by `else if`;
    - the case-2 test is written `(f3cc != 0 && !hierarchy_is_active(f3cc)) || f3cc == 0`, which is logically `!f3cc || !hierarchy_is_active(f3cc)` and reproduces the reference's reload of f3cc;
    - a dead int `t` is reused for the `(f350 & 1) != 0` flag;
    - field fd4 is read as `(fd4 & 0xffff)` on an unsigned short, which reproduces the reference's observed double `extu.w`.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- Several large targets are now close at the exact size, for example `0x8c121734` (8 lines) and `0x8c01dea8` (24 lines). Others had large behaviour restorations, among them `0x8c212c9c` (872 → 180 lines) and `0x8c07f0a4` (616 → 308). They seed later passes.
- Six targets in the 0x8c12b–0x8c12d and 0x8c1f2e98 regions are Hitachi SHC library code (strtol and `__divlu`/`__divls` callers) and belong to the SHC track.
- **Load placement across a branch**, **register relabelling after a join**, **angle-constant float scheduling**, **callee-saved colouring**, **argument-register order around a call's delay slot** and **in-place extension** remain the main residue classes.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
