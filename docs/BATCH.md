# Reconstruction batch: 267: expanded candidate pool, part 71

33 new matching functions / 6,012 bytes. All 10757 prior functions preserved.

10790 exact functions in 10706 modules; 1,101,270 compiled function-range bytes; 0 reconstructed data bytes; 3,061,642 retained reference bytes. Whole-image coverage 26.4543% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c016354 | 0x8c016354 | 184 |
| operation_8c024840 | 0x8c024840 | 124 |
| operation_8c032b70 | 0x8c032b70 | 104 |
| operation_8c05bed8 | 0x8c05bed8 | 80 |
| operation_8c07435c | 0x8c07435c | 40 |
| operation_8c09b7ec | 0x8c09b7ec | 264 |
| operation_8c09ca5c | 0x8c09ca5c | 80 |
| operation_8c09e05c | 0x8c09e05c | 300 |
| operation_8c09e8c4 | 0x8c09e8c4 | 92 |
| operation_8c0bbbf0 | 0x8c0bbbf0 | 160 |
| operation_8c0bc414 | 0x8c0bc414 | 276 |
| operation_8c0d7230 | 0x8c0d7230 | 244 |
| operation_8c0dd70c | 0x8c0dd70c | 360 |
| operation_8c0f6c0c | 0x8c0f6c0c | 288 |
| operation_8c11a504 | 0x8c11a504 | 212 |
| operation_8c154d00 | 0x8c154d00 | 40 |
| operation_8c15558c | 0x8c15558c | 144 |
| operation_8c156f50 | 0x8c156f50 | 188 |
| operation_8c15700c | 0x8c15700c | 168 |
| operation_8c167f24 | 0x8c167f24 | 176 |
| operation_8c16fde8 | 0x8c16fde8 | 72 |
| operation_8c171cc8 | 0x8c171cc8 | 92 |
| operation_8c1acea4 | 0x8c1acea4 | 340 |
| operation_8c1be910 | 0x8c1be910 | 256 |
| operation_8c1bf958 | 0x8c1bf958 | 252 |
| operation_8c1cd7c8 | 0x8c1cd7c8 | 140 |
| operation_8c1d6c7c | 0x8c1d6c7c | 84 |
| operation_8c21f5d4 | 0x8c21f5d4 | 44 |
| operation_8c23b8b4 | 0x8c23b8b4 | 164 |
| operation_8c243784 | 0x8c243784 | 380 |
| operation_8c250918 | 0x8c250918 | 204 |
| operation_8c25361c | 0x8c25361c | 52 |
| operation_8c2596d8 | 0x8c2596d8 | 408 |

## Method

Batch 267 continues batch 266's rules: any byte-exact source counts, and sources found by automated search are disclosed as such. Declaration order may decide a match, and there is no batch-size floor. These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3` and no `(v >= 0 ? v : v)`;
- two independent reproductions per unit;
- the history guard is never forced.

**Search.** Every source in this batch was found by the scratch permuter described in batch 266. It ran over the remaining parked targets at 4,000 compiles each, smallest differences first, and that run is continuing. The search changes source only in behaviour-preserving ways. After a hit, its edits are trimmed back toward the start draft, and results with unused or write-only locals or dead stores are rejected.

**Held back.** Seven further exact search results need six or more invented temporaries, which is not plausible as original source. They are held back and not trialled: `0x8c011e10`, `0x8c09e748`, `0x8c0f99dc`, `0x8c1c7ffc`, `0x8c222514`, `0x8c109ecc` and `0x8c167eb8`. Batch 266's five held search results remain held.

The generator gained new rules from a scratch research pass after batch 266. None of this batch's sources comes from the new generator; its redraft of the remaining candidates is in progress, and it will be disclosed in the batch that first uses it.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (31) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

33 recorded attempts on 33 targets, all exact. 33 units / 33 functions / 6,012 bytes were admitted after two independent reproductions each, all of them sources found by search.

Disclosure:
- Every admitted function was first found exact by the permuter, as logged in its compile and result logs.
- **Found by search.** Each entry gives the size of the trimmed diff from the start draft and the number of new locals (named `pmN`). Where noted, the exact source needs its declaration order.
  - `0x8c024840` (124 bytes): 2-line diff, no new locals.
  - `0x8c05bed8` (80 bytes): 8-line diff, 1 new local (declaration order decides).
  - `0x8c07435c` (40 bytes): 20-line diff, 3 new locals (declaration order decides).
  - `0x8c09ca5c` (80 bytes): 16-line diff, 1 new local (declaration order decides).
  - `0x8c0bbbf0` (160 bytes): 2-line diff, no new locals.
  - `0x8c0d7230` (244 bytes): 12-line diff, 2 new locals.
  - `0x8c0dd70c` (360 bytes): 28-line diff, no new locals (declaration order decides).
  - `0x8c0f6c0c` (288 bytes): 14-line diff, 3 new locals.
  - `0x8c11a504` (212 bytes): 17-line diff, 3 new locals.
  - `0x8c154d00` (40 bytes): 16-line diff, 2 new locals (declaration order decides).
  - `0x8c15558c` (144 bytes): 22-line diff, 3 new locals (declaration order decides).
  - `0x8c156f50` (188 bytes): 14-line diff, no new locals (declaration order decides).
  - `0x8c15700c` (168 bytes): 18-line diff, no new locals (declaration order decides).
  - `0x8c171cc8` (92 bytes): 12-line diff, 3 new locals.
  - `0x8c1acea4` (340 bytes): 14-line diff, 2 new locals.
  - `0x8c1be910` (256 bytes): 17-line diff, 4 new locals.
  - `0x8c1bf958` (252 bytes): 13-line diff, 1 new local.
  - `0x8c1cd7c8` (140 bytes): 2-line diff, no new locals (declaration order decides).
  - `0x8c1d6c7c` (84 bytes): 2-line diff, no new locals (declaration order decides).
  - `0x8c21f5d4` (44 bytes): 21-line diff, 3 new locals (declaration order decides).
  - `0x8c243784` (380 bytes): 8-line diff, no new locals (declaration order decides).
  - `0x8c250918` (204 bytes): 34-line diff, 1 new local (declaration order decides).
  - `0x8c25361c` (52 bytes): 18-line diff, 2 new locals.
  - `0x8c2596d8` (408 bytes): 17-line diff, 1 new local.
  - `0x8c016354` (184 bytes): 8-line diff, 1 new local (declaration order decides).
  - `0x8c032b70` (104 bytes): 26-line diff, 5 new locals (declaration order decides).
  - `0x8c09b7ec` (264 bytes): 14-line diff, 2 new locals (declaration order decides).
  - `0x8c09e05c` (300 bytes): 92-line diff, 4 new locals (declaration order decides).
  - `0x8c09e8c4` (92 bytes): 5-line diff, 1 new local.
  - `0x8c0bc414` (276 bytes): 1-line diff, no new locals.
  - `0x8c167f24` (176 bytes): 15-line diff, 1 new local (declaration order decides).
  - `0x8c16fde8` (72 bytes): 16-line diff, 1 new local.
  - `0x8c23b8b4` (164 bytes): 31-line diff, 3 new locals.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Register allocation** in near misses of 1–8 lines remains out of reach of both hand passes and search.
- Search results that need many invented temporaries stay parked.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
