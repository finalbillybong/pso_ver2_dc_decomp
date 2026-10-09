# Reconstruction batch: 179: proven reconstruction families

20 new matching functions / 1,616 bytes. All 1979 prior functions preserved.

1999 exact functions in 1925 modules; 146,400 compiled function-range bytes; 0 reconstructed data bytes; 4,016,512 retained reference bytes. Whole-image coverage 3.5168% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| create_scene_control_owner | 0x8c115bc4 | 48 |
| destroy_scene_control_owner | 0x8c115f80 | 288 |
| scene_control_pressed_direction | 0x8c118028 | 68 |
| scene_control_vertical_hold | 0x8c1180e4 | 72 |
| scene_control_horizontal_hold | 0x8c1181a4 | 72 |
| scene_control_sample_x | 0x8c118300 | 44 |
| scene_control_sample_y | 0x8c11832c | 32 |
| draw_scene_control_marker | 0x8c11834c | 108 |
| set_scene_control_bounds | 0x8c1184f8 | 48 |
| release_scene_control_resource | 0x8c11875c | 36 |
| load_scene_control_resource | 0x8c1187e4 | 308 |
| discard_colored_trail_pair | 0x8c118a40 | 76 |
| set_colored_trail_colors | 0x8c118b14 | 20 |
| draw_colored_trail | 0x8c118c30 | 48 |
| discard_textured_trail_pair | 0x8c118cb0 | 76 |
| destroy_vector_grid | 0x8c118f5c | 56 |
| draw_grid_selected_rows | 0x8c119048 | 36 |
| draw_grid_offset_rows | 0x8c11906c | 76 |
| initialize_grid_view | 0x8c1191e4 | 52 |
| initialize_alternate_grid_view | 0x8c119218 | 52 |

This batch adds 20 complete exact functions / 1,616 compiled function-range bytes in 20 modules, preserving all 1,979 prior functions and source/header hashes. Totals: 1,999 functions / 1,925 modules / 146,400 compiled function-range bytes / zero separately reconstructed static-data bytes / 4,016,512 retained reference bytes. Whole-image coverage is 3.5168%; this is not code-completion percentage. The code-only denominator remains unknown.

Exact additions cover the scene-control owner factory/destructor, input predicates and interpolation, marker drawing, aggregate bounds setup, resource loading/release, paired trail compaction/drawing, vector-grid cleanup, grid wrappers and view initialization. Ordinary source preserves constructor/destructor order, native layouts, allocation-failure recursion in the resource loader, signed input thresholds, and observed floating arithmetic. All references to runtime helpers, configuration tables and globals remain reference-dependent; no static-data credit is claimed.

The collection used 63 distinct hypotheses / 65 compiler attempts, two linker-binding failures and five duplicate binary outputs. Both failed bindings belong to one waveform hypothesis; the established __l_divs symbol resolved the compiler dependency without changing settings. Compilation totaled 1.980 seconds. Proven unsigned index/count shifts, a logical-negation inline predicate, endpoint capture and allocation-state scope supplied exact improvements. Existing trial, binary grouping, admission, staged audit and publication tools were reused. No public tooling change or compiler-setting change was needed.

Seventeen targets are parked with exact generated/expected sizes, differing-byte counts, first mismatch, cumulative hypothesis counts and explicit revisit conditions in the unresolved queue. Their ordinary source snapshots are provisional and receive no credit. These include reset_scene_transition 460/464 with 318 differing bytes after two identical outputs, and initialize_scene_control_owner 888/908 with 827 differing after two identical outputs. Remaining input boolean materialization, vector-store lifetimes, waveform/parser registers and final call scheduling are unresolved; do not repeat equivalent spelling variants. No target exceeded three hypotheses in this collection. Historical parked targets, including 0x8c045f04 and 0x8c05fbf8, remain unchanged and incomplete.

All 20 admitted modules reproduced twice before integration. One full verification pass ran two fresh exact builds in each checkout, exact integrated-image comparisons, both five-function proofs, 58 research and 63 public tests, and source-only rejection with artifact preservation. New focused exports were checked once; unchanged primary exports were reused. Verification performed 7,700 module comparisons, **4.76 per new byte**. Concurrent research/public command times were 116.606/118.972 seconds.

**Candidate efficiency did not improve.** Yield was 25.65 bytes per hypothesis versus 50.95 in the sampled baseline and 144.14 in batch 178. Verification overhead also worsened from batch 178's 1.82 comparisons per byte, although it remains below the baseline's 6.48. This 20-function collection reaches the initial function-count target but falls below the preferred several-KB size. Token/cost records and comparable baseline timings remain unavailable; no overall cost saving is asserted. Expanding input-helper variants before one exact representative added avoidable low-yield work. The next collection therefore screens newly exact patterns first and tests one representative of an unfamiliar pattern before family expansion, following successful factory bindings into their constructors. Independent next-batch candidates are excluded from these totals.

Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup. Check saved focused analysis using tools/dossier.py --check. Continue immediate complete-range trials in scratch; defer the next integration until a larger measured collection where practical. Do not reopen parked targets without specific new evidence.
