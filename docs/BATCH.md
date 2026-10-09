# Reconstruction batch: 187: proven reconstruction families

20 new matching functions / 5,320 bytes. All 2198 prior functions preserved.

2218 exact functions in 2142 modules; 177,588 compiled function-range bytes; 0 reconstructed data bytes; 3,985,324 retained reference bytes. Whole-image coverage 4.2660% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| update_callback_dialog | 0x8c10699c | 208 |
| initialize_follow_quad_effect | 0x8c14eb6c | 404 |
| dispatch_resource_selector | 0x8c211298 | 124 |
| choose_resource_selection_kind | 0x8c213abc | 424 |
| commit_resource_selection | 0x8c213c64 | 268 |
| update_resource_selection | 0x8c213fa4 | 236 |
| transition_resource_selection_8c214090 | 0x8c214090 | 160 |
| apply_resource_selection_8c214130 | 0x8c214130 | 220 |
| transition_resource_selection_8c21420c | 0x8c21420c | 64 |
| update_script_menu_selection | 0x8c21424c | 340 |
| confirm_resource_selection | 0x8c2143a0 | 328 |
| apply_resource_selection_8c2144e8 | 0x8c2144e8 | 224 |
| transition_resource_selection_8c2145c8 | 0x8c2145c8 | 96 |
| transition_resource_selection_8c214628 | 0x8c214628 | 308 |
| update_resource_selection_8c21475c | 0x8c21475c | 236 |
| resume_resource_selection_8c214848 | 0x8c214848 | 340 |
| resume_resource_selection_8c21499c | 0x8c21499c | 340 |
| resume_resource_selection_8c214af0 | 0x8c214af0 | 340 |
| copy_resource_selection | 0x8c214c44 | 220 |
| finalize_resource_selection_8c214d20 | 0x8c214d20 | 440 |

This batch adds **20 complete exact functions / 5,320 compiled function-range bytes**, preserving all 2,198 prior functions and source/header hashes. Totals: 2,218 functions / 2,142 modules / 177,588 compiled function-range bytes / zero separately reconstructed static-data bytes / 3,985,324 retained reference bytes. Whole-image coverage is 4.2660%; it is not code-completion percentage. The code-only denominator remains unknown.

Most gains come from the resource-selection family: retained cancellation predicates, signed-short getters, phase transitions, native 28-byte record assignment and observed switch domains. A 404-byte effect initializer and a 208-byte callback dispatcher also match. Callee and indirect callback ABI, complete bodies, literal pools, internal switch tables, natural alignment and adjacent entries were reviewed before integration. All provisional field offsets are checked. Original skipped initialization, repeated calculations and allocation behavior remain unchanged.

The previously parked `update_script_menu_selection` at 0x8c21424c now matches all 340 bytes. Its historical one-hypothesis failure is retained, with the newly proven confirmation-handler and selection-prefix contexts explicitly authorizing the second cumulative hypothesis. Three related 340-byte handlers then matched on their first attempts. The confirmation handler needed four distinct hypotheses: after its third attempt emitted an unexpected out-of-line getter, that concrete new evidence justified one additional attempt moving getter evaluation out of the nested inline helper. This produced the full 328-byte match without changing compiler settings. It is a documented exception to the usual two-or-three-hypothesis parking rule, not a reset of its count.

There were **32 distinct hypotheses / 32 compiler attempts / zero compiler errors / one duplicate output**, totaling 1.024 compiler seconds. The duplicate is an unsuccessful increment-helper variation. Five unresolved investigations are parked after one or two hypotheses. The primary 0x8c045f04 and 0x8c05fbf8 targets remain unchanged and incomplete; these gains do not resolve them. Investigation and tooling receive zero matching-byte credit.

Tooling changes are small and address observed repeated work. The existing scratch family screen now accepts independently reviewed internal switch tables and validates their relative destinations; it found one exact 236-byte selection sibling. Other policy scans and a five-entry floating-leaf screen produced no candidates with a credible matching path. The public integration runner now permits a parked target to become matched only with new recorded evidence and unchanged identity/ranges/reference hash; it preserves the complete old queue record and provisional source. Two tests cover history preservation and rejection of missing evidence, changed ranges/hash or an already matched target. Existing compilation, grouping, progress, provenance and privacy checks remain in use. No compiler settings changed.

| Parked target | Hypotheses | Best saved generated / expected bytes | Differing bytes | First difference |
| --- | ---: | ---: | ---: | --- |
| advance_heading_contact (0x8c05c464) | 1 | 280 / 284 | 205 | 0x8c05c476 |
| initialize_player_record_effect (0x8c230910) | 1 | 632 / 636 | 529 | 0x8c230924 |
| initialize_resource_array_effect (0x8c228e68) | 2 | 380 / 380 | 65 | 0x8c228e85 |
| initialize_paired_resource_effect (0x8c2281f8) | 2 | 404 / 404 | 245 | 0x8c228218 |
| finalize_resource_selection_8c214ed8 (0x8c214ed8) | 2 | 272 / 276 | 173 | 0x8c214eea |

All 20 modules reproduced twice before admission. **Two fresh exact builds in each checkout**, integrated-image comparisons, both five-function proofs, **all 125 current tests** (60 research, 65 public), and source-only rejection/artifact-preservation checks passed. One acceptance pass used **8,568 module comparisons / 1.61 per new byte**, with research/public command totals 126.957/129.416 seconds. Unchanged primary exports were validated and reused; one new focused dossier covers eight representative entries.

**Measured efficiency improved:** yield is 166.25 bytes per hypothesis versus 67.93 in batch 186, 103.90 in batch 185 and 50.95 in the original sampled baseline. Verification overhead fell to 1.61 comparisons per new byte versus 4.63, 2.01 and 6.48 respectively. This collection met the 5 KiB target and needed one acceptance pass. Token/cost records and comparable original timing records remain unavailable; no monetary or token saving is inferred.

Continue through larger related selection handlers, constructors and vector operations, using the newly exact short-return/inline/record-copy contexts. Screen a proved representative before expanding each family. Keep the persistent parking rules and at least 5 KiB collection target where practical; a publication remains a checkpoint.

Reproduce locally with `python3 -B tools/reconstruct.py verify --out SCRATCH/fresh-verification` after BUILDING.md setup. Research admission plan, source snapshots, compiler receipts, grouping, failure records and focused receipts are in `reconstruction-batch187-evidence` under the configured scratch root. Run `python3 -B tools/dossier.py --check RECEIPT` to validate focused exports. Private data and the original research index are untouched. Only reviewed public source, tooling and sanitized metadata are published.
