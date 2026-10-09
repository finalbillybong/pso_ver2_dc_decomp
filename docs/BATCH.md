# Reconstruction batch: 175: proven reconstruction families

44 new matching functions / 3,684 bytes. All 1769 prior functions preserved.

1813 exact functions in 1747 modules; 131,904 compiled function-range bytes; 0 reconstructed data bytes; 4,031,008 retained reference bytes. Whole-image coverage 3.1686% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| actor_matches_current_mode | 0x8c02c148 | 76 |
| current_mode_active | 0x8c032ad0 | 32 |
| current_mode_property | 0x8c032af0 | 32 |
| current_mode_in_range | 0x8c032b3c | 52 |
| spawn_actor_child_if_allowed | 0x8c03b5ec | 124 |
| initialize_actor_child | 0x8c03b668 | 140 |
| destroy_actor_child | 0x8c03b6f4 | 120 |
| update_actor_child | 0x8c03b76c | 160 |
| create_timed_actor_child | 0x8c03b80c | 56 |
| initialize_timed_actor_child | 0x8c03b844 | 116 |
| update_timed_actor_child | 0x8c03b8fc | 92 |
| run_actor_callback_when_idle | 0x8c03b958 | 60 |
| create_actor_callback | 0x8c03b994 | 64 |
| initialize_actor_callback | 0x8c03b9d4 | 72 |
| run_actor_callback_if_present | 0x8c03ba1c | 48 |
| create_timed_actor_callback | 0x8c03ba4c | 72 |
| initialize_timed_actor_callback | 0x8c03ba94 | 84 |
| run_actor_callback_on_timeout | 0x8c03bae8 | 68 |
| initialize_category_flags | 0x8c0985e8 | 200 |
| create_related_object_8c0986f4 | 0x8c0986f4 | 64 |
| create_related_effect_8c0bc17c | 0x8c0bc17c | 72 |
| create_related_effect_8c140848 | 0x8c140848 | 72 |
| initialize_pair_context_effect | 0x8c140890 | 80 |
| create_related_object_8c1b30c4 | 0x8c1b30c4 | 64 |
| initialize_record_effect | 0x8c1b3104 | 84 |
| update_record_effect_timer | 0x8c1b319c | 32 |
| create_related_object_8c21aeb4 | 0x8c21aeb4 | 64 |
| initialize_raised_position_effect | 0x8c21aef4 | 140 |
| destroy_raised_position_effect | 0x8c21af80 | 84 |
| update_raised_position_effect | 0x8c21afd4 | 92 |
| create_following_position_effect | 0x8c21b030 | 72 |
| initialize_following_position_effect | 0x8c21b078 | 88 |
| destroy_following_position_effect | 0x8c21b0d0 | 84 |
| create_related_effect_8c21b264 | 0x8c21b264 | 72 |
| create_related_object_8c21b564 | 0x8c21b564 | 64 |
| initialize_delayed_position_effect | 0x8c21b5a4 | 72 |
| update_delayed_position_effect | 0x8c21b630 | 40 |
| create_related_object_8c21b658 | 0x8c21b658 | 64 |
| initialize_angle_position_effect | 0x8c21b698 | 132 |
| emit_raised_ring_particle | 0x8c21b854 | 80 |
| create_related_effect_8c21c15c | 0x8c21c15c | 72 |
| initialize_mode_blend_effect | 0x8c21c1a4 | 152 |
| create_related_effect_8c221084 | 0x8c221084 | 72 |
| initialize_text_context_effect | 0x8c2210cc | 104 |

This batch adds 44 complete exact functions / 3,684 compiled function-range bytes in 44 modules. All 1,769 prior functions and their source/header hashes are preserved. Totals: 1,813 functions / 1,747 modules / 131,904 compiled function-range bytes / zero reconstructed data bytes / 4,031,008 retained reference bytes. Whole-image coverage is 3.1686%; this is not code-completion percentage, whose code-only denominator remains unknown.

The related actor/child and effect families used 55 distinct hypotheses / 55 compiler attempts, with two duplicate outputs grouped by binary hash. Candidate compilation totaled 1.678 seconds. All 44 admissions reproduced twice, adding 88 independent comparisons. Preflight/history checks avoided recompiling the already matched current-mode getter and child-identifier setter; these are not hypotheses or new gains. No new orchestration framework or compiler settings were introduced. Existing trial, family-screening, integration, evidence-reuse and publication helpers handled the repetitive work.

New compiler evidence: nested inline helpers in the child destructor emitted out-of-line helper bodies; flattening the reviewed cleanup into the outer function restored its complete 120-byte match. Assignment-expression child tests retain the call result for TST and schedule the field store into the branch delay slot. A scoped object capture in a category loop recovered the observed reload lifetime; declaration order then recovered the two retained loop registers. These observations apply to the matched contexts, not as universal compiler rules. Provisional layouts have offset checks and declared vector headers. Observed null handling, signed timers, unchecked actor access in the idle callback, and callback delivery with a null actor on timeout remain intact.

Investigation-only: update_angle_position_effect at 0x8c21b760 remains 240 generated / 244 expected with 188 differing bytes, first 0x8c21b768. Its loop-limit register and coordinate store scheduling differ. draw_record_effect at 0x8c1b31bc remains 160 / 160, best 98 differing (separate-temporary attempt 102), first 0x8c1b31c9; interpolation load/conversion lifetimes differ. initialize_random_direction_effect at 0x8c21b2ac remains 240 / 240 with 18 differing, first 0x8c21b2ff; random-fraction floating-register and velocity-store scheduling differ. Each is explicitly parked after two hypotheses with source snapshots and revisit conditions. The ring-update source comparison was corrected to preserve the raw unordered floating-point branch. None receives progress credit. The primary 0x8c045f04 and 0x8c05fbf8 targets remain parked and unresolved.

The final verification ran two fresh exact builds in each checkout, exact integrated-image comparisons, both five-function proofs, all 58 research and 63 public tests, and source-only rejection with artifact preservation. A trailing-whitespace error was caught in the staged diff after the first verification. Removing it reproduced the same 120-byte binary twice, but refreshing exact source-hash provenance required repeating verification. Both passes are charged: **eight builds, 242 tests and 13,976 module comparisons, 3.79 per new byte**. This is avoidable overhead. The existing scratch admission preflight now rejects trailing whitespace before integration. New focused exports were checked; unchanged primary exports were reused with input checks.

Final concurrent research/public verification command times were 105.781/107.971 seconds; cumulative command times including the avoidable first pass were 211.423/215.863 seconds. Comparison overhead still improves on 6.48 per byte in the five-batch baseline and 5.53 in batch 174, but is worse than batch 172’s 1.61. Bytes per distinct reconstruction hypothesis rose to 66.98, versus 50.95 in the baseline and 19.87 in batch 174. Measured reconstruction yield improved; the publication-format error limited the verification saving. Token/cost records and comparable baseline timings are unavailable, so no token or financial saving is claimed.

This collection meets the 20–50-function target and replaces several KB in one integration, slightly below the preferred 4 KiB. Continue related initialization/update families and accumulate the next collection before full verification. A separate 320-byte following-position update has already matched in scratch for batch 176; it receives no credit here. Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup. Use tools/dossier.py --check for saved focused receipts instead of repeating unchanged exports.
