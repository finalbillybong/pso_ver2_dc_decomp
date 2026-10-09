# Reconstruction batch: 180: proven reconstruction families

20 new matching functions / 2,128 bytes. All 1999 prior functions preserved.

2019 exact functions in 1945 modules; 148,528 compiled function-range bytes; 0 reconstructed data bytes; 4,014,384 retained reference bytes. Whole-image coverage 3.5679% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| create_control_owner_8c03d1b8 | 0x8c03d1b8 | 48 |
| create_control_owner_8c03d250 | 0x8c03d250 | 48 |
| finalize_view_8c0db2cc | 0x8c0db2cc | 64 |
| configure_grid_view | 0x8c119290 | 88 |
| update_grid_view_parameters | 0x8c119364 | 268 |
| initialize_pair_grid_view | 0x8c119470 | 204 |
| update_pair_grid_view | 0x8c119598 | 104 |
| finalize_pair_grid_view | 0x8c119600 | 64 |
| configure_pair_grid_view | 0x8c119640 | 76 |
| create_fitted_pair_grid_view | 0x8c11968c | 72 |
| approach_pair_grid_offset | 0x8c119988 | 68 |
| remove_pair_grid_node | 0x8c119c00 | 120 |
| pair_grid_view_ready | 0x8c119cf8 | 104 |
| draw_rising_grid_view | 0x8c119f04 | 152 |
| draw_grid_view_records | 0x8c11a0cc | 292 |
| initialize_control_block_owner | 0x8c1336b4 | 100 |
| finalize_view_8c1f1a5c | 0x8c1f1a5c | 64 |
| finalize_view_8c218070 | 0x8c218070 | 64 |
| finalize_view_8c230684 | 0x8c230684 | 64 |
| finalize_view_8c24e044 | 0x8c24e044 | 64 |

This batch adds 20 complete exact functions / 2,128 compiled function-range bytes in 20 modules, preserving all 1,999 prior functions and source/header hashes. Totals: 2,019 functions / 1,945 modules / 148,528 compiled function-range bytes / zero separately reconstructed static-data bytes / 4,014,384 retained reference bytes. Whole-image coverage is 3.5679%; this is not code-completion percentage. The code-only denominator remains unknown.

Exact additions cover two control-owner factories, a 68-byte aggregate-copy constructor, grid-view configuration and interpolation, pair-view allocation/initialization, node removal, readiness checks, native virtual finalizers, and rising-view and record drawing. The 292-byte record renderer preserves three local aggregates, 44-byte records and separate style branches. The 268-byte interpolator retains the initial unsigned step count for the first two divisions and reloads after the observed store. Runtime calls, configuration tables, matrix data and globals remain reference-dependent; no data credit is claimed.

The collection used 39 distinct hypotheses / 40 compiler attempts, one C90 declaration syntax rejection and seven duplicate binary outputs. Five duplicate outputs are successfully matched sibling finalizers at distinct reviewed addresses; two are unsuccessful repeated outputs within a target. The syntax correction retested the same hypothesis. Compilation totaled 1.215 seconds. A focused scan of the exact native finalizer produced five first-try matches. Existing trial, binary grouping, admission, staged audit and publication tools were reused; no public tooling or compiler-setting changes were needed.

Seven targets are parked with complete generated/expected sizes, differing-byte counts, first mismatch, cumulative hypothesis counts and revisit conditions in the unresolved queue. The ring insertion is 536/536 bytes with 19 differing after three hypotheses; node refresh is 128/128 with four differing after three. The factory remains 132/132 with 13 differing and identical output after flattening. Remaining blockers concern self/stack argument evaluation, float lifetime and literal scheduling. Provisional source is retained without completion credit. Historical parked targets, including 0x8c045f04 and 0x8c05fbf8, remain unchanged and incomplete.

All 20 admitted modules reproduced twice before integration. One full verification pass ran two fresh exact builds in each checkout, exact integrated-image comparisons, both five-function proofs, 58 research and 63 public tests, and source-only rejection with artifact preservation. New focused exports were checked once; unchanged primary exports were reused. Verification performed 7,780 module comparisons, **3.66 per new byte**. Concurrent research/public command times were 117.686/120.073 seconds.

Measured candidate yield improved to **54.56 bytes per hypothesis**, versus 25.65 in batch 179 and 50.95 in the sampled baseline. Verification overhead improved from batch 179's 4.76 comparisons per new byte to 3.66, below the baseline's 6.48, but remains worse than batch 178's 1.82. This collection reaches the 20-function target but falls below the preferred several-KB size. Token/cost records and comparable baseline timings remain unavailable; no overall monetary or token saving is asserted. The successful finalizer family and explicit aggregate/frame reconstruction supplied measurable gains. Continue screening proven patterns and following larger matrix/vector and record operations, keeping failed investigations bounded. Independent next-batch candidates are excluded from these totals.

Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup. Check saved focused analysis using tools/dossier.py --check. Continue immediate complete-range trials in scratch, with full verification at integration checkpoints. Do not reopen parked targets without specific new evidence.
