# Reconstruction batch: 260: expanded candidate pool, part 64

24 new matching functions / 7,556 bytes. All 10492 prior functions preserved.

10516 exact functions in 10432 modules; 1,052,614 compiled function-range bytes; 0 reconstructed data bytes; 3,110,298 retained reference bytes. Whole-image coverage 25.2855% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02452c | 0x8c02452c | 64 |
| operation_8c0277bc | 0x8c0277bc | 136 |
| operation_8c06510c | 0x8c06510c | 220 |
| operation_8c079104 | 0x8c079104 | 296 |
| operation_8c09b198 | 0x8c09b198 | 144 |
| operation_8c09b34c | 0x8c09b34c | 108 |
| operation_8c0cb478 | 0x8c0cb478 | 88 |
| operation_8c0e2140 | 0x8c0e2140 | 300 |
| operation_8c0e30c8 | 0x8c0e30c8 | 460 |
| operation_8c0ed3a0 | 0x8c0ed3a0 | 136 |
| operation_8c10b6ec | 0x8c10b6ec | 148 |
| operation_8c151938 | 0x8c151938 | 268 |
| operation_8c154e08 | 0x8c154e08 | 120 |
| operation_8c1587e4 | 0x8c1587e4 | 212 |
| operation_8c19cae8 | 0x8c19cae8 | 328 |
| operation_8c19cc30 | 0x8c19cc30 | 324 |
| operation_8c19cd74 | 0x8c19cd74 | 360 |
| operation_8c19edac | 0x8c19edac | 208 |
| operation_8c19f09c | 0x8c19f09c | 256 |
| operation_8c1a2ed4 | 0x8c1a2ed4 | 1992 |
| operation_8c1bd9a4 | 0x8c1bd9a4 | 164 |
| operation_8c229074 | 0x8c229074 | 996 |
| operation_8c248a04 | 0x8c248a04 | 76 |
| operation_8c24d97c | 0x8c24d97c | 152 |

## Method

Batch 260 combines two generator cycles with hand-finished near misses.

**Generator rules.** Two scratch research passes turned recurring hand fixes into generator rules, each behind its own flag:
- The first added 38 rules, among them: restoring a lost swap, products computed from a variable's old value, and the loop flags and counters that drafts reset or took as constants; dropping invented arguments to callees that never read them (integer and float); void and int return inference; by-value struct parameters read past the frame; row-pointer locals; frame array members; one `||` guard for nested tests that share an exit; a test assignment `(p = ...) != 0`; and a scoped copy of a reloaded home parameter.
- The second added about 25, among them: assigning a copy after the call that sets its source; keeping an in-place update in a local when it is stored back and then tested; dropping invented arguments to leaf callees that overwrite their argument registers (the rand() calls of a bag-shuffle family); rendering a register copy of a known constant as the literal; an int local for a word read through a pointer chain and stored to a global; narrow locals for zero-extended values stored at the same width; a one-case switch for an early-return guard; reference store order for row pointers into different tables; and `unsigned short` or `unsigned char` return types beside 0x8000–0xffff or 0x80–0xff constants.

Both passes left calibration unchanged (44 / 32 / 8), and their per-function, per-mode regressions over every admitted plan (190, 191, 211–259), the jump-table set, earlier agents' result lists and earlier batch files lost no exact draft. No rule chooses a declaration order or produces the `(v >= 0 ? v : v)` idiom.

**Redrafts.** The 3,407 remaining candidates were redrafted in the 11 regular generator modes after each pass. The first redraft found 128 exact drafts, the second 136; only full-range exact drafts not already admitted or trialled were taken (9 and 5 functions). The other exact drafts are exact for a shorter range only and fail the batch-193 boundary rule; they were not taken.

**Hand-finished near misses.** Seven scratch passes took:
- 72 never-probed targets within 99–140 differing lines (1 exact);
- 72 targets of the same band, including a family of bag-shuffle routines (4 exact);
- 12 siblings of that family (0 exact; 5 exact sources held back, see below);
- 55 targets that earlier passes had parked and whose newest draft had improved, plus 3 never-probed ones (2 exact);
- 23 never-worked targets within 42–154 lines (1 exact);
- 18 parked targets whose draft improved after the second rule pass (0 exact; two are library-style math wrappers and two end in alignment padding);
- 45 never-probed targets within 108–164 lines (2 exact, 2,988 bytes).

They used the rules of batches 241–259:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

All exact sources were trialled and all are admitted. The history guard refused no attempt.

**Declaration-order comparisons.** The passes made labelled comparisons, at most one per target. Held back and not trialled, because declaration placement decided the match:
- `0x8c025178`, `0x8c17529c`, `0x8c1895f4`;
- the bag family `0x8c18b434`, `0x8c18b58c`, `0x8c18ef28`, `0x8c18f2ac`, `0x8c18fde8` (1,896 bytes; two of them are also exact with the record declared inside its use block, which is pending a project decision);
- `0x8c1405bc`, `0x8c13a61c`, `0x8c2355a0`, `0x8c0a0f08`, `0x8c217da8`.
Comparisons where the other placement was also exact or made no difference: `0x8c0e30c8` (admitted), `0x8c1e7964`, and placement checks on the admitted bag sources `0x8c19cae8` and `0x8c19cc30`. Further comparisons on parked targets (`0x8c224cc4`, `0x8c224bb4`, `0x8c0b6e0c`, `0x8c0ab92c`, `0x8c0402c8`, `0x8c040d84`, `0x8c17f024`, `0x8c257328`, `0x8c024e5c`, `0x8c0b8200`, `0x8c199bc8`, `0x8c21bcd0`) did not make them exact.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (24);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

24 recorded attempts on 24 targets, all hypotheses and all exact. 24 units / 24 functions / 7,556 bytes were admitted after two independent reproductions each: 14 unedited generated drafts and 10 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, either in a generator redraft or as logged in the hand-finishing passes' attempt logs.
- The research passes compiled hand probes to learn source forms (scratch only, not trialled): `0x8c24451c`, `0x8c044e94`, `0x8c0206c4`, `0x8c0277bc`, `0x8c2355a0`, `0x8c0e30c8` and `0x8c025788`. `0x8c24451c` and `0x8c0206c4` were admitted in batch 259. In this batch, `0x8c0277bc` is an unedited generated draft and `0x8c0e30c8` a hand-finished source. `0x8c2355a0` is held back for declaration placement, and `0x8c044e94` and `0x8c025788` are not admitted.
- The generator infers a `char` return for a table byte returned without sign extension (as `0x8c0d9be4` in batch 259) and narrow return types beside narrow constants; these types are inferred, not confirmed against callers.
- The bag-family sources drop an invented argument to `rand()`, and `0x8c229074` an invented second argument to `mark_effect_for_release`; neither callee reads that register.
- `0x8c1a2ed4` declares its status halfwords `volatile unsigned short` (CW20), which gives the reference's double zero extension and re-read.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c06510c` (220 bytes): recursive tree clone written naturally (CW inlines one recursion level itself); parameter a1 is the cursor: d = a1++, children cloned to a1 and a1 = result.
  - `0x8c09b198` (144 bytes): first loop: row pointer for 0x8c46eb3c assigned (and stored) before the 0x8c46eb8c row, as in the reference.
  - `0x8c0e2140` (300 bytes): v1 = o->tag read after the v2 statement and v5 = o->f1c after the v48 statement (statement order follows reference load order).
  - `0x8c0e30c8` (460 bytes): self = t1 after the lookup (behaviour fix), k = v9<<2 shared by test and body, literal zero store, test-at-bottom goto search loop with the sentinel word read into a local before the != m1 (named -1) test; v11 placement checked (both exact).
  - `0x8c1587e4` (212 bytes): goto tangle as switch with result preset, nested case-1 switch guard, row pointers; deciding: (uchar)a2 read once into a local k used for both compare and scale (placement-independent).
  - `0x8c19cae8` (328 bytes): bag family: Bag struct with inline push/shuffle/pop, invented rand() argument removed; deciding: push value parameter unsigned char (helper decl order checked both ways).
  - `0x8c19cc30` (324 bytes): sibling of 8c19cae8: same Bag struct + inline push(unsigned char)/shuffle/pop template, invented rand() argument removed, tail from the draft (placement checked).
  - `0x8c19cd74` (360 bytes): sibling of 8c19cae8: same Bag template with the f08 table and the draft tail.
  - `0x8c1a2ed4` (1992 bytes): f80 status halfwords volatile unsigned short (CW20), case 19 reads o->f30 after allocating it (draft used stale pointer), unit test as if/else stores + one return; all multi-arg callees read r5/r6.
  - `0x8c229074` (996 bytes): goto dispatch as switch on f94 (0x50 falls into 0x64/0x78), f94 read once per loop iteration into v61, table id read via the same gc_8c337ec4 base; dropped invented 2nd arg of mark_effect_for_release (callee reads r4 only).
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A known constant copied from another register for a store is written as the literal, not as the variable that holds it.
- A compare operand order against a named constant follows from reading the loaded value into its own local in a separate statement.
- Statements follow the reference's load and store order; row pointers into different tables are assigned in store order.
- A family sharing one inline helper template (push, shuffle, pop) matches with one struct and helpers written once.

## Parked and unresolved

- **The angle conversion** that reloads one float register for each constant, **large-offset field addresses**, and **float argument order** for some vector callees recur without a source form.
- **Recomputed addresses** inside if-arms (where the reference does not reuse a test-formed address) remain unexplained.
- **Declaration order** decides register assignment and frame layout in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
