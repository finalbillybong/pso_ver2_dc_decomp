# Reconstruction batch: 169: proven reconstruction families

26 new matching functions / 796 bytes. All 1435 prior functions preserved.

1461 exact functions in 1403 modules; 115,248 compiled function-range bytes; 0 reconstructed data bytes; 4,047,664 retained reference bytes. Whole-image coverage 2.7684% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| create_effect_a1448_8c03d218 | 0x8c03d218 | 56 |
| cache_actor_position_8c058238 | 0x8c058238 | 28 |
| create_effect_a1448_8c08b80c | 0x8c08b80c | 56 |
| create_effect_a1448_8c08dd38 | 0x8c08dd38 | 56 |
| release_shared_buffer_8c09cb34 | 0x8c09cb34 | 20 |
| operation_03cf50_8c09cd3c | 0x8c09cd3c | 20 |
| cache_actor_position_8c0d4c34 | 0x8c0d4c34 | 28 |
| construct_seeded_random_state_8c0daf18 | 0x8c0daf18 | 24 |
| query_global_entries_8c0e8e28 | 0x8c0e8e28 | 20 |
| query_global_entries_8c0ea724 | 0x8c0ea724 | 20 |
| query_global_entries_8c0eb6e0 | 0x8c0eb6e0 | 20 |
| query_global_entries_8c0ec374 | 0x8c0ec374 | 20 |
| operation_1ac3cc_8c14f3b4 | 0x8c14f3b4 | 20 |
| cache_actor_position_8c165a1c | 0x8c165a1c | 28 |
| emit_lookup_602b0_8c16d5bc | 0x8c16d5bc | 20 |
| query_global_entries_8c199674 | 0x8c199674 | 20 |
| query_global_entries_8c19a6ec | 0x8c19a6ec | 20 |
| query_global_entries_8c1afd44 | 0x8c1afd44 | 20 |
| query_global_entries_8c1dd704 | 0x8c1dd704 | 20 |
| query_fade_active_8c22eb9c | 0x8c22eb9c | 24 |
| query_global_entries_8c22f1a8 | 0x8c22f1a8 | 20 |
| create_object_8c23ca68 | 0x8c23ca68 | 84 |
| operation_1ac3cc_8c23caf0 | 0x8c23caf0 | 20 |
| create_object_8c23d9b8 | 0x8c23d9b8 | 92 |
| operation_1ac3cc_8c23da48 | 0x8c23da48 | 20 |
| release_shared_buffer_8c256378 | 0x8c256378 | 20 |

26 complete exact functions add 796 bytes: field/vector helpers, allocation wrappers and status-return wrappers. All 1,435 prior matches, their sources/headers and manifest entries are preserved. Nine wrappers explicitly return the signed status from callee 0x8c37d534; raw instructions establish its one-pointer argument and 1/-1 return. Fifteen other structural wrapper candidates remain uncompiled and parked pending argument/return evidence. Matching instruction shape alone does not establish a source-level calling convention.

27 first hypotheses produced 26 exact matches and one mismatch, with 0.808 seconds of recorded compilation. Two duplicate outputs belong to distinct exact field-copy entries. Another 52 compilations reproduce the admissions twice. The failed SDK loop at 0x8c37d534 produced 72 bytes versus 88 expected, with 84 differing bytes, first at 0x8c37d538. Generated code saves three GPRs and uses MUL.L by 12 with loop-local literal loads; raw code saves six GPRs, uses shift/add addressing and hoists the callback, failure-index pointer and -1 constant. It is parked after H1 until independent exact compiler/context evidence explains that lowering. No original primary target was retried.

Four successful fresh full builds passed across both checkouts, with integrated-image comparisons, five-function proofs, 58 research tests and 63 public tests. Source-only rejection preserved artifacts. Successful verification commands totaled 85.787 seconds in research and 87.091 seconds in public. Unchanged focused evidence was reused; new matches and the newly inspected SDK range were exported once.

This batch was less efficient per gained byte than the baseline. A missing destination directory interrupted the first public sync; its stale-checkout verification was stopped after 1,138 recorded module comparisons. The corrected explicit sync creates source directories before copying. The four successful builds required 5,612 module comparisons, totaling at least 6,750 including the interrupted attempt: 8.48 comparisons per new byte. The five-stage baseline had 12,544 comparisons for 1,936 bytes, or 6.48 per byte. Even without the interrupted attempt, this small batch required more comparisons per gained byte. Earlier large-family batches improved overhead, but that does not conceal this regression.

The next integration will collect several KB of exact candidates where practical and prioritize larger effect/constructor families. Do not repeat full verification for isolated short wrappers. Cheap trials continue immediately; unavailable ABI evidence remains a recorded blocker. Task-attributed token/cost records and baseline command timings are unavailable, so no cost/runtime estimate is claimed. Static data remains zero; whole-image coverage is not code completion. Original primary targets remain parked and incomplete. Reproduce with `tools/reconstruct.py verify` and [RECONSTRUCTION_WORKFLOW.md](RECONSTRUCTION_WORKFLOW.md).
