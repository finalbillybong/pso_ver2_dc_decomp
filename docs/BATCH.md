# Reconstruction batch: 184: proven reconstruction families

23 new matching functions / 4,796 bytes. All 2125 prior functions preserved.

2148 exact functions in 2072 modules; 164,444 compiled function-range bytes; 0 reconstructed data bytes; 3,998,468 retained reference bytes. Whole-image coverage 3.9502% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| copy_eight_packed_fields | 0x8c01a40c | 212 |
| initialize_context_control | 0x8c031358 | 140 |
| destroy_context_control | 0x8c0313e4 | 76 |
| actor_stat_and_position_helpers | 0x8c03bc48 | 152 |
| destroy_named_resource_scene | 0x8c0ed344 | 92 |
| create_resource_effect_8c108044 | 0x8c108044 | 100 |
| create_resource_effect_8c1080a8 | 0x8c1080a8 | 100 |
| create_resource_effect_8c10810c | 0x8c10810c | 100 |
| create_resource_effect_8c108170 | 0x8c108170 | 100 |
| create_resource_effect_8c1081d4 | 0x8c1081d4 | 100 |
| create_resource_effect_8c108238 | 0x8c108238 | 100 |
| create_resource_effect_8c10829c | 0x8c10829c | 100 |
| create_resource_effect_8c108300 | 0x8c108300 | 100 |
| edit_three_scalar_fields | 0x8c1339a4 | 844 |
| edit_three_scalar_fields_8c133fb0 | 0x8c133fb0 | 844 |
| edit_three_scalar_fields_8c1342fc | 0x8c1342fc | 844 |
| create_single_entry_menu | 0x8c1d1f54 | 132 |
| create_single_entry_menu_8c1d3c74 | 0x8c1d3c74 | 132 |
| create_single_entry_menu_8c217530 | 0x8c217530 | 132 |
| create_single_entry_menu_8c217604 | 0x8c217604 | 132 |
| create_single_entry_menu_8c21a66c | 0x8c21a66c | 132 |
| create_single_entry_menu_8c21a734 | 0x8c21a734 | 132 |

This batch adds **23 complete exact functions / 4,796 compiled function-range bytes in 22 modules**, preserving all 2,125 prior functions and source/header hashes. Totals: 2,148 functions / 2,072 modules / 164,444 compiled function-range bytes / zero separately reconstructed static-data bytes / 3,998,468 retained reference bytes. Whole-image coverage is 3.9502%; it is not code-completion percentage. The code-only denominator remains unknown.

The first six functions contributed672 bytes: context-control initialization/destruction, resource-scene destruction, an explicit packed-field copy and adjacent actor-stat/position helpers. Compiling the two genuine adjacent actor entries together produces their natural alignment; no padding is inserted. Several unrelated initializer/parser/rendering attempts then stalled. Their gains were zero and their costs remain included below.

To improve yield, the existing grouping scan was applied to untried function families, rather than repeatedly varying source on stalled targets. One100-byte mixed integer/float resource-effect factory matched immediately, followed by seven reviewed siblings. A three-scalar editor matched its complete844-byte range after correcting the debug-text declaration and capturing the selected axis once; two reviewed siblings matched immediately. A132-byte single-entry menu factory matched after explicit unsigned-int temporaries reproduced two unsigned-short promotions; five siblings then matched immediately. Each family retained checked provisional layouts, inspected callee bindings, original branches and independently reviewed full boundaries. Repeated ordinary-source substitutions were generated in scratch and compiled immediately. No compiler settings or public tools changed.

There were **51 distinct hypotheses / 51 compiler attempts / zero compiler errors / four duplicate outputs**. Candidate compilation totaled 1.600 seconds. The early collection was only672 bytes after29 hypotheses; the targeted family scan recovered the final yield. Twelve investigations are parked, with precise differences, provisional source and cumulative counts. The selector's fourth hypothesis was justified by H3 newly localizing all remaining instruction differences to three inline lookup blocks; after H4 left two blocks unresolved, it was parked. No sibling selector was attempted. Historical primary targets remain unchanged and incomplete. Failed work is not reconstruction progress.

| Parked target | Hypotheses | Best saved generated / expected bytes | Differing bytes | First difference |
| --- | ---: | ---: | ---: | --- |
| create_nested_control (0x8c0348bc) | 2 | 176 / 176 | 4 | 0x8c0348dc |
| load_control_frame (0x8c0315d8) | 3 | 156 / 160 | 42 | 0x8c0315dc |
| load_control_record (0x8c03153c) | 3 | 156 / 156 | 34 | 0x8c031544 |
| reset_context_records (0x8c031430) | 1 | 260 / 268 | 250 | 0x8c031434 |
| pack_actor_field_bytes (0x8c021054) | 1 | 160 / 168 | 136 | 0x8c02105b |
| draw_layered_actor (0x8c081e38) | 1 | 292 / 292 | 24 | 0x8c081e89 |
| initialize_record_storage (0x8c0cba20) | 3 | 204 / 200 | 112 | 0x8c0cba2a |
| initialize_named_resource_scene (0x8c0ed1e4) | 2 | 352 / 352 | 28 | 0x8c0ed2ae |
| initialize_rising_position_effect (0x8c0cd2ac) | 2 | 236 / 236 | 98 | 0x8c0cd2ff |
| update_script_menu_selection (0x8c21424c) | 1 | 366 / 340 | 313 | 0x8c214250 |
| resolve_script_selector (0x8c2115dc) | 4 | 798 / 800 | 54 | 0x8c21183a |
| initialize_five_entry_selection (0x8c0176f8) | 1 | 272 / 276 | 152 | 0x8c0176f8 |

All22 modules reproduced twice before admission, then **two fresh exact builds in each checkout**, integrated-image comparisons, both five-function proofs, **all121 current test executions** (58 research,63 public), and source-only rejection/artifact-preservation checks passed. One full acceptance pass performed **8,288 module comparisons / 1.73 per new byte**, with research/public command totals 123.665/125.869 seconds. Existing primary exports were checked and reused; one new focused dossier covers six representative modules and produced complete raw/reference evidence and pseudocode for all requested entries.

**Measured efficiency improved for the completed collection:** 94.04 bytes per hypothesis versus batch183's82.42 and the sampled baseline's50.95; verification overhead fell to 1.73 comparisons per byte from2.07 and6.48 respectively. The early investigations were inefficient; the improvement came from reviewing one representative before family expansion and collecting several KB before verification. Scratch-only sorting work begun during acceptance belongs to the next batch and is excluded. Token/cost records and comparable historical timing records remain unavailable; no monetary or token savings are estimated.

Reproduce with tools/reconstruct.py verify after BUILDING.md setup; check saved focused analysis using tools/dossier.py --check. Continue related untried families, keep immediate candidate comparisons, and park exhausted source contexts. Publishing remains a checkpoint.
