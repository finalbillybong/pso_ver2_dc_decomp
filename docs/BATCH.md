# Reconstruction batch: 266: expanded candidate pool, part 70

24 new matching functions / 6,632 bytes. All 10733 prior functions preserved.

10757 exact functions in 10673 modules; 1,095,258 compiled function-range bytes; 0 reconstructed data bytes; 3,067,654 retained reference bytes. Whole-image coverage 26.3099% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0521a0 | 0x8c0521a0 | 236 |
| operation_8c05228c | 0x8c05228c | 240 |
| operation_8c075968 | 0x8c075968 | 348 |
| operation_8c0792b4 | 0x8c0792b4 | 1232 |
| operation_8c0a681c | 0x8c0a681c | 500 |
| operation_8c0ce0b8 | 0x8c0ce0b8 | 168 |
| operation_8c0dc884 | 0x8c0dc884 | 168 |
| operation_8c100164 | 0x8c100164 | 292 |
| operation_8c101da8 | 0x8c101da8 | 412 |
| operation_8c109064 | 0x8c109064 | 452 |
| operation_8c113aa4 | 0x8c113aa4 | 172 |
| operation_8c11b13c | 0x8c11b13c | 196 |
| operation_8c11b7f0 | 0x8c11b7f0 | 200 |
| operation_8c165530 | 0x8c165530 | 380 |
| operation_8c168608 | 0x8c168608 | 104 |
| operation_8c16ce30 | 0x8c16ce30 | 72 |
| operation_8c17571c | 0x8c17571c | 232 |
| operation_8c1e98ac | 0x8c1e98ac | 220 |
| operation_8c22e20c | 0x8c22e20c | 112 |
| operation_8c22e414 | 0x8c22e414 | 104 |
| operation_8c244a18 | 0x8c244a18 | 268 |
| operation_8c245768 | 0x8c245768 | 140 |
| operation_8c24a6ec | 0x8c24a6ec | 152 |
| operation_8c252844 | 0x8c252844 | 232 |

## Method

Batch 266 is the first batch under the project owner's rule changes of 29 October 2026:
- **Search is allowed.** Any byte-exact source counts, however it was found, and sources found by automated search are disclosed as such. Declaration order may now decide a match. This replaces the declaration-order hold and the ten-hypothesis budget of batches 241–265.
- **No batch-size floor.** Batches close out when ready. Two independent reproductions per unit are still required.

These rules still hold: full-range exact only (with the padding rule), ordinary C or C++ with the pinned compiler and flags, no `-O3`, no `(v >= 0 ? v : v)`, and no forcing of the history guard.

**Search.** A scratch permuter rewrites a near-miss draft with behaviour-preserving source changes. It then compiles each variant and keeps those that move closer to the reference. The changes are:
- statement swaps and moves with dependency checks;
- commuted operands and flipped relations;
- `x = x op y` ↔ `x op= y`, and `++` forms;
- cast removal or narrowing;
- a subexpression into a new or dead local, or back inline;
- a named constant assigned before use;
- integer type changes, only where every stored value fits;
- declaration order and scope;
- if/else inversion, `||`/`&&` guard forms, and loop-form conversions.

It never produces asm, pragmas, flag changes, prototype or signature changes, or wrapper constructs. After an exact hit, the edits are trimmed back toward the start draft, keeping only those needed for the match. A lint then rejects results with new unused locals, write-only locals or dead stores.

Measured on a frozen random sample of 160 parked near misses (40 in each band of 1–8, 9–24, 25–80 and 81–200 differing lines), it made 3 exact at 400 compiles per target and 5 exact at 4,000. The 1–8 band (register-allocation residues) was essentially unreachable. On 10 targets that hand passes had already matched, it reproduced 5 from their recorded start drafts. A run over the remaining parked targets at 4,000 compiles each is continuing in scratch.

**Admitted from search.** Of 27 exact search results not already admitted, 22 are admitted. 5 are held back because they need 6 or more invented temporaries, which is not plausible as original source: `0x8c05157c`, `0x8c05a430`, `0x8c20b22c`, `0x8c1aad50`, `0x8c15e538`.

**Prototype holds released.** `0x8c168608` and `0x8c0dc884` were held in batches 263 and 264 because their sources declare an admitted pass-through stub with a different prototype. `0x8c168608` passes a second argument to `operation_8c13f1cc`; `0x8c0dc884` declares `operation_8c0dc4fc` as returning a pointer. In both cases the stub only forwards to a function that uses the value. Each source declares its callees locally, and admitted sources already disagree in the same way: `operation_8c168670` declares `operation_8c13f1cc(int, int)`, and `call_8c0dc510` is declared three ways. Both are admitted unchanged, and no published source is edited.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (22) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

24 recorded attempts on 24 targets, all exact. 24 units / 24 functions / 6,632 bytes were admitted after two independent reproductions each: 22 sources found by search and 2 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison: by the permuter (logged in its compile and result logs), or as logged in the hand passes' attempt logs.
- **Found by search.** Each entry gives the size of the trimmed diff from the start draft (the generator's best draft, or for `0x8c244a18` an earlier hand hypothesis) and the number of new locals. Where noted, the exact source needs its declaration order; restoring the start order breaks the match.
  - `0x8c0521a0` (236 bytes): 29-line diff, 4 new locals (declaration order decides).
  - `0x8c05228c` (240 bytes): 20-line diff, 1 new local (declaration order decides).
  - `0x8c075968` (348 bytes): 12-line diff, 3 new locals.
  - `0x8c0792b4` (1,232 bytes): 65-line diff, 3 new locals.
  - `0x8c0a681c` (500 bytes): 22-line diff, 3 new locals.
  - `0x8c0ce0b8` (168 bytes): 22-line diff, 5 new locals.
  - `0x8c100164` (292 bytes): 6-line diff, no new locals.
  - `0x8c101da8` (412 bytes): 8-line diff, 2 new locals.
  - `0x8c109064` (452 bytes): 26-line diff, 5 new locals.
  - `0x8c113aa4` (172 bytes): 26-line diff, 4 new locals.
  - `0x8c11b13c` (196 bytes): 35-line diff, 1 new local.
  - `0x8c11b7f0` (200 bytes): 21-line diff, 2 new locals (declaration order decides).
  - `0x8c165530` (380 bytes): 10-line diff, 2 new locals.
  - `0x8c16ce30` (72 bytes): 16-line diff, no new locals (declaration order decides).
  - `0x8c17571c` (232 bytes): 4-line diff, 1 new local (a named constant before an add).
  - `0x8c1e98ac` (220 bytes): 14-line diff, 3 new locals.
  - `0x8c22e20c` (112 bytes): 12-line diff, 3 new locals.
  - `0x8c22e414` (104 bytes): 8-line diff, 2 new locals.
  - `0x8c244a18` (268 bytes): 23-line diff, 1 new local (declaration order decides).
  - `0x8c245768` (140 bytes): 24-line diff, 3 new locals.
  - `0x8c24a6ec` (152 bytes): 27-line diff, 3 new locals (declaration order decides).
  - `0x8c252844` (232 bytes): 18-line diff, 3 new locals.
- **Hand-finished**:
  - `0x8c168608` (104 bytes): table value read into `t` and passed as the second argument, `operation_8c13f1cc(o->f40, t)`. The callee leaves r4/r5 untouched and jumps to `call_8c13f1d8`, which reads r5.
  - `0x8c0dc884` (168 bytes): goto tangle rewritten as two list loops. The outer test reads the first call argument, the callee returns the next node (tested), the `f34` locals are read once, and the mask is named `v4 = -0x401` (CW03).

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical; search-introduced locals are named `pmN`.

## Observed techniques

- The search's winning edits are the same kinds hand passes use: named constants before use, offsets computed once into a local, commuted operands, removed redundant casts and declaration order.
- Search lowers differing lines by about a quarter in larger near misses without reaching exact. That makes them better starting points for hand passes.

## Parked and unresolved

- **Register allocation** in near misses of 1–8 lines remains out of reach of both hand passes and search.
- The five search results held back for invented temporaries stay parked.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
