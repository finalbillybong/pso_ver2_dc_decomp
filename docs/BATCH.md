# Reconstruction batch: 274: expanded candidate pool, part 78

20 new matching functions / 5,724 bytes. All 12248 prior functions preserved.

12268 exact functions in 11289 modules; 1,240,640 compiled function-range bytes; 492,980 typed static-data bytes; 308,139 retained reference bytes. Code-range coverage 29.8022%, image coverage 41.6444%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01d8d4 | 0x8c01d8d4 | 180 |
| operation_8c01d9dc | 0x8c01d9dc | 160 |
| operation_8c03ca54 | 0x8c03ca54 | 388 |
| operation_8c07c454 | 0x8c07c454 | 96 |
| operation_8c0cd148 | 0x8c0cd148 | 356 |
| operation_8c1030a4 | 0x8c1030a4 | 164 |
| operation_8c110a74 | 0x8c110a74 | 256 |
| operation_8c1138bc | 0x8c1138bc | 224 |
| operation_8c1199cc | 0x8c1199cc | 208 |
| operation_8c1337ec | 0x8c1337ec | 440 |
| operation_8c150b74 | 0x8c150b74 | 280 |
| operation_8c1581d8 | 0x8c1581d8 | 508 |
| operation_8c15b8cc | 0x8c15b8cc | 216 |
| operation_8c17327c | 0x8c17327c | 320 |
| operation_8c18c96c | 0x8c18c96c | 320 |
| operation_8c197298 | 0x8c197298 | 392 |
| operation_8c1b3f88 | 0x8c1b3f88 | 256 |
| operation_8c1e0e4c | 0x8c1e0e4c | 168 |
| operation_8c22afc0 | 0x8c22afc0 | 392 |
| operation_8c2319e4 | 0x8c2319e4 | 400 |

## Method

Batch 274 consists of hand-finished near misses from never-tried targets with 61–150 differing lines.

**Hand passes.** Two scratch hand passes took the 82 parked targets at 61–150 differing lines that no hand pass had tried. Each was first redrafted with the current generator. The rules of batches 266–273 applied. Most of the large differences turned out to be lost behaviour in the generated drafts rather than code generation:
- jump-table switches the generator had replaced with a call to one of the table's targets, which lost whole case bodies;
- dropped frame stores and dropped direction rotations;
- invented call arguments.

Restoring the behaviour made about half of the admitted functions exact.

Techniques:
- case bodies written in the reference's layout order, because CodeWarrior lays them out in source order;
- empty case labels to reproduce a table's base and range;
- named masks where a literal would become a shift pair;
- static inline helpers for blocks that appear twice;
- `register` on a stack parameter held in a callee-saved register;
- extern struct symbols where the reference adds an offset to a symbol's address.

A scratch generator pass to recover jump tables automatically has started; nothing from it is used here.

**History guard.** One exact source was refused by the history guard and not forced: `0x8c213d70`.

**Not CodeWarrior.** Several parked targets call only through registers other than r0 and use r2 as scratch, which matches the Hitachi SHC shape. They are passed to the SHC track.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3` and no `(v >= 0 ? v : v)`;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (18) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

21 recorded attempts on 21 targets, all exact; 1 was refused by the history guard. 20 units / 20 functions / 5,724 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- `0x8c2319e4` reads a halfword as `*(unsigned short *)(...) & 0xffff`. The mask is redundant for the value but reproduces the reference's second zero extension.
- **Per function**, the change that made each source exact:
  - `0x8c07c454` (96 bytes): clean rewrite of the 6-copy seed: for loop over the pointer table read as *(S **)((char *)0x8c469ae4 + (i << 2)) (array indexing gives mul.l), entry e, dx/dz, best = 1e8 loaded before the n == 0 test; DECL-ORDER: counter i declared before n (n then takes r6, i r5; from dsweep)
  - `0x8c0cd148` (356 bytes): clean rewrite: call_8c38ae68 is void(void) (draft passed invented (v2->f00, v2)); 16-byte Entry {float *dst; a; b} loops with e++; save/restore block written on the globals directly (g_8c575570 |= 0x800; compiler keeps &g_8c575570 in r13, value in r14); second loop uses its own variables f/j (DECL-ORDER e, i, f, j: one shared pair colours the second loop differently)
  - `0x8c1030a4` (164 bytes): colour bytes written as (float)((unsigned int)a1 >> k & 0xff) / 255.0f: the unsigned int type keeps CW's unsigned-to-float fixup branches (the draft's (unsigned char) casts let CW drop them, 72 bytes short); frame stores as plain members
  - `0x8c110a74` (256 bytes): behaviour restored: the draft kept only the 0x10 branch and replaced the 0..8 jump table with a call stub; clean switch (a1) with cases 0 (f84 &= ~0x30, fe0 = owner Vector3 at f7c->f94 + 0x324), 1, 2, 8 and 0x10 in source order, plus one explicit empty 'case 3: break;' (behaviour-neutral; it tips CW into a 0..8 table with 0x10 as a compare outlier — no extra case gives a compare chain, all of 3..7 gives a 0..16 table)
  - `0x8c150b74` (280 bytes): behaviour restored: the draft collapsed the switch (o->f398, cases -1..3) into one call; clean switch with case 0 (ff0 = 4, f31c = -2.27f, state 1), case 1 (f40 += f31c, clamp at 4.6f, state 2, fdc->f18 &= ~4 |= 2, call_8c05fbf8(0x30008, &o->f3c, 0, 0)), case 2 (state 3 unless ff8 < ffc - 1.5f; operand order of the compare decides the float registers), case -1 return placed after case 2 (CW lays case bodies in source order), then refresh_follow_effect; void return
  - `0x8c1581d8` (508 bytes): behaviour restored (draft invalid as C / redraft 300 bytes with both jump tables lost): clean C++ switch (id) under nested positive ifs (o != 0, id < 0x89, a1 == 2), cases grouped by returned offset (0xab4, 0xac8, 0xadc, 0xaf0, 0xb04, 0xb18 off g_8c4daaa4->f20), default base + id * 0x14, id >= 0x89 path through virtual v41(); positive-if nesting puts the null and virtual returns last as in the ref
  - `0x8c17327c` (320 bytes): behaviour restored: the draft returned right after the switch stub (jump table dropped; 280 bytes lost); clean switch (current_effect_mode()) with cases 0 (operation_8c01c25c() == 0xf ? 0 : 1), 1-2, 3-5, 6/7/13, 8-10 setting idx, cases 11/12/14/15 sharing the default return (gives the 16-entry table), then the two allocate_block/hang/call_8c172d28 branches on g_8c2e2ad8 == 1 && g_8c4703c0 == 3 with idx <<= 2 in place
  - `0x8c197298` (392 bytes): clean rewrite of the goto/pm tangle: nested for loops with short counters i < 0x16, j < 9, row = i * 0x24 once per outer iteration, the 0x650 index offset and 0x318 stride named (k, m) before the loop (both load-bearing: callee-saved r11/r10), cell pair a/b read as *(int *)((char *)((char *)o + 0x20) + idx * m + row + (j << 2)) and (idx ^ 1), three-way blend call; t clamped in place and u = 1.0f - t
  - `0x8c1e0e4c` (168 bytes): clean rewrite of the goto/8-reread seed: 6-byte id loop over p = g_8c41ccec.ids (extern struct symbol, so the +2 stays an add #2; a constant address folds into the literal), break on c <= 3, != && chain returning 1, then four || flag tests on g.flags; DECL-ORDER: c, p, i (p before counter i gives p r4, i r5; from dsweep)
  - `0x8c01d8d4` (180 bytes): two identical id-to-mask loops written as one static inline collect(int *dst, unsigned char *ids) called for &o->tag/g+2 and &o->f08/g+8 (draft's duplicated loops with re-read bytes replaced; byte read once into int c); DECL-ORDER in helper: j, c, i
  - `0x8c01d9dc` (160 bytes): clean for loops with literal constants (the held zero/limit registers are CW constant CSE, not locals); Block16 copy written as four word stores (struct copy formed the &g+8 address); record pointer p++; DECL-ORDER i, p, j
  - `0x8c03ca54` (388 bytes): behaviour restored: draft dropped the f04 update in the 0x200 branch (frame.y += -(v1 * cos(angle) * 0.4f) * o->f2c with the call result); record offset v28 = o->f34 * 0x3c computed once at the top and used by all record reads; speed v1 (+0x3c) read before the int heading v2 (+0x38), both through the +0x20 record base (ASSIGN-ORDER)
  - `0x8c1138bc` (224 bytes): clean rewrite with the 0x8c4d82xx block as extern globals (Owner *g_8c4d8200, Pair g_8c4d8204, IPair g_8c4d820c, int g_8c4d8214, Triple g_8c4d8218, int g_8c4703c0; symbols added to header) so pairs store through one base; g_8c4d8200 read once into v after the branch, g_8c4d8204.f00 read once into m; f430->f04 through int t (from draft v7, load-bearing: fixes r3/r4); decl-insensitive
  - `0x8c1199cc` (208 bytes): clean rewrite of the confused draft (node/pair pointers were swapped and the first node never set): ring index read once into int i before each node/pair pair, read as *(Node **)((char *)o->f30 + (i << 2)) and (Pair *)((char *)o->f90 + (i << 3)) (shifts, no mul); named mask m = -9; t reused for both wrapped increments; DECL-ORDER p, m, n, t, i
  - `0x8c1337ec` (440 bytes): draft's 32-byte block at +0x24 split into two 16-byte members f24/f34 (ref copies 4 words each from o+0x60/o+0x70 to g+0x24/g+0x34): the camera copy is f0c, f24, f34, f18 written twice as in the ref (draft copied a different set); goto chain written as switch (o->f80) cases 0-3, temporaries cleaned
  - `0x8c15b8cc` (216 bytes): clean for search loop over 24-byte records at g_8c4dab80 with off = i * 0x18 once per iteration; every record field read from the global directly through (char *)(g + k) + off (draft's v1/v3 base locals and in-place v1 += 0x14 removed: the global base then takes scratch r6 and the compiler advances it for the f14 read); empty flag f = (f16 == 0) tested as f == 0 (load-bearing: gives tst/movt/tst; != 0 spelling is 4 bytes shorter)
  - `0x8c18c96c` (320 bytes): behaviour restored: the draft collapsed the 2..10 jump table into a bogus call_8c18ca06 and lost cases 2/5/8/10; rewritten as switch ((short)a2) with case bodies in reference layout order (6/18, 10, 2, 8, 5), a2 int with (short) casts at the switch and table index, flag = 1 cleared per case, effect pointer e = r->f6c read once; DECL-ORDER q before flag (g_8c4dc800 and operation_8c01c25c added to header, call_8c18ca06 dropped)
  - `0x8c1b3f88` (256 bytes): element e = *(int *)(o->f398->f42c + 8 + (table[i] << 4)) read once per iteration before the switch (draft re-read it in every case, so cases 0-5 now share it as in the ref); case 2-4 shared label, case 5 two calls; 0x398 and 0x42c named in int k1/k2 before the loop (load-bearing: literal offsets differ); all pm/cast chains removed
  - `0x8c22afc0` (392 bytes): behaviour restored: draft collapsed the a3 jump table into a bogus call_8c22b04c and tested (ushort)a2 >= 0; rewritten as switch (a3) choosing the effect id (6/8 0x99, 7 0x98, 9 0x96, 10 0x95, 0 0x97, default return 0), a1/a2 rebased in place by g = g_8c418248; first alignment mask named m = -4 after the global read (load-bearing: a literal -4 becomes shlr2/shll2; the second test keeps the >> 2 << 2 form); allocated node body through the CW21 scoped self home; frame Vector3 pos for the b1a4/create_effect pair
  - `0x8c2319e4` (400 bytes): behaviour restored: draft turned the kind jump table into a bogus call_8c231a6c; rewritten in C++ as switch (kind) with cases 0-4 (Unit class with 0x18 bytes of data before the vptr, v13/v17 int virtuals); record table as extern Rec g_8c41bd34[] (0xbc bytes) with a0 *= 0xbc in case 2 and the halfwords read as *(ushort *)((char *)&g[0].fa4 + a0) & 0xffff (field base first as in ref; DISCLOSE: the & 0xffff on an unsigned short read is load-bearing, it gives the second extu.w; a plain (unsigned short) cast does not); g_8c338bc8/g_8c41bd34 externs added for the runtime base+offset adds; DECL-ORDER u, kind, slot, name, level, q (from dsweep)

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Argument-register order around a call's delay slot**, **in-place extension** and **float field-address forms** remain the main residue classes.
- Several parked targets now have restored behaviour and are within a few lines; they seed the next passes.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
