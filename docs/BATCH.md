# Reconstruction batch: 263: expanded candidate pool, part 67

35 new matching functions / 7,746 bytes. All 10659 prior functions preserved.

10694 exact functions in 10610 modules; 1,074,148 compiled function-range bytes; 0 reconstructed data bytes; 3,088,764 retained reference bytes. Whole-image coverage 25.8028% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c046510 | 0x8c046510 | 300 |
| operation_8c052c38 | 0x8c052c38 | 280 |
| operation_8c05e6cc | 0x8c05e6cc | 244 |
| operation_8c06752c | 0x8c06752c | 264 |
| operation_8c07bed4 | 0x8c07bed4 | 344 |
| operation_8c07c770 | 0x8c07c770 | 268 |
| operation_8c083478 | 0x8c083478 | 364 |
| operation_8c0dc5c0 | 0x8c0dc5c0 | 80 |
| operation_8c0dde00 | 0x8c0dde00 | 240 |
| operation_8c0f1204 | 0x8c0f1204 | 616 |
| operation_8c1000a8 | 0x8c1000a8 | 184 |
| operation_8c106e1c | 0x8c106e1c | 548 |
| operation_8c122210 | 0x8c122210 | 184 |
| operation_8c13ffec | 0x8c13ffec | 644 |
| operation_8c160e80 | 0x8c160e80 | 736 |
| operation_8c1888dc | 0x8c1888dc | 340 |
| operation_8c1a0480 | 0x8c1a0480 | 108 |
| operation_8c1aaabc | 0x8c1aaabc | 30 |
| operation_8c1aaadc | 0x8c1aaadc | 30 |
| operation_8c1aaafc | 0x8c1aaafc | 30 |
| operation_8c1b3a18 | 0x8c1b3a18 | 224 |
| operation_8c1bbd80 | 0x8c1bbd80 | 212 |
| operation_8c1dc844 | 0x8c1dc844 | 112 |
| operation_8c1ec9b0 | 0x8c1ec9b0 | 84 |
| operation_8c2150a4 | 0x8c2150a4 | 34 |
| operation_8c21871c | 0x8c21871c | 100 |
| operation_8c21d7b8 | 0x8c21d7b8 | 100 |
| operation_8c21e328 | 0x8c21e328 | 142 |
| operation_8c21f600 | 0x8c21f600 | 38 |
| operation_8c225840 | 0x8c225840 | 164 |
| operation_8c2476e8 | 0x8c2476e8 | 34 |
| operation_8c2480e4 | 0x8c2480e4 | 208 |
| operation_8c24834c | 0x8c24834c | 232 |
| operation_8c2488e0 | 0x8c2488e0 | 116 |
| operation_8c24dcec | 0x8c24dcec | 112 |

## Method

Batch 263 consists of hand-finished near misses. One generator cycle added rules but found no new exact draft, so the hand passes went back over parked targets that still had hypothesis budget.

**Generator rules.** One scratch research pass turned recurring hand fixes into 7 generator rules, each behind its own flag:
- a pool offset read only inside a loop body, held in a lower register than the counter, stays a literal;
- a loaded pointer used only through one derived value is not bound to a local;
- a loaded value stepped in its own register is the loop counter itself;
- one index is shared by two loops;
- a pool base plus `add #k` inside an extern object with no member there is written `(char *)&g + 0xk`;
- after a call, a run of extern stores is rotated so the first-emitted store is written last, with a global read twice going into a local first.

The pass left calibration at its previous level (34 / 44 / 8). Its per-function, per-mode regressions lost no exact draft. They covered every admitted plan (190, 191, 211–262), the jump-table set, earlier agents' result lists and earlier batch files. Two further candidate rules lost admitted exact drafts and were dropped. No rule chooses a declaration order or produces the `(v >= 0 ? v : v)` idiom.

The pass also ran a scratch experiment: it left each of 47 named constants (in 44 targets) unnamed, one at a time. 6 drafts improved and 22 got worse; none became exact. The experiment was used only to set one rule's criterion, and nothing from it is admitted.

**Redraft.** The 3,229 remaining candidates were redrafted with the new generator. This was the periodic full check: the 11 regular modes and the 8 other modes. Neither set found an exact draft.

**Hand-finished near misses.** Nine scratch passes took the following targets:
- 39 parked targets whose draft had improved with the previous generator (5 exact);
- 6 parked targets whose draft improved with this batch's generator, plus the last never-probed target within 400 differing lines (0 exact; the never-probed target went from 166 to 8 lines);
- 435 parked targets within 1–16 differing lines that still had hypothesis budget, taken in four bands (32 exact):

  | Differing lines | Targets | Exact |
  |---|---|---|
  | 1–4 | 78 | 4 |
  | 5–8 | 113 | 7 |
  | 9–12 | 125 | 6 |
  | 13–16 | 119 | 15 |

  Earlier passes had parked most of these after a few hypotheses each. The passes tried only ideas the earlier passes had not.

They used the rules of batches 241–262:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only (including the padding rule);
- no declaration-order search.

All exact sources were trialled. All but one are admitted: `0x8c161c50`, a padding-rule unit, was refused by the history guard and not forced.

**Held back.**
- **Declaration placement.** Each of these is exact only with one declaration placement, as shown by a single labelled comparison per target. They are held back and not trialled: `0x8c1a2d40`, `0x8c09c498`, `0x8c0b75a4`, `0x8c173528`, `0x8c027cfc`, `0x8c027998`, `0x8c103148`, `0x8c1a80d4`.
- **`0x8c168608` (104 bytes)** is exact, but its source passes a second argument to the admitted `operation_8c13f1cc`, whose admitted source takes none. That callee is a tail-jump stub, and its jump target reads r5. The conflict with the admitted prototype needs review, so the source is held back and not trialled.
- **`0x8c08076c`** is exact only with a dead store in an if-body, a no-op form that is not admitted. Held back.
- **A further comparison** (`0x8c08d794`) did not make its target exact.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (35);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

35 recorded attempts on 35 targets, all hypotheses and all exact. 35 units / 35 functions / 7,746 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

7 units were admitted under the padding rule at their code size: `0x8c21f600`, `0x8c21e328`, `0x8c2476e8`, `0x8c2150a4`, `0x8c1aaabc`, `0x8c1aaadc` and `0x8c1aaafc`. In each, the reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Research probes.** The research pass compiled hand probes to learn source forms (scratch only, not trialled): `0x8c21d7b8` (5 forms), `0x8c21f5d4` and `0x8c044410` (4). None was exact. `0x8c21d7b8` is admitted from a hand pass's source.
- **Placement checks.** For these admitted sources, a scratch compile with the new declarations placed elsewhere was also exact, so placement does not decide the match: `0x8c21d7b8`, `0x8c052c38`, `0x8c05e6cc`, `0x8c24dcec`, `0x8c21871c`, `0x8c1000a8` and `0x8c0dc5c0`.
- **Hypothesis counts.** Two parked targets (`0x8c244b24`, `0x8c244b78`) have more than ten logged attempt rows across passes. Identical compiler outputs bring them to about 7 and 5 distinct hypotheses. Neither is admitted.
- **Callee prototypes.**
  - `0x8c24dcec` declares `operation_8c1ecfe0` with `(short, short)` parameters, where the admitted callee is declared `(int, int)`. The callee's code stores one argument as a halfword and extends the other itself.
  - `0x8c046510` passes `&frame` to a virtual slot. Its callee (`0x8c04621c`, slot 0x84 in all 114 vtables that hold this function) reads r5.
  - `0x8c1bbd80` passes 0 as the int argument of a virtual call, as the admitted `operation_8c15eca4` (same class and caller) does.
  - `0x8c1dc844` drops the draft's invented arguments to a callee that takes none.
- `0x8c13ffec` writes two exits as `if (t != 0) { } else { return; }`, an ordinary control-flow spelling. `0x8c160e80` and `0x8c1bbd80` use small `static inline` helpers.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c046510` (300 bytes): virtual slot 0x84 call takes the frame vector: o->v31(&frame) (r5 = copy destination); callee 0x8c04621c reads r5 (mov r5,r14) and is slot 0x84 in all 114 vtables holding this function.
  - `0x8c052c38` (280 bytes): an earlier pass's source (two 24-byte records by value) + a1->f64 read into a local before the loop-start read and stored to frame.b.f14 after it (bra slot).
  - `0x8c05e6cc` (244 bytes): named mask local (mask = 0x400 assigned just before the f3e0 & mask test, CW03) gives and r1,r0 with the literal in r1; placement checked (declared first or last both exact).
  - `0x8c06752c` (264 bytes): compare operands written in the reverse order (f330 <= v1 instead of v1 >= f330) gives the reference exts.w register pair.
  - `0x8c07bed4` (344 bytes): the 25.0f step as the named float v6 = 25.0f set first and used in *p += v6 and the overshoot v6 = v2 - (v1 - v6) (reference keeps it in fr2), on an earlier pass's CW17 scoped-pointer source.
  - `0x8c07c770` (268 bytes): new draft (count decremented before swap via v10) + an earlier pass's fixes: &g_8c284f48 + 0xc argument unfolded and one index v1 for both loops.
  - `0x8c083478` (364 bytes): removed the named 0x88 offset local (v6): literal 0x88 in the copy-loop body, named 0x114 kept (draft goto loop otherwise unchanged).
  - `0x8c0dc5c0` (80 bytes): a1->f04 and o->f3c (each used in two tests) read once into float locals y then c before the third test; placement-independent (swapped declarations also exact).
  - `0x8c0dde00` (240 bytes): centre sums written directly as f48 + f50 * 0.5f and f4c + f54 * 0.5f (draft-invented v1/v2 field copies removed).
  - `0x8c0f1204` (616 bytes): fe8 wrap written without float locals as if (o->fec < o->fe8) o->fe8 -= o->fec (operand order gives the fr0/fr1 roles); no new variables.
  - `0x8c1000a8` (184 bytes): (range 184 with overlay) row base read into a local b = (char *)g->f42c + 0xc after the scoped table index i = tag->f410 (no cast barrier needed); extern g form; placement-independent (top-level declarations also exact).
  - `0x8c106e1c` (548 bytes): record byte offset computed once into the call-result local (t6 = operation_8c1cdc80(..) * 0x1c) and reused for the type test and the argument.
  - `0x8c122210` (184 bytes): extern store-group rotation: g_8c4d87b4 = 0 moved after the g87ac/g87b0 stores (CW emits the last store of the group first into r0).
  - `0x8c13ffec` (644 bytes): the two allocation-failure exits inside the if-branches written as if (t != 0) { } else { return; } (bf join; bra end; nop) on an earlier pass's source; empty then-block (control-flow spelling only).
  - `0x8c160e80` (736 bytes): opening 7/8 predicate written as a static inline helper (int r = 1; nested != tests clear it; return r) called inside if (o->f3e0 == 0).
  - `0x8c1888dc` (340 bytes): removed the v36 pointer local: base->f28->fbc8 read inline as the operation_8c16a50c argument.
  - `0x8c1a0480` (108 bytes): first clamp tests the just-stored global g_8c4dc5a0 (not a second struct-member read or a local), like the second clamp; no new variables.
  - `0x8c1aaabc` (30 bytes): padding rule: code exact at 30/32 (trailing .word 0); field read once into a short local returned with short return type (no exts on return), flag preset if/else; header size 30.
  - `0x8c1aaadc` (30 bytes): padding rule: code exact at 30/32 (trailing .word 0); field read once into a short local returned with short return type (no exts on return), flag preset if/else; header size 30.
  - `0x8c1aaafc` (30 bytes): padding rule: code exact at 30/32 (trailing .word 0); field read once into a short local returned with short return type (no exts on return), flag preset if/else; header size 30.
  - `0x8c1b3a18` (224 bytes): second loop reuses the first loop counter v2 (one counter for both loops); sharing only the offset (hyp 3) is also exact.
  - `0x8c1bbd80` (212 bytes): early returns as || guards with the mode test as a static inline preset-flag helper last in the first guard and (t2 = lookup_low_id(..)) == 0 last in the second; v25 takes (Object *, int, Block8) with 0 as in admitted operation_8c15eca4 (same class/lookup_low_id caller).
  - `0x8c1dc844` (112 bytes): dropped invented arguments (operation_8c180e84 is void(void) per admitted source) and counter++ before cursor advance.
  - `0x8c1ec9b0` (84 bytes): named mask local m = -0x41 (CW03) shared by the two o->fe8 clears fixes the offset/mask register colouring.
  - `0x8c2150a4` (34 bytes): padding rule: code exact at 34/36 (trailing .word 0); a1 clamped in place (dead parameter reused); header size 34.
  - `0x8c21871c` (100 bytes): second entry word read into w1 before the && test with the first word inline (fills bf/s with the right base/value registers); placement-independent (decl-order comparison _2 also exact).
  - `0x8c21d7b8` (100 bytes): g_8c505964 read once into a local v before the store group; both store groups in the earlier extern store-group order (reference order minus its first store, then that store).
  - `0x8c21e328` (142 bytes): padding rule: code exact at 142 bytes (range 144 ends in one zero halfword aligning 0x8c21e3b8; header size 142); deciding change (from an earlier probe _2): every case assigns one result variable, single return after the switch.
  - `0x8c21f600` (38 bytes): padding rule: code exact at 38 bytes (range 40 ends in one zero halfword aligning the next routine; header size 38); deciding change: count preset v2 = 0 before the -1 constant.
  - `0x8c225840` (164 bytes): buffer address 0x8c4dbe40 assigned into the dead parameter a1 (keeps r14) instead of a new local v8.
  - `0x8c2476e8` (34 bytes): padding rule (code 34 of range 36, trailing zero halfword): char parameter a1 clamped in place against a char local t = o->tag.
  - `0x8c2480e4` (208 bytes): the two pool-constant status paths (-4, -2) written as chained returns return (&g_8c339ca0)->f18 = -k; (constant loaded into r0 before the address); the -1/-3 paths stay as store then return.
  - `0x8c24834c` (232 bytes): max-loop seed (global copy) held in the dead first-loop counter v1 instead of a new local v10 (variables sharing a reference register are one variable).
  - `0x8c2488e0` (116 bytes): range guard as one || test with return (if (v2 < 0 || v2 >= 4) return;) on an earlier pass's extern-table/byte-offset source gives the bf/bra/nop shape.
  - `0x8c24dcec` (112 bytes): CW17 field pointer v2 = &row->f04 (signed short field) read once into a short local v5 for the 0xffff compare and the call, narrow (short, short) prototype for operation_8c1ecfe0 (admitted callee only stores a1 as a halfword); placement checked (new locals first or last both exact).

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- Values that share one reference register across non-overlapping lifetimes are one variable: a dead loop counter reused as a later seed, one counter for two loops, or a late local assigned into a dead parameter.
- Reversing a compare's operand order swaps the registers of its extended or float operands.
- A named mask or float constant assigned just before use (CW03) fixes literal colouring in more shapes, including a mask shared by two `&=` clears.
- A halfword field returned without `exts.w` comes from a `short` local and a `short` return type.
- A constant stored to a global field and then returned is a chained return (`return g.f = k;`).

## Parked and unresolved

- **Register allocation** remains the largest group. Among the parked targets re-tried in this batch, most residues fall in known classes:
  - a global's address landing in r0;
  - a call literal loaded into r1;
  - struct-copy literal scheduling;
  - home-reload registers for float stores.
- **Declaration order** decides the match in a growing share of the near misses that hand passes finish (8 in this batch). Such sources are held back, not admitted.
- **Argument-register order around a call's delay slot** accounts for about 30 of the re-tried targets. With **in-place `extu.w`** and frame-pointer helpers, it remains out of scope.

Code-only completion and total function count remain unknown.
