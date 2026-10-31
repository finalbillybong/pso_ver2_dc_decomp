# Reconstruction batch: 272: expanded candidate pool, part 76

20 new matching functions / 3,392 bytes. All 12116 prior functions preserved.

12136 exact functions in 11222 modules; 1,220,946 compiled function-range bytes; 493,036 typed static-data bytes; 310,317 retained reference bytes. Code-range coverage 29.3291%, image coverage 41.1727%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01c440 | 0x8c01c440 | 72 |
| operation_8c0233e8 | 0x8c0233e8 | 156 |
| operation_8c02a4c8 | 0x8c02a4c8 | 204 |
| operation_8c0351f0 | 0x8c0351f0 | 228 |
| operation_8c036708 | 0x8c036708 | 112 |
| operation_8c087268 | 0x8c087268 | 224 |
| operation_8c08d7fc | 0x8c08d7fc | 104 |
| operation_8c09e2d4 | 0x8c09e2d4 | 308 |
| operation_8c103224 | 0x8c103224 | 124 |
| operation_8c116bbc | 0x8c116bbc | 56 |
| operation_8c1351b8 | 0x8c1351b8 | 300 |
| operation_8c13a528 | 0x8c13a528 | 148 |
| operation_8c13a61c | 0x8c13a61c | 108 |
| operation_8c1aab54 | 0x8c1aab54 | 92 |
| operation_8c1b1318 | 0x8c1b1318 | 220 |
| operation_8c1f1258 | 0x8c1f1258 | 148 |
| operation_8c22c970 | 0x8c22c970 | 164 |
| operation_8c22d538 | 0x8c22d538 | 144 |
| operation_8c242054 | 0x8c242054 | 256 |
| operation_8c2452b8 | 0x8c2452b8 | 224 |

## Method

Batch 272 combines two drafts from new generator rules with hand-finished near misses from search-improved starts. It is the first batch without a minimum size: integration now accepts any non-empty plan of exact candidates.

**Generator rules.** Two scratch research passes added seven rules to the draft generator, each behind its own flag:
- **Call arity.** Call arguments are capped at the callee's true arity. The arity comes from register liveness at the callee's entry (following tail jumps and known inner calls), or from a consistent admitted prototype. Exceptions keep an argument the caller sets in the call's own block, or tests before the call.
- **Named offsets.** A pool offset used in a call argument is named just before the call. A named offset in a dead variable is used for a frame-address argument.
- **Table index.** A table read whose index is loaded and shifted in place is written in integer arithmetic with the shifted index first, `*(T *)((i << k) + (int)base)`.
- **Byte counters.** A one-byte global stepped by one is written `g++` / `g--`.
- **Per-loop constants.** A pool constant loaded before a loop and used only as a store source is named just before that loop.
- **Decrement loops.** A `dt` loop is written `do { } while (--n != 0)`.

Both passes left calibration at its previous level (34 / 44 / 8). Per-function, per-mode regressions over every admitted plan (190, 191, 211–271), the jump-table set and earlier agents' result lists lost no exact draft. The two passes drafted 6 of the 21 most recent hand-finished functions exactly, and found 2 new exact drafts among the remaining candidates. Both are admitted here. Their hand probes are scratch only and are not admitted.

**Hand passes.** Two scratch hand passes took 211 parked targets whose best search source was within 5–40 differing lines. They used the same rules as batch 271. The new techniques were:
- a parameter alias initialised in its declaration and declared first;
- exhaustive declaration-, assignment- and statement-order sweeps on cleaned-up sources;
- int flag variables for materialised booleans;
- literal float constants at each use.

Every statement reordering was checked by hand for unchanged behaviour.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3` and no `(v >= 0 ? v : v)`;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (19) or a function end (1);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

20 recorded attempts on 20 targets, all exact. 20 units / 20 functions / 3,392 bytes were admitted after two independent reproductions each: 2 unedited generated drafts and 18 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison: in the generator redraft, or as logged in the hand passes' attempt logs.
- `0x8c13a61c` is an earlier hand-pass source, unchanged. It was held back because declaration order decides it, which the rules now allow.
- **Per function**, the change that made each source exact:
  - `0x8c1351b8` (300 bytes): unedited generated draft (table index in integer arithmetic, shifted index first)
  - `0x8c1b1318` (220 bytes): unedited generated draft (table index in integer arithmetic, shifted index first)
  - `0x8c01c440` (72 bytes): clean CRC-32 rewrite (unsigned char *p, int n; nested for loops, if/else shift-xor); polynomial 0xedb88320 named in unsigned k before the loop (callee-saved r13), final xor written c ^ -1 (not ~c, which gives not); DECL-ORDER: c, i, j, k
  - `0x8c0233e8` (156 bytes): seed's clean source with o used through Object *self = o initialised in its declaration, declared first (DECL-PLACEMENT: self takes r14 and the table entry e r13; the copy schedules after the first literal load), as in 8c02a4c8
  - `0x8c02a4c8` (204 bytes): o used through Object *self = o initialised in its declaration, declared first (DECL-PLACEMENT: self takes r14, v5 r13; the parameter copy schedules after the first literal load); unsigned short pm2 = 2 removed (literal 2 argument); boolean kept as t1 = call(...) == 0; if (t1) (gives movt/tst)
  - `0x8c036708` (112 bytes): goto loop rewritten as for (j = 0; j != 3; j++) with the bounds-checked row pointer; row base computed once into base = a0 * 0x57 + g_8c46200c before m = -1 (char), fallback g_8c2ed2b4 + 0xfc left inline (compiler hoists it); ASSIGN-ORDER base then m, DECL-ORDER base declared first (any order of the rest)
  - `0x8c087268` (224 bytes): clean rewrite of the 17-temporary draft: text width with unsigned w and float max m (m = 0.0f before the null test), glyph table hoisted as t = *(int *)0x8c469d20 - 0x100 and read as *(float *)((int)t + (c << 3)) (base first), space adds 5.0f via float; DECL-ORDER: m, t, w, c (w after t gives r6)
  - `0x8c116bbc` (56 bytes): clean for/break search with result r = 0x85 set on match and one exit; ids read through p = (uchar *)a1 + 0x38; 0x5e0 named in int k (takes callee-saved r14); DECL-ORDER: n, r, i, p, k (i after r gives r6 for r)
  - `0x8c13a528` (148 bytes): clean rewrite of the pm draft: id = g_8c44be04 read before g_8c4d9bec = 0 (ASSIGN-ORDER), mask 0x2000800 and the 0x37c offset named (m, k) before the scan loop, list writes as *(S **)((c << 2) + (char *)0x8c4d9bdc) with c read once; DECL-ORDER i, m, id, o, c, r, k, n (from dsweep)
  - `0x8c13a61c` (108 bytes): review source re-verified (unchanged): max-search loop with the 0x330 offset named, unsigned short return type (no exts.w, 0xffff from the pool); DECL-ORDER: max v2, best v10, index v3, offset off, count v1, then p v4, v; earlier held only because the match depends on declaration order
  - `0x8c1aab54` (92 bytes): clean rewrite of the pm draft: while loop over 2 records with i++ after the f08 store (as in the ref), n = 6 named before the loop, 0x42c offset named in int k and read as *(S **)((char *)g_8c4da370 + k); assignment order i, n, p, k; DECL-ORDER: n, p, i, k
  - `0x8c22c970` (164 bytes): from (structured slot loop, z = i = 0, idx = i << 2, -3 mask named, f0 += 2 in place): both differences written with the literal (-1.0f - p->f20) / f0 and (-1.0f - p->f24) / f0 instead of a held m1 = -1.0f (fixes fr1/fr2), flag test as int t = (v & 2) != 0; if (t) (gives subc/add/tst); DECL-ORDER from two dsweep passes (base, i, mask, p, idx, z, v, m1, t)
  - `0x8c0351f0` (228 bytes): save block reordered: g_8c46f578 = g_8c5755a8 (pm1 removed) is stored before the g_8c575570 &= ~0x20 |= 0x81c update instead of after it (independent globals; statement order decides the load/store schedule, found by the decl sweep treating statements as movable); restore tail unchanged
  - `0x8c08d7fc` (104 bytes): clean rewrite of the 12-temporary seed: table entry read once into v1, row offset v3 = o->f108 << 4 computed once and used for both the +4 function-pointer read and the f100 store, o->f100 = 0; return 0 on the empty path; all pm temporaries removed
  - `0x8c09e2d4` (308 bytes): first loop as v2 = 0; for (v3 = 0; v3 < v1; v3++) v2 += table[v3]; DECLARATION ORDER decides: v3, v2 declared before v1 (v1 r5, counter r3, sum r4; from dsweep); unused v4 dropped
  - `0x8c103224` (124 bytes): clean rewrite of the goto/pm seed: table slot read once into v4 = *(S_vv4 **)(v1 + 0x8c4d59e8) (int arithmetic) and tested, two plain for loops over a 40-byte record pointer, allocation stored in an if (t1 != 0) {store} else return 0 layout; DECLARATION ORDER decides: v2 (record pointer) declared before v3 (counter) (r3/r4; from dsweep); pm2 removed
  - `0x8c1f1258` (148 bytes): pm3 temporary removed (lookup_low_id(o->f02) direct); o used through a local Object *self = o declared first (callee-saved creation order: self r14, t1 r13); one invented local alias
  - `0x8c22d538` (144 bytes): clean CRC-32 rewrite of the 18-temporary seed: saved f04 through int *p = &t1->f04 (read, then zeroed), crc = -1, polynomial named k = 0xedb88320 just after crc init (r6), byte read as int arithmetic with the index first *(unsigned char *)(v3 + (int)t1), return v1 == (crc ^ -1); one invented local p
  - `0x8c242054` (256 bytes): third loop's counter reuses the dead v14 (lookup result) variable (r12) and 0xffff is named in the now-unused counter v21 just before the loop (r14) instead of a per-iteration pm2; pm4 and pm2 removed
  - `0x8c2452b8` (224 bytes): second loop cleaned to for (v15 = 0; v15 < v2; v15++) with v16 -= v18 in place (v17 copy removed, v16 assigned before the loop counter); DECLARATION ORDER decides: unsigned v16 declared before v15 (v15 r5, v16 r4; from dsweep)

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Argument-register order around a call's delay slot** remains the largest parked group.
- **New recurring class:** float field stores whose addresses the reference forms as `o` copied to r0 plus a literal in r1, emitted strictly in sequence.
- **Load reuse the reference does not do:** a base pointer reloaded on the hit path.
- **Other build:** a few targets in the game region look like Hitachi SHC output, not CodeWarrior.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
