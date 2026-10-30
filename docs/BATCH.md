# Reconstruction batch: 269: expanded candidate pool, part 73

37 new matching functions / 8,292 bytes. All 10818 prior functions preserved.

10855 exact functions in 10771 modules; 1,115,854 compiled function-range bytes; 0 reconstructed data bytes; 3,047,058 retained reference bytes. Whole-image coverage 26.8047% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c012efc | 0x8c012efc | 160 |
| operation_8c013b2c | 0x8c013b2c | 164 |
| operation_8c028264 | 0x8c028264 | 460 |
| operation_8c05157c | 0x8c05157c | 468 |
| operation_8c05a430 | 0x8c05a430 | 168 |
| operation_8c05c1f0 | 0x8c05c1f0 | 236 |
| operation_8c082048 | 0x8c082048 | 172 |
| operation_8c08ce40 | 0x8c08ce40 | 188 |
| operation_8c08d8a8 | 0x8c08d8a8 | 140 |
| operation_8c08db0c | 0x8c08db0c | 140 |
| operation_8c08fb6c | 0x8c08fb6c | 264 |
| operation_8c08fc74 | 0x8c08fc74 | 228 |
| operation_8c08fefc | 0x8c08fefc | 140 |
| operation_8c09010c | 0x8c09010c | 140 |
| operation_8c09ae10 | 0x8c09ae10 | 120 |
| operation_8c09e748 | 0x8c09e748 | 108 |
| operation_8c0ece88 | 0x8c0ece88 | 240 |
| operation_8c0f99dc | 0x8c0f99dc | 168 |
| operation_8c1181ec | 0x8c1181ec | 276 |
| operation_8c140350 | 0x8c140350 | 424 |
| operation_8c158d24 | 0x8c158d24 | 468 |
| operation_8c15e538 | 0x8c15e538 | 224 |
| operation_8c161908 | 0x8c161908 | 376 |
| operation_8c167eb8 | 0x8c167eb8 | 108 |
| operation_8c16d7ac | 0x8c16d7ac | 224 |
| operation_8c1858c4 | 0x8c1858c4 | 204 |
| operation_8c185e30 | 0x8c185e30 | 96 |
| operation_8c1869f4 | 0x8c1869f4 | 64 |
| operation_8c1aad50 | 0x8c1aad50 | 208 |
| operation_8c1b349c | 0x8c1b349c | 324 |
| operation_8c1bf87c | 0x8c1bf87c | 212 |
| operation_8c1c7ffc | 0x8c1c7ffc | 152 |
| operation_8c1e0174 | 0x8c1e0174 | 432 |
| operation_8c207668 | 0x8c207668 | 168 |
| operation_8c222514 | 0x8c222514 | 136 |
| operation_8c2262b8 | 0x8c2262b8 | 256 |
| operation_8c24096c | 0x8c24096c | 236 |

## Method

Batch 269 consists of sources found by automated search. It uses batch 266's rules: any byte-exact source counts, and sources found by automated search are disclosed as such. Declaration order may decide a match. These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3` and no `(v >= 0 ? v : v)`;
- two independent reproductions per unit;
- at least 5,120 bytes per batch, which the integration tool enforces;
- the history guard is never forced.

**Search.** The scratch permuter described in batch 266 finished its first pass over the parked targets at 4,000 compiles each. A second pass then started with a different random seed. It covers the 1,268 targets whose best search result was within 40 differing lines, and it is still running.

**Invented temporaries.** Batches 266–268 held back exact search results that needed six or more new temporaries. The project owner has since decided that such sources are admitted, disclosed with their counts, because they are byte-exact and ordinary C. Only results with 20 or more new temporaries stay held: `0x8c109ecc` (29) and `0x8c17963c` (48).

**History guard.** Five exact search sources were refused by the history guard and not forced: `0x8c011e10`, `0x8c0c3d54`, `0x8c119770`, `0x8c1b31bc` and `0x8c20b22c`.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (35) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

42 recorded attempts on 42 targets, all exact; 5 were refused by the history guard. 37 units / 37 functions / 8,292 bytes were admitted after two independent reproductions each, all of them sources found by search.

Disclosure:
- Every admitted function was first found exact by the permuter, as logged in its compile and result logs.
- **Found by search.** Each entry gives the size of the trimmed diff from the start draft and the number of new locals (named `pmN`). It also notes where the exact source needs its declaration order, where it was held in an earlier batch, and where the second pass found it.
  - `0x8c012efc` (160 bytes): 10-line diff, no new locals; declaration order decides.
  - `0x8c013b2c` (164 bytes): 49-line diff, 8 new locals; held in an earlier batch.
  - `0x8c028264` (460 bytes): 95-line diff, 10 new locals; declaration order decides; held in an earlier batch.
  - `0x8c05157c` (468 bytes): 30-line diff, 6 new locals; held in an earlier batch.
  - `0x8c05a430` (168 bytes): 34-line diff, 6 new locals; declaration order decides; held in an earlier batch.
  - `0x8c05c1f0` (236 bytes): 43-line diff, 5 new locals; declaration order decides.
  - `0x8c082048` (172 bytes): 42-line diff, 7 new locals; held in an earlier batch.
  - `0x8c08ce40` (188 bytes): 74-line diff, 10 new locals; declaration order decides; held in an earlier batch.
  - `0x8c08d8a8` (140 bytes): 4-line diff, no new locals; declaration order decides.
  - `0x8c08db0c` (140 bytes): 54-line diff, 2 new locals; declaration order decides.
  - `0x8c08fb6c` (264 bytes): 70-line diff, 7 new locals; declaration order decides; held in an earlier batch.
  - `0x8c08fc74` (228 bytes): 80-line diff, 6 new locals; declaration order decides; held in an earlier batch.
  - `0x8c08fefc` (140 bytes): 94-line diff, 10 new locals; declaration order decides; held in an earlier batch.
  - `0x8c09010c` (140 bytes): 77-line diff, 11 new locals; declaration order decides; held in an earlier batch; second pass.
  - `0x8c09ae10` (120 bytes): 38-line diff, 6 new locals; declaration order decides; held in an earlier batch; second pass.
  - `0x8c09e748` (108 bytes): 70-line diff, 9 new locals; declaration order decides; held in an earlier batch.
  - `0x8c0ece88` (240 bytes): 38-line diff, 12 new locals; held in an earlier batch.
  - `0x8c0f99dc` (168 bytes): 27-line diff, 6 new locals; held in an earlier batch.
  - `0x8c1181ec` (276 bytes): 28-line diff, 1 new local; declaration order decides.
  - `0x8c140350` (424 bytes): 18-line diff, 1 new local; declaration order decides; second pass.
  - `0x8c158d24` (468 bytes): 35-line diff, 3 new locals; declaration order decides.
  - `0x8c15e538` (224 bytes): 46-line diff, 13 new locals; held in an earlier batch.
  - `0x8c161908` (376 bytes): 87-line diff, 13 new locals; held in an earlier batch.
  - `0x8c167eb8` (108 bytes): 40-line diff, 7 new locals; declaration order decides; held in an earlier batch.
  - `0x8c16d7ac` (224 bytes): 15-line diff, 1 new local; declaration order decides.
  - `0x8c1858c4` (204 bytes): 4-line diff, 1 new local.
  - `0x8c185e30` (96 bytes): 37-line diff, 11 new locals; held in an earlier batch; second pass.
  - `0x8c1869f4` (64 bytes): 34-line diff, 7 new locals; declaration order decides; held in an earlier batch.
  - `0x8c1aad50` (208 bytes): 45-line diff, 11 new locals; held in an earlier batch.
  - `0x8c1b349c` (324 bytes): 44-line diff, 5 new locals; declaration order decides; second pass.
  - `0x8c1bf87c` (212 bytes): 44-line diff, 10 new locals; held in an earlier batch; second pass.
  - `0x8c1c7ffc` (152 bytes): 28-line diff, 6 new locals; declaration order decides; held in an earlier batch.
  - `0x8c1e0174` (432 bytes): 12-line diff, 1 new local; declaration order decides.
  - `0x8c207668` (168 bytes): 4-line diff, no new locals; declaration order decides.
  - `0x8c222514` (136 bytes): 50-line diff, 13 new locals; held in an earlier batch.
  - `0x8c2262b8` (256 bytes): 51-line diff, 13 new locals; held in an earlier batch.
  - `0x8c24096c` (236 bytes): 17-line diff, no new locals; declaration order decides.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical; search-introduced temporaries are candidates for later clean-up.

## Parked and unresolved

- **Register allocation** in near misses of 1–8 lines remains mostly out of reach.
- A scratch measurement of the pinned Hitachi SHC compilers on library-style functions has started. Nothing from it is used here.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
