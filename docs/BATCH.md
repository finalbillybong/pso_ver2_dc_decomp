# Reconstruction batch: 265: expanded candidate pool, part 69

16 new matching functions / 7,206 bytes. All 10717 prior functions preserved.

10733 exact functions in 10649 modules; 1,088,626 compiled function-range bytes; 0 reconstructed data bytes; 3,074,286 retained reference bytes. Whole-image coverage 26.1506% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02c390 | 0x8c02c390 | 814 |
| operation_8c032c3c | 0x8c032c3c | 220 |
| operation_8c032d18 | 0x8c032d18 | 188 |
| operation_8c03e080 | 0x8c03e080 | 336 |
| operation_8c08ca80 | 0x8c08ca80 | 164 |
| operation_8c09aa8c | 0x8c09aa8c | 120 |
| operation_8c09e188 | 0x8c09e188 | 332 |
| operation_8c09e408 | 0x8c09e408 | 328 |
| operation_8c0bef68 | 0x8c0bef68 | 512 |
| operation_8c1098a4 | 0x8c1098a4 | 164 |
| operation_8c1160a0 | 0x8c1160a0 | 536 |
| operation_8c14b3e4 | 0x8c14b3e4 | 716 |
| operation_8c153b08 | 0x8c153b08 | 1008 |
| operation_8c1bc800 | 0x8c1bc800 | 412 |
| operation_8c1c770c | 0x8c1c770c | 1116 |
| operation_8c238c10 | 0x8c238c10 | 240 |

## Method

Batch 265 consists of hand-finished near misses. The generator and the remaining candidates were unchanged since batch 263, when the 3,229 candidates were redrafted in all 19 modes without an exact draft, so there was no redraft. A generator research pass is in progress in scratch; nothing from it is used in this batch.

**Hand-finished near misses.** Four scratch passes took parked targets that still had hypothesis budget, in two further bands of differing lines (continuing batch 264's bands of 17–40):

| Differing lines | Targets | Exact |
|---|---|---|
| 41–56 | 206 | 8 |
| 57–80 | 206 | 8 |

As before, the passes tried only ideas that earlier passes on the same target had not tried. At this distance most drafts had lost or garbled behaviour, so most fixes rewrote structure from the listing.

They used the rules of batches 241–264:
- at most ten distinct hypotheses per target, counting earlier probes, with identical compiler outputs counted once;
- ordinary C or C++ only, with the pinned compiler and flags;
- full-range exact only (including the padding rule);
- no declaration-order search.

All exact sources were trialled and all are admitted.

**Held back.**
- **Declaration placement.** Each of these is exact only with one declaration placement, as shown by a single labelled comparison per target. They are held back and not trialled: `0x8c16ae6c`, `0x8c1a0cd0`, `0x8c1d5120`, `0x8c1e92f8`, `0x8c1ebf60`, `0x8c1f05d4`, `0x8c0105b4`, `0x8c022388`, `0x8c0e73fc`, `0x8c09eaac`.
- **Admitted-prototype conflicts.** Batch 263's `0x8c168608` and batch 264's `0x8c0dc884` remain held for review. Two parked targets here (`0x8c2262b8`, `0x8c0ece88`) would need float arguments that an admitted callee's prototype does not declare; they were not pursued.
- **Further comparisons.** The other declaration-order comparisons on parked targets did not make them exact.

Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (15) or a function end (1);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

16 recorded attempts on 16 targets, all hypotheses and all exact. 16 units / 16 functions / 7,206 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

1 unit was admitted under the padding rule at its code size: `0x8c02c390` (814 of 816). The reference has a single `.word 0x0000` after the final instruction, and the following routine starts on a four-byte boundary. An earlier pass had parked it for that padding before the padding rule existed.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the hand passes' attempt logs.
- **Placement checks.** For these admitted sources, a scratch compile with the new declarations placed elsewhere was also exact, so placement does not decide the match: `0x8c1098a4`, `0x8c0bef68`, `0x8c1bc800` and `0x8c238c10`. The `0x8c238c10` check was my own scratch compile, with its two new locals declared last.
- **Callee prototypes.** `0x8c1160a0` calls `call_8c117fec` with the `(o, int)` prototype its listing and an admitted extern declaration show; the draft had invented two more arguments.
- **Per function**, the change that made each hand-finished draft exact:
  - `0x8c02c390` (814 bytes): padding rule: code exact at 814 of the 816-byte range (one trailing zero halfword; header size set to 814); deciding change: the f06 clamp block reads v1->f06 before t2->f06 (reference load order).
  - `0x8c032c3c` (220 bytes): sibling of 8c032d18: same for(;;) switch tokenizer with the extra ',' separator case (goto tangle replaced; named offset 0x10a0 with CW17 count pointer, *a1++ = 0).
  - `0x8c032d18` (188 bytes): goto tangle rewritten as a for(;;) switch tokenizer (cursor a1 advanced in place, start pointer, quote flag), named offset off = 0x10a0 with a CW17 scoped count pointer in case 9/10, *a1++ = 0 terminator; strcpy-style call_8c18e720(dst, start).
  - `0x8c03e080` (336 bytes): an earlier pass's structure + clear-loop stride as a literal (base + i * 0xc, no named stride) and the success block reading frame.f00 (into the dead parameter a1) before v36 = v28->f0c (336 bytes).
  - `0x8c08ca80` (164 bytes): an earlier pass's retry loop with the invented o copy v22 removed (o used directly): o/a1 saved-register swap resolved.
  - `0x8c09aa8c` (120 bytes): v1 = o->f50 * 0.2f moved before the chained f08/f0c frame stores (statement order follows reference load order).
  - `0x8c09e188` (332 bytes): f02 flags read once per iteration into a short local for the three bit tests (fixes 336->332) and the second -1 compare reusing the first named -1 short (v16) instead of a fresh v29 (332 bytes).
  - `0x8c09e408` (328 bytes): sibling of 8c09e188: f02 flags read once per iteration into a short local and the named -1 short assigned at the top of the v15 block before the calls (328 bytes).
  - `0x8c0bef68` (512 bytes): f3a4 short update through a scoped field pointer short *p = &o->f3a4 (CW17), draft v6 int copy dropped; placement check (function-level p) also exact.
  - `0x8c1098a4` (164 bytes): one counter for both loops, named mask = -9 before the clearing loop and named off = 0x3a8 for the first loop bound (CW03/CW18 constant locals); placement check (declarations first) also exact.
  - `0x8c1160a0` (536 bytes): both goto loops as for loops with the byte offset i << 2 computed once per iteration into a dead int (v7, v33); call_8c117fec reduced to its real (o, int) prototype (draft invented 2 args).
  - `0x8c14b3e4` (716 bytes): single result variable v28 for the f374 clamp (0 / (uint)(n-1) / (uint)n), goto loop as for, draft-invented v39 copy of f3dc dropped, 0x600 loop offset assigned to the dead call result t1.
  - `0x8c153b08` (1008 bytes): slot loop: byte offset off = i << 1 computed once per iteration into the later-reused int v21, limit read into int v20, if/else min into v16 (draft v15/v16 kept).
  - `0x8c1bc800` (412 bytes): an earlier pass's source plus a named off = 0x3a8 local for the f3a8 Vector3 copy destination and the f00 update (CW03/CW18 offset local); placement check (off declared first) also exact.
  - `0x8c1c770c` (1116 bytes): tag tests restructured as if (v5 == 0) {...} / if (v5 == 3 && f01 == 2) / if (v5 == 1 && f01 == 3) without copy variables (fixes the long-branch/pool layout), case 0xe/0x11 as a switch, char c = o->f04 reused as (unsigned char)c for the 0x1f index, int v25 = (short)t6 for the sign chain (1116 bytes).
  - `0x8c238c10` (240 bytes): single v variable (v5/v8/v10 merged), hi = v >> 16 (signed: shlr16+exts.w) & named mask 0xffff local, +0x78 cast barrier on the slot address; the existing declarations keep the start draft order, and a scratch compile with the new locals declared last is also exact.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- The scaled loop byte offset (`i << k`) is computed once per iteration into a dead int variable.
- Goto-tangle string tokenizers are a `for (;;)` switch with the cursor advanced in place and `*p++ = 0` for the terminator.
- Drafts invent copies of parameters and fields; removing them fixes saved-register assignment and branch layout.
- One result variable for a clamp chain, with the limit computed first.
- Named masks and offsets assigned just before a loop or block that reuses them (CW03).

## Parked and unresolved

- **Register allocation** remains the largest group among the re-tried targets. Several earlier "register only" parks turned out to hide lost behaviour that the passes restored, without reaching exact.
- **Recurring residues without a source form:**
  - the angle conversion that reuses one float register for both constants;
  - a global's address in r0;
  - struct-copy scheduling;
  - the `operation_8c156d30` call-pair family;
  - the packed-word `operation_8c1ae0d8` family.
- **Declaration order** decides 10 of the near misses finished in this batch. Such sources are held back, not admitted.
- **Out of scope:** argument-register order around a call's delay slot, in-place `extu.w`, and frame-pointer helpers.

Code-only completion and total function count remain unknown.
