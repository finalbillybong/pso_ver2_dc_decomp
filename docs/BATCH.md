# Reconstruction batch: 278: expanded candidate pool, part 82

3 new matching functions / 4,216 bytes. All 12278 prior functions preserved.

12281 exact functions in 11365 modules; 1,267,126 compiled function-range bytes; 493,028 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.4385%, image coverage 42.2818%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0af2a0 | 0x8c0af2a0 | 960 |
| operation_8c19a83c | 0x8c19a83c | 1624 |
| operation_8c22f4fc | 0x8c22f4fc | 1632 |

## Method

Batch 278 consists of hand-finished sources from large targets, 476 or more differing lines, that no earlier hand pass had tried.

**Hand passes.** Four scratch hand passes ran in this round:
- one on 13 follow-up targets from earlier passes;
- one on 35 never-tried targets of 302–454 lines;
- one on 50 never-tried targets of 476 lines or more, each first redrafted with the current generator;
- one on 8 near misses.

A scratch sweep also replaced function-pointer casts on callees with extern prototypes bound by address. It improved 83 near-miss sources and made 148 worse, so it is a per-function choice and was not adopted wholesale. It produced no new exact function.

Only the third pass produced exact sources. At this size the drafts had mostly lost behaviour: invented call arguments, dropped stack-spilled floats, and rodata strings read as scalars. Clean rewrites restored it.

Recurring forms:
- C++ block scoping (for-init loop counters, locals declared inside case blocks) decides which values get callee-saved registers;
- struct copies of extern `{char c[N]}` globals for rodata string initialisers;
- pointer arithmetic instead of subscripts where subscripts compile to `mul.l`;
- case bodies in the reference's layout order.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

3 recorded attempts on 3 targets, all exact. 3 units / 3 functions / 4,216 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Per function**, the change that made each source exact:
  - `0x8c0af2a0` (960 bytes): clean rewrite of the goto switch draft: 19-entry switch on a0, with case bodies in the reference's layout order 0,2,3,4,6,7,9,11,12,(10,13,15,16),17,18; Entry {pad[0xa0]; List l {int n; Item item[]}} with single-case items as (Item *)((char *)&t->l + 4) and loop items as (char *)&t->l + (k << 3) + 4 (subscripts give mul.l or a folded 0xa4); unsigned short none = 0xffff in case 7, whose count k is declared second (DECL-ORDER); the case 10/13/15/16 count reuses the dead parameter a0 (load-bearing, r10 as ref); the second parameter is void * copied into a typed local o after the null test (an introduced local; it gives the reference's late register copy)
  - `0x8c19a83c` (1,624 bytes): clean C++ rewrite of the two key-menu switches (seed 930 lines): S3/S5/S7 {char c[N]} struct copies of the rodata key strings (dt copy loops / unrolled 3-byte copies); draw blocks if (operation_8c01d858(b, mask, 6, 1) != 0 || operation_8c01d844(g_8c41cba0 + 0x110, mask, 6, 1) != 0) with void * prototypes and char *b = g_8c41cba0 + 0x20 named per case block; unsigned char c read from the global before the copy and o->f84 stored before the second copy; C++ block scoping decides the callee-saved homes: for-init loop counters and per-case-block b/c/c2 locals give the Object *o parameter r14 with its prologue copy as in the reference (function-level locals move o to r12); DECL-ORDER c before b in case 2/3, b, c, c2 in case 4/5; table indexed by pointer arithmetic
  - `0x8c22f4fc` (1,632 bytes): twin of `0x8c19a83c`: the same C++ source with its own key strings, callee, globals, table at +0xe4 and flag at +0x104; exact by the same block scoping and declaration orders

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- 23 targets improved substantially in this round and have parked hand sources in scratch, several at the exact size within a few to a few dozen lines, for example 2 lines (`0x8c14d904`, in-place extension) and 10 lines (`0x8c0ecb30`, delay-slot scheduling). They seed later passes.
- **Argument-register order around a call's delay slot**, **in-place extension**, **callee-saved and scratch register colouring** and **prologue loading of stack parameters** remain the main residue classes.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
