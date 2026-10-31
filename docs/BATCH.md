# Reconstruction batch: 273: expanded candidate pool, part 77

19 new matching functions / 3,838 bytes. All 12210 prior functions preserved.

12229 exact functions in 11258 modules; 1,233,792 compiled function-range bytes; 492,980 typed static-data bytes; 308,255 retained reference bytes. Code-range coverage 29.6377%, image coverage 41.4799%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c013620 | 0x8c013620 | 42 |
| operation_8c01c5f0 | 0x8c01c5f0 | 584 |
| operation_8c0262a0 | 0x8c0262a0 | 124 |
| operation_8c034d28 | 0x8c034d28 | 248 |
| operation_8c03b290 | 0x8c03b290 | 30 |
| operation_8c07f034 | 0x8c07f034 | 52 |
| operation_8c08fd58 | 0x8c08fd58 | 144 |
| operation_8c0dd018 | 0x8c0dd018 | 292 |
| operation_8c0e9cc4 | 0x8c0e9cc4 | 280 |
| operation_8c0f7fbc | 0x8c0f7fbc | 76 |
| operation_8c10b388 | 0x8c10b388 | 240 |
| operation_8c10bc84 | 0x8c10bc84 | 456 |
| operation_8c13ef48 | 0x8c13ef48 | 104 |
| operation_8c13f258 | 0x8c13f258 | 84 |
| operation_8c17e620 | 0x8c17e620 | 80 |
| operation_8c184614 | 0x8c184614 | 192 |
| operation_8c18cb7c | 0x8c18cb7c | 50 |
| operation_8c229d88 | 0x8c229d88 | 504 |
| operation_8c258f34 | 0x8c258f34 | 256 |

## Method

Batch 273 consists of hand-finished near misses from targets no hand pass had tried before.

**Hand passes.** Two scratch hand passes took the 121 parked targets within 1–60 differing lines that no earlier hand pass had tried. Each target was first redrafted with the current generator, and the better of the two starts was kept. The passes used the rules of batches 266–272:
- any byte-exact ordinary C or C++ source counts;
- declaration order and placement may decide a match;
- the pinned compiler and flags only.

New techniques:
- `register` on a stack parameter loads it into a callee-saved register at entry;
- a static inline accessor called with index 0 reproduces an unfolded `add #0`;
- a field address written base-first, `(char *)(b + 0x10) + off`, keeps it from being folded into a displacement;
- switch rewrites with cases in the reference's layout order;
- an assignment inside a conversion, `(unsigned int)(f = expr)`.

Several drafts had lost behaviour: a dropped frame store, dropped call arguments, or a value read after a call instead of before it. Restoring that behaviour made them exact. Every statement move was checked by hand for unchanged behaviour.

**Not CodeWarrior.** About 30 targets in and next to the runtime-library block 0x8c12b0a4–0x8c12f6a0 have the Hitachi SHC code shape. They are passed to the SHC track.

**Compiler build study (scratch only).** The Japanese Katana SDK R2.00J contains a later build of the pinned CodeWarrior compiler (runtime built 12 May 2000; the pinned build is 21 March 2000). It was tested and gave identical output on 50 corpus functions and no improvement on 40 near misses. It also breaks 1 of 60 admitted functions, so it is not the game's compiler, and the pinned compiler stays. Nothing from it is used.

These still hold:
- full-range exact only, with the padding rule;
- no `-O3` and no `(v >= 0 ? v : v)`;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (16) or a function end (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

19 recorded attempts on 19 targets, all exact. 19 units / 19 functions / 3,838 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

3 units were admitted under the padding rule at their code size: `0x8c013620` (42 of 44), `0x8c03b290` (30 of 32) and `0x8c18cb7c` (50 of 52). In each, the reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Per function**, the change that made each source exact:
  - `0x8c0262a0` (124 bytes): unfolded add #0: f01 read through a static inline accessor elem_f01(p, i) returning p[i].f01 (unsigned short), called with index 0; seed structure otherwise unchanged
  - `0x8c13ef48` (104 bytes): clean for loop: table base read once per iteration into char *b (ref loads it once for both the compare and the argument), record field read as *(int *)((char *)(b + 0x10) + off) (field base first, then the i << 5 offset), argument b + off + 4, frame copy as a Vector3 local
  - `0x8c17e620` (80 bytes): clean CRC-32 rewrite (unsigned char *p parameter, nested for loops, c ^= p[i], if/else shift-xor, return c ^ -1); polynomial k and length n = 0x16fc named before the loop (ASSIGN-ORDER k, n, c: k takes r14, n r13); DECL-ORDER c, i, j, k, n
  - `0x8c258f34` (256 bytes): missing frame store added (frame.f0c = second table[a4], read through &frame.f10 + idx before the call; Frame gets an int f0c field); stack parameter a4 declared 'register unsigned int a4' (loaded into callee-saved r14 at entry as in the ref); generator home-slot idiom for o kept
  - `0x8c01c5f0` (584 bytes): v17 = o->ffc - 1.0f hoisted to the top of case 0, before o->fe8 &= -0x2b (ref reads ffc into fr15 before the ff0 != ff2 test and the call_8c01c9e8 call; the draft computed it after the call, so behaviour is also restored); seed otherwise unchanged 
  - `0x8c034d28` (248 bytes): STATEMENT ORDER: o->tag = 0 store moved after the v28 = v5 * 0x2c + g_8c2f5b38 record computation (independent; from ssweep); seed otherwise unchanged 
  - `0x8c07f034` (52 bytes): clean rewrite: one unsigned char v1 = o->f136 clamped in place (if (v1 >= 0x39) v1 = 0x39) and used for the bound test and the table index (draft's v1/v2 copy and casts removed) 
  - `0x8c08fd58` (144 bytes): loop id variable v4 typed short (was int; the (short)v4 cast dropped) so the entry id's raw load stays in r3 and the extended copy in r1; unreachable post-goto draft statements (v4 = clobbered 0) removed; goto layout of the seed kept (for/while rewrites 10/16 lines) 
  - `0x8c0dd018` (292 bytes): DECL-ORDER: int v2 (the 0x308 offset) declared first (from dsweep); invented v22 = 0xf temporary removed 
  - `0x8c0e9cc4` (280 bytes): clean switch (o->f20) rewrite of the goto draft (empty float-range if removed): case 0 counter through unsigned n = o->f24 + 1, float f assigned inside the unsigned conversion of the limit test ((unsigned int)(f = (float)v2 * 2.0f)) and passed to call_8c22c970 (gives the fr2 temporary with the fr4 copy in bf/s); case 1 counter reuses the dead int v2; one t1 for the three allocations 
  - `0x8c0f7fbc` (76 bytes): clean for loop over 8-byte slots at a0 + (i << 3) + 0x3d4 with both offsets named before the loop (k = 0x3d4, m = 0x40c for the owner's f40c clear; both load-bearing); DECL-ORDER: counter v1 declared first, then v2, k, m (from dsweep) 
  - `0x8c10b388` (240 bytes): handler-table entry pointer p = (S_x68400 *)(o->f88 * 0x14 + g_8c30bcb0) computed once at the top, before the f98 countdown test (ref forms it in r14 first), and used for both the f10 and f0c calls; draft's per-use v212 offset removed 
  - `0x8c10bc84` (456 bytes): goto tangle rewritten as switch (v7) with the 5-argument call_8c028430(id, 5, table[a0], v13, g_8c4d7d38) in every case (the draft dropped v13 via 4-argument casts in cases 1-3/default: behaviour restored), range test as v7 >= 0 && 2 >= v7, the 0xc6 clamp in place on v13 (v14 removed), tables read as *(void **)((a0 << 2) + table) 
  - `0x8c13f258` (84 bytes): clean rewrite of the cast draft over a 12-byte Rec g_8c4d9c6c[32]: byte offset off = i * 0xc computed once per iteration, 0xffff and -1 named in int m/n before the loop (both load-bearing; callee-saved creation order); fields written through &g[0].f04/&g[0].f08 + off; extern g_8c4d9dec for the zero store; DECL-ORDER i, m, n, off 
  - `0x8c184614` (192 bytes): clean rewrite: index v = g_8c4dbb44 & 7 computed once into a local (tested against g_8c4dbb4c and passed in r5), switch cases end in break instead of return (draft re-read the global per case and tail-returned) 
  - `0x8c229d88` (504 bytes): slot loop: the 0xf4 + i * 0xc argument address computed into the reused int v37 before the slot test, created effect stored to the slot then re-tested (t5 removed); f72 block writes the g_8c338078 position as one Vector3 copy into &o->fd8 (v46/v53 field copies removed) 
  - `0x8c013620` (42 bytes): padding rule: code exact at 42/44 (trailing .word 0), header size 42; clean rewrite: a0 typed as S_vv1 * parameter advanced in place (a0++), count n = a1 >> 3 with a1 unsigned (param copy then schedules first, as in the ref); pm/cast chain removed
  - `0x8c03b290` (30 bytes): padding rule: code exact at 30/32 (trailing .word 0), header size 30; return type unsigned char (extu.b fills the rts slot); redundant unsigned casts dropped
  - `0x8c18cb7c` (50 bytes): padding rule: code exact at 50/52 (trailing .word 0); clean rewrite: short id = o->f54 read first, table entry e = *(Arg0_58 **)((char *)((char *)o + 0x58) + (id << 2)) read before the record pointer (o + (f52 << 3) + 0x7c), then the three stores; o->f58[] subscript gave mul.l; header size 50 

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Argument-register order around a call's delay slot** and **in-place extension** remain the largest groups.
- **New recurring classes:**
  - a constant stored to a global through r0 instead of being sunk into a delay slot;
  - the destination address loaded before the right-hand side;
  - an unreachable `bra`/`nop` pair after a switch dispatch.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
