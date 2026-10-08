# Reconstruction batch: 163: consolidated reconstruction

35 new matching functions / 2,472 bytes. All 694 prior functions preserved.

729 exact functions in 671 modules; 66,596 compiled function-range bytes; 0 reconstructed data bytes; 4,096,316 retained reference bytes. Whole-image coverage 1.5997% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| destroy_object_8c01c500 | 0x8c01c500 | 68 |
| destroy_object_8c03ca10 | 0x8c03ca10 | 68 |
| destroy_object_8c059c30 | 0x8c059c30 | 68 |
| destroy_object_8c0755c0 | 0x8c0755c0 | 68 |
| destroy_object_8c0803a8 | 0x8c0803a8 | 68 |
| destroy_object_8c0bb954 | 0x8c0bb954 | 68 |
| draw_actor_model | 0x8c0c2b50 | 196 |
| actor_render_noop_a | 0x8c0c2c14 | 4 |
| actor_render_noop_b | 0x8c0c2c18 | 4 |
| apply_actor_matrix_frame | 0x8c0c2c1c | 88 |
| transform_actor_model_origin | 0x8c0c2c74 | 84 |
| collect_actor_model_nodes | 0x8c0c2d18 | 128 |
| hide_actor_model_entries | 0x8c0c2d98 | 24 |
| update_actor_distance_request | 0x8c0c2e50 | 108 |
| destroy_object_8c0e3814 | 0x8c0e3814 | 68 |
| destroy_object_8c0ee900 | 0x8c0ee900 | 68 |
| destroy_object_8c0eebe4 | 0x8c0eebe4 | 68 |
| destroy_object_8c0f1100 | 0x8c0f1100 | 68 |
| destroy_object_8c0f22f8 | 0x8c0f22f8 | 68 |
| destroy_object_8c0fce4c | 0x8c0fce4c | 68 |
| destroy_object_8c106598 | 0x8c106598 | 68 |
| destroy_object_8c10671c | 0x8c10671c | 68 |
| destroy_object_8c112efc | 0x8c112efc | 68 |
| destroy_object_8c11924c | 0x8c11924c | 68 |
| destroy_object_8c11f6b8 | 0x8c11f6b8 | 68 |
| destroy_object_8c123e78 | 0x8c123e78 | 68 |
| destroy_object_8c131a34 | 0x8c131a34 | 68 |
| destroy_object_8c140b8c | 0x8c140b8c | 68 |
| destroy_object_8c15c814 | 0x8c15c814 | 68 |
| destroy_object_8c1a41f8 | 0x8c1a41f8 | 68 |
| destroy_object_8c1a632c | 0x8c1a632c | 68 |
| destroy_object_8c1ab174 | 0x8c1ab174 | 68 |
| destroy_object_8c1ab5a8 | 0x8c1ab5a8 | 68 |
| destroy_object_8c1cba54 | 0x8c1cba54 | 68 |
| destroy_object_8c2411a8 | 0x8c2411a8 | 68 |

## Reconstruction and investigation

This batch combines 27 newly generated exact destructors (1,836 bytes) with eight
previously pending actor helpers (636 bytes). The destructor generator checks a
proven instruction/branch/delay/padding shape, reviews all four address literals
and adjacent boundaries, emits ordinary C, then compiles and compares every full
68-byte range. No binary output is copied or patched. Existing offset-checked
headers and compiler settings remain unchanged.

The pending helpers cover matrix setup, local vector transformation, model-node
collection, a visibility loop, two empty entries, C++ drawing and a distance-based
mode request. Referenced static data remains unreconstructed. Two pending model
helpers remain parked: show_actor_model_entries produces 24 bytes with five
differences, first 0x8c0c2db3; capture_actor_model_entries produces 76/80 bytes with
47 differences, first 0x8c0c2cd4. Both have two unsuccessful hypotheses, including
identical-output variants. Their register/call-delay blockers and revisit
conditions remain in the queue. Earlier parked targets were not reopened.

## Bounded workflow improvement

One reusable driver replaces copied candidate, comparison, grouping, admission,
verification and report orchestration. Five synthetic tests cover complete-range
rejection, required evidence, duplicate grouping, pattern boundary/history guards
and stale analysis-range rejection. Tooling changes receive no reconstruction
credit. See [RECONSTRUCTION_WORKFLOW.md](RECONSTRUCTION_WORKFLOW.md).

| Measurement | Prior five batches (156–160) | Combined demonstration |
| --- | ---: | ---: |
| New exact functions | 19 | 35 |
| New compiled bytes | 1,936 | 2,472 |
| Distinct hypothesis trials | 38 | 40 |
| Duplicate trial outputs | 4 | 3 |
| Fresh project builds | 20 | 4 |
| Test executions | 555 | 121 |
| Build log bytes retained in scratch | 501,954 | 107,562 |

The demonstration includes eight candidates produced before the efficiency pass;
27 functions / 1,836 bytes are new work during the pass. Reproduction compiles are
not new hypotheses. Two duplicate outputs repeat a target; the third is the
identical instruction pair of two independently bounded empty entries.

Four builds and 111 test executions had already completed for six pending
functions before the workflow changed. Including that sunk work, this combined
publication accounts for eight builds and 232 test executions. The table shows
the four fresh builds and 121 tests performed after consolidation; no earlier work
is erased from the accounting.

The sampled scripts duplicated 94,358 bytes of orchestration. New pattern trials
recorded 0.79 seconds of compilation, with 27 exact outputs and no duplicates.
The new verification commands recorded 42.73 seconds in research and 43.83 seconds in public (run concurrently). Historical command timings and task-attributed token/cost records are
unavailable. These measurements show reduced verification and bookkeeping
overhead; they do not establish a token-cost or historical wall-time saving.

## Verification and continuation

All new admissions reproduced twice. Two fresh exact builds per checkout,
integrated-image comparisons and the five-function proof passed. All 58 research
and 63 public tests passed. Source-only builds rejected the retained gaps without
altering artifacts. Existing source/header hashes and all prior manifest entries
were preserved. Unchanged focused exports were reused after checking requested
ranges, reference, exporter, tools, artifacts and original database; only new
ranges were exported.

Keep integration batches near 20–50 functions or several KB when practical.
Park after two or three unsuccessful hypotheses unless concrete new evidence
justifies more; never exceed ten cumulative unsuccessful hypotheses. Continue
with proven related families and larger credible helpers. Generated source,
receipts and documentation still require exact staged review and privacy checks
before an authorized commit/push.

## Batch 169: measured regression and adjustment

This batch gained 26 functions / 796 bytes from 27 hypotheses (26 exact, one SDK loop mismatch), with two duplicate outputs across distinct exact entries. Four successful full builds performed 5,612 module comparisons. An interrupted stale public-checkout verification added 1,138 recorded comparisons after a missing source directory stopped synchronization. Total recorded verification work was at least 6,750 comparisons, or 8.48 per new byte, versus 6.48 in the five-stage baseline (12,544 / 1,936). Even excluding that interruption, the small batch was less efficient per gained byte. All 121 tests passed after the corrected sync.

Subsequent integration should collect several KB, preferably at least 4 KiB, before full validation where practical. Prioritize larger effect/constructor families; keep cheap candidates and unresolved ABI review separate from integration. The successful larger batches do not erase this regression. Token/cost and historical timing records remain unavailable.

## Batch 170: consolidated immediate variants

78 exact functions replace 1,732 bytes; static-data gains remain zero. Thirty cataloged variants, 47 independently referenced entries and one larger effect initializer each matched at the first hypothesis. The separate constructor investigation added no matches: 16 unsuccessful hypotheses across four targets, with one additional linker-spelling correction. Its late rediscovery of an already documented stack-home pattern was avoidable. All failed hypotheses and cumulative limits are retained.

| Measurement | Baseline batches 156–160 | Batch 170 |
| --- | ---: | ---: |
| New matching functions |19 |78 |
| New compiled function-range bytes |1,936 |1,732 |
| Distinct hypotheses |38 |94 |
| Duplicate outputs |4 |15 |
| Fresh full builds |20 |4 |
| Test executions |555 |121 |
| Measured module comparisons |12,544 |5,924 |
| Comparisons per new byte |6.48 |3.42 |

This reduced integration overhead per gained byte from both the baseline and batch 169. It did not improve every metric: unsuccessful constructor reasoning increased hypothesis count. The complete collection was below the preferred 4KiB threshold; 78 functions were consolidated after the bounded family screen found no further larger immediate variants. Preserve the larger threshold as a preference and avoid publishing its component groups separately.

All four builds, integrated images, five-function proofs, 121 tests and source-only artifact checks passed. Recorded candidate compilation totaled 2.811 seconds; verification totaled 90.946/93.034 seconds in concurrently checked research/public repositories. Historical timings and task-attributed token/cost records remain unavailable. The public workflow/compiler did not change; scratch screening and a reused generator removed repetitive constant substitution while preserving complete source/receipt comparisons.
