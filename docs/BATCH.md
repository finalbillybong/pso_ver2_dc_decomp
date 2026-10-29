# Reconstruction batch: 262: expanded candidate pool, part 66

19 new matching functions / 5,464 bytes. All 10640 prior functions preserved.

10659 exact functions in 10575 modules; 1,066,402 compiled function-range bytes; 0 reconstructed data bytes; 3,096,510 retained reference bytes. Whole-image coverage 25.6167% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c07383c | 0x8c07383c | 196 |
| operation_8c075fbc | 0x8c075fbc | 436 |
| operation_8c0956fc | 0x8c0956fc | 100 |
| operation_8c099bbc | 0x8c099bbc | 112 |
| operation_8c09a338 | 0x8c09a338 | 316 |
| operation_8c0ac7fc | 0x8c0ac7fc | 228 |
| operation_8c0c07c8 | 0x8c0c07c8 | 628 |
| operation_8c0c0a3c | 0x8c0c0a3c | 760 |
| operation_8c102cd0 | 0x8c102cd0 | 176 |
| operation_8c105968 | 0x8c105968 | 412 |
| operation_8c191990 | 0x8c191990 | 172 |
| operation_8c1a19fc | 0x8c1a19fc | 68 |
| operation_8c1c9418 | 0x8c1c9418 | 792 |
| operation_8c1e7964 | 0x8c1e7964 | 500 |
| operation_8c217c60 | 0x8c217c60 | 144 |
| operation_8c2462d8 | 0x8c2462d8 | 56 |
| operation_8c246414 | 0x8c246414 | 56 |
| operation_8c24a000 | 0x8c24a000 | 76 |
| operation_8c258df8 | 0x8c258df8 | 236 |

## Method

Batch 262 combines three generator redrafts and hand-finished near misses.

**Generator rules.** Two scratch research passes turned recurring hand fixes into generator rules, each behind its own flag:
- The first added about 22 rules, most of them restoring behaviour that drafts lost: a loop index read through `lds rN,fpul` keeps its increment; a spilled local written on one path stays a variable; a value reloaded from its frame home keeps its precedence (`i - (12 - t)`); a float carried round a do-while gets its own variable; a live call result is joined after a jump-table switch instead of a placeholder 0; frame words inside a block whose address is passed are members, not spills; a float argument set in a call's delay slot is kept; float field pointers hoisted in the prologue are named; and post-increments inside a test (`(p++)->f00 == k`) and in copies (`(d++)->f = (s++)->f`).
- The second added 20, among them: named constants (CW03) in a few narrow listing shapes (a mask loaded after the field it tests, an offset constant loaded before a loop's counter, a constant whose first use is a zero extension, a reloaded loop limit); a `movt` in a call's delay slot written as an inline `!(x & m)` argument; a float argument whose loads precede a block copy computed into a local first; hoisted `o + K` pointers whose register is reused across jump-table cases; compare chains with a mid-chain branch written as a switch; a product finished before the other operand's load as its own statement; and a Block8 struct passed on the stack as a struct parameter.

Both passes left calibration at its previous level (34 / 44 / 8), and their per-function, per-mode regressions over every admitted plan (190, 191, 211–261), the jump-table set, earlier agents' result lists and earlier batch files lost no exact draft. No rule chooses a declaration order or produces the `(v >= 0 ? v : v)` idiom.

The second pass also measured, in scratch only, what naming a single constant does: it compiled every remaining candidate with one constant named at a time (2,016 compiles). 82 drafts improved and 719 got worse, and functions with the same loop shape went opposite ways, so no listing criterion was found and only the narrow rules above were added. None of those scratch compiles is admitted.

**Redrafts.** The remaining candidates were redrafted in the 11 regular generator modes three times: with batch 261's generator (3,383 candidates; 3 new exact drafts), after the first pass above (3,249; 3) and after the second (3,241; 7). A redraft of 3,259 candidates in the 8 other modes found 5 exact drafts, none new, so the 11-mode set stays.

**Hand-finished near misses.** Four scratch passes took:
- 31 targets whose draft had improved with batch 261's generator (2 exact, 1 of them refused by the history guard);
- 30 parked targets whose draft improved after the first pass above (4 exact);
- 20 never-probed targets the first pass brought within 400 differing lines (0 exact);
- 32 never-probed targets of 400 or more differing lines (1 exact).

They used the rules of batches 241–261:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only (including the padding rule);
- no declaration-order search.

All exact sources were trialled; all but one refused by the history guard (`0x8c01399c`, not forced) are admitted.

**Held back.**
- `0x8c013a54` is exact only with a declaration-order comparison: held back and not trialled.
- `0x8c0eac00` (1,260 bytes) is exact, but its source passes an argument (`o` in r4) to an admitted callee that takes none and whose code never reads r4. Sources that need arguments a callee does not read are not admitted; it is held back and not trialled.
- Two other declaration-order comparisons (`0x8c0123d8`, `0x8c20b5b8`) did not make their targets exact.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (17) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

19 recorded attempts on 19 targets, all hypotheses and all exact. 19 units / 19 functions / 5,464 bytes were admitted after two independent reproductions each: 13 unedited generated drafts and 6 hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, either in a generator redraft or as logged in the hand-finishing passes' attempt logs.
- The research passes compiled hand probes to learn source forms (scratch only, not trialled): `0x8c0262a0` (13 forms), `0x8c103d6c`, `0x8c217c60` (3), `0x8c0c0a3c`, `0x8c105bec` (5), `0x8c19e2e4`, `0x8c01c2c8` and `0x8c192220`. `0x8c217c60` and `0x8c0c0a3c` are admitted from the hand passes' sources, not from these probes.
- `0x8c0c07c8`: the hand source declared an unused `int v4;`. One scratch compile without that line was also exact, and the admitted source omits it.
- `0x8c1c9418` uses an ordinary C macro (a switch on the object's tag that sets one field) and a scoped `unsigned char` value.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c09a338` (316 bytes): squared f34 argument computed into t1 before the frame position copy; second block in its own float w with w = w*232+115 before f10 = 115; extern declarations (operation_195990/195984, call_8c37eb0c) instead of address-cast calls.
  - `0x8c0c07c8` (628 bytes): the !(o->f34 & 0x1000000) predicate written inline as the 4th argument of call_8c0c6ab4 (movt r7 in the jsr slot) instead of a precomputed local; the hand source's unused `int v4;` declaration was removed after a scratch compile showed it exact without it.
  - `0x8c0c0a3c` (760 bytes): an earlier pass's source (state local, nested switch, CW12 float-first call_8c0446f8) + named flag = 0x1000000 for the first case-0 test (CW03); placement-independent (a function-top declaration is also exact).
  - `0x8c1a19fc` (68 bytes): named limit lim = 0x200 (CW03) for the outer search loop, reassigned lim = 0x200 before the inner shift loop (one variable in r1); loaded words then take r0.
  - `0x8c1c9418` (792 bytes): SET_VAL macro (switch on int mode = tag copied at ok-case start, value evaluated once into scoped uchar sv, case order 0,1,3,2), getter switch inline into v with default, single-case ok switch, case3 if{switch 2/0xe no default} else {7-block; return} break; restored lost case-1 compare (tbl[f01] <= v).
  - `0x8c217c60` (144 bytes): scan-pointer post-increment in the count-loop test; copy loop as one statement (dst++)->f00 = (src++)->f00 with call result straight to src.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A named constant assigned just before its use (CW03), and reassigned before a later loop, puts the literal in the register the reference uses; the same literal written inline is coloured differently.
- A `movt` into an argument register in a call's delay slot comes from a test written inline as the argument.
- A float argument computed before a block copy goes into its own local first.
- Restoring field pointers the reference hoists into callee-saved registers in the prologue removes most of the difference in several large state handlers.

## Parked and unresolved

- **Register allocation** remains the largest group (about 615 near misses). Naming constants changes it for many, but no listing rule predicts which constants were named.
- **The angle conversion** that reloads one float register for each constant, **the case-4 address order** in the 0x8c06xxxx state-handler family, and **source-address reloads** in a Vector3 table-copy family recur without a source form.
- **Declaration order** decides register assignment and frame layout in many remaining near misses. Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot**, **in-place `extu.w`** and frame-pointer helpers remain out of scope.

Code-only completion and total function count remain unknown.
