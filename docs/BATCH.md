# Reconstruction batch: 191: constructors, factories and near-miss revisits

37 new matching functions / 5,320 bytes. All 2446 prior functions preserved.

2483 exact functions in 2399 modules; 198,916 compiled function-range bytes; 0 reconstructed data bytes; 3,963,996 retained reference bytes. Whole-image coverage 4.7783% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| initialize_game_8c010514 | 0x8c010514 | 160 |
| initialize_input_manager_8c014694 | 0x8c014694 | 120 |
| initialize_menu_manager_8c014814 | 0x8c014814 | 96 |
| initialize_field_manager_8c014948 | 0x8c014948 | 96 |
| initialize_manager_8c014a7c | 0x8c014a7c | 132 |
| initialize_session_manager_8c014c1c | 0x8c014c1c | 132 |
| initialize_audio_manager_8c014f74 | 0x8c014f74 | 88 |
| release_stage_8c016a74 | 0x8c016a74 | 260 |
| shutdown_game_8c01c054 | 0x8c01c054 | 296 |
| item_capacity_8c022f5c | 0x8c022f5c | 172 |
| compose_layout_8c03bb80 | 0x8c03bb80 | 88 |
| apply_level_effects_8c07b354 | 0x8c07b354 | 200 |
| initialize_panel_8c087d8c | 0x8c087d8c | 140 |
| spawn_node_8c0a49c8 | 0x8c0a49c8 | 176 |
| initialize_follow_8c0a5ad0 | 0x8c0a5ad0 | 216 |
| find_nearest_8c0c323c | 0x8c0c323c | 204 |
| release_matching_8c0ddd64 | 0x8c0ddd64 | 104 |
| refresh_name_8c0e2b78 | 0x8c0e2b78 | 152 |
| check_and_load_8c0ea6d8 | 0x8c0ea6d8 | 76 |
| spawn_item_8c0fc440 | 0x8c0fc440 | 200 |
| target_inactive_8c10ec8c | 0x8c10ec8c | 68 |
| initialize_actor_8c11dbd0 | 0x8c11dbd0 | 180 |
| send_code_8c14472c | 0x8c14472c | 152 |
| initialize_marker_8c150384 | 0x8c150384 | 168 |
| initialize_grid_8c1566f0 | 0x8c1566f0 | 204 |
| update_link_8c159fac | 0x8c159fac | 172 |
| initialize_tag_8c1694cc | 0x8c1694cc | 56 |
| initialize_loader_8c173578 | 0x8c173578 | 128 |
| create_loader_8c1735f8 | 0x8c1735f8 | 180 |
| create_loader_8c1736ac | 0x8c1736ac | 204 |
| compare_records_8c181968 | 0x8c181968 | 64 |
| compare_records_8c1819a8 | 0x8c1819a8 | 64 |
| check_and_load_8c199628 | 0x8c199628 | 76 |
| spawn_beam_8c1c5f48 | 0x8c1c5f48 | 200 |
| raise_marker_8c1cd2f4 | 0x8c1cd2f4 | 104 |
| initialize_trigger_8c237254 | 0x8c237254 | 88 |
| raise_marker_8c254fd4 | 0x8c254fd4 | 104 |

## Method

Batch 191 moved to 60–300-byte routines: near misses reopened with new idioms, structurally
simple large functions (release lists, straight-line setup) and object constructors/factories
that call `initialize_hierarchy_node` (`0x8c0330e4`). REA 6.4.0 (Ghidra 12.1.4, SH-4 language
override) supplied decompilation and reference review. Sources were written from the raw
listing and pool.

## Measured attempts

60 recorded attempts on 44 targets after the batch 190 admission: 59 hypotheses and 1
correction. One attempt was a compile error: the batch driver created a C++ spec without its
language, and the `correction` re-ran the same source as C++. 37 units / 37 functions /
5,320 bytes were admitted after two independent reproductions each.

Scratch compiler comparisons are disclosed here because they affect how the recorded numbers
should be read. 59 guarded comparisons on 30 addresses (`probe_log.tsv`) were run outside the
history. Most later constructors were compared against the reference before their first
recorded trial, and that comparison sometimes corrected a struct offset or a store order taken
from the listing. So the high first-attempt exact rate in this batch does **not** measure
first-guess accuracy.

Probes did not search declaration orders. Each change was read from the listing (offsets, pool
order, loop test) or applied a cookbook idiom. Probe-only work on unadmitted targets is listed
below.

An earlier probe claim for `0x8c18f690` was wrong: an empty reference listing compared as zero
differences. A correction note is retained with the evidence. The comparison tool now refuses
empty inputs and also compares raw bytes, including literal pools.

## Observed techniques

- Constructor factories (`allocate_block`, then an inlined initializer):
  - The first base call uses the raw allocation result.
  - Later stores go through a scoped copy whose address is taken (`T *self = p; T **home = &self;`).
  - Examples: `0x8c0fc440`, `0x8c0a49c8`.
- Inlined base-class constructors:
  - The pattern `mov.l @r15,r14` followed by a base call, the base vtable store through r14 and the derived vtable store through the stack home.
  - This is reproduced by a scoped `base` copy of the stack-homed `this`.
  - Examples: the `0x8c014694`..`0x8c014f74` manager family.
- A constant stored to a global and kept in r4 across a following call is that call's argument (`0x8c014a7c`).
- Externally bound data globals fixed address-load scheduling in factories and managers (CW14).
- Loop tests:
  - `mov rN,r0; cmp/eq #k,r0; bf` comes from a `!=` loop test.
  - `<` gave `cmp/gt`.
- Assert-style `for (;;)` traps and repeated null tests reproduce source-level `if (p)` blocks.
- Wrapping the valid path in `if (...) { ... }` places the invalid return last. This affects factories and multi-argument guards (`0x8c1736ac`, `0x8c1c5f48`).
- Other details:
  - An `x & 0xffff` mask on an `unsigned short` emits a double `extu.w`.
  - A `volatile` field forces a reload.
  - MSL-style inline `strcmp` uses `unsigned char` temporaries.
  - A ternary return avoids a filled delay slot.

## Parked and unresolved

Parked in this batch:
- `0x8c243cd4`: 512 bytes; register allocation residue.
- `0x8c18f690`: 528 bytes; 210 bytes differ.
- `0x8c0673a0`: literal-pool order.
- `0x8c15b448`: two failures.

Probe-only, with no recorded hypothesis spent:
- `0x8c0a0058`: temp-pointer register reuse.
- `0x8c13fed4`: halfword load via r0 and address temporaries.
- `0x8c1f1d38`: 21 bytes; the loop-offset register.

Other near misses still have hypotheses remaining:
- `0x8c0c60b0`: zero-store scheduling.
- `0x8c17e458`: copy-call scheduling.
- Menu builders `0x8c1d1e10` and `0x8c25ecd4`: items 1–6 schedule differently.
- `0x8c172c74`: buffer store register.
- Label constructors `0x8c0edfd0`, `0x8c0ee0d4` and `0x8c0ee1d8`: one `this` reload versus `lds FPUL`; about 800 bytes in total.
- `0x8c1e6f50` and `0x8c0303a0`.

Code-only completion and total function count remain unknown.
