# Reconstruction batch: 257: expanded candidate pool, part 61

53 new matching functions / 13,608 bytes. All 10404 prior functions preserved.

10457 exact functions in 10373 modules; 1,033,330 compiled function-range bytes; 0 reconstructed data bytes; 3,129,582 retained reference bytes. Whole-image coverage 24.8223% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01476c | 0x8c01476c | 168 |
| operation_8c045484 | 0x8c045484 | 296 |
| operation_8c046140 | 0x8c046140 | 184 |
| operation_8c046c18 | 0x8c046c18 | 340 |
| operation_8c046d6c | 0x8c046d6c | 448 |
| operation_8c04c338 | 0x8c04c338 | 176 |
| operation_8c04c448 | 0x8c04c448 | 144 |
| operation_8c0748f4 | 0x8c0748f4 | 80 |
| operation_8c076e38 | 0x8c076e38 | 400 |
| operation_8c07aea4 | 0x8c07aea4 | 308 |
| operation_8c07f810 | 0x8c07f810 | 260 |
| operation_8c0817d4 | 0x8c0817d4 | 144 |
| operation_8c084f64 | 0x8c084f64 | 156 |
| operation_8c0859a4 | 0x8c0859a4 | 220 |
| operation_8c086148 | 0x8c086148 | 132 |
| operation_8c094348 | 0x8c094348 | 660 |
| operation_8c09a998 | 0x8c09a998 | 244 |
| operation_8c0ada54 | 0x8c0ada54 | 180 |
| operation_8c0cb5bc | 0x8c0cb5bc | 176 |
| operation_8c0cfd18 | 0x8c0cfd18 | 452 |
| operation_8c0fd7c0 | 0x8c0fd7c0 | 224 |
| operation_8c103874 | 0x8c103874 | 200 |
| operation_8c10d42c | 0x8c10d42c | 600 |
| operation_8c10e728 | 0x8c10e728 | 136 |
| operation_8c12942c | 0x8c12942c | 172 |
| operation_8c130cf8 | 0x8c130cf8 | 288 |
| operation_8c13592c | 0x8c13592c | 288 |
| operation_8c1445e0 | 0x8c1445e0 | 180 |
| operation_8c1446c4 | 0x8c1446c4 | 104 |
| operation_8c144d8c | 0x8c144d8c | 368 |
| operation_8c157384 | 0x8c157384 | 112 |
| operation_8c15f790 | 0x8c15f790 | 748 |
| operation_8c1624f0 | 0x8c1624f0 | 192 |
| operation_8c163d74 | 0x8c163d74 | 252 |
| operation_8c169320 | 0x8c169320 | 428 |
| operation_8c16b8f0 | 0x8c16b8f0 | 128 |
| operation_8c170d28 | 0x8c170d28 | 188 |
| operation_8c1a034c | 0x8c1a034c | 288 |
| operation_8c1acdf8 | 0x8c1acdf8 | 116 |
| operation_8c1af304 | 0x8c1af304 | 192 |
| operation_8c1b4c9c | 0x8c1b4c9c | 228 |
| operation_8c1b5054 | 0x8c1b5054 | 240 |
| operation_8c1b53fc | 0x8c1b53fc | 240 |
| operation_8c1b58ec | 0x8c1b58ec | 472 |
| operation_8c1b91f8 | 0x8c1b91f8 | 320 |
| operation_8c1ccb64 | 0x8c1ccb64 | 448 |
| operation_8c1e1524 | 0x8c1e1524 | 196 |
| operation_8c1e4b64 | 0x8c1e4b64 | 220 |
| operation_8c21955c | 0x8c21955c | 276 |
| operation_8c225da0 | 0x8c225da0 | 248 |
| operation_8c23081c | 0x8c23081c | 148 |
| operation_8c239db0 | 0x8c239db0 | 100 |
| operation_8c23a8cc | 0x8c23a8cc | 100 |

## Method

Batch 257 has two parts: drafts from a generator cycle with new rules, and hand-finished near misses.

**Generator rules.** A scratch pass compared the 176 sources hand-finished in batches 254 and 255 with the generator's drafts for the same functions, and turned the recurring differences into generator rules. Each rule is guarded by a flag. They fall into two groups.

*Drafts that lost or changed behaviour:*
- a frame member's address plus a byte count is computed in bytes, and a typed pointer cast of a sum is parenthesised, so neither is scaled by the member type;
- an update tested at once is written `(v += e)` in the test, and an update feeding the next assignment is `f(++v)`; the drafts added twice;
- jump-table case bodies that change a register live at the join set a join variable; the drafts dropped them;
- a loop accumulation whose total is unused is kept; the drafts dropped the loop body;
- a callee-saved value loaded on only some passes of a loop is a loop variable; the drafts reset it every pass;
- constant `dt` block-copy loops inside goto regions are unrolled; the goto form lost the post-increment;
- a callee that returns a float at one call returns a float at every call; the drafts truncated it through an int.

*Source forms:*
- a parameter stored beside other members of a frame block whose address is passed is a block field, not a home, when it is never read back;
- `v = p->f; p->f = e + v` is `p->f += e`, and a float `member = product + member` is `member += product`;
- a pool constant extended with `extu.w` in a comparison is an `unsigned short` limit local;
- an 8-byte copy plus a word, or three word stores of pre-read words, is one `Vector3` copy; two word copies with register-only statements between them are one 8-byte copy; two halfword copies `@rN` / `@(2,rN)` are one 4-byte copy;
- `if (c) {} else v = x` is `v = c ? v : x`;
- a float value, or integer arithmetic, used by statements in two or more blocks is a local; so is a large constant both tested and stored;
- a narrow local passed through a function pointer keeps its narrow parameter type;
- a value the listing reads before earlier pointer stores is read into a local before them; an assignment whose reads all come first moves above those stores; a run of three or more such stores takes every value into a local first, in load order.

While the rules were developed, an intermediate version lost 83 exact (function, mode) drafts in 6 admitted functions; the responsible rules were narrowed, and the final rules lose none. Two targets drafted further from the reference because a rule corrected their behaviour (a removed size scaling, and a swap that read an element after overwriting it).

Calibration: 32/37 on batch 191 (previously 31), 44/55 on batch 190, and 8 of the 13 admitted jump-table functions. Across all admitted plans (190, 191 and 211–255), the jump-table set and every earlier cycle's result list, in all 24 modes, no exact draft was lost. Of the 176 hand-finished functions, the generator now drafts 44 exactly by itself, up from none.

A redraft of the 3,495 remaining candidates in 11 modes found 137 exact drafts; 18 were new. All 18 are exact over their full reviewed range.

**Hand-finished near misses.** Two separate scratch passes took 176 candidates whose best draft differed from the reference in at most 80 lines, most of them 41–80: the 34 that batch 256's pass did not reach, and 142 that no earlier pass had probed. They used the rules of batches 241–256:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The passes compiled 247 and 154 hypotheses. The most distinct compiler outputs on one target was 9; two parked targets had 11 compiled sources each, with 6 and 8 distinct outputs. They found 35 exact sources; all were trialled and all are admitted. The history guard refused no attempt.

**Declaration-order comparisons.** The passes made 13 labelled comparisons, at most one per target, and also placement checks on exact sources that gained new locals; for every admitted source checked, the other placement was also exact. Held back and not trialled:
- the comparison or placement decided the match: `0x8c158a24`, `0x8c237cb0`, `0x8c13b4e4`, `0x8c105380`, `0x8c020968`, `0x8c2227d0`, `0x8c0a4ec0` and `0x8c17f210`;
- `0x8c104e9c`, which uses the same helper as `0x8c105380` with that helper's deciding order;
- `0x8c1c9bb0`, which matches only with an always-false test.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (47) or a function end (6);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

53 recorded attempts on 53 targets, all hypotheses and all exact. 53 units / 53 functions / 13,608 bytes were admitted after two independent reproductions each: 18 unedited generated drafts and 35 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/` or in the hand-finishing passes' attempt logs.
- The 18 generated drafts are unedited. The other admitted sources were finished by hand from generated drafts.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms for the rules above: two on `0x8c257adc` and one on `0x8c1b1ebc`. No probe source is admitted, and no probe compared declaration orders. One probe showed that CodeWarrior reads a repeated member once across an `&&` chain by itself, so a planned rule for it was dropped.
- One compile of an unedited start draft (`0x8c084f64`) was made to test a pass's comparison script before the pass began.
- Some admitted sources use unusual forms:
  - `0x8c084f64`, `0x8c0859a4`, `0x8c15f790` and `0x8c21955c` are written with `static inline` helpers;
  - `0x8c15f790` binds the pointer-to-member test helper `__ptmf_test`;
  - `0x8c076e38` calls a variadic callee whose last named parameter is on the stack (CW20);
  - `0x8c103874` takes `int` parameters cast to `unsigned short`; the callee side suggests `unsigned short` parameters, which compile identically.
- Where a call gained an argument, the callee's own reads of that register or stack slot justify it (`0x8c07aea4`, `0x8c0cfd18`, `0x8c130cf8`).
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c01476c` (168 bytes): vector pointer p = g_8c418280 + 0xc kept across the calls for the first call argument and the final x/y/z arguments (draft re-read the global offsets).
  - `0x8c04c338` (176 bytes): jump-table switch on frame.f00 re-storing 0-4 with case 5 grouped with default = 1 (draft turned the table target into an invented call_8c04c39c).
  - `0x8c04c448` (144 bytes): behaviour restored: jump-table switch selecting the call_8c104ff8 string (g_8c2f2aac + 0/0xd/0x18/0x23, case 1 grouped with default +0x2f), result stored to g_8c467180, then g_8c46718c = g_8c467180->f30 (draft called an in-range address).
  - `0x8c076e38` (400 bytes): behaviour restored: call_8c075ccc(Object *, void *, ...) with the last named parameter (&frame.f10) on the stack (CW20; callee reads @(0x40,r15)); clean colour packing; named char -1 assigned just before its compare (CW03).
  - `0x8c07aea4` (308 bytes): behaviour restored: call_8c044320 takes two Vector3 by value (o->f3c, o->f54; callee reads both stack copies at r15+0x1c/0x28); draft dropped them.
  - `0x8c07f810` (260 bytes): result v8 as unsigned char local (single extu.b loads), else-if chain for the threshold, case 3 v8 = f208 then -= 10 or 0 (draft goto form).
  - `0x8c0817d4` (144 bytes): 24-byte block copy split into two Vector3 copies (o->f60 <- a2+0x18, o+0x6c <- a2+0x24); draft used one Block24 dt loop.
  - `0x8c084f64` (156 bytes): two static inline helpers (table read returning a found flag into a frame SBlock4, guarded table write); draft goto/flag form swapped the copy registers.
  - `0x8c0859a4` (220 bytes): family of 8c084f64: static inline table get/set helpers replace the goto/flag form.
  - `0x8c086148` (132 bytes): 24-byte block copy split into two Vector3 member copies (f60 = a2->f18, f6c = a2->f24).
  - `0x8c0cb5bc` (176 bytes): 24-byte block copy is two Vector3 member copies (f20 = o->f2c; f2c = o->f38).
  - `0x8c0cfd18` (452 bytes): behaviour restored: call_8c044320 takes two by-value Vector3 arguments (f158, f164) before the float (callee reads both stack copies; draft dropped them).
  - `0x8c0fd7c0` (224 bytes): int local v = a1->f00 read once, used by both tests and the f30a store (draft re-read the halfword).
  - `0x8c103874` (200 bytes): row pointer p = (char *)o + (a1 << 2) + 0x68 read once for both byte compares and stores (draft recomputed it; struct index gave mul.l), int a1 with unsigned < 3 test.
  - `0x8c10d42c` (600 bytes): f7c->f94 pointer local p read once for the f310 test and reused for frame.f00 = fb0.x - p->f3c (later reads reload); placement-independent (_3 with p declared first also exact).
  - `0x8c10e728` (136 bytes): two Vector3 pointer locals (&f94->f48, &f94->f3c) null-tested then differenced component-wise (draft re-read f94 per field).
  - `0x8c12942c` (172 bytes): first table entry copied straight from the table expression (draft went through a separate source pointer local, swapping r1/r3).
  - `0x8c130cf8` (288 bytes): jump-table switch on current_effect_mode with grouped cases calling call_8c05fbf8(id, o+0x3c, 0, 0) (draft invented call_8c130de2), if/else so empty cases target the epilogue.
  - `0x8c13592c` (288 bytes): behaviour restored: jump-table switch on current_effect_mode() over cases 0..15 (empty 0-2/11-15, sound calls call_8c05fbf8(0x40007/0x40001/0x40008, o+0x3c, 0, 0) for 3-5/6-7/8-10) as the last statement of an if/else (draft called an in-range address).
  - `0x8c1446c4` (104 bytes): frame filled by three Vector3 member copies (f460, f520, f52c); draft used a 24-byte block for the last two.
  - `0x8c15f790` (748 bytes): behaviour restored: axis swap/negate under f398->f18 & 0x3800000 (draft had an empty if); static inline set_state (state history, PMF table call via if (fn)) and is_7_or_8 (preset r = 1 cleared), idle flag c; direction Block local; __ptmf_test bound for the PMF null test.
  - `0x8c169320` (428 bytes): unsigned a1 parameter switched as (int)a1 (cmp/hi bound plus cmp/pz).
  - `0x8c16b8f0` (128 bytes): switch on the call result with case 0: return (dead bra to epilogue), shifted byte offsets (o->f20 << 2 / << 4), CW19 barrier (row + 0x28) + 4 for the Vector3 copy from o->f48.
  - `0x8c170d28` (188 bytes): behaviour restored: jump-table switch on the call_8c2480e4 result (cases 2..-3 in layout order, case -4 grouped with default) storing 2/1/0/3/4/5/6 into the table slot for a1 (draft called an in-range address); (unsigned char)a << 2 byte offsets.
  - `0x8c1acdf8` (116 bytes): for loop over a copied 3-int index table read by byte offset, found entry written through a0 advanced in place (+0x24, +0x14, +off) (draft goto loop kept extra copies).
  - `0x8c1b4c9c` (228 bytes): named offset local off = 0x3a8 shared by o->f3a8 and v1->f3a8 (held in r14), masked f3b0/f3a8 values read once into b, a per call.
  - `0x8c1b5054` (240 bytes): shared masked locals b = f3b0 & 3, a = f3a8 & 3 in both packing calls and a named 0x3a8 offset local shared by v1->f3a8 and o->f3a8 (KSHARE); placement-independent (_4 reversed declarations also exact).
  - `0x8c1b53fc` (240 bytes): family of 8c1b4c9c: named offset local off = 0x3a8 shared by o and v1, masked f3b0/f3a8 values read once into b, a.
  - `0x8c1b58ec` (472 bytes): C++: base pointer p = o + f3b0*0x18 + 0x444 computed before reading f3a0 into v1, && guard chain, single p local (draft read v1 first and kept a v7 copy).
  - `0x8c1b91f8` (320 bytes): random fraction converted to int once right after the call (r, used for two bit fields), if/else branches instead of return.
  - `0x8c1ccb64` (448 bytes): case arms written as if (f02 == k) return 1; break; with one shared return 0 (draft returned 0 per arm).
  - `0x8c1e1524` (196 bytes): behaviour restored: frame.f34 = &frame.f00 colour pointer with the four colour stores through it (draft dropped it); float argument computed first, vertex count v1 = 4 shared by frame.f3c and the call.
  - `0x8c1e4b64` (220 bytes): family of 8c12942c: first table entry copied straight from the table expression (no source pointer local).
  - `0x8c21955c` (276 bytes): inline find_entry helper (loop with g = g_8c505910 read in the test, shifted f0c offset) returning 1/0; int local r = (unsigned char)call_8c218c14(...) switched in a jump table; call_8c219308(a0,a1,a2) after the switch (draft had lost the cases and the call).
  - `0x8c225da0` (248 bytes): structured rewrite of the bounded multibyte string copy (draft goto form): body nested under if (dst != 0 && max > 0), while (len > max) loop, early-return guards, sjis flag passed by address, final copy and terminator.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- CodeWarrior does not hoist a load above an earlier store through a pointer. A value the listing reads before such a store was read into a local in the source.
- CodeWarrior reads a member repeated across an `&&` chain once by itself; no local is needed for it.

## Parked and unresolved

- **A different large-offset addressing and constant-register pattern** remains unsolved.
- **Declaration order** decides register assignment in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
