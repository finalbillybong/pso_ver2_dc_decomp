# Reconstruction batch: 283: expanded candidate pool, part 87

17 new matching functions / 6,064 bytes. All 12306 prior functions preserved.

12323 exact functions in 11392 modules; 1,284,654 compiled function-range bytes; 524,768 typed static-data bytes; 0 retained reference bytes. Code-range coverage 30.8595%, image coverage 43.4653%; neither is code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c02631c | 0x8c02631c | 136 |
| operation_8c02ef5c | 0x8c02ef5c | 360 |
| operation_8c040d84 | 0x8c040d84 | 612 |
| operation_8c060724 | 0x8c060724 | 76 |
| operation_8c08076c | 0x8c08076c | 36 |
| operation_8c08da4c | 0x8c08da4c | 92 |
| operation_8c0acd00 | 0x8c0acd00 | 956 |
| operation_8c0b15d4 | 0x8c0b15d4 | 1012 |
| operation_8c0b5080 | 0x8c0b5080 | 844 |
| operation_8c105c78 | 0x8c105c78 | 616 |
| operation_8c159194 | 0x8c159194 | 32 |
| operation_8c1591b4 | 0x8c1591b4 | 32 |
| operation_8c173508 | 0x8c173508 | 32 |
| operation_8c17f3a8 | 0x8c17f3a8 | 400 |
| operation_8c18f0ec | 0x8c18f0ec | 448 |
| operation_8c1ea80c | 0x8c1ea80c | 184 |
| operation_8c1ebad4 | 0x8c1ebad4 | 196 |

## Method

Batch 283 consists of hand-finished sources ported from admitted sibling functions.

**Sibling ports.** A scratch pass compared every unmatched function with every admitted function:
- instruction streams with immediates, displacements and pool addresses masked;
- size within ±10%;
- an opcode-sequence similarity ratio of at least 0.85.

That gave 295 pairs over 102 unmatched functions. For about 60 of them, the closest admitted sibling's C was adapted to the target, changing only what the listing diff shows: offsets, constants, callees, globals, field types, and statements present in one function but not the other.
- Three targets are byte-identical twins of admitted functions.
- The others are class-family variants: technique constructors, quad-sprite renderers, subcommand handlers and save-block helpers.

Searching the admitted code for the target's callee set sometimes found a better sibling than the similarity ranking.

**Forms to disclose.** These reproduce instructions the reference contains:
- `0x8c08076c` tests `o->f94` in a nested `if` whose then-branch only returns, which reproduces the reference's load and test.
- `0x8c02631c` uses a `switch` whose cases and default all return 0. The reference returns 0 on every path, and the switch reproduces its compare chain and its two return sites.
- `0x8c060724` keeps the self-store `g_8c467a48 = (int)(g_8c467a48)`, which the reference performs, as in its admitted sibling `0x8c060660`.

**Held.** Six SDK error-wrapper siblings of `floor_e` need the Hitachi SHC compiler and go through the SHC track separately. One source, `0x8c0402c8`, includes a shared class header. The trial runner could not declare the header for it, so it is not part of this batch.

These still hold:
- full-range exact only, with the padding rule;
- ordinary C or C++ with the pinned compiler and flags;
- no `-O3`, no `(v >= 0 ? v : v)`, and no dead statements that only steer code generation;
- no argument that no reference instruction sets;
- two independent reproductions per unit;
- the history guard is never forced.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (17);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

18 recorded attempts on 18 targets: 17 exact, and 1 (`0x8c0402c8`) where the trial failed to link, because the unit was compiled as C++ without C linkage. 17 units / 17 functions / 6,064 bytes were admitted after two independent reproductions each, all of them hand-finished sources.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged in the pass's attempt log.
- **Per function**, the change that made each source exact:
  - `0x8c0b15d4` (1,012 bytes): port of TTecGiBarta_ctor_1_8c0b11f4: base-ctor callee 0x8c0b99f4, offset table g_8c305194, new o->f148 = 12.0f (float f148 field) after the template init, then n = 0 assigned before fill/slots with an empty-init for loop (statement placement decides the 0xffff literal schedule; supersedes the earlier parked line)
  - `0x8c0acd00` (956 bytes): port of TTecBarta_ctor_1_8c0ac934: base-ctor callee 0x8c0b99f4, o->f130 = 0x80003 moved to just after call_8c0ad348 (before the fill loop), no o->f28 += 5.0f
  - `0x8c0b5080` (844 bytes): port of TTecMegid_ctor_1_8c0b4d34 (technique-effect ctor twin): only the first call (base init) changes, callee 0x8c0b9730 -> 0x8c0b99f4 bound by address
  - `0x8c105c78` (616 bytes): port of operation_8c1895f4 (resource-apply twin): resource and selector pointer fields swapped (resource at 0x30, selector at 0x34), record table 0x4c -> 0x50, callees 8c106038/8c18afac, added operation_8c1c74a8(&rec, 1) after the f0c id store in both copies
  - `0x8c040d84` (612 bytes): port of operation_8c040ab8 (quad-sprite render family): reset_state_8c391c94 moved before sq_select, sq_header3_8c38b02e(s->f24) at the top of the visible branch (Sprite.f24 int), depth read from frame.q.z (no z local, reloaded after the call), else branch in order inv, sx = 1, sy = sx, x, y (statement order decides the fp schedule)
  - `0x8c18f0ec` (448 bytes): port of operation_8c18ef28 (shuffled-bag fill twin): count callee 8c18f570, table = g_8c4dbf64->f00 + 8, rec.f00 = 1; rec.f01 = 2 as separate stores, no call_8c1c936c, acceptance check operation_8c18f418
  - `0x8c17f3a8` (400 bytes): port of operation_8c17f210 (save-block shuffle twin): block size 0x16fc -> 0x1550 (Block5456 copies, malloc/length args) and seed field 0x16f8 -> 0x154c
  - `0x8c02ef5c` (360 bytes): port of operation_8c02edf8 (packet-send twin): message id 0x419 -> 0x447, frame type 0x61 -> 0x98 with Frame.f00 typed unsigned char (0x98 is then a pool literal, as ref)
  - `0x8c1ebad4` (196 bytes): port of handle_6x45_third_attack_8c1ebf60 (sibling 6x45 handler): operation_8c1e8e60 state argument 7 -> 6
  - `0x8c1ea80c` (184 bytes): port of handle_6x45_third_attack_8c1ebf60 (6x45-family handler): drops the f756 store, operation_8c1e8e60 state 7 -> 5
  - `0x8c02631c` (136 bytes): port of operation_8c0262a0 (member-flag query twin): early if (o->f3b8 == 0) return 0, then switch (elem_f01(t1, 0)) { case 0: case 2: return 0; } return 0; (the reference returns 0 on every path; the switch reproduces its compare chain and the two separate return sites)
  - `0x8c08da4c` (92 bytes): port of operation_8c09dfec (area-table lookup twin): table 0x8c2ebec8, short id parameter compared as id == k, index kept as short v1 and stored to o->f108, returns the matching entry (0 at the end); DECL-ORDER: k declared after t1/v4 decides the k/table register pair
  - `0x8c060724` (76 bytes): port of operation_8c060660 (the 8c467a44 scroll-offset setter family; the pair-ranked sibling 8c0604f0 was the other member): g_8c467a4c = a0, g_8c467a48 = (int)(g_8c467a48) self-store as in the admitted sibling (the reference stores g48 back), sum g44 + g48 + a0 published to a50/a54 and passed on
  - `0x8c08076c` (36 bytes): port of TCharaMaking_update_8c03496c: first test is hierarchy_is_active(o) (o is still in r4), second test reads o->f94 instead of calling operation_8c034994 (same empty if-return shape as the sibling)
  - `0x8c159194` (32 bytes): port of operation_8c173528: bound 4, table 0x8c4daae0
  - `0x8c1591b4` (32 bytes): port of operation_8c173528: bound 4, table 0x8c4daae0 (byte-identical twin of 8c159194)
  - `0x8c173508` (32 bytes): verbatim port of admitted twin operation_8c173528 (byte-identical code, same table 0x8c4db600, bound 0x12; m = -1 named constant as in the sibling)

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical, except where applied names are used.

## Parked and unresolved

- About 36 sibling ports remain near misses:
  - delay-slot argument order: base-destructor tails, `copy_actor_records`, `draw_view_nodes` callers, and seven byte-identical `TItemWpn*` bodies;
  - in-place extension;
  - scratch and callee-saved colouring.
- Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Code-only completion and total function count remain unknown.
