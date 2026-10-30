# Reconstruction batch: 268: expanded candidate pool, part 72

28 new matching functions / 6,292 bytes. All 10790 prior functions preserved.

10818 exact functions in 10734 modules; 1,107,562 compiled function-range bytes; 0 reconstructed data bytes; 3,055,350 retained reference bytes. Whole-image coverage 26.6055% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0236b0 | 0x8c0236b0 | 136 |
| operation_8c0263a4 | 0x8c0263a4 | 96 |
| operation_8c04b698 | 0x8c04b698 | 72 |
| operation_8c08f414 | 0x8c08f414 | 180 |
| operation_8c09dfec | 0x8c09dfec | 100 |
| operation_8c0a6a10 | 0x8c0a6a10 | 164 |
| operation_8c0f4fd8 | 0x8c0f4fd8 | 384 |
| operation_8c0fba40 | 0x8c0fba40 | 188 |
| operation_8c1002d0 | 0x8c1002d0 | 256 |
| operation_8c11a72c | 0x8c11a72c | 236 |
| operation_8c11b610 | 0x8c11b610 | 480 |
| operation_8c122410 | 0x8c122410 | 112 |
| operation_8c1447e8 | 0x8c1447e8 | 156 |
| operation_8c144884 | 0x8c144884 | 136 |
| operation_8c1496ec | 0x8c1496ec | 480 |
| operation_8c151308 | 0x8c151308 | 208 |
| operation_8c1847c0 | 0x8c1847c0 | 104 |
| operation_8c18eb64 | 0x8c18eb64 | 156 |
| operation_8c191b98 | 0x8c191b98 | 924 |
| operation_8c1924c0 | 0x8c1924c0 | 152 |
| operation_8c1c0dc0 | 0x8c1c0dc0 | 116 |
| operation_8c1d45d0 | 0x8c1d45d0 | 64 |
| operation_8c1d6968 | 0x8c1d6968 | 352 |
| operation_8c1d96bc | 0x8c1d96bc | 284 |
| operation_8c1eb024 | 0x8c1eb024 | 248 |
| operation_8c1edb34 | 0x8c1edb34 | 216 |
| operation_8c2179e0 | 0x8c2179e0 | 144 |
| operation_8c22c8dc | 0x8c22c8dc | 148 |

## Method

Batch 268 combines a generator redraft and sources found by automated search. It uses batch 266's rules: any byte-exact source counts, and sources found by automated search are disclosed as such. Declaration order may decide a match. These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3` and no `(v >= 0 ? v : v)`;
- two independent reproductions per unit;
- at least 5,120 bytes per batch, which the integration tool enforces;
- the history guard is never forced.

**Generator rules.** A scratch research pass added about 25 rules to the draft generator, each behind its own flag. Most of them re-create forms that hand passes found:
- **Shared variables.** A local that takes the register of a dead earlier local of the same type is the same variable, checked with structured liveness and only in functions without gotos. A copy of a variable or parameter in the same register is merged with it. A late value goes into a dead parameter whose callee-saved home it takes.
- **Return guards.** Nested `if (A) { if (B) return; ... }` becomes an `||` return guard, also inside switch cases.
- **Operand and statement order.** Compare operands follow their scratch registers. `x = v + x` is used when the add writes `v`'s register. Runs of stores to globals follow the order of their address loads. Opening constant presets follow the order the constants are materialised. A call argument loaded early is read into a local first. A load in a conditional delay slot that only the fall-through reads becomes a local before the test.
- **Computed once.** A call result used only scaled is scaled once into a local. A just-stored field is tested through the stored value. `t = x + k; ...; x = t;` folds to `x = x + k`. A far member of an extern object is indexed through a word subscript.
- **Lost or invented behaviour.** `return (g->f = K);` is used where the listing shows it. An argument register written in a block-copy delay slot is not a call argument. Virtual calls get the frame argument. A constant in r6 before a structure passed on the stack is a virtual-call argument.

No rule chooses a declaration order. Calibration stayed at its previous level (34 / 44 / 8). Per-function, per-mode regressions over every admitted plan (190, 191, 211–266), the jump-table set, earlier agents' result lists and earlier batch files lost no exact draft.

The pass compiled hand probes to learn source forms (scratch only, not trialled):
- `0x8c2488e0`: two word-subscript forms exact, five not;
- `0x8c19b710`: two scaled-call-result forms exact;
- `0x8c105bec`, `0x8c0c5094`, `0x8c044410` and `0x8c103d6c`: not exact.

Two of these probes declared a block-scope local only to learn the form, and neither became a rule. None of the probe sources is admitted.

**Redraft.** The 3,134 remaining candidates were redrafted in the 11 regular generator modes. 4 drafts were exact. Two of them (`0x8c1cd7c8` and `0x8c250918`) had already been admitted in batch 267 from search, and the other two are admitted here. A further two exact sources from search, `0x8c031430` and `0x8c0c3dd0`, were refused by the history guard and not forced.

**Search.** The scratch permuter described in batch 266 continued over the remaining parked targets at 4,000 compiles each. That run is continuing.

**Held back.** Six further exact search results need six or more invented temporaries, which is not plausible as original source. They are held back and not trialled: `0x8c028264`, `0x8c1869f4`, `0x8c08fb6c`, `0x8c08fc74`, `0x8c08ce40` and `0x8c0c3d54`. Earlier held search results remain held.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (27) or a function end (1);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

30 recorded attempts on 30 targets, all exact; 2 were refused by the history guard. 28 units / 28 functions / 6,292 bytes were admitted after two independent reproductions each: 2 unedited generated drafts and 26 sources found by search.

Disclosure:
- Every admitted function was first found exact in a scratch comparison: in the generator redraft, or by the permuter as logged in its compile and result logs.
- **Generated drafts:** `0x8c0f4fd8` (384 bytes) and `0x8c122410` (112 bytes). Their rules were found through hand-pass sources and the probes above.
- **Found by search.** Each entry gives the size of the trimmed diff from the start draft and the number of new locals (named `pmN`). Where noted, the exact source needs its declaration order.
  - `0x8c0236b0` (136 bytes): 26-line diff, 2 new locals (declaration order decides).
  - `0x8c0263a4` (96 bytes): 35-line diff, 5 new locals (declaration order decides).
  - `0x8c04b698` (72 bytes): 12-line diff, no new locals (declaration order decides).
  - `0x8c08f414` (180 bytes): 36-line diff, 3 new locals (declaration order decides).
  - `0x8c09dfec` (100 bytes): 18-line diff, 1 new local (declaration order decides).
  - `0x8c0a6a10` (164 bytes): 13-line diff, 2 new locals.
  - `0x8c0fba40` (188 bytes): 17-line diff, 4 new locals.
  - `0x8c1002d0` (256 bytes): 43-line diff, 5 new locals.
  - `0x8c11b610` (480 bytes): 26-line diff, 2 new locals (declaration order decides).
  - `0x8c1447e8` (156 bytes): 26-line diff, 3 new locals (declaration order decides).
  - `0x8c144884` (136 bytes): 23-line diff, 5 new locals (declaration order decides).
  - `0x8c1496ec` (480 bytes): 8-line diff, no new locals (declaration order decides).
  - `0x8c151308` (208 bytes): 37-line diff, 4 new locals.
  - `0x8c1847c0` (104 bytes): 23-line diff, 3 new locals (declaration order decides).
  - `0x8c1924c0` (152 bytes): 3-line diff, no new locals.
  - `0x8c1c0dc0` (116 bytes): 11-line diff, 1 new local (declaration order decides).
  - `0x8c1d45d0` (64 bytes): 22-line diff, 1 new local (declaration order decides).
  - `0x8c1d6968` (352 bytes): 2-line diff, no new locals (declaration order decides).
  - `0x8c1d96bc` (284 bytes): 19-line diff, 4 new locals.
  - `0x8c1eb024` (248 bytes): 33-line diff, 2 new locals.
  - `0x8c1edb34` (216 bytes): 14-line diff, 1 new local (declaration order decides).
  - `0x8c2179e0` (144 bytes): 20-line diff, 3 new locals (declaration order decides).
  - `0x8c22c8dc` (148 bytes): 18-line diff, 1 new local (declaration order decides).
  - `0x8c11a72c` (236 bytes): 3-line diff, no new locals.
  - `0x8c18eb64` (156 bytes): 24-line diff, 4 new locals.
  - `0x8c191b98` (924 bytes): 5-line diff, no new locals.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Parked and unresolved

- **Register allocation** in near misses of 1–8 lines remains out of reach of hand passes, search and the generator.
- **Out of scope:** argument-register order around a call's delay slot, **in-place `extu.w`**, unfilled final delay slots and frame-pointer helpers.
- Search results that need many invented temporaries stay parked.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
