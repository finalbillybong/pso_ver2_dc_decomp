# Reconstruction batch: 264: expanded candidate pool, part 68

23 new matching functions / 7,272 bytes. All 10694 prior functions preserved.

10717 exact functions in 10633 modules; 1,081,420 compiled function-range bytes; 0 reconstructed data bytes; 3,081,492 retained reference bytes. Whole-image coverage 25.9775% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c04beb4 | 0x8c04beb4 | 46 |
| operation_8c04cad8 | 0x8c04cad8 | 452 |
| operation_8c09806c | 0x8c09806c | 268 |
| operation_8c0da4a4 | 0x8c0da4a4 | 336 |
| operation_8c0dafdc | 0x8c0dafdc | 94 |
| operation_8c0e0324 | 0x8c0e0324 | 260 |
| operation_8c0e0f6c | 0x8c0e0f6c | 392 |
| operation_8c0e4ffc | 0x8c0e4ffc | 228 |
| operation_8c0f7928 | 0x8c0f7928 | 436 |
| operation_8c10e8fc | 0x8c10e8fc | 352 |
| operation_8c161580 | 0x8c161580 | 428 |
| operation_8c17749c | 0x8c17749c | 516 |
| operation_8c19b710 | 0x8c19b710 | 496 |
| operation_8c1b5f70 | 0x8c1b5f70 | 556 |
| operation_8c1bc550 | 0x8c1bc550 | 376 |
| operation_8c1ca934 | 0x8c1ca934 | 212 |
| operation_8c1dcdf0 | 0x8c1dcdf0 | 428 |
| operation_8c219a94 | 0x8c219a94 | 236 |
| operation_8c21f6a4 | 0x8c21f6a4 | 92 |
| operation_8c225f04 | 0x8c225f04 | 376 |
| operation_8c232864 | 0x8c232864 | 144 |
| operation_8c24e534 | 0x8c24e534 | 268 |
| operation_8c257080 | 0x8c257080 | 280 |

## Method

Batch 264 consists of hand-finished near misses. The generator and the remaining candidates were unchanged since batch 263, when the 3,229 candidates were redrafted in all 19 modes without an exact draft, so there was no redraft.

**Hand-finished near misses.** Six scratch passes took parked targets that still had hypothesis budget. They went in three further bands of differing lines, continuing batch 263's bands of 1–16:

| Differing lines | Targets | Exact |
|---|---|---|
| 17–24 | 215 | 7 |
| 25–32 | 153 | 10 |
| 33–40 | 119 | 8 |

As before, the passes tried only ideas that earlier passes on the same target had not tried.

They used the rules of batches 241–263:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only (including the padding rule);
- no declaration-order search.

All exact sources were trialled. All but one are admitted: `0x8c1cd28c` was refused by the history guard and not forced.

**Declaration-order measurement (scratch only).** At the project owner's request, a bounded declaration-order search measured how many near misses declaration order alone can make exact. The protocol and a seeded sample were fixed before any compile, and checksums confirmed both were unchanged at the end:
- **Sample:** 120 parked targets of 1–16 differing lines, plus 8 held sources as controls.
- **Search:** up to 120 orders per target, with only the order of local declarations within a block changed.

Results (5,959 scratch compiles; none trialled or admitted):
- **Ceiling:** 3 of the 120 targets became exact (276 of 32,412 bytes), and 4 others improved.
- **Order mostly irrelevant:** in 64 of the 89 targets with movable declarations, every order compiled to the same binary.
- **Controls:** the search reproduced 7 of the 8.
- **No predictor:** none of the four fixed orders tested predicted the exact orders:
  - the narrow register-order rule measured earlier and held;
  - a broader register-order rule;
  - first use;
  - reverse first use.

The declaration-order rule stays held, and nothing is admitted under it.

**Held back.**
- **Declaration placement.** Each of these is exact only with one declaration placement, as shown by a single labelled comparison per target. They are held back and not trialled:
  - `0x8c1ae314`, `0x8c1ae344`, `0x8c1ae2e4`, `0x8c0d4e38`, `0x8c18687c`, `0x8c1ae1a8`;
  - `0x8c08b844`, `0x8c186ee8`, `0x8c1dc5a0`, `0x8c09e818`, `0x8c02a6d4`, `0x8c0240f0`, `0x8c023738`, `0x8c2534f8`;
  - `0x8c1865f4`, `0x8c1dfc78`;
  - `0x8c09b3b8`, `0x8c04a638`, `0x8c118964`, `0x8c103224`;
  - `0x8c1922a0`, `0x8c075b90`.

  For `0x8c1865f4` and `0x8c1dfc78`, a block-scoped declaration is also exact.
- **`0x8c0dc884` (168 bytes)** is exact, but its source declares the admitted `operation_8c0dc4fc` as returning a pointer, where its admitted source is void. That callee is a tail-jump stub, and its jump target, the admitted `operation_8c0dc510`, returns a pointer. Together with batch 263's `0x8c168608`, this conflict with an admitted prototype awaits review. Held back and not trialled.
- **Further comparisons.** The declaration-order comparisons on parked targets did not make them exact.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (20) or a function end (3);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

23 recorded attempts on 23 targets, all hypotheses and all exact. 23 units / 23 functions / 7,272 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

2 units were admitted under the padding rule at their code size: `0x8c04beb4` (46 of 48) and `0x8c0dafdc` (94 of 96). In each, the reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Placement checks.** For these admitted sources, a scratch compile with the new declarations placed elsewhere was also exact, so placement does not decide the match: `0x8c0da4a4`, `0x8c0e0324`, `0x8c0e0f6c`, `0x8c24e534`, `0x8c1b5f70` and `0x8c225f04`.
- **Hypothesis counts.** One held target (`0x8c04a638`) has 11 logged attempt rows across passes; identical outputs bring it to 9 distinct hypotheses.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c04beb4` (46 bytes): padding rule: an earlier pass's source (entry pointer once; do { *p++ = *q; } while (*q++ != 0)) is code-exact 46/48 with one trailing zero halfword; final/ header size set to 46.
  - `0x8c04cad8` (452 bytes): named offsets 0x42c/0x430 for the first draw_grid_selected_rows record reads, assigned to the dead int temporaries t1/t2 right after the g_8c4671d8 load (CW03/CW18; no new declarations).
  - `0x8c09806c` (268 bytes): packed colour built before the operation_8c04b230 call in two statements: v39 &= 0xffffff; v39 = (u32)(o->f4c * 255.0f) << 24 | v39; (mask first, conversion as the left operand).
  - `0x8c0da4a4` (336 bytes): second offset term f1 * t4 + o->f08 computed into a float local v2 (like v1) before the frame stores; placement checked not deciding.
  - `0x8c0dafdc` (94 bytes): padding rule: an earlier pass's bubble-sort source (Pair struct swaps, q = p + 1 before the compare) is instruction-exact; range 96 ends in one zero halfword, final header size changed to 94.
  - `0x8c0e0324` (260 bytes): clamp limits computed once into lim (sibling 8c0e0f6c idiom) with the unfolded x * s scale: size field read into the dead float v1, then s = 1.0f, then lim -= v1 * s; placement of lim/s checked not deciding.
  - `0x8c0e0f6c` (392 bytes): an earlier pass's clamp-limit form + size field read into the (draft) float v5 before s = 1.0f, then lim -= v5 * s (same fix as 8c0e0324); placement of lim/s checked not deciding.
  - `0x8c0e4ffc` (228 bytes): mask constant local assigned before the f34 read in both distance blocks (statement order; no new declarations).
  - `0x8c0f7928` (436 bytes): an earlier probe (redundant result reset removed) + final colour pack accumulated in the dead flag v13 (v13 = 0xff00; v13 |= byte; return (v13 << 8 | f48) << 8 | f4c).
  - `0x8c10e8fc` (352 bytes): an earlier pass's structure (result preset, two threshold blocks) + final test: numerator halfword read first into the dead int v19 and the denominator converted into the dead float v1 (reused for both the quotient and the != 0 test); no new declarations.
  - `0x8c161580` (428 bytes): from an earlier pass's source (switch with scale set only by cases 0/1): scoped self copy Object *s = o taken before the record30_8c1794c8 call and used for the f3a8 table store (reference reloads the home into r12 in the jsr slot).
  - `0x8c17749c` (516 bytes): operand order: o->f48 = v33 + o->f48 in the negative wrap and (f4c - 1 < f48) so f4c is read first.
  - `0x8c19b710` (496 bytes): stride byte offset computed once into the call-result variable (t3 = call << 3) and reused for both row reads.
  - `0x8c1b5f70` (556 bytes): field pointer local p = o + 0x3c0 taken before the record30_8c1794c8 call in each branch (passed twice); placement checked: declared first or last both exact.
  - `0x8c1bc550` (376 bytes): statement order: v10 = f3e8 + t4 * 16 computed before the f3ac = 0.0f store (reference loads f3e8 before the store).
  - `0x8c1ca934` (212 bytes): first unsigned-to-float conversion written inline in the o->f48 store (like the f50 one) so the destination address is formed before the conversion; a2 << 2 after it.
  - `0x8c1dcdf0` (428 bytes): v1 as int local = o->f22 (no ushort cast: keeps one extended copy for both 0x240 tests) and the final return as a join after if (g) {...} (unfilled bra slot); label block after a function-level return.
  - `0x8c219a94` (236 bytes): rewritten from the listing (draft lost/garbled state): flag preset 0 with || test (g_8c505914 != v1 first), changed-state flag, shared pointer local, extern store rotation (3363a0 store written before 505914); placement checked not deciding.
  - `0x8c21f6a4` (92 bytes): row pointer local p = g + 0x86c + tag*0x58 computed before the frame.f04 store, struct copy from p->f1c.
  - `0x8c225f04` (376 bytes): from an earlier pass's source (while loop, switch tail): named offset off = 0x192c assigned after the literal f192c store and o copied into a local in the loop test (while ((v1 = o, g[*(o+off)]->f00 != 0x2a)) increment through v1); placement checked: new declarations before or after t1 both exact.
  - `0x8c232864` (144 bytes): converted character read once as t1 = (char)operation_8c23280c(...) into the int local, tested and stored without further casts (one exts.b).
  - `0x8c24e534` (268 bytes): an earlier pass's entry read order + row index k = v2 * 3 computed once into a local (stride offset rule); placement of k checked not deciding.
  - `0x8c257080` (280 bytes): an earlier probe (call argument o->f04 read before the float field) + each range check written as one || return guard (if (lo > v1 || v1 > hi) return;), giving the bf/bra/nop layout.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A range check written as one `||` return guard gives the `bf`/`bra`/`nop` layout.
- Dead variables of the right type (earlier call results, flags, floats) hold values the reference loads early; a new local would take another register.
- Operand order in `+=`, compares and packed expressions follows the reference's load order.
- Unsigned-to-float conversions written inline in the store keep the destination address before the conversion's branch.
- A stride or row offset is computed once, often straight into the call-result variable.

## Parked and unresolved

- **Register allocation** remains the largest group. The declaration-order measurement shows that most of it does not depend on declaration order: for most of the sampled targets, no order changes the output.
- **Recurring residues without a source form:**
  - float field addresses formed in r0;
  - a frame-address `add` placed in a call's delay slot;
  - the `operation_8c156d30` call-pair family;
  - destination addresses formed before the right-hand side in the `ffc` store family.
- **Declaration order** decides 22 of the near misses that hand passes finished in this batch. Such sources are held back, not admitted.
- **Out of scope:** argument-register order around a call's delay slot, **in-place `extu.w`**, and frame-pointer helpers.

Code-only completion and total function count remain unknown.
