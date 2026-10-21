# Reconstruction batch: 259: expanded candidate pool, part 63

12 new matching functions / 5,980 bytes. All 10480 prior functions preserved.

10492 exact functions in 10408 modules; 1,045,058 compiled function-range bytes; 0 reconstructed data bytes; 3,117,854 retained reference bytes. Whole-image coverage 25.1040% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c0110a0 | 0x8c0110a0 | 92 |
| operation_8c0206c4 | 0x8c0206c4 | 588 |
| operation_8c0804ec | 0x8c0804ec | 404 |
| operation_8c097b8c | 0x8c097b8c | 576 |
| operation_8c0af660 | 0x8c0af660 | 1932 |
| operation_8c0d9be4 | 0x8c0d9be4 | 248 |
| operation_8c100b4c | 0x8c100b4c | 236 |
| operation_8c1380d0 | 0x8c1380d0 | 172 |
| operation_8c19c5e4 | 0x8c19c5e4 | 544 |
| operation_8c1ac9a4 | 0x8c1ac9a4 | 540 |
| operation_8c1b1ab0 | 0x8c1b1ab0 | 484 |
| operation_8c24451c | 0x8c24451c | 164 |

## Method

Batch 259 consists of hand-finished near misses. A generator check found nothing new.

**Extra-mode redraft.** The 3,419 remaining candidates were redrafted in the 8 generator modes that the regular 11-mode cycle leaves out. Together with batch 258's 11-mode run, this is the periodic full 19-mode check. It found 117 exact drafts, all of them already admitted or already exact in the 11-mode run, so no draft was taken from it and the 11-mode set is kept.

**Hand-finished near misses.** Two separate scratch passes took 145 candidates:
- 110 targets that earlier passes had parked and whose newest draft, after batch 258's generator rules, differed from the reference in fewer lines than before (now 2–98). The earlier passes' hypotheses on each target counted toward its budget, and the passes started from the new draft.
- 35 targets within 98 differing lines that no earlier pass or research probe had touched.

They used the rules of batches 241–258:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only;
- no declaration-order search.

The passes compiled 133 and 141 hypotheses. One parked target, `0x8c21c454`, had 11 compiled sources with 7 distinct outputs, 8 counting an earlier probe; it is not admitted. Two targets were skipped because earlier passes had already used 9 hypotheses on them, and two as out of scope (in-place `extu.w` of an indexed call argument). The passes found 12 exact sources; all were trialled and all are admitted. The history guard refused no attempt.

**Declaration-order comparisons.** The passes made 9 labelled comparisons, at most one per target; two were placement checks on admitted sources (`0x8c19c5e4`, `0x8c0af660`), where the other placement was also exact. Held back and not trialled, because the comparison decided the match: `0x8c18983c`, `0x8c01d694`, `0x8c0dac90` and `0x8c18b434`.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (11) or a function end (1);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

12 recorded attempts on 12 targets, all hypotheses and all exact. 12 units / 12 functions / 5,980 bytes were admitted after two independent reproductions each, all hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand-finishing passes' attempt logs. All were finished by hand from generated drafts.
- Some admitted sources use unusual forms:
  - `0x8c097b8c` declares `operation_8c04b230` with its float parameters first (CW12). The admitted definition takes `(int, int, float, float)`; both place the arguments in the same registers.
  - `0x8c0d9be4` returns `char`, inferred from a table byte returned without sign extension.
- `0x8c1380d0` drops two zero arguments the draft passed to `operation_8c122774`; the admitted callee never reads them and other callers pass two. `0x8c0110a0` returns its call's result, as its admitted sibling `0x8c010b54` does.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c0110a0` (92 bytes): returns the call_8c3ca534 result (int; sibling 8c010b54 does the same): r0 stays live so the final flag store uses r3/r1.
  - `0x8c0206c4` (588 bytes): row pointer local (v16*0x14 + table) computed once before the f308 == 2 test, reused for the row reads/stores.
  - `0x8c0804ec` (404 bytes): scoped self copy (CW21-like) Object *p = o for the reads after the f94 preset; result stores through the homed o.
  - `0x8c097b8c` (576 bytes): behaviour fix of the y/step floats (draft 396*19) + hoisted packed colour + Block4 copy; CW12 float-first logical prototype for operation_8c04b230 (admitted def is int,int,float,float: same physical regs, disclose).
  - `0x8c0af660` (1932 bytes): row pointer (table 0x8c3047f8 + (a0 << 6)) read at +0x14 and +0x38 instead of two folded member literals; row placement checked.
  - `0x8c0d9be4` (248 bytes): call results kept as int locals of ushort values, goto -> break; return type char (table byte returned without exts.b; inferred, disclose).
  - `0x8c100b4c` (236 bytes): 8-byte row copy as one Pair8 struct copy from (char *)v1 + (f88 << 3) (draft split it into two word copies and lost the size).
  - `0x8c1380d0` (172 bytes): dropped 2 invented zero args to operation_8c122774 (admitted callee ignores a2/a3; other callers pass 2); 0xffff stores from one local in literal-pool order 9b70,110,114,118,11a.
  - `0x8c19c5e4` (544 bytes): second type byte read into an int local before the outer switch; gotos -> nested switches; min written as a ternary (unfilled bra slot), 1/0 if/else for the default; c1 placement checked (_7 also exact).
  - `0x8c1ac9a4` (540 bytes): dead parameter a2 narrowed in place (a2 = (unsigned char)a2) and reused as the switch subject instead of a separate v18 local.
  - `0x8c1b1ab0` (484 bytes): if/else ordered by reference layout (negated || condition, compare in load order f330 <= f3f4).
  - `0x8c24451c` (164 bytes): behaviour fix: lost swap restored via temp (draft copied a[v4] back to itself); frame int[4] member addressed with explicit << 2 byte offsets.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A row read at several fixed offsets matched with one row-pointer local, not with folded member literals.
- A minimum written as a ternary leaves the else path's branch delay slot unfilled.

## Parked and unresolved

- **The angle conversion** that reloads one float register for each constant, and **the packed-word shift-constant colouring**, recur without a source form.
- **Declaration order** decides register assignment in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.
- **Register-only and scheduling differences** remain the largest group of near misses.

Code-only completion and total function count remain unknown.
