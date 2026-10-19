# Reconstruction batch: 253: expanded candidate pool, part 57

67 new matching functions / 12,460 bytes. All 10137 prior functions preserved.

10204 exact functions in 10120 modules; 972,102 compiled function-range bytes; 0 reconstructed data bytes; 3,190,810 retained reference bytes. Whole-image coverage 23.3515% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c012fcc | 0x8c012fcc | 224 |
| operation_8c020910 | 0x8c020910 | 88 |
| operation_8c022594 | 0x8c022594 | 144 |
| operation_8c0241d0 | 0x8c0241d0 | 144 |
| operation_8c025020 | 0x8c025020 | 260 |
| operation_8c027090 | 0x8c027090 | 168 |
| operation_8c02cb40 | 0x8c02cb40 | 112 |
| operation_8c03e010 | 0x8c03e010 | 112 |
| operation_8c04bd14 | 0x8c04bd14 | 228 |
| operation_8c04be80 | 0x8c04be80 | 52 |
| operation_8c05b19c | 0x8c05b19c | 64 |
| operation_8c0604f0 | 0x8c0604f0 | 72 |
| operation_8c066fb8 | 0x8c066fb8 | 224 |
| operation_8c067324 | 0x8c067324 | 124 |
| operation_8c073f34 | 0x8c073f34 | 104 |
| operation_8c073ffc | 0x8c073ffc | 376 |
| operation_8c07d668 | 0x8c07d668 | 308 |
| operation_8c07e79c | 0x8c07e79c | 204 |
| operation_8c07f06c | 0x8c07f06c | 56 |
| operation_8c0828ec | 0x8c0828ec | 148 |
| operation_8c084164 | 0x8c084164 | 220 |
| operation_8c0fd740 | 0x8c0fd740 | 128 |
| operation_8c102f9c | 0x8c102f9c | 132 |
| operation_8c10a65c | 0x8c10a65c | 68 |
| operation_8c10d684 | 0x8c10d684 | 152 |
| operation_8c10d71c | 0x8c10d71c | 116 |
| operation_8c1112d4 | 0x8c1112d4 | 156 |
| operation_8c113a4c | 0x8c113a4c | 88 |
| operation_8c113bb0 | 0x8c113bb0 | 136 |
| operation_8c1282e4 | 0x8c1282e4 | 596 |
| operation_8c129f50 | 0x8c129f50 | 192 |
| operation_8c13c370 | 0x8c13c370 | 200 |
| operation_8c1573f4 | 0x8c1573f4 | 108 |
| operation_8c158738 | 0x8c158738 | 92 |
| operation_8c16323c | 0x8c16323c | 308 |
| operation_8c169920 | 0x8c169920 | 416 |
| operation_8c169b90 | 0x8c169b90 | 360 |
| operation_8c16b970 | 0x8c16b970 | 352 |
| operation_8c17a49c | 0x8c17a49c | 272 |
| operation_8c184ba4 | 0x8c184ba4 | 92 |
| operation_8c185e90 | 0x8c185e90 | 216 |
| operation_8c189ca0 | 0x8c189ca0 | 192 |
| operation_8c199ff8 | 0x8c199ff8 | 76 |
| operation_8c1a1214 | 0x8c1a1214 | 52 |
| operation_8c1b79b0 | 0x8c1b79b0 | 56 |
| operation_8c1b8e28 | 0x8c1b8e28 | 188 |
| operation_8c1bde30 | 0x8c1bde30 | 116 |
| operation_8c1c1c80 | 0x8c1c1c80 | 156 |
| operation_8c1c1e1c | 0x8c1c1e1c | 156 |
| operation_8c1c2160 | 0x8c1c2160 | 156 |
| operation_8c1ca5d4 | 0x8c1ca5d4 | 144 |
| operation_8c1cd480 | 0x8c1cd480 | 108 |
| operation_8c1dbc08 | 0x8c1dbc08 | 180 |
| operation_8c1dc2b8 | 0x8c1dc2b8 | 108 |
| operation_8c1dfb6c | 0x8c1dfb6c | 108 |
| operation_8c1ec7d0 | 0x8c1ec7d0 | 480 |
| operation_8c209fe0 | 0x8c209fe0 | 248 |
| operation_8c21f544 | 0x8c21f544 | 32 |
| operation_8c223a04 | 0x8c223a04 | 108 |
| operation_8c223a70 | 0x8c223a70 | 108 |
| operation_8c2263b8 | 0x8c2263b8 | 192 |
| operation_8c232ca0 | 0x8c232ca0 | 764 |
| operation_8c238dcc | 0x8c238dcc | 176 |
| operation_8c23b080 | 0x8c23b080 | 92 |
| operation_8c241280 | 0x8c241280 | 276 |
| operation_8c24ff18 | 0x8c24ff18 | 140 |
| operation_8c250190 | 0x8c250190 | 436 |

## Method

Batch 253 comes from hand-finished near misses among the remaining candidate units. The draft generator did not change since batch 250. After the full 19-mode cycle disclosed in batch 252, three separate scratch passes started from the best generated drafts that differed from the reference in 0–20 lines, and edited each one until its whole range compiled exactly. One pass took 160 targets that no earlier pass had probed; the other two took 454 targets that earlier passes had probed fewer than ten times. All three followed the rules of batches 241–251:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The passes compiled about 300, 263 and 264 hypotheses. The most on one target was 9 compiled sources with 2 distinct outputs, counting earlier probes; that target is parked. They made 24 labelled declaration-order comparisons, at most one per target. 18 showed that the placement of a new local does not decide the match. In the other 6 the placement decided it, so those sources are held back and not trialled: `0x8c1d767c`, `0x8c1d51dc`, `0x8c1a2ce0`, `0x8c185d30`, `0x8c05b6b4` and `0x8c22bdac`.

The passes found 87 exact sources. This batch admits 67. Also held back and not trialled:
- Seven sources that match only with a state index written as `(v >= 0 ? v : v)`. The form is ordinary C and changes no behaviour, but it is unusual and may stand in for a macro, so these stay out until it is reviewed: `0x8c0fa73c`, `0x8c0fa504`, `0x8c0f8b64`, `0x8c0f8c88`, `0x8c0f8e10`, `0x8c0f9950` and `0x8c0f9d2c`.
- Three sources whose match needs call arguments that the callee, an empty stub in the repository, never reads: `0x8c2462d8`, `0x8c246414` and `0x8c1744ec`. Admitted callers use the same argument forms, but the callee does not confirm them.

The history guard refused no attempt. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (62) or a function end (5);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

67 recorded attempts on 67 targets, all hypotheses and all exact. 67 units / 67 functions / 12,460 bytes were admitted after two independent reproductions each, all hand-finished from generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand-finishing passes' attempt logs.
- All admitted sources in this batch were finished by hand from generated drafts.
- One admitted source, `0x8c129f50`, passes a middle argument of 0 to a virtual slot; seven admitted sources declare the same slot signature `(int, int, Block8)`.
- One pass corrected a file name in one row of its attempt log right after writing it, and added a row disclosing the correction. Another pass briefly wrote one scratch file outside its directory and removed it.
- **Per function**, the change that made each draft exact:
  - `0x8c012fcc` (224 bytes): parameter copied to a local after the null/state guard (p = o), so the r13 copy follows the guard; declaration placement checked not deciding (.cpp).
  - `0x8c020910` (88 bytes): f3c.f08 read into a scoped float local before the f630 copy (reference loads it first).
  - `0x8c022594` (144 bytes): slot field f02 read once into a short local reused by all three tests; global compared directly; placement checked not deciding.
  - `0x8c0241d0` (144 bytes): slot field f02 read once into a short local; global compared directly (as 8c022594; .cpp); placement checked not deciding.
  - `0x8c025020` (260 bytes): CW04: literal function-pointer calls written as bound extern declarations.
  - `0x8c027090` (168 bytes): table cursor post-incremented in the read (v5 = (v2++)->f00), fills the bt/s slot.
  - `0x8c02cb40` (112 bytes): void return (draft invented a value); f02 kept in a short local, global compared directly, single flag.
  - `0x8c03e010` (112 bytes): index written as one a1 << 3 (copy then shll2/shll) instead of two chained shift locals.
  - `0x8c04bd14` (228 bytes): draft lost behaviour (second loop passed 0): value read in the loop condition and passed; a1 advanced in place; f04 read once into the dead v3 with the cursor computed before the difference; placement checked not deciding.
  - `0x8c04be80` (52 bytes): copy loop tests the count before decrementing (v5-- != 0); draft had dropped one iteration.
  - `0x8c05b19c` (64 bytes): goto loop rewritten as a while search loop (index zeroed before the named 0x700000 mask, return 1 inside).
  - `0x8c0604f0` (72 bytes): extern store order: g_8c467a48 = a0 written before the g_8c467a50 sum (CW emits the later store first).
  - `0x8c066fb8` (224 bytes): index converted once before the bound test; goto search loop as while (slot[v3 = i << 2] != 0.0f) with wrap at 12 (offset kept for the store).
  - `0x8c067324` (124 bytes): callee operation_8c059ea4 takes int (its admitted signature), so the halfword is sign-extended into an int local.
  - `0x8c073f34` (104 bytes): derived pointers formed copy-then-add (p = o; p += k) instead of o + k.
  - `0x8c073ffc` (376 bytes): draft lost behaviour: restored the result = 1 sets (case 1 range test, case 2 checks as || chain) on one result variable; gotos removed.
  - `0x8c07d668` (308 bytes): early return written as if (active) call; else return; (reproduces the dead bra-to-epilogue pair after the call).
  - `0x8c07e79c` (204 bytes): (short) result held in one int local s (assigned after the f136 snapshot) reused by all range tests; goto chain as if/else-if (declaration placement checked: not deciding).
  - `0x8c07f06c` (56 bytes): goto loop rewritten as while (i != 2) with the parameter advanced in place (o += 0x1f4) and a named -5 mask.
  - `0x8c0828ec` (148 bytes): unsigned-to-float bound written inline in the compare so the field reload precedes the global chain load.
  - `0x8c084164` (220 bytes): three separate word copies (o->f88/f8c/f90 into frame f30/f34/f38) instead of one Vector3 block copy (ref loads each offset literal into r0).
  - `0x8c0fd740` (128 bytes): 4-byte struct copy written straight from the shifted table address (no intermediate row-pointer local).
  - `0x8c102f9c` (132 bytes): extern store g_8c4d5954 = 1 written before the g_8c4d59d8 pointer read (statement order).
  - `0x8c10a65c` (68 bytes): global pointer re-read once into a local for the three extern float stores (only local, placement not applicable).
  - `0x8c10d684` (152 bytes): volatile ushort field masked & 0xffff keeps the extu.w before the frame halfword store (CW20; sibling of 8c10d71c).
  - `0x8c10d71c` (116 bytes): volatile ushort field masked & 0xffff keeps the extu.w before the frame halfword store (CW20).
  - `0x8c1112d4` (156 bytes): flag preset v1 = 0 moved before the null guard (fills the bt/s slot).
  - `0x8c113a4c` (88 bytes): CW17 scoped pointer for the fe8 update, updated value read into a float local before the bound is computed (.cpp); placement checked not deciding.
  - `0x8c113bb0` (136 bytes): volatile ushort table load masked & 0xffff keeps the extu.w before the halfword store (CW20).
  - `0x8c1282e4` (596 bytes): field read once into a float local and squared (draft read it twice); placement checked not deciding (.cpp).
  - `0x8c129f50` (192 bytes): slot-25 virtual call gets its middle int argument 0 (mov #0,r6 shared with the frame store); same v25(int, int, Block8) signature as 7 admitted sources.
  - `0x8c13c370` (200 bytes): extern globals g_8c4d9c30 (pointer) and g_8c4d9c38 let the 9c38 store sink past the next 9c30 load (CW14).
  - `0x8c1573f4` (108 bytes): wrapped index assigned straight to the short (no int temporary, removes extra exts.w).
  - `0x8c158738` (92 bytes): byte index extended once into an int local (v0 = (unsigned char)a0), shift taken from it; placement checked not deciding.
  - `0x8c16323c` (308 bytes): frame byte read once into the dead unsigned char v1 inside the bound test and reused for the table index (no new variable).
  - `0x8c169920` (416 bytes): same flag variable reused by both loops (inner v33 merged into v7), as 8c169b90; placement checked not deciding (.cpp).
  - `0x8c169b90` (360 bytes): same flag variable reused by both loops (inner v31 merged into v5) so the outer flag gets r11; placement checked not deciding (.cpp).
  - `0x8c16b970` (352 bytes): byte field f21 read once into an int local used by both the zero test and the shift; placement checked not deciding.
  - `0x8c17a49c` (272 bytes): row pointer o + v6 + (v8<<2) + 4 held in a scoped local for both halfword arguments (draft goto loop rewritten as a for loop; clobbered-register placeholder dropped).
  - `0x8c184ba4` (92 bytes): parameter a0 used directly instead of a copy (params then get r9/r10/r11 in order).
  - `0x8c185e90` (216 bytes): goto dispatch as switch with breaks; scaled offset computed into the dead int t1 before adding o (CW09-style integer offset).
  - `0x8c189ca0` (192 bytes): mode copied to an unsigned local first; guard tests the copy and the switch uses it (cmp/hi bound).
  - `0x8c199ff8` (76 bytes): byte field typed unsigned char (single extu.b) and CW12 logical prototype order float before the uchar parameter (same physical registers).
  - `0x8c1a1214` (52 bytes): by-value Block8 stack parameter forwarded to call_8c047b24 (callee reads it from its entry stack; same signature as admitted 8c0f8afc), callee float result returned.
  - `0x8c1b79b0` (56 bytes): chained halfword store f3c2 = f3c0 = 0xffff loads the value before the offsets.
  - `0x8c1b8e28` (188 bytes): (int)(t1 * 2.97f) + 4 computed into an int local before the f394 test (ref evaluates it before bt/s); placement checked, not deciding.
  - `0x8c1bde30` (116 bytes): if/else arms assign the call argument first in reference order; dropped the copied v1 local.
  - `0x8c1c1c80` (156 bytes): unsigned-to-float conversion assigned straight to the field (no float temporary), so the field address is formed before the fix-up branch.
  - `0x8c1c1e1c` (156 bytes): unsigned-to-float conversion assigned straight to the field (no float temporary), so the field address is formed before the fix-up branch.
  - `0x8c1c2160` (156 bytes): unsigned-to-float conversion assigned straight to the field (no float temporary), so the field address is formed before the fix-up branch.
  - `0x8c1ca5d4` (144 bytes): o->f2c read once into a local pointer for the test and the field read.
  - `0x8c1cd480` (108 bytes): wrapped index assigned straight to the short (no int temporary, removes extra exts.w).
  - `0x8c1dbc08` (180 bytes): switch value read once into an int local reused for the table index; placement checked not deciding.
  - `0x8c1dc2b8` (108 bytes): wrapped index assigned straight to the short (no int temporary, removes extra exts.w).
  - `0x8c1dfb6c` (108 bytes): switch cases adjust one result (v1 -= k; break) with a single return; += -2 form loads a pool literal.
  - `0x8c1ec7d0` (480 bytes): table value read into a short temporary before the ff0 store (stops the offset literal being hoisted); placement checked not deciding.
  - `0x8c209fe0` (248 bytes): narrow short parameter for operation_8c04a814/8c04a8dc (callees only add it into a halfword field); negated halfword passed directly.
  - `0x8c21f544` (32 bytes): volatile halfword load in an int temporary, masked & 0xffff then cast ushort/uchar (CW20 double extu.w).
  - `0x8c223a04` (108 bytes): virtual-call receiver read once into a local before the by-value block argument (.cpp).
  - `0x8c223a70` (108 bytes): virtual-call receiver read once into a local before the by-value block argument (.cpp).
  - `0x8c2263b8` (192 bytes): draft lost behaviour (passed the next byte): string cursor read once (c = *p++) and passed raw to a char parameter; placement checked not deciding.
  - `0x8c232ca0` (764 bytes): goto tangle rewritten as switch (o->f20) over four states; outer exits use break (return moved a literal pool).
  - `0x8c238dcc` (176 bytes): draft loop was garbled: count-down search loop for (i = 2; i >= 0; i--, p -= 28) returning i or -2; table as extern g_8c339ca0 + 0x258 (unfolded literal pair; binding added).
  - `0x8c23b080` (92 bytes): drop the v2 snapshot: compare o->f234 directly against the named limit v1 (CW03).
  - `0x8c241280` (276 bytes): element pointer formed once as v1 + (i<<2) + 4 with both halfword fields read through it; goto loop as while loop whose condition reads and clamps the count (comma expression) (.cpp).
  - `0x8c24ff18` (140 bytes): switch case 0: return; (not break) gives the dead bra-epilogue block after the dispatch.
  - `0x8c250190` (436 bytes): goto loop rewritten as a while loop over 4 records (pointer += 0xa4 at bottom); void return (draft returned the loop bound).
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- Several generated drafts had lost behaviour: a dropped store, a placeholder argument, the byte after a post-increment passed instead of the current one, an invented return value, or a copy loop one iteration short. Hand finishing restored the observed behaviour in each.
- A double `extu.w` before a halfword store or compare came from a volatile unsigned short read masked with `0xffff` (CW20).
- One value stored to two halfword fields came from a chained assignment.

## Parked and unresolved

- **Argument-register order around a call's delay slot** and **in-place `extu.w`** remain out of scope; the pinned compiler does not produce either shape.
- **Ranges ending in two bytes of alignment padding** cannot match as units.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
