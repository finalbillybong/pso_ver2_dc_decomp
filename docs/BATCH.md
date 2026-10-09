# Reconstruction batch: 178: proven reconstruction families

24 new matching functions / 4,180 bytes. All 1955 prior functions preserved.

1979 exact functions in 1905 modules; 144,784 compiled function-range bytes; 0 reconstructed data bytes; 4,018,128 retained reference bytes. Whole-image coverage 3.4780% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| initialize_base_blend | 0x8c114970 | 44 |
| base_blend_period_and_resets | 0x8c1149c8 | 72 |
| decrease_base_blend | 0x8c114a10 | 36 |
| base_blend_increase_and_apply | 0x8c114a34 | 88 |
| restore_base_blend | 0x8c114a8c | 60 |
| base_blend_above_minimum | 0x8c114ac8 | 16 |
| initialize_paired_array_owner | 0x8c114ad8 | 128 |
| destroy_paired_array_owner | 0x8c114b58 | 84 |
| paired_array_callbacks | 0x8c114bac | 48 |
| initialize_scene_transition | 0x8c114bdc | 620 |
| dispatch_scene_transition | 0x8c114e48 | 44 |
| update_scene_transition | 0x8c114e74 | 420 |
| update_alternate_scene_transition | 0x8c115018 | 424 |
| finish_scene_transition | 0x8c1151c0 | 216 |
| transition_scene_actors | 0x8c115298 | 508 |
| transition_alternate_scene_actors | 0x8c115494 | 544 |
| clear_alternate_scene_context | 0x8c1156b4 | 152 |
| transition_scene_screen | 0x8c11574c | 416 |
| update_scene_screen | 0x8c1158ec | 248 |
| scene_screen_callback | 0x8c1159e4 | 12 |

This batch adds 24 complete exact functions / 4,180 compiled function-range bytes in 20 modules. All 1,955 prior functions and their source/header hashes are preserved. Totals: 1,979 functions / 1,905 modules / 144,784 compiled function-range bytes / zero reconstructed data bytes / 4,018,128 retained reference bytes. Whole-image coverage is 3.4780%; it is not code completion. The code-only denominator remains unknown.

Following the newly exact embedded-blend family exposed larger scene-transition routines. The initializer, normal/alternate updates, actor transition loops, screen transition and cleanup sequences matched on their first compile. These are ordinary C/C++ with provisional names; observed independent conditionals, signed-byte queries, timeout order, repeated settings stores, nullable allocation paths and virtual calls are preserved. One alternate transition invokes its virtual activation after a null allocation when its outer context exists; no speculative guard was added. Referenced settings, configuration data and globals remain reference-dependent and receive no static-data credit.

The collection used 29 distinct hypotheses / 29 compiler attempts, zero errors, zero duplicate binary outputs and 0.891 seconds of recorded compilation. The paired-array constructor matched after explicit unsigned byte shifts and the previously proven scoped object capture recovered its loop reload lifetime. The query matched after declaration order recovered its index/count registers. Both stayed within three hypotheses. Natural alignment was recovered by grouping real adjacent functions, including a four-byte idle callback referenced by its actual vtable entry. No invented functions or explicit padding were added. Two separately exact trials are included inside their final groups and are not counted twice.

No new unresolved target is introduced by this integration: all unsuccessful trials in this collection were resolved by later complete matches. Historical parked targets and their counts are unchanged. The primary 0x8c045f04 and 0x8c05fbf8 targets remain incomplete; the new functions do not replace those acceptance criteria. All source views preserve declared dependencies and checked offsets or measured temporary-object extents.

All 20 modules reproduced twice before admission, adding 40 comparisons. One integration pass ran two fresh exact builds in each checkout, exact integrated-image comparisons, both five-function proofs, all 58 research and 63 public tests, and source-only rejection with artifact preservation. New focused exports were checked once, and unchanged primary evidence was reused. Verification used 7,620 module comparisons, **1.82 per new byte**. Concurrent research/public command times were 115.398/117.735 seconds.

Yield increased to 144.14 bytes per hypothesis, versus 50.95 in the sampled baseline, 61.17 in batch 176 and 50.51 in batch 177. Verification overhead is below the baseline's 6.48 comparisons per byte but above batch 177's 1.46; not every measure improved. This collection exceeds 4 KiB with 24 functions, and uses substantially fewer experiments than the preceding generated batch. Token/cost measurements and comparable baseline timings remain unavailable; no financial or token saving is claimed. Existing trial, family-screening, admission, staged-audit and publication helpers were reused without another tooling change. Screens that found no additional candidates receive no progress credit.

Continue the related transition/dependency family in scratch, keeping complete exact comparisons immediate and full verification at meaningful integration checkpoints. Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup; validate unchanged focused evidence with tools/dossier.py --check. The next reset-context investigation is outside this batch and contributes no credited bytes here.
