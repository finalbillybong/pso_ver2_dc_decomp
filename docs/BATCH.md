# Reconstruction batch: 271: expanded candidate pool, part 75

32 new matching functions / 7,164 bytes. All 12084 prior functions preserved.

12116 exact functions in 11202 modules; 1,217,554 compiled function-range bytes; 493,036 typed static-data bytes; 310,833 retained reference bytes. Code-range coverage 29.2477%, image coverage 41.0912%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01154c | 0x8c01154c | 256 |
| operation_8c01da7c | 0x8c01da7c | 116 |
| operation_8c027614 | 0x8c027614 | 156 |
| operation_8c027c80 | 0x8c027c80 | 82 |
| operation_8c02edf8 | 0x8c02edf8 | 356 |
| operation_8c04bb70 | 0x8c04bb70 | 132 |
| operation_8c065578 | 0x8c065578 | 84 |
| operation_8c09638c | 0x8c09638c | 252 |
| operation_8c0da1d4 | 0x8c0da1d4 | 56 |
| operation_8c0fcaac | 0x8c0fcaac | 248 |
| operation_8c1041b4 | 0x8c1041b4 | 128 |
| operation_8c1363fc | 0x8c1363fc | 300 |
| operation_8c14202c | 0x8c14202c | 436 |
| operation_8c154d28 | 0x8c154d28 | 104 |
| operation_8c154d90 | 0x8c154d90 | 120 |
| operation_8c154f24 | 0x8c154f24 | 1640 |
| operation_8c15aa28 | 0x8c15aa28 | 100 |
| operation_8c1628a8 | 0x8c1628a8 | 300 |
| operation_8c1851d8 | 0x8c1851d8 | 212 |
| operation_8c185378 | 0x8c185378 | 28 |
| operation_8c186f1c | 0x8c186f1c | 96 |
| operation_8c19e2e4 | 0x8c19e2e4 | 10 |
| operation_8c1a8d24 | 0x8c1a8d24 | 112 |
| operation_8c1acd24 | 0x8c1acd24 | 212 |
| operation_8c1ad39c | 0x8c1ad39c | 228 |
| operation_8c1b3cdc | 0x8c1b3cdc | 224 |
| operation_8c1dfbd8 | 0x8c1dfbd8 | 160 |
| operation_8c20775c | 0x8c20775c | 240 |
| operation_8c20aef4 | 0x8c20aef4 | 64 |
| operation_8c219bd8 | 0x8c219bd8 | 124 |
| operation_8c219e54 | 0x8c219e54 | 472 |
| operation_8c248070 | 0x8c248070 | 116 |

## Method

Batch 271 consists of hand-finished near misses whose starting sources came from automated search, plus one source found by a scheduling study.

**Hand passes from search-improved starts.** The search passes of batches 266–269 saved their closest non-exact source for each target. Seven scratch hand passes took the targets whose best saved source was within 1–20 differing lines (about 960 targets) and finished what they could. They used the 29 October rules:
- any byte-exact ordinary C or C++ source counts;
- declaration order and placement may decide a match;
- the pinned compiler and flags only.

Recurring fixes:
- table lookups in integer arithmetic with the shifted index first, `*(T *)((i << k) + (int)base)`, because array subscripts on pointer tables compile to `mul.l` here;
- callee arity and types checked against the callee's code, because drafts had invented arguments and literals;
- narrow `short`/`char` temporaries removed where they caused stray extensions;
- a constant named in a dead variable just before each loop that reloads it;
- `|=` on `unsigned char` fields;
- a parameter alias initialised in its declaration at a chosen position;
- static inline helpers for repeated blocks, with an explicit `return` after the call;
- else-if chains ending in a nested `if` plus `return`, which give an unreachable `bra`/`nop`;
- a loop invariant scoped to one switch case.

**Scheduling and register studies (scratch only).** A study of the compiler's call-setup scheduling found a list-scheduling rule that predicts the delay-slot instruction for 96% of call setups in admitted functions. About 5% of calls across the binary keep the unscheduled argument order, scattered rather than clustered. No ordinary source shape reproduces this with the pinned compiler, and `#pragma scheduling off` and `#pragma peephole off` have no effect on SH-4 code. A survey found no other CodeWarrior SH build available locally or on public compiler archives. The game's SDK build strings date from October 2000 to June 2001, which is later than the pinned compiler's SDK (May 2000). Whether a later compiler was used is unresolved, and nothing here depends on it. One source from the study is admitted: `0x8c09638c`.

**Generator rules.** A scratch research pass added three rules to the draft generator:
- call arguments are capped at the callee's true arity, from register liveness at the callee's entry or a consistent admitted prototype;
- a pool offset used in a call argument is named just before the call;
- a named offset is used in a frame-address argument.

Calibration stayed at 34 / 44 / 8. Per-function, per-mode regressions over every admitted plan (190, 191, 211–270) and earlier agents' lists lost no exact draft. Its redraft of the remaining candidates found one new exact draft, `0x8c09638c`, which is admitted here from the study's source. Its hand probes are scratch only and are not admitted.

**History guard.** Four exact sources were refused by the history guard and not forced: `0x8c013a04`, `0x8c11812c`, `0x8c0c3a8c` and `0x8c11806c`.

These still hold:
- full-range exact only, with the padding rule;
- no `-O3` and no `(v >= 0 ? v : v)`;
- no arguments a callee does not read;
- two independent reproductions per unit;
- at least 5,120 bytes per batch.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (31) or a function end (1);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

36 recorded attempts on 36 targets, all exact; 4 were refused by the history guard. 32 units / 32 functions / 7,164 bytes were admitted after two independent reproductions each: 31 hand-finished sources and 1 source from the scheduling study.

2 units were admitted under the padding rule at their code size: `0x8c19e2e4` (10 of 12) and `0x8c027c80` (82 of 84). In each, the reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs or the study's compile log.
- `0x8c1dfbd8` keeps a `volatile unsigned short` cast on one halfword read; it reproduces the reference's repeated load and extension.
- **Per function**, the change that made each source exact:
  - `0x8c0fcaac` (248 bytes): C++; goto tangle replaced by a static inline reset helper (f68=0xffff, clamp f6c>15 to 15) called three times, with explicit return after the first two calls (gives the unfilled bra;nop), ushort named 0xffff constant t2 for the extu.w compare; seed's -0x80000000 neg removed
  - `0x8c01da7c` (116 bytes): clean rewrite of the pm-temporary draft: two plain loops over src/out/flags pointers; in the hit branch the stores come first, then n++, then out++ and flags++ (n++ placement decides the add order)
  - `0x8c027614` (156 bytes): declaration order decides it: v1 declared before v16 and v2 (v1 -> r8, v2 -> r10), and v1 = 0x400 assigned before v2 = 0x350 (literal order); no other change
  - `0x8c02edf8` (356 bytes): literal 0x370 offset instead of a short pm2 (removed exts.w); first frame-member address written as (char *)&frame + v2 with v2 = 0x3c4 named in the dead loop counter just before use (CW03); all pm temporaries removed
  - `0x8c14202c` (436 bytes): call_8c12b944 is int(void): dropped the invented arguments (v1, 0xe)/(o) from both calls; ref's nop delay slot and f128 store in the second call's slot follow; pm temporaries removed except loop pointers t3/t4 and the a1/a2/a3 parameter reuse in the loop (load-bearing)
  - `0x8c20aef4` (64 bytes): o is used through a local Object *self = o (initialised in its declaration): the callee-saved copy then schedules after the first literal load as in the ref instead of being a prologue parameter move; noted as one invented local alias
  - `0x8c219bd8` (124 bytes): second loop's 0x1d1 base goes into the dead m1 (-1) variable instead of re-assigning base (ref reloads it into m1's r12); pm3/r temporaries removed
  - `0x8c04bb70` (132 bytes): unsigned char counter incremented as g_8c467134++ instead of (g & 0xff) + 1 (removes the double extu.b and fixes the size)
  - `0x8c1851d8` (212 bytes): 0xffff named just before each Pair4 loop in a dead int (loop-1 counter v1 before loop 2, v3 before loop 3) instead of one ushort pm4 hoisted for both (removes extu.w, ref reloads the literal into r6/r7); loop-3 body and the f308 == 2 flag (into dead v3) cleaned; pm temps removed
  - `0x8c20775c` (240 bytes): clean rewrite: byte ORs as compound |= on the unsigned char field (removes extu of the f0d load); shifted a1 computed into the dead v1/t1 int first (v1 = (uchar)a1 << 3; f0d |= v1 keeps the extu.b of a1); a1 itself decremented in place for the clamp, (uchar)a1 read once into t1 for both compares and again for the <4 test and <<6; loop counter i declared before v1 (i r12, v1 r11)
  - `0x8c1041b4` (128 bytes): clean rewrite of the 22-temporary draft: v9 = (unsigned char)(unsigned int)call(o->f30 * 255.0f) << 24; first loop counts v4 = o->f34 up to 12 through a hoisted table pointer v8 = (int *)((v4 << 2) + (int)&g); second loop reuses v8 = &g (dead pointer variable, load-bearing) with its own counter v7; declaration order int *v8 before S_vv6 *v6 decides r3/r4
  - `0x8c1363fc` (300 bytes): same as 8c1628a8: *(void **)((o->f10c << 2) + (int)g_8c4d9b24) replaces the shift-by-pm2 char* form; pm2 removed
  - `0x8c1628a8` (300 bytes): table lookup written as *(void **)((o->f10c << 2) + (int)g) (int arithmetic, shifted index first) instead of the shift-by-pm3 char* form; pm2/pm3 and the t1=v1 alias removed
  - `0x8c1a8d24` (112 bytes): goto tangle rewritten as while ((v3 = *v1) != 0x13) { operation_8c1a8d94(v3, a1); v1++; } with the table pointer read as *(short **)((a2 << 2) + 0x8c323ff4); seed passed a literal 0 where the callee reads the loaded short, callee prototype is (short, int) (callee does exts.w on r4); declaration order short *v1 before short v2 decides r12/r13/r14
  - `0x8c1b3cdc` (224 bytes): case-2 table reads as int arithmetic with the shifted index first: *(int *)((o->f3e4 << 5) + (int)&g.f04) and *(int *)((o->f3e4 << 5) + (int)&g); all pm temporaries (shift-by-pm4, pm2, pm1, pm3) removed
  - `0x8c219e54` (472 bytes): short pm13 removed: v8 = 0; v5 = v8; (assignment order decides r3/r4); v99 declared unsigned char (drops extu.w); v34 dispatch as an else-if chain with the f01 == 9 test as a nested if followed by return (restores the reference's unreachable bra/nop pair); pm12 removed
  - `0x8c01154c` (256 bytes): structural fixes (cursor/count/list set before the first call, single squared distance with 1e-7 fallback, increment-then-break) with t3 declared before v5: declaration order decides (r/fr colouring); unused v1/v2 dropped; seed header
  - `0x8c065578` (84 bytes): f30a read once into a short local id assigned between v5 = 1 and v4 = v5 (gives the r4 reuse and exts.w per compare); seed v5/v4 flag structure kept
  - `0x8c0da1d4` (56 bytes): clean for loop over (S_vv4 *)(base + (i << 3) + 4) with 0xffff named in an int k assigned just before the loop (k takes r6 as in the ref); all pm temporaries removed
  - `0x8c186f1c` (96 bytes): clean rewrite: a0 typed short * and advanced in place, record pointer v3 advanced in place (+0x10, +20), table read as *(S_vv3 **)((v2 << 2) + 0x8c4dbba0) (array subscript gave mul.l), mask named m = -3 after the call; DECLARATION ORDER decides: v4 declared before v3 (v3 r13, count r5)
  - `0x8c15aa28` (100 bytes): 0x42c offset named in int t1 (assigned right after v1 = g) and each f42c read written as *(S_vv1_42c **)((char *)v1 + t1): the offset is then loaded into r7 before the global, as in the ref; t1 is one invented load-bearing temporary
  - `0x8c185378` (28 bytes): clean single-exit rewrite: short result v2 = o->f02, range test written on the field (!(o->f02 >= 0 && o->f02 < 6)) wrapping the != -1 reset, return type short; all pm temporaries removed
  - `0x8c1ad39c` (228 bytes): clean rewrite: o->f08 loaded once into the reused int v1 (one r5 load, no per-call reloads); signed char pm2 (0x10) removed, range test as !(v1 >= 0x10); o used through Object *base = o declared first (before t1/v1) — declaration position decides r14/r13
  - `0x8c09638c` (252 bytes): pool offset 0x324 named in off = 0x324 just before the call and passed as (char *)o + off (found by the delay-slot study)
  - `0x8c19e2e4` (10 bytes): padding rule: code exact at 10/12 (trailing .word 0); empty-bodied flag test written as 'if (*o & 4) return;' keeps tst with no movt; header size 10
  - `0x8c027c80` (82 bytes): padding rule: code exact at 82/84 (trailing .word 0); a1->f14 = 1 written through the same a1+0x14 char pointer t1 used for its +1 byte (ref adds #20 to a1 in place, no @(r0,r5)); named 0x14 pm9 and ushort pm6 removed; all pm temporaries removed in a clean rewrite; header size 82
  - `0x8c154d28` (104 bytes): 8c154d90 template: v1 pointer and pm1/pm4 removed, *(int *)((char *)o + 0x3a4) |= v2, named mask m = 0x8000000, literal bound 4, row base t1 in the loop , 104 bytes)
  - `0x8c154d90` (120 bytes): from /: v1 pointer local removed, flag word updated directly as *(int *)((char *)o + 0x3a4) |= v2 (compiler-hoisted address takes r12 after the bound), named mask m, literal bound 4, row base t1 in the loop , 120 bytes)
  - `0x8c154f24` (1,640 bytes): from : case-5 0x4e4 base v64 moved into a block scope inside case 5 (counter v63 stays at function scope; DECL-PLACEMENT) so it colours r9; pm9/pm8/pm10 removed, pm13+pm14 -> one Frame *t8, pm7/pm11 kept as t9/t10 , 1640 bytes)
  - `0x8c1acd24` (212 bytes): from : first helper base named b = a0 + 4 and assigned before the two (short) extensions (b declared first; DECL/ASSIGN-ORDER), so add #4 is scheduled before the exts.w , 212 bytes)
  - `0x8c1dfbd8` (160 bytes): goto tangle rewritten as switch + nested for loops; row offset named row = v3 << 4 in the outer loop (callee-saved r14); DECL-ORDER: v4, v5, v3, v1, v2, row (from dsweep); halfword read kept as the seed volatile unsigned short cast , 160 bytes)
  - `0x8c248070` (116 bytes): seed loop bound named: Row *end declared after p, set in the for-init with the cursor (p = rows, end = &rows[3]; p < end) so the end pointer reuses the base register , 116 bytes)

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Argument-register order around a call's delay slot** is now the largest parked group (about 150 near misses). It is characterised but not reproducible with the pinned compiler.
- Other recurring residues:
  - global or table addresses formed in r0 with the call address in r1;
  - float arguments evaluated before integer arguments;
  - constants built in r0 and stored before a call setup;
  - the angle-conversion constant reuse.
- **In-place extension** and **unfilled final delay slots** remain out of scope.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
