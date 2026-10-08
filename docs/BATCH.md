# Reconstruction batch: 173: proven reconstruction families

25 new matching functions / 1,724 bytes. All 1713 prior functions preserved.

1738 exact functions in 1680 modules; 126,988 compiled function-range bytes; 0 reconstructed data bytes; 4,035,924 retained reference bytes. Whole-image coverage 3.0505% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| visit_object_links | 0x8c0276b0 | 16 |
| change_signed_mode | 0x8c04c3e8 | 96 |
| forward_scene_record | 0x8c0bb998 | 12 |
| request_resource_release | 0x8c0dc7f4 | 96 |
| clip_and_scale_rectangle | 0x8c0de664 | 52 |
| clip_rectangle_quad | 0x8c0de698 | 224 |
| adjust_rectangle_top | 0x8c0de778 | 40 |
| adjust_rectangle_right | 0x8c0de7a0 | 28 |
| set_rectangle_clip | 0x8c0de7bc | 24 |
| scale_rectangle_fields | 0x8c0de7d4 | 96 |
| clear_global_render_resources | 0x8c1004cc | 88 |
| normalize_rectangle_fields | 0x8c104bec | 60 |
| set_normalized_rectangle | 0x8c104c28 | 24 |
| advance_scaled_position | 0x8c137bcc | 112 |
| release_optional_member | 0x8c13ee5c | 32 |
| forward_child_transfer | 0x8c145178 | 12 |
| transfer_lowered_children | 0x8c1857f4 | 56 |
| read_projected_position | 0x8c18a330 | 104 |
| grid_position_8c1b1814 | 0x8c1b1814 | 112 |
| grid_position_8c1b474c | 0x8c1b474c | 112 |
| create_default_configured_object | 0x8c1d4590 | 16 |
| interpolate_vector_by_pointer | 0x8c1f2680 | 56 |
| create_configured_object | 0x8c2070f0 | 64 |
| release_resource_member_arrays | 0x8c2110d8 | 180 |
| forward_signed_mode | 0x8c227398 | 12 |

The batch adds 25 complete exact functions / 1,724 compiled function-range bytes: rectangle clipping/scaling and setters, grid/vector/position operations, resource release helpers, three object/mode callees and five ABI-reviewed wrappers. Reconstructed static data adds zero bytes. All 1,713 prior matching functions and source/header hashes are preserved. Total: 1,738 exact functions / 1,680 modules / 126,988 compiled function-range bytes / 4,035,924 retained reference bytes. Whole-image coverage is not code-completion percentage; the code-only denominator remains unknown.

Candidate work used 52 distinct hypotheses / 53 compiler attempts, including one rejected C90 declaration-order attempt corrected under the same hypothesis. Five duplicate outputs were grouped automatically. Recorded compilation totaled 1.650 seconds. Twenty-five new matches reproduced twice for admission. An avoidable rediscovery of already-matched object_visit consumed three hypotheses, and the admission overlap guard stopped an initial pass after 16 additional reproductions, before source or manifest writes. The rediscovery receives no progress credit. A small scratch preflight now rejects range overlaps regardless of identifier before compilation; its negative check rejects this exact failure. No public tools or compiler settings changed.

Nine targets remain parked with cumulative counts and specific revisit conditions. Proximity collectors remain 120/42 and 132-of 128/112; segment-radius remains 104/12; rectangle initialization remains 272-of 260/244; packed color update best 256-of 260/218; nearest-entry search 272/99; indexed vertical placement 104/13; quad row placement 88/44. Each used two or three hypotheses. Scene-record lookup stopped after one credible hypothesis at 32-of 36/13: return scheduling removes the expected natural alignment. Its ABI-reviewed wrapper matched, but the callee remains incomplete. The original primary targets also remain unresolved.

Scoped float-bound temporaries proved exact in clipping and enabled the related scaling function. An extern global aggregate restored projected-vector getter addressing. Related-family screens reused exact candidate templates and found only one further normalized-rectangle setter; completed unchanged screens were not rerun. These compiler observations and the preflight improvement are investigation/tooling work, separate from reconstructed bytes.

Verification ran once for this integration: two fresh exact builds per checkout, four integrated-image comparisons, both five-function proofs, 58 research plus 63 public tests, and source-only rejection with unchanged-artifact guards. All passed. Focused exports cover 25 new ranges and 9 parked targets; unchanged primary-target evidence was reused after checking its inputs.

Full verification performed 6,720 module comparisons for 1,724 new bytes: 3.90 per byte versus 6.48 in baseline batches 156–160 and 1.61 in batch 172. This improves on the original baseline but is less efficient than the preceding 4 KiB batch. Research/public verification took 102.744/104.937 seconds, run concurrently. The sampled baseline used 38 hypotheses / 19 matches / 1,936 bytes / 20 full builds / 555 test executions; this batch used 52 / 25 / 1,724 / 4 / 121, plus the wasted admission work disclosed above. Token/cost records and comparable baseline timings remain unavailable; no financial or token saving is claimed.

This batch meets the 20–50-function collection target but is below the preferred 4 KiB. Simple family opportunities are exhausted for these templates. Next work should prioritize larger initialization contexts and use the range preflight before trials, keeping two-or-three-hypothesis parking and avoiding further isolated float-register substitutions. Reproduce with tools/reconstruct.py verify after configuring the checkout per BUILDING.md; tools/dossier.py --check validates retained focused receipts without re-exporting.
