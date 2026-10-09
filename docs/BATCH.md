# Reconstruction batch: 174: proven reconstruction families

31 new matching functions / 1,232 bytes. All 1738 prior functions preserved.

1769 exact functions in 1703 modules; 128,220 compiled function-range bytes; 0 reconstructed data bytes; 4,034,692 retained reference bytes. Whole-image coverage 3.0801% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| scale_state_defaults | 0x8c03b49c | 24 |
| compute_actor_scale | 0x8c03b4b4 | 120 |
| store_default_actor_scale | 0x8c03b52c | 24 |
| store_actor_scale | 0x8c03b544 | 24 |
| destroy_optional_child_owner | 0x8c03b574 | 88 |
| get_live_child | 0x8c03b5cc | 32 |
| initialize_float_fields_8c05be40 | 0x8c05be40 | 88 |
| destroy_flagged_children | 0x8c0d4a70 | 192 |
| pair_state_accessors | 0x8c0daf30 | 20 |
| initialize_fields_8c0e14ac | 0x8c0e14ac | 16 |
| initialize_fields_8c0e24e8 | 0x8c0e24e8 | 16 |
| mode_requests_8c142298 | 0x8c142298 | 32 |
| initialize_float_fields_8c14eb30 | 0x8c14eb30 | 52 |
| initialize_float_fields_8c155e2c | 0x8c155e2c | 52 |
| initialize_float_fields_8c1566bc | 0x8c1566bc | 52 |
| set_configuration_pair | 0x8c156d14 | 28 |
| initialize_float_fields_8c164788 | 0x8c164788 | 52 |
| initialize_float_fields_8c164f60 | 0x8c164f60 | 52 |
| initialize_float_fields_8c174ca4 | 0x8c174ca4 | 52 |
| depth_mode_accessors | 0x8c1780e8 | 92 |
| initialize_float_fields_8c179144 | 0x8c179144 | 52 |
| initialize_float_fields_8c1eec38 | 0x8c1eec38 | 40 |
| initialize_fields_8c207358 | 0x8c207358 | 32 |

This batch adds 31 complete exact functions / 1,232 compiled function-range bytes in 23 modules, including two saved candidates/220 bytes from the earlier incomplete collection. This pass added 29 further exact functions/1,012 bytes before integration. Static-data gains are zero. All 1,738 previously matched functions and their source/header hashes are preserved. Totals: 1,769 functions / 1,703 modules / 128,220 compiled function-range bytes / 4,034,692 retained reference bytes. Whole-image coverage is 3.0801%; this is not code-completion percentage, whose code-only denominator remains unknown.

The full collection used 62 distinct hypotheses and 64 compiler attempts, with 10 duplicate outputs grouped by binary hash. Compilation totaled 1.986 seconds. Two transcription mistakes were corrected under their existing hypotheses: a panel-edge literal was 208, and the child-identity branch retains equal names rather than clearing them. Both failed attempts remain charged and preserved. One omitted return-pointer hypothesis was corrected from raw RTS evidence and then matched. All 23 admitted modules reproduced twice before source/manifest writes, with range preflight checks preventing overlaps.

The first constructor/resource investigations produced only two exact candidates from 20 hypotheses. The broad leaf investigations also stalled on field-address and aggregate-copy lifetimes; these failures are not completion gains. Twenty-one targets are now explicitly parked with cumulative counts and specific revisit conditions. New parked results include panel defaults 576-of 564/482, split texture quad 148-of 144/132, inset rectangle 176/57, scalar position restore 188/69, chained panel edges 188/23, packed fields 188-of 180/168, capture table 112-of 104/95 and 88-of 80/80, flag query 104-of 96/76, and entry-list group 72/8. The 26-byte zeroing body lacks two required alignment bytes and remains unadmitted. Original primary targets remain unresolved.

Two demonstrated patterns produced the later gains. Small scalar zeroing initializers matched from checked offsets, including four further variants found by the existing template scanner. Grouping real neighboring accessors produced natural interfunction alignment: four groups cover 12 functions/168 bytes without manual padding. The proven explicit inline-predicate pattern also matched the 120-byte actor-scale operation, its callers and an 88-byte child destructor. These observations guide subsequent work. Scratch whitelist readers and existing trial/group/report tools removed repetitive field bookkeeping; no public workflow, compiler, flags or test code changed. Screens with zero opportunities are retained and should not be rerun while inputs are unchanged.

Verification ran once after collecting the batch: two fresh exact builds per checkout, four integrated-image comparisons, both five-function proofs, 58 research tests and 63 public tests, and source-only rejection with unchanged-artifact guards. All passed. Focused exports cover the new and parked ranges; unchanged primary evidence was checked and reused. No original database, binary or private save was changed.

Measured verification used 6,812 module comparisons, 5.53 per new byte, versus 6.48 in baseline batches 156–160, 3.90 in batch 173 and 1.61 in batch 172. Verification took 103.263/105.481 seconds in the concurrently checked research/public repositories. The sampled baseline used 38 hypotheses, 19 matches, 1,936 bytes, 20 full builds and 555 test executions; this batch used 62 hypotheses, 31 matches, 1,232 bytes, 4 builds and 121 tests. Verification overhead improves on the original baseline but regresses from both recent batches; bytes gained per hypothesis also worsened. Overall efficiency has not improved. Token/cost records and comparable baseline timings are unavailable, so no token or financial saving is claimed.

The batch meets the 20–50-function target but remains below the preferred 4 KiB. Do not repeat this broad low-yield leaf search or publish its component groups separately. The next collection follows the now-exact actor/child predicate context into related initialization and larger helpers, deferring another full integration until several KB where practical. A new 124-byte child-spawn candidate already matches in separate scratch and receives no credit in this batch. Continue with two-or-three-hypothesis parking and persistent counts. Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup; use tools/dossier.py --check on saved focused receipts without re-exporting unchanged evidence.
