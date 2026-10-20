# Reconstruction batch: 255: expanded candidate pool, part 59

55 new matching functions / 15,016 bytes. All 10334 prior functions preserved.

10389 exact functions in 10305 modules; 1,014,398 compiled function-range bytes; 0 reconstructed data bytes; 3,148,514 retained reference bytes. Whole-image coverage 24.3675% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c015f58 | 0x8c015f58 | 280 |
| operation_8c04688c | 0x8c04688c | 248 |
| operation_8c046984 | 0x8c046984 | 232 |
| operation_8c0471fc | 0x8c0471fc | 108 |
| operation_8c04b794 | 0x8c04b794 | 244 |
| operation_8c052648 | 0x8c052648 | 264 |
| operation_8c0540ec | 0x8c0540ec | 200 |
| operation_8c074384 | 0x8c074384 | 200 |
| operation_8c08b014 | 0x8c08b014 | 332 |
| operation_8c08b5d4 | 0x8c08b5d4 | 320 |
| operation_8c09a658 | 0x8c09a658 | 156 |
| operation_8c0ac120 | 0x8c0ac120 | 232 |
| operation_8c0b0630 | 0x8c0b0630 | 308 |
| operation_8c0b4584 | 0x8c0b4584 | 272 |
| operation_8c0b9d68 | 0x8c0b9d68 | 100 |
| operation_8c0baa64 | 0x8c0baa64 | 308 |
| operation_8c0e94cc | 0x8c0e94cc | 356 |
| operation_8c105ee0 | 0x8c105ee0 | 344 |
| operation_8c108a24 | 0x8c108a24 | 436 |
| operation_8c14fdf0 | 0x8c14fdf0 | 492 |
| operation_8c166654 | 0x8c166654 | 220 |
| operation_8c168164 | 0x8c168164 | 124 |
| operation_8c168670 | 0x8c168670 | 784 |
| operation_8c16b4e4 | 0x8c16b4e4 | 244 |
| operation_8c16e4ec | 0x8c16e4ec | 92 |
| operation_8c16fd68 | 0x8c16fd68 | 104 |
| operation_8c175408 | 0x8c175408 | 144 |
| operation_8c1778d4 | 0x8c1778d4 | 152 |
| operation_8c17ab18 | 0x8c17ab18 | 208 |
| operation_8c192360 | 0x8c192360 | 352 |
| operation_8c197640 | 0x8c197640 | 452 |
| operation_8c197f48 | 0x8c197f48 | 152 |
| operation_8c1a9ff4 | 0x8c1a9ff4 | 244 |
| operation_8c1ac4d0 | 0x8c1ac4d0 | 212 |
| operation_8c1b4470 | 0x8c1b4470 | 216 |
| operation_8c1b6c24 | 0x8c1b6c24 | 332 |
| operation_8c1b6f4c | 0x8c1b6f4c | 172 |
| operation_8c1c4008 | 0x8c1c4008 | 452 |
| operation_8c1c7548 | 0x8c1c7548 | 272 |
| operation_8c1c8764 | 0x8c1c8764 | 332 |
| operation_8c1e7bb0 | 0x8c1e7bb0 | 208 |
| operation_8c1e9180 | 0x8c1e9180 | 192 |
| operation_8c1ef870 | 0x8c1ef870 | 248 |
| operation_8c1ef968 | 0x8c1ef968 | 232 |
| operation_8c20a35c | 0x8c20a35c | 196 |
| operation_8c20b1b0 | 0x8c20b1b0 | 124 |
| operation_8c20b508 | 0x8c20b508 | 176 |
| operation_8c21837c | 0x8c21837c | 560 |
| operation_8c221e64 | 0x8c221e64 | 224 |
| operation_8c22a75c | 0x8c22a75c | 400 |
| operation_8c236ae0 | 0x8c236ae0 | 444 |
| operation_8c238500 | 0x8c238500 | 84 |
| operation_8c2433bc | 0x8c2433bc | 764 |
| operation_8c25698c | 0x8c25698c | 260 |
| operation_8c2571dc | 0x8c2571dc | 212 |

## Method

Batch 255 comes from hand-finished near misses among the remaining candidate units. The draft generator did not change since batch 254. Three separate scratch passes started from the best generated drafts of batch 254's cycle:
- one took the 170 targets differing in 21–40 lines that the previous passes did not reach;
- two took 400 targets differing in 41–80 lines.

No earlier pass had probed any of these targets. The passes edited each draft until its whole range compiled exactly, under the rules of batches 241–254:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The passes compiled about 230, 158 and 262 hypotheses. The most on one target was 9. They made 19 labelled declaration-order comparisons, at most one per target. Some were placement checks on exact sources that gained new locals: for every admitted source checked, the other placement was also exact. Where the comparison decided the match, the source is held back and not trialled: `0x8c01154c`, `0x8c09e2d4`, `0x8c192764`, `0x8c248738`, `0x8c13f1d8`, `0x8c061674`, `0x8c075ac8` and `0x8c2473a8`.

The passes found 58 exact sources. All were trialled, and the history guard refused 3, so this batch admits 55.

The history guard refused 3 attempts, on `0x8c1ac17c`, `0x8c0a0828` and `0x8c0c4f08`, because those targets carry recorded history that the new attempt does not address. They stay blocked. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (50) or a function end (5);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

58 recorded attempts on 58 targets, all hypotheses. 55 were exact and the history guard refused 3. 55 units / 55 functions / 15,016 bytes were admitted after two independent reproductions each, all hand-finished from generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand-finishing passes' attempt logs.
- All admitted sources in this batch were finished by hand from generated drafts.
- `0x8c166654` uses an unusual form of the inlined base constructor (CW21): a scoped `self` copy with its own home covers the base part, while the derived stores and the return go through the parameter.
- One pass kept a declaration order from an earlier comparison in a later, non-exact hypothesis on `0x8c013b2c`. That source was not used, and a correction row is logged.
- **Per function**, the change that made each draft exact:
  - `0x8c015f58` (280 bytes): call result stored straight to g_8c41c72c, global re-read into an int local after the release call and scaled at both uses (test + argument).
  - `0x8c04688c` (248 bytes): compound += for f1ae (as 8c046984) and an unsigned short limit local for the 0x1000 compare (double extu.w of the pool constant).
  - `0x8c046984` (232 bytes): f1ae update written as one compound += of the converted product (draft read f1ae into a local first).
  - `0x8c0471fc` (108 bytes): single-case switch (case 0x10) gives the early rts; nop guard; f1ae += (int)(f1a6 * -f2c4).
  - `0x8c04b794` (244 bytes): code-range conversion as an if/else-if chain updating the parameter in place with one return (draft returned from each arm); a0 -= 0x4000 keeps the sub.
  - `0x8c052648` (264 bytes): call_8c052750 takes two 24-byte blocks by value (callee reads them past its frame); the draft's goto copy loops were those stack pushes; blocks kept in one frame struct (a1 block at 0, o block at 0x18).
  - `0x8c0540ec` (200 bytes): table write-backs as halfword-pair (SBlock4) struct copies; else-branch read copied straight from g + idx without the v13 pointer.
  - `0x8c074384` (200 bytes): structured binary-search insert (while hi > lo, mid local, named -1 for hi = n + m1 and hi > m1); global count read before the key field.
  - `0x8c08b014` (332 bytes): global base read into a char* local p (saved register), flags read once per case through it, p += 0x110 in place before both calls (placement-independent).
  - `0x8c08b5d4` (320 bytes): call argument o->f88 read into a local (reused v2) before the f8c/f90/f94 stores.
  - `0x8c09a658` (156 bytes): angle (int) conversion moved right after the first call (draft computed it after the clamp); clamp on a v3 local.
  - `0x8c0ac120` (232 bytes): frame position copied from o->f30 as one 12-byte Vector3 struct copy (draft split it into an 8-byte block and a separate word).
  - `0x8c0b0630` (308 bytes): goto tangle rewritten: switch limit preset, switch of guarded create/bind cases, while loop whose test assigns the row offset v9 = o->f24 << 3 reused by the body (placement checked).
  - `0x8c0b4584` (272 bytes): split 8+4 byte copies restored as whole Vector3 copies (o->f38 = *t1->f04; frame vector = o->f38).
  - `0x8c0b9d68` (100 bytes): position update written as += field * scale (compound assignment).
  - `0x8c0baa64` (308 bytes): sibling of 8c0b0630 (same structured source, table g_8c285788).
  - `0x8c0e94cc` (356 bytes): global base read into a char* local p (first flag test through it), p += 0x110 before the calls (as 8c08b014; placement-independent).
  - `0x8c105ee0` (344 bytes): record offset off = t3 * 0x14 computed once and reused for the copy source and the record pointer.
  - `0x8c108a24` (436 bytes): named 0x42c offset set before each loop (first loop too), table id read into a local before the pointer argument, CW12 logical prototype (int, void*, float, void*) for call_8c0c6fd8.
  - `0x8c14fdf0` (492 bytes): goto tangle rewritten with the draft's variables: per-slot switch (case 0: three record-list scans with if (p) for(;;) loops, type read once, p++ past the header; cases 1/2: three calls; empty case 3).
  - `0x8c166654` (220 bytes): CW21 variant: scoped self copy with its own home for the inlined base part (first call passes o), derived vtable/field stores and return through o kept in r12.
  - `0x8c168164` (124 bytes): second table is gc_8c4db2f0 + 0x10 in the same row array, with CW19 cast barrier (char *)(int *)(gc + 0x10) + a1*0x24.
  - `0x8c168670` (784 bytes): target position copied as one Vector3 struct copy; both materialized flags computed before their frame stores.
  - `0x8c16b4e4` (244 bytes): two 24-byte structs passed by value to call_8c052750(a1->f00, frame) (stack copies); frame built from fdc/fe0/f3c/f64.
  - `0x8c16e4ec` (92 bytes): table base read once into a char* local and elements indexed with a post-incremented a0 (a0++ << 2).
  - `0x8c16fd68` (104 bytes): position read through a tested Vector3 pointer local (v = &t1->f3c; if (v)) and stored with a post-incremented byte index a0++.
  - `0x8c175408` (144 bytes): f00 stored through the v1/v3 pointer locals (not a second o->f3b4 read) and the != 0 flag written inline in the mask expression.
  - `0x8c1778d4` (152 bytes): row byte reached through an unsigned char pointer local (g + (v1 << 7) + t2) and cleared in place (draft's struct casts and & 0xff duplicated the address).
  - `0x8c17ab18` (208 bytes): record cursor p = (char *)o->f13c + 0x754 advanced in place (p += 0x30; read; p += 4) and read for the two halfwords; clamp written back into v1 (draft re-read f13c and used 788 offsets).
  - `0x8c192360` (352 bytes): structured binary-search insert (named -1 for hi, lo reused as insert position), int parameter for operation_8c1926e0, table offset tag << 2 in an int local shared by both table reads.
  - `0x8c197640` (452 bytes): record pointer o->f30->f3c read into v1 before the f6b test and used by both store arms.
  - `0x8c197f48` (152 bytes): ternary base in a local, index shifted in place (t4 <<= 2) after it, second base reassigned to t2 then t2 += t4 (also exact with v4 declared first).
  - `0x8c1a9ff4` (244 bytes): row offset local off=i*0x14; float/int fields read as (g_8c288e38+0xc/+0x10)+off (CW19), for loop; dropped g_8c288e44 symbol.
  - `0x8c1ac4d0` (212 bytes): C-style inlined base constructor (sibling 0x8c1abe00 body) in a scoped self copy with &self home; raw o to base call; derived vtable/tag/size stores on o.
  - `0x8c1b4470` (216 bytes): rotation reads frame z then x into scoped float locals before both component stores (draft re-read x after the first store; size 216); declaration order checked.
  - `0x8c1b6c24` (332 bytes): flag preset moved next to its test (no longer live across calls), one source-vector pointer for both copies, z update written inline like x.
  - `0x8c1b6f4c` (172 bytes): behaviour fix: o written into frame word f00 of the context block passed to create_context_actor (draft modelled it as a parameter home).
  - `0x8c1c4008` (452 bytes): named clamp-limit local (lim = K; if (f13c >= lim) f13c = lim) in cases 1-3; case 4 keeps the literal.
  - `0x8c1c7548` (272 bytes): behaviour fix: draft dropped the results of the three record lookups (v6 preset 0, assigned in each case); inner f01 switch with grouped cases; operation_8c158794 takes an unsigned char (callee extends r4 itself).
  - `0x8c1c8764` (332 bytes): behaviour fix: draft dropped the result stores (v1 = 1.5f in cases 1/2/6, 2.0f in case 26); structured switch with && conditions.
  - `0x8c1e7bb0` (208 bytes): threshold test written !(o->ff4 + 1.0f < (float)(unsigned)f04) inline: the sum is evaluated before the unsigned conversion.
  - `0x8c1e9180` (192 bytes): flag v3 = (o->f34 & 0x100000) != 0 computed before the message initialisation instead of between the frame stores.
  - `0x8c1ef870` (248 bytes): sibling of 8c1ef968: table id read into short v1 before the fe8 flag updates.
  - `0x8c1ef968` (232 bytes): animation id read from the table into a short local (reused v1) before the fe8 flag updates, then passed to call_8c01c9e8.
  - `0x8c20a35c` (196 bytes): C++; second clamp reads f332 once into a short local (reused v40) like the first clamp.
  - `0x8c20b1b0` (124 bytes): float locals h, d=h*f28 then c=tag+h (load order); paired stores as chained assignments.
  - `0x8c20b508` (176 bytes): tag read once into an int local shared by all compares/loop bound; f06 read once into a short local used for the range test and the later copy; goto chains structured.
  - `0x8c21837c` (560 bytes): counter written as one pre-increment converted to float (draft incremented then added 1 again: doubled addition).
  - `0x8c221e64` (224 bytes): limit field ff4 read into a local before the counter increment/store (v = f24 + 1; f24 = v; test v > k*N - k).
  - `0x8c22a75c` (400 bytes): loop else-arm computes the slot position pointer once (block local) before the slot test and passes it to both create_effect_769c and the update call.
  - `0x8c236ae0` (444 bytes): named limit 0x3e7 in an int local for both counter tests (cast to short only in the first); trigger record addresses written &g_8c510b2c + 0x38 / + 0x2c so the base stays unfolded.
  - `0x8c238500` (84 bytes): clamp parameter in place and n-=1 before the loop; named -1 offset local (CW03); char pointer params.
  - `0x8c2433bc` (764 bytes): alternating slot value: v4 = 1 - v4 first, then ternary v6 = v4 != 0 ? 1 : 2 (constant 1 shared, dead-arm bra/nop).
  - `0x8c25698c` (260 bytes): behaviour fix: second sqrt call result kept float (draft truncated through int); running minimum as ternary v4 = t2 > v4 ? v4 : t2 (bf + dead-arm bra/nop).
  - `0x8c2571dc` (212 bytes): frame is a two-short Pair copied from a2 (fields accessed directly, not via char/short casts), rows written as Pair struct copies, goto tangle as nested ifs.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- Reads past the frame and saved registers are by-value struct parameters, and copies pushed before a call are by-value block arguments. Several drafts had lost these copies.
- A pool constant extended twice with `extu.w` came from an `unsigned short` limit local assigned just before the compare.
- Two globals 8 or 16 bytes apart were one table, reached as `base + k` behind a cast barrier (CW19).

## Parked and unresolved

- **Declaration order** decides register assignment in many remaining near misses, particularly in larger functions. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot** and **in-place `extu.w`** remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
