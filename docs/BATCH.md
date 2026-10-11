# Reconstruction batch: 190: C++ virtual-call and medium routines

55 new matching functions / 5,264 bytes. All 2391 prior functions preserved.

2446 exact functions in 2362 modules; 193,596 compiled function-range bytes; 0 reconstructed data bytes; 3,969,316 retained reference bytes. Whole-image coverage 4.6505% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| find_selected_8c01e110 | 0x8c01e110 | 56 |
| notify_children_8c021c4c | 0x8c021c4c | 112 |
| release_child_slot_8c022624 | 0x8c022624 | 156 |
| forward_state_8c02300c | 0x8c02300c | 48 |
| create_child_8c02c6c0 | 0x8c02c6c0 | 84 |
| apply_setting_8c02c820 | 0x8c02c820 | 128 |
| try_setting_8c02c8a0 | 0x8c02c8a0 | 144 |
| try_or_forward_8c046104 | 0x8c046104 | 60 |
| handle_event_8c059348 | 0x8c059348 | 84 |
| reset_segments_8c05a124 | 0x8c05a124 | 100 |
| aim_direction_8c05bdd4 | 0x8c05bdd4 | 108 |
| reset_link_8c05bf28 | 0x8c05bf28 | 28 |
| handle_event_8c05d0f4 | 0x8c05d0f4 | 60 |
| raise_on_hit_8c073dec | 0x8c073dec | 100 |
| forward_state_8c074944 | 0x8c074944 | 60 |
| query_state_8c074980 | 0x8c074980 | 52 |
| forward_state_8c0749dc | 0x8c0749dc | 40 |
| forward_state_8c074c08 | 0x8c074c08 | 40 |
| query_state_8c074e14 | 0x8c074e14 | 52 |
| forward_state_8c0750a4 | 0x8c0750a4 | 40 |
| raise_level_8c07653c | 0x8c07653c | 68 |
| classify_ratio_8c0bf654 | 0x8c0bf654 | 100 |
| flag_and_dispatch_8c0d89ec | 0x8c0d89ec | 36 |
| update_mode_8c0eea34 | 0x8c0eea34 | 68 |
| check_and_emit_8c0f24a0 | 0x8c0f24a0 | 140 |
| dispatch64_8c112fb0 | 0x8c112fb0 | 12 |
| show_key_8c112fbc | 0x8c112fbc | 164 |
| update_cycle_8c113060 | 0x8c113060 | 128 |
| place_actor_8c128930 | 0x8c128930 | 80 |
| hold_state_8c1289a8 | 0x8c1289a8 | 132 |
| begin_action_8c13b5d0 | 0x8c13b5d0 | 124 |
| interrupt_state_8c13be60 | 0x8c13be60 | 100 |
| update_phase_8c150ad4 | 0x8c150ad4 | 160 |
| update_phase_8c151a74 | 0x8c151a74 | 104 |
| request_motion_8c1526f8 | 0x8c1526f8 | 92 |
| dispatch_idle_8c152898 | 0x8c152898 | 44 |
| update_rise_8c159ef8 | 0x8c159ef8 | 180 |
| update_phase_8c15a058 | 0x8c15a058 | 164 |
| dispatch124_8c15e91c | 0x8c15e91c | 16 |
| find_node_8c16a3c0 | 0x8c16a3c0 | 164 |
| find_node_8c16a464 | 0x8c16a464 | 168 |
| export_state_8c16b234 | 0x8c16b234 | 64 |
| release_scene_8c16c1e4 | 0x8c16c1e4 | 152 |
| clamp_settings_8c1a0510 | 0x8c1a0510 | 196 |
| slot_ready_8c1a3d50 | 0x8c1a3d50 | 148 |
| target_info_8c1a8f10 | 0x8c1a8f10 | 72 |
| target_query_8c1a924c | 0x8c1a924c | 52 |
| refresh_records_8c1ada14 | 0x8c1ada14 | 100 |
| update_count_8c1ca1fc | 0x8c1ca1fc | 56 |
| advance_timer_8c1e735c | 0x8c1e735c | 100 |
| reset_motion_8c1ef224 | 0x8c1ef224 | 108 |
| accumulate_angle_8c1f0378 | 0x8c1f0378 | 104 |
| release_resources_8c21db58 | 0x8c21db58 | 104 |
| no_owned_target_near_8c25aa04 | 0x8c25aa04 | 112 |
| advance_timer_8c25bf48 | 0x8c25bf48 | 100 |

## Method

Batch 190 moved from short helpers to 50–200-byte routines. REA 6.4.0 (Ghidra 12.1.4,
SH-4 language override) supplied batch decompilation and literal/call review for each
candidate; sources were written from the raw listing and trialled with the existing
driver. A new candidate source was the 306 unadmitted functions that make C++ virtual
calls (vtable at `this+0x18`, slot offset materialized in r2). 40 of the 55 admitted
units are declared `"language": "c++"`.

## Measured attempts

118 recorded attempts on 78 targets after the batch 189 admission: 110 hypotheses and
8 corrections. Eight attempts were compile/link errors (C++ sources first compiled as C
by the batch driver, a merged typedef, and the `__l_mods` binding name); each was
resolved by a `correction`. 55 units / 55 functions / 5,264 bytes were admitted after
two independent reproductions each.

Scratch compiler probes outside the history were used only to establish mechanisms
(C++ virtual calls, double extensions, scoped field pointers, hoisted offsets, cast
barriers, variadic argument placement). Every trial that relied on one cites the saved
probe output as `third_evidence` or `reopen_evidence`; probes were not used to search
declaration orders for a target.

## Observed techniques

- C++ virtual calls: `mov.l @(0x18,r4),r0; mov #off,r2; add r0,r2; mov.l @r2,r0; jsr/jmp`
  is a CodeWarrior C++ virtual call; slot = (off - 8) / 4. This reopened and matched the
  parked dispatch pair `0x8c112fb0`/`0x8c15e91c`.
- A scoped local pointer to a field reproduces add-based field addressing used only for a
  read-modify-write (`0x8c13b5d0`, `0x8c1289a8`).
- A named offset constant scoped where the reference first loads it is hoisted into a
  callee-saved register (CW03); callee-saved registers follow declaration order
  r14, r13, r12 (`0x8c021c4c`, `0x8c25aa04`).
- An intermediate `(int *)` cast on a base pointer prevents reassociation, so
  `base + offset` is formed before a scaled index is added (`0x8c022624`; reopened
  `0x8c05a124`).
- An explicit `(unsigned char)` cast of an `unsigned char` load reproduces a double
  `extu.b` (`0x8c01e110`); `unsigned short` fields store `0xffff` from a literal.
- Variadic callees keep the last named argument on the stack (`0x8c112fbc`).
- `0x8c18e8a0` is bound as `__l_mods` for `%` in C++ as in C.

## Parked and unresolved

Parked in this batch: `0x8c028e74`, `0x8c05c0dc` (prologue `this` copy), `0x8c07bc00`
(argument extension loads directly into r4), `0x8c09b8f4`, `0x8c09e7b4`, `0x8c158450`,
`0x8c19df2c`, `0x8c1accac`, `0x8c1cd2f4` (halfword double extension with field reload)
and `0x8c2436e4`. Near misses with hypotheses remaining include `0x8c159fac` (one
missing halfword extension) and several register-allocation residues listed in the
private trial index. Code-only completion and total function count remain unknown.
