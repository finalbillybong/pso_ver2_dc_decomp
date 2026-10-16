# Reconstruction batch: 233: expanded candidate pool, part 37

43 new matching functions / 9,088 bytes. All 7377 prior functions preserved.

7420 exact functions in 7336 modules; 624,016 compiled function-range bytes; 0 reconstructed data bytes; 3,538,896 retained reference bytes. Whole-image coverage 14.9899% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01018c | 0x8c01018c | 80 |
| operation_8c0101dc | 0x8c0101dc | 100 |
| operation_8c02303c | 0x8c02303c | 168 |
| operation_8c028ef8 | 0x8c028ef8 | 240 |
| operation_8c034a14 | 0x8c034a14 | 88 |
| operation_8c053d34 | 0x8c053d34 | 48 |
| operation_8c07444c | 0x8c07444c | 144 |
| operation_8c083ac0 | 0x8c083ac0 | 260 |
| operation_8c08914c | 0x8c08914c | 244 |
| operation_8c08a1b8 | 0x8c08a1b8 | 276 |
| operation_8c08efe8 | 0x8c08efe8 | 164 |
| operation_8c08f08c | 0x8c08f08c | 164 |
| operation_8c08f130 | 0x8c08f130 | 164 |
| operation_8c096558 | 0x8c096558 | 132 |
| operation_8c097728 | 0x8c097728 | 316 |
| operation_8c09d574 | 0x8c09d574 | 216 |
| operation_8c09d740 | 0x8c09d740 | 108 |
| operation_8c0ba12c | 0x8c0ba12c | 208 |
| operation_8c0ba200 | 0x8c0ba200 | 204 |
| operation_8c0bbb24 | 0x8c0bbb24 | 56 |
| operation_8c0bd0c8 | 0x8c0bd0c8 | 92 |
| operation_8c0d2770 | 0x8c0d2770 | 388 |
| operation_8c0d5424 | 0x8c0d5424 | 436 |
| operation_8c0d6ed4 | 0x8c0d6ed4 | 392 |
| operation_8c0d7128 | 0x8c0d7128 | 264 |
| operation_8c0daf44 | 0x8c0daf44 | 72 |
| operation_8c0e8e3c | 0x8c0e8e3c | 544 |
| operation_8c0ec020 | 0x8c0ec020 | 200 |
| operation_8c0f43d0 | 0x8c0f43d0 | 268 |
| operation_8c0fc508 | 0x8c0fc508 | 164 |
| operation_8c113c38 | 0x8c113c38 | 136 |
| operation_8c11b3dc | 0x8c11b3dc | 164 |
| operation_8c11bab8 | 0x8c11bab8 | 116 |
| operation_8c11bbb4 | 0x8c11bbb4 | 120 |
| operation_8c11bd04 | 0x8c11bd04 | 220 |
| operation_8c11ca1c | 0x8c11ca1c | 180 |
| operation_8c11cca4 | 0x8c11cca4 | 284 |
| operation_8c11ce6c | 0x8c11ce6c | 172 |
| operation_8c11d28c | 0x8c11d28c | 292 |
| operation_8c11d444 | 0x8c11d444 | 172 |
| operation_8c13836c | 0x8c13836c | 184 |
| operation_8c138424 | 0x8c138424 | 368 |
| operation_8c13a9a0 | 0x8c13a9a0 | 480 |

## Method

Batches 233–234 come from one generator cycle over every candidate still unmatched after batch 232 (4,687). This is batch 233; the batches split the admitted units by address. The draft generator gained rules for drafts that differed from the reference in 1–10 lines.

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

43 recorded attempts on 43 targets, all hypotheses and all exact. 43 units / 43 functions / 9,088 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c0101dc`: a constant compare chain with swapped operands (4 lines) and as a switch, which was exact.
  - `0x8c02303c`: a call difference kept in a local, exact over a truncated range, and both calls inline (8 lines).
  - `0x8c053d34`: `==` operands swapped (2 lines), the load in a local, which was exact, and the local with swapped operands (2 lines).
  - `0x8c08efe8`: a saved field in an `int` local (24 lines) and saved through the frame across a call, which was exact.
  - `0x8c0bbb24`: four forms of a compare against `-1`: a pointer cast and reversed operands (4 lines each), a constant variable assigned before the loop (exact over a truncated range) and assigned at function start (2 lines).
  - `0x8c0ec020`: an index written `(x << 1) << 2`, which was exact, `x * 8` (12 lines) and `(x * 2) << 2` (14 lines).
  - `0x8c113c38`: two function-pointer calls rewritten as virtual calls on a sub-object, which was exact.
  - `0x8c11b3dc`: four forms of a pointer-to-member-function test and call, all exact.
- **Probes on targets not admitted in this cycle:** `0x8c0262a0`, `0x8c02a5a8`, `0x8c02c048`, `0x8c044410`, `0x8c04fa44`, `0x8c066478`, `0x8c09e994`, `0x8c0a8da0`, `0x8c137d08`, `0x8c161c50`, `0x8c16bce0`, `0x8c16c27c`, `0x8c16cb54`, `0x8c174a5c`, `0x8c189568`, `0x8c1d3e8c`, `0x8c1e71b8` and `0x8c217cf0` (compare, constant, switch, return, extension and argument forms). Hand forms of `0x8c04fa44`, `0x8c09e994`, `0x8c16bce0` and `0x8c16c27c` were exact but were not made rules and are not admitted. `0x8c0a8da0` is history-guarded.
- **One declaration-order comparison:** on `0x8c161c50`, one fixed alternative (a constant variable declared after the loop counter) was compared to learn whether declaration order decided its registers. It gave 2 lines and, with swapped initialisations, an exact form over a truncated range. It was not made a rule and the function is not admitted. No declaration orders were searched.
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
