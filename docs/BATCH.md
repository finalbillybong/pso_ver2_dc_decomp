# Reconstruction batch: 277: expanded candidate pool, part 81

9 new matching functions / 5,098 bytes. All 12269 prior functions preserved.

12278 exact functions in 11362 modules; 1,262,910 compiled function-range bytes; 493,028 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.3372%, image coverage 42.1805%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02a9f8 | 0x8c02a9f8 | 364 |
| operation_8c034e20 | 0x8c034e20 | 518 |
| operation_8c040804 | 0x8c040804 | 576 |
| operation_8c0bbd84 | 0x8c0bbd84 | 416 |
| operation_8c0e2328 | 0x8c0e2328 | 448 |
| operation_8c1b6284 | 0x8c1b6284 | 908 |
| operation_8c1c7e08 | 0x8c1c7e08 | 500 |
| operation_8c1c88b0 | 0x8c1c88b0 | 728 |
| operation_8c2269a8 | 0x8c2269a8 | 640 |

## Method

Batch 277 consists of hand-finished sources from large targets, 151–300 differing lines, that no earlier hand pass had tried.

**Hand passes.** Three scratch hand passes took 57 never-tried targets and redrafted each with the current generator. At this size the differences were mostly lost or wrong behaviour in the drafts rather than code generation:
- invented or missing call arguments;
- dropped stores, loops or a whole second function in the unit;
- `/* TODO */` holes;
- loop recomputations folded away;
- function-pointer casts in place of extern prototypes.

Clean rewrites that restored the behaviour, then declaration sweeps, made the targets exact. Recurring forms:
- values with separate lifetimes kept in one variable where the reference shares a register;
- a value loaded in a loop test reused in the body through assignment;
- pointer arithmetic rather than subscripts for 2-, 0x14- and 0x2c-byte elements, because subscripts compile to `mul.l` here;
- static inline helpers, used outside `||`/`&&` conditions;
- explicit case labels to reproduce a jump table's range.

**History guard.** Two exact sources were refused by the history guard and not forced: `0x8c145334` and `0x8c213438`.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (7) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

11 recorded attempts on 11 targets, all exact; 2 were refused by the history guard. 9 units / 9 functions / 5,098 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

1 unit was admitted under the padding rule at its code size: `0x8c034e20` (518 of 520). The reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Per function**, the change that made each source exact:
  - `0x8c1b6284` (908 bytes): clean C++ rewrite of the redraft (size was already exact): effect-slot pointers named per case (case 0xd uses the s4/s3 variables for o+0x41c/o+0x424, sharing r10/r11 with case 0xe's s4/s3 as ref), *slot = create_effect_769c() tested in the if, for (i = 0; i < 0x40; i++, p += 0xc) increment order, final release loop with counter k and the 0x3f8 base held in the dead first-loop counter i (load-bearing: fixes the r8/r10 swap); Phase table g_8c3268ec[] read as (char *)&g[0].field + f390 * 0x2c; DECL-ORDER dependent (67/177 single-move/swap orders exact; seed order kept) 
  - `0x8c1c7e08` (500 bytes): behaviour/types restored from the switch draft: one result v for every case (0 initial, clamped >= 0 at the end), unsigned char f01 (extu.b at the == 3 / == 2 tests, passed unextended), case-0 a = (float)p->f08 + (float)o->f03 squared in place, attr bytes read by pointer arithmetic, dead float f reused for the (unsigned char) operation_8c158794 result and dead int i for o->f02 + 1 (both load-bearing: inline forms 22/10 lines), case-1 alternate product through dead float a (a = (uchar)op_7548(o); v = a * f: operand order fixes fmul fr15,fr0); not decl-order dependent (118/118 orders exact) 
  - `0x8c02a9f8` (364 bytes): behaviour restored: the draft invented an (a1 - 1) second argument for operation_1e9610; clean switch (a1) with one-argument calls, short return type, tables read as *(short *)(TABLE + ((short)operation_02c350(a0) << 1)) (array subscript gives mul.l; int return adds exts.w); all t temporaries removed
  - `0x8c040804` (576 bytes): clean rewrite of the goto/clobbered draft: blend if/else, per-row loop for (i = 0; i < (d = o->f2c)->f0c; i++) (descriptor read in the test and reused for the row pointer), uv row copied as four floats from (char *)d->f10 + (i << 4), node list walk, z = out.z read once, w = 1/z, sx/sy scaled in place by f14/f18; DECL-ORDER and statement order decide fr14/fr15: kx declared and computed before ky
  - `0x8c0bbd84` (416 bytes): behaviour restored (draft had 16 TODO holes for the vector zero/normalise blocks): sphere push-out loop over o->f2c (radius < 0 terminates), s->r read once in the loop test into the dead d, best depth spilled as a scalar float, p/nv Vector3 locals, two subtract/normalise(-or-(0,-1,0))/scale/add passes, offset -0xc named in m (load-bearing, CW03) and q = (Vector3 *)((char *)a1 + m) computed once; void return; DECL-ORDER from dsweep (p, nv, depth, n, best, s, half, rr, d, pen, m, q)
  - `0x8c0e2328` (448 bytes): clean rewrite of the bgoto text-measure loop (o->f20 string walked with call_8c04ba30(s, &sjis, 0), newline/space/SJIS-lead cases, narrow/wide width calls, wrap at limit); int c = *s tested then code = (unsigned char)c (gives the in-place exts.b), unsigned short code with the two-byte code built in the int cw (cw = code << 8 | *s++; code = cw: keeps the extu.w before shll8), operation_8c087248 takes an explicit (unsigned char) cast; DECL-ORDER: h before limit (frame slots 8/4) and maxw before dy (fr15/fr12, from dsweep)
  - `0x8c1c88b0` (728 bytes): clean rewrite of the 22-goto draft: float r = 1.0f, switch on the unsigned char o->f02 (CW binary compare tree), cases 0x18/0x19/0x1a each a block with its own found/i/k1/k2 locals (k1 = 0xbcc and k2 = 0x138 named before the loop: callee-saved as ref; i = 0 after found = 0 gives the register copy), byte read once into unsigned char c (double extu.b) and compared twice, cases 0x26/0x27/0x28 two operation_8c03b55c(a1 + 0xbcc, 6/3) lookups with &&-chained byte tests; DECL-ORDER: case 0x18 block declares found, i, k1, k2 and the 0x19/0x1a blocks k1, k2, found, i (each order is load-bearing)
  - `0x8c2269a8` (640 bytes): clean rewrite of the goto draft: switch (o->f20) with case fallthroughs 2..8 (break when a counter is printed), case 0/1 t == 0 || t->f184 == 0 break, short *s = o->f24 named before the calls (r14, shared with t; s[0..4] constant subscripts), int-typed call arguments without casts on the short counters
  - `0x8c034e20` (518 bytes): padding rule: code exact at 518 of the 520-byte range (one trailing zero halfword; header size set to 518). Clean rewrite of the name/record validator: ok/flags results, three static inline name checks (has_nul over the first 13 bytes with an end pointer e declared before p, a block-scoped (c = *q) control-character scan writing bad directly, is_blank), dash fill, (t & o->f18) != t with t = 0xff000000 named, f30/f31/f34 clamps, short-table loops by pointer arithmetic with k = i << 1 named once (CSE for the store), second loop continues the counter (for (; i < 8; i++)), static inline fix_uv with the invalid-first polarity; Object *o parameter (o = a0 copy moves the prologue copy); DECL-ORDER: Row *row declared first (row in r11, base scratch; from dsweep)

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- Many large targets are now within a few to a few dozen lines after their behaviour was restored. They seed later passes.
- **Argument-register order around a call's delay slot**, **in-place extension** and **callee-saved register rotation** remain the main residue classes.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
