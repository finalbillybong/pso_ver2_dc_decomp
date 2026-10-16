# Reconstruction batch: 234: expanded candidate pool, part 38

55 new matching functions / 9,072 bytes. All 7420 prior functions preserved.

7475 exact functions in 7391 modules; 633,088 compiled function-range bytes; 0 reconstructed data bytes; 3,529,824 retained reference bytes. Whole-image coverage 15.2078% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c1415d8 | 0x8c1415d8 | 500 |
| operation_8c1543e4 | 0x8c1543e4 | 128 |
| operation_8c173778 | 0x8c173778 | 208 |
| operation_8c176e34 | 0x8c176e34 | 80 |
| operation_8c17b7e8 | 0x8c17b7e8 | 80 |
| operation_8c186380 | 0x8c186380 | 400 |
| operation_8c186b78 | 0x8c186b78 | 180 |
| operation_8c189d60 | 0x8c189d60 | 148 |
| operation_8c198294 | 0x8c198294 | 200 |
| operation_8c19a09c | 0x8c19a09c | 32 |
| operation_8c19bab4 | 0x8c19bab4 | 420 |
| operation_8c19bed4 | 0x8c19bed4 | 540 |
| operation_8c1a6810 | 0x8c1a6810 | 196 |
| operation_8c1a71fc | 0x8c1a71fc | 64 |
| operation_8c1a7260 | 0x8c1a7260 | 64 |
| operation_8c1a9a00 | 0x8c1a9a00 | 88 |
| operation_8c1afa8c | 0x8c1afa8c | 60 |
| operation_8c1c9244 | 0x8c1c9244 | 188 |
| operation_8c1cd008 | 0x8c1cd008 | 48 |
| operation_8c1cd038 | 0x8c1cd038 | 132 |
| operation_8c1d233c | 0x8c1d233c | 124 |
| operation_8c1d41b4 | 0x8c1d41b4 | 208 |
| operation_8c1d4474 | 0x8c1d4474 | 168 |
| operation_8c1d5e2c | 0x8c1d5e2c | 140 |
| operation_8c1d5eb8 | 0x8c1d5eb8 | 148 |
| operation_8c1d61e4 | 0x8c1d61e4 | 48 |
| operation_8c1d7490 | 0x8c1d7490 | 108 |
| operation_8c1dbfe0 | 0x8c1dbfe0 | 48 |
| operation_8c1dc010 | 0x8c1dc010 | 164 |
| operation_8c1e25fc | 0x8c1e25fc | 360 |
| operation_8c1e9704 | 0x8c1e9704 | 284 |
| operation_8c215904 | 0x8c215904 | 120 |
| operation_8c218938 | 0x8c218938 | 96 |
| operation_8c21e000 | 0x8c21e000 | 96 |
| operation_8c21e3c0 | 0x8c21e3c0 | 76 |
| operation_8c224b6c | 0x8c224b6c | 72 |
| operation_8c22c06c | 0x8c22c06c | 148 |
| operation_8c23551c | 0x8c23551c | 132 |
| operation_8c2357f4 | 0x8c2357f4 | 100 |
| operation_8c235fd0 | 0x8c235fd0 | 88 |
| operation_8c236cc4 | 0x8c236cc4 | 300 |
| operation_8c236df0 | 0x8c236df0 | 116 |
| operation_8c23c680 | 0x8c23c680 | 116 |
| operation_8c245260 | 0x8c245260 | 88 |
| operation_8c24a9b4 | 0x8c24a9b4 | 268 |
| operation_8c24acf4 | 0x8c24acf4 | 268 |
| operation_8c24c78c | 0x8c24c78c | 292 |
| operation_8c24cfb4 | 0x8c24cfb4 | 132 |
| operation_8c24d434 | 0x8c24d434 | 132 |
| operation_8c24e1f4 | 0x8c24e1f4 | 128 |
| operation_8c24f1a0 | 0x8c24f1a0 | 152 |
| operation_8c256dcc | 0x8c256dcc | 368 |
| operation_8c25f36c | 0x8c25f36c | 68 |
| operation_8c2842d4 | 0x8c2842d4 | 72 |
| operation_8c2844c0 | 0x8c2844c0 | 88 |

## Method

Batches 233–234 come from one generator cycle over every candidate still unmatched after batch 232 (4,687). This is batch 234; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 1–10 lines.

**Constants and values the source kept in variables:**
- A small constant that is only ever added from a register (never through `add #k`) is a local. The same holds for a constant compared with `cmp/eq` where the immediate form was available, and for a byte or word store whose value is set before its `r0` offset.
- A load compared with `cmp/eq` against a variable, a loaded argument that is tested and then passed after a store through a pointer, and arithmetic on a call result kept in a callee-saved register across another call each become locals.
- A parameter copied to a callee-saved register, tested there and reassigned before any call (a clamp) becomes a join variable.
- A field saved to a frame slot and read back after a call stays an explicit frame store and load.

**Calls:**
- A virtual call on a sub-object at a constant offset (vtable pointer at `+0x14`, loaded through `r4`) is written as a call through a cast to the sub-object's class.
- A call to CodeWarrior's pointer-to-member call helper is written as a pointer-to-member-function call.
- A virtual call result sign-extended in place gives that slot a `short` or `char` return.

**Switches:**
- A case that branches to the epilogue counts as a return, unless reading it as the default's body already works.
- Cases that jump past the default to the join become `case k: break;`. A switch whose breaks go straight to an enclosing `if`'s join is placed inside it.
- A compare chain whose last test is inverted (`bf next; bra case`) is read as a switch. So is a single case against a pool constant.
- An unsigned switch on a load is written through an `unsigned int` pointer, because CodeWarrior ignores a cast of the loaded value.

**Returns:**
- `if (c) { S; return; } return;` drops the inner `return`, unless a dead branch follows in the data.
- `if (c) { S; return k; } T; return k;` becomes `if`/`else`, only when the shared return is a bare `rts` or `T` ends in its own unfilled branch.
- A returned float variable makes the function return `float`.

**Types and arithmetic:**
- A signed compare of a zero-extended narrow value gets an `(int)` cast.
- A narrow value passed without re-extension gives the callee a narrow parameter, also when another call site passes an unextended narrow load. A narrow stack parameter re-extended into an argument register gives an `int` prototype.
- A narrow field zero-extended once into its callee-saved register becomes an `int` local.
- A literal equal to a byte-array symbol uses the symbol in cast mode too, so the two share one pool entry.
- A pool base plus an offset on an extern global is a field of that object.
- A table base plus a shifted index followed by `add #k` keeps the offset outside the index, and a larger shift after a smaller one stays nested as `(x << 1) << 2`.

Each rule is guarded by a flag and was tightened wherever an earlier version lost an exact draft. Losses found while developing the rules, each fixed before the final run:
- the clamp rule firing past the function end, on epilogue pops and after calls;
- over-broad early versions of the compare and argument locals;
- the inverted-chain rule reading `if` chains as switches;
- the `if`/`else` return rule turning early-return chains into `if`/`else` (13 functions);
- the narrow-return rule on direct calls (it now applies only to virtual calls).

Calibration: 31/37 on batch 191 (previously 29) and 43/55 on batch 190, unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–232 and the targets of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass. 105 drafts were accepted: exact over their full range, or exact-short with an end that meets the batch 193 boundary rule. Other exact-short drafts are rejected unchanged. Seven further exact drafts were refused by the history guard as historically uncertain and remain blocked: `0x8c0a8da0`, `0x8c0a8e98`, `0x8c0a8f98`, `0x8c0a9010`, `0x8c0a9088`, `0x8c0db30c` and `0x8c1861cc`. The three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit in the two batches were checked:
- each entry follows a literal pool (89) or a function end (9);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

55 recorded attempts on 55 targets, all hypotheses and all exact. 55 units / 55 functions / 9,072 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c17b7e8`: a virtual slot declared to return `short`, which was exact. Return-form probes on it are disclosed in batch 217.
  - `0x8c189d60`: an unsigned switch written through an `unsigned int` pointer, which was exact.
  - `0x8c1a71fc`: a clamp with the test on the copy, which was exact, and on the parameter (4 lines).
  - `0x8c1d41b4`: a narrow local declared `int`, which was exact.
  - `0x8c1d5e2c`: a compare against `-1` through a pointer cast and reversed (6 lines each) and against a constant variable, which was exact.
  - `0x8c21e3c0`: a table as a struct array (18 lines) and the second field through a byte offset, which was exact.
  - `0x8c224b6c`: call-order forms disclosed in an earlier cycle (8–16 lines); admitted now as a generated draft.
- The probes of this cycle on targets not admitted, including one declaration-order comparison, are listed in batch 233. No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- CodeWarrior puts an inline load on the right of `cmp/eq` whatever the source order. A load kept in a variable keeps the source operand order.
- A constant the source kept in a variable is loaded with `mov #k` into a register and compared or added from it; written inline, the compiler uses the immediate form.
- A switch on a loaded value takes its signedness from the type of the load, not from a cast of the value.
- A shift written in two steps, `(x << 1) << 2`, keeps two shift instructions; `x * 8` and `x << 3` do not.
- A value kept in a frame slot across a call, instead of a callee-saved register, was stored through the frame in the source.

## Parked and unresolved

- **In-place `extu.w`** (80 near misses in this cycle's targets) and **argument-register order around a call's delay slot** (104) are still treated as not reproducible from source (see batch 215).
- **Register allocation** remains the largest group of near misses within 10 lines (171).
- **Fragments**: 164 targets within 10 lines are short tails of other functions.
- Hand-probe fixes not yet made rules, because each covers one target: compare-tree switches, a single-case switch in a goto-rendered function, a return value through a loop join, and a switch with a dead branch the listing marks as data.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
