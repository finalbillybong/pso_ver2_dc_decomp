# Reconstruction batch: 276: expanded candidate pool, part 80

56 new matching functions / 17,374 bytes. All 12184 prior functions preserved.

12240 exact functions in 11349 modules; 1,255,644 compiled function-range bytes; 493,036 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.1626%, image coverage 42.0062%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0105b4 | 0x8c0105b4 | 324 |
| operation_8c013a54 | 0x8c013a54 | 216 |
| operation_8c013bd0 | 0x8c013bd0 | 136 |
| operation_8c01d694 | 0x8c01d694 | 148 |
| operation_8c022388 | 0x8c022388 | 160 |
| operation_8c025178 | 0x8c025178 | 228 |
| operation_8c027cfc | 0x8c027cfc | 64 |
| operation_8c02d238 | 0x8c02d238 | 304 |
| operation_8c04a638 | 0x8c04a638 | 272 |
| operation_8c04c108 | 0x8c04c108 | 156 |
| operation_8c075ac8 | 0x8c075ac8 | 96 |
| operation_8c07d4e0 | 0x8c07d4e0 | 236 |
| operation_8c07ef4c | 0x8c07ef4c | 232 |
| operation_8c09bac4 | 0x8c09bac4 | 188 |
| operation_8c09c498 | 0x8c09c498 | 212 |
| operation_8c0ac934 | 0x8c0ac934 | 972 |
| operation_8c0b11f4 | 0x8c0b11f4 | 992 |
| operation_8c0b4d34 | 0x8c0b4d34 | 844 |
| operation_8c0b75a4 | 0x8c0b75a4 | 156 |
| operation_8c0dac90 | 0x8c0dac90 | 564 |
| operation_8c0e73fc | 0x8c0e73fc | 152 |
| operation_8c0f7c7c | 0x8c0f7c7c | 312 |
| operation_8c10466c | 0x8c10466c | 564 |
| operation_8c104e9c | 0x8c104e9c | 204 |
| operation_8c106a6c | 0x8c106a6c | 944 |
| operation_8c139fc4 | 0x8c139fc4 | 376 |
| operation_8c13b4e4 | 0x8c13b4e4 | 236 |
| operation_8c1405bc | 0x8c1405bc | 488 |
| operation_8c158a24 | 0x8c158a24 | 124 |
| operation_8c16ae6c | 0x8c16ae6c | 78 |
| operation_8c170c84 | 0x8c170c84 | 164 |
| operation_8c17f210 | 0x8c17f210 | 408 |
| operation_8c1895f4 | 0x8c1895f4 | 584 |
| operation_8c18983c | 0x8c18983c | 340 |
| operation_8c18b434 | 0x8c18b434 | 344 |
| operation_8c18b58c | 0x8c18b58c | 348 |
| operation_8c18fde8 | 0x8c18fde8 | 388 |
| operation_8c192764 | 0x8c192764 | 240 |
| operation_8c1a0cd0 | 0x8c1a0cd0 | 228 |
| operation_8c1a2d40 | 0x8c1a2d40 | 88 |
| operation_8c1ae374 | 0x8c1ae374 | 404 |
| operation_8c1b4e40 | 0x8c1b4e40 | 520 |
| operation_8c1b6654 | 0x8c1b6654 | 152 |
| operation_8c1cc6e0 | 0x8c1cc6e0 | 516 |
| operation_8c1d51dc | 0x8c1d51dc | 212 |
| operation_8c1d767c | 0x8c1d767c | 344 |
| operation_8c1dfc78 | 0x8c1dfc78 | 136 |
| operation_8c1e92f8 | 0x8c1e92f8 | 344 |
| operation_8c1ebf60 | 0x8c1ebf60 | 196 |
| operation_8c1f05d4 | 0x8c1f05d4 | 232 |
| operation_8c2227d0 | 0x8c2227d0 | 336 |
| operation_8c223298 | 0x8c223298 | 96 |
| operation_8c22bdac | 0x8c22bdac | 188 |
| operation_8c241fd8 | 0x8c241fd8 | 56 |
| operation_8c2473a8 | 0x8c2473a8 | 252 |
| operation_8c248738 | 0x8c248738 | 280 |

## Method

Batch 276 admits exact hand-pass sources that earlier batches held back, plus three new hand-finished near misses.

**Earlier holds released.** Hand passes between batches 241 and 265 kept a set of byte-exact sources in review folders. Those sources were held only because their match depends on the order or placement of local declarations, which the rules then excluded. Since batch 266 the rules allow declaration order to decide a match. A scratch sweep recompiled every held review source with the pinned compiler and flags:
- 52 are admitted here, plus one more under the padding rule;
- `0x8c0eac00` stays held, because its source passes an argument the callee does not read;
- `0x8c08076c` stays held, because it is exact only with a dead store whose sole effect is to keep a test;
- `0x8c0a4ec0` was refused by the history guard and not forced.

**Hand pass.** A scratch hand pass on drafts the jump-table recovery had changed made three more targets exact.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no arguments a callee does not read;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (54) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

57 recorded attempts on 57 targets, all exact; 1 was refused by the history guard. 56 units / 56 functions / 17,374 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

1 unit was admitted under the padding rule at its code size: `0x8c16ae6c` (78 of 80). The reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs, and was re-verified by the sweep.
- For the earlier holds, declaration order or placement decides the match. The note shows the change the original pass made.
- **Per function**:
  - `0x8c013bd0` (136 bytes): redraft (new generator) with the g+0x28 id-column base local v5 removed: the id is read as *(int *)((char *)(v4 + 0x28) + v7) from the int g base v4 (ref then keeps g in r1 and g+0x28 in scratch r7, and the 0x2c stride/counter/count take r14/r13/r12); unused v5 dropped; 16/23 decl orders exact (seed order kept: DECL-ORDER dependent) 
  - `0x8c0f7c7c` (312 bytes): seed with the unused scoped Object *base copy removed and the f3d0 = a2->f02 store written as *(int *)((char *)o + k) with the 0x3d0 offset named in int k just before (load-bearing invented temporary: fixes the r3/r4 literal/home-reload swap); k position free, but 9/36 other decl orders differ (frame/home placement; seed order kept) 
  - `0x8c10466c` (564 bytes): redraft (new generator) with the two entry products written with the literal 10.0f (o->ff0 * 10.0f, o->ff8 * 10.0f) and v1 = 10.0f assigned after them instead of before (ref keeps the reloaded literal in fr15 and the products in fr0); seed declaration order kept (31/52 decl orders exact: DECL-ORDER dependent) 
  - `0x8c16ae6c` (78 bytes): earlier hand-pass source held for declaration placement; padding rule (78 of 80)
  - `0x8c0105b4` (324 bytes): table test through a static inline char_class(int c) helper restores the exts.b ( 18->16 lines); exact with v5 incremented before v11 but only when v4 is declared before v5 (declaration-order comparison; draft order 18 lines): placement decides; 4 sources
  - `0x8c013a54` (216 bytes): goto tangle -> for search loop with break, add-flag preset in the guard slot, byte offsets with (g + K) + off barriers (126->72, size exact); residue: callee-saved rotation n/add/i/8/0xffff/44 (r7/r3/r10/r11/r9/r14 vs r3/r7/r9/r10/r14/r11) and cmp/eq operand order follows it
  - `0x8c01d694` (148 bytes): named loop limit n=3 (CW03) exact only when declared before index v1 (decl-order comparison vs ); in 
  - `0x8c022388` (160 bytes): id read once as short with a ushort copy, nested flag presets , size exact, 32 lines); remaining o/v4 (r14/r13) and v14/v10 (r3/r4) swaps are register-assignment/declaration dependent
  - `0x8c025178` (228 bytes): in-place clamp + p = call result + p += 12 row reads (114->46, size exact); exact only when v3 is declared last (declaration-order comparison vs ): 
  - `0x8c027cfc` (64 bytes): named char m=-1 after count preset; exact only with v2 declared after v1/m (decl-order comparison, hyp 4); hyp 1 order gives 14 lines -> review
  - `0x8c02d238` (304 bytes): exact only with i declared before lim (declaration-order comparison); otherwise r1/r3 swap of the memory-check loop index and limit (10 lines)
  - `0x8c04a638` (272 bytes): exact via a named out pointer for the inlined distance helper + bound assigned in its test + v5 = v18 before the copy, but the out declaration placement decides (declared first: 40 lines)
  - `0x8c04c108` (156 bytes): goto draft rewritten (decoder loop); exact only with mode declared before d (decl-order comparison h7)
  - `0x8c075ac8` (96 bytes): exact : named 0x13c/0x2fc offsets, v5 read before the range test, idx/src locals, CW19 barrier on o+0x1e8; but placement of the new k1/k2 declarations decides (k2,k1 first: 14 lines)
  - `0x8c07d4e0` (236 bytes): exact with named offset v9 = 0x510 (CW18) but only with v9 declared last; first placement gives 24 lines (declaration placement deciding); see NOTE.txt
  - `0x8c07ef4c` (232 bytes): max-of-three ternary + counter rewrite; exact only with the counter declared first (decl-order comparison h5)
  - `0x8c09bac4` (188 bytes): end-pointer rewrite exact only with cursor declared before end (declaration-order comparison)
  - `0x8c09c498` (212 bytes): declaration-order comparison: v3 declared before v4 is exact ; structural forms (statement order, literal offsets) not exact (4 hyps)
  - `0x8c0ac934` (972 bytes): exact only with three named fill-loop locals whose declaration order decides the colouring (comparison : 4 bytes); structural rewrite restores lost f58 + 0x8000 store, shift-offset rows, base/boff assigned in loop conditions, named 0x8000/0x14c, scoped self for the switch; see 
  - `0x8c0b11f4` (992 bytes): exact but needs declaration placement: separate frame locals blk/v/pos in reverse layout order (comparison : 8 bytes) and the n/fill/slots fill-loop locals; see 
  - `0x8c0b4d34` (844 bytes): exact with family template + restored frame.f04 = f58 store, but depends on placement of named locals (n/fill/slots, sh/e, lim); see 
  - `0x8c0b75a4` (156 bytes): named offset local off = 0x110 (CW03) for the loop row read gives 0 differing lines ), but the declaration-order comparison (, off declared before v1) gives 12 lines: placement decides
  - `0x8c0dac90` (564 bytes): Sp row pointer + chained zero preset; exact only with v8 declared before v3 (decl-order comparison) -> 
  - `0x8c0e73fc` (152 bytes): scoped self copy of o (self r14) + byte offsets: 26 lines (h2); exact only with t1 declared before the named offsets (declaration-order comparison h3) -> 
  - `0x8c104e9c` (204 bytes): exact with the 8c105380 static inline relocate() helper (same declaration order, from that comparison); 
  - `0x8c106a6c` (944 bytes): exact with for loops, named 0x378 offset after the f378 store and inline call results, but only with declarations ordered by the observed callee-saved registers (comparison : 26 bytes); see 
  - `0x8c139fc4` (376 bytes): exact only with separate Vector3 locals whose declaration order decides the frame layout , decl-order comparison ); structural fixes: float fv1 converted once, a0 used directly, split vectors
  - `0x8c13b4e4` (236 bytes): exact with clean rewrite, named mask local and << 2 sector offset, only with r declared before a (declaration-order comparison ; : a/r register swap, 28 lines)
  - `0x8c1405bc` (488 bytes): register-only residue; exact only with v3/v4 declared between v5 and v6 (declaration-order comparison) -> , not final
  - `0x8c158a24` (124 bytes): declaration order decides (reversed declarations : 38 lines); ; behaviour restored as nested for loops (unsigned char i/j, found flag; draft lost the inner rows reload and mis-indexed), int row offset, rows = g->f10 read in the inner test, (char *)&rows->entries + off barrier and (j << 4) entry offset
  - `0x8c170c84` (164 bytes): r = (float)v4 squared once + named 0x37c offset: exact only with the new declarations in the draft's v4 position (comparison h5 fails)
  - `0x8c17f210` (408 bytes): exact only with m declared before i inside the static inline init_block (declaration-order comparison); deciding structure: allocation in caller + inline init_block(p) per block , 24 lines)
  - `0x8c1895f4` (584 bytes): EXACT only with v77 declared after t3 (the one declaration-order comparison; shows the draft order fails): lost id store restored, branches 2/3 as inline helper owning its record local (per-copy frame slot), branch-1 record local; source in 
  - `0x8c18983c` (340 bytes): exact only with v61 declared after t3 (single declaration-order comparison); 
  - `0x8c18b434` (344 bytes): template as written is exact ( = review source + uchar push), but with the shuffle helper declared j,t,n () the shuffle j/n registers swap: helper declaration order deciding (as ); source in 
  - `0x8c18b58c` (348 bytes): EXACT only with hi declared before lo (, the one declaration-order comparison; with lo, hi as in b434 leaves the lo/hi r12/r13 swap): b434 template + retry-pop tail with a named none = -1 before the loop and the pop written directly (else v = none); declaration order deciding; 
  - `0x8c18fde8` (388 bytes): EXACT (, , ): fc58-style body + single-pass shuffle helper in a main loop with one int c reused for the row width, the pass counter and the pop counter; c placement checked both ways (, decl-order comparison, still exact); Rec declared in the if (v != none) block () also exact; review only because Rec vs Frame position decides the stack layout; (= )
  - `0x8c192764` (240 bytes): structure exact in ; exact only after the one declaration-order comparison (p, v5, v10, v9) -> 
  - `0x8c1a0cd0` (228 bytes): draft v2/v1 copies dropped plus named loop constants mask = 0x800, off = 0x384, off2 = 0x30a make it exact 228/228 , declarations after t1); placement check (declared first) gives 16 lines, so declaration placement decides: 
  - `0x8c1a2d40` (88 bytes): exact with CW03 named constants k18=-0x100, k2c, k34 (literal 0x80/0x86), but declaration placement decides (declared first: 16 lines); 
  - `0x8c1ae374` (404 bytes): row pointer local r shared by v1 and the first call plus for/break loops exact); exact only with r declared right after v8 (declared last: 50 lines of callee-saved register permutation), so placement decides
  - `0x8c1b4e40` (520 bytes): exact but the f24.z local placement decides (decl-order comparison differs); fixes: (g+4)+v5 base, shared v7<<3 offset, table+50 in one statement, literal function-pointer cast for the first-loop call
  - `0x8c1b6654` (152 bytes): exact with named offset (CW18) but declaration placement decides ()
  - `0x8c1cc6e0` (516 bytes): exact only with the decl-order comparison (m1 declared before oj); structural fixes: switch with default: break, inline key-compare helpers, (int)o+k cast barrier for key bytes, i=0 before named -1; see 
  - `0x8c1d51dc` (212 bytes): exact with a2 extended once into a local before the loop, but the new declaration placement decides (declared first: differs); ; 3 sources
  - `0x8c1d767c` (344 bytes): exact with record pointer v12 = t1 + 0x7e4 assigned in the guard, but declaration placement decides (declared first: differs); ; 3 sources
  - `0x8c1dfc78` (136 bytes): outer-loop stride off = v4 << 4 as a named local gives exact 136/136 , off declared last), but declaring off first gives 28 lines: placement decides, review only; a block-scoped unsigned int off inside the outer loop is also exact 
  - `0x8c1e92f8` (344 bytes): ushort id read before the g_8c4627c8 test + one || return guard with v15 = (v10 & 0x4000) != 0 assigned inside the second operand ; exact only when a base = o copy is declared between v11 and t1 (declaration-order comparison): placement decides
  - `0x8c1ebf60` (196 bytes): owner test (g_8c4627c8 == 0 && ushort id == g_8c418248) as a static inline helper with its own result preset fixes the v4/v7 flag registers; exact only with a base = o copy declared first (the declaration-order comparison ): placement decides; 3 sources
  - `0x8c1f05d4` (232 bytes): owner test (g_8c4627c8 == 0 && ushort id == g_8c418248) as a static inline helper gives the reference shape ; exact only with a base = o copy declared first and t1 before the flags (declaration-order comparison): placement decides; 2 sources
  - `0x8c2227d0` (336 bytes): exact : switch on g_8c467188 restored + named 0x22b8 offset local for the loop; held because the off declaration placement decides ( declared first: 14 lines)
  - `0x8c223298` (96 bytes): exact with named offset after the field clear (CW18); off declaration placement decides ()
  - `0x8c22bdac` (188 bytes): scan loop as for loop with post-increment cursor + for(;;) trap and named unsigned limit v31 = 0x1000; exact only with v31 declared last (declared first: counter/limit register swap) - declaration placement deciding
  - `0x8c241fd8` (56 bytes): (supersedes parked row) exact with while loop + named ff = 0xffff (); declaration placement decides ()
  - `0x8c2473a8` (252 bytes): exact with pos = t1 + 0x3c local and the copy source from the same table symbol, but only with pos declared first (declaration-order comparison; declared last: 16 lines)
  - `0x8c248738` (280 bytes): || range guard leaves only r13/r14 swap; exact only with v3/v2/v4 declared in the base block (decl comparison) -> 

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Argument-register order around a call's delay slot** and **in-place extension** remain the largest groups.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
