# Reconstruction batch: 181: proven reconstruction families

38 new matching functions / 3,684 bytes. All 2019 prior functions preserved.

2057 exact functions in 1983 modules; 152,212 compiled function-range bytes; 0 reconstructed data bytes; 4,010,700 retained reference bytes. Whole-image coverage 3.6564% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| create_context_actor_8c037608 | 0x8c037608 | 100 |
| create_context_actor_8c038738 | 0x8c038738 | 100 |
| create_context_actor_8c04ccf8 | 0x8c04ccf8 | 100 |
| create_context_actor_8c0500c0 | 0x8c0500c0 | 100 |
| create_context_actor_8c07b5f4 | 0x8c07b5f4 | 100 |
| create_context_actor_8c0bcc5c | 0x8c0bcc5c | 100 |
| create_context_actor_8c0bfd04 | 0x8c0bfd04 | 100 |
| create_context_actor_8c0ce160 | 0x8c0ce160 | 100 |
| interpolate_view_parameters | 0x8c0db430 | 236 |
| draw_view_transition_if_active | 0x8c0db51c | 40 |
| update_view_nodes | 0x8c0e1c08 | 64 |
| draw_view_nodes | 0x8c0e1c48 | 52 |
| initialize_number_view_node | 0x8c0e1c7c | 88 |
| create_context_actor_8c0e586c | 0x8c0e586c | 100 |
| create_context_actor_8c0e6590 | 0x8c0e6590 | 100 |
| create_context_actor_8c0f7b74 | 0x8c0f7b74 | 100 |
| create_context_actor_8c108c0c | 0x8c108c0c | 100 |
| grid_view_visible | 0x8c119f9c | 304 |
| create_grid_resource_owner | 0x8c11a2a4 | 72 |
| create_grid_resource_8c11a4a8 | 0x8c11a4a8 | 72 |
| create_grid_resource_8c11a6d0 | 0x8c11a6d0 | 72 |
| initialize_rectangle_view_node | 0x8c11a838 | 84 |
| load_grid_render_resource | 0x8c11a8d0 | 32 |
| release_grid_render_resource | 0x8c11a8f0 | 48 |
| create_record_grid_actor | 0x8c11a9d8 | 100 |
| create_context_actor_8c124e6c | 0x8c124e6c | 100 |
| create_grid_resource_8c1290b4 | 0x8c1290b4 | 72 |
| create_context_actor_8c15daa0 | 0x8c15daa0 | 100 |
| create_context_actor_8c177cb0 | 0x8c177cb0 | 100 |
| create_context_actor_8c177f90 | 0x8c177f90 | 100 |
| create_context_actor_8c1ad294 | 0x8c1ad294 | 100 |
| create_context_actor_8c1b0b10 | 0x8c1b0b10 | 100 |
| create_context_actor_8c1b35e0 | 0x8c1b35e0 | 100 |
| create_context_actor_8c1b73c0 | 0x8c1b73c0 | 100 |
| create_context_actor_8c1bb0d4 | 0x8c1bb0d4 | 100 |
| create_context_actor_8c1bbe54 | 0x8c1bbe54 | 100 |
| create_context_actor_8c1bc79c | 0x8c1bc79c | 100 |
| release_render_resource_8c1db4e4 | 0x8c1db4e4 | 48 |

This batch adds 38 complete exact functions / 3,684 compiled function-range bytes in 38 modules, preserving all 2,019 prior functions and source/header hashes. Totals: 2,057 functions / 1,983 modules / 152,212 compiled function-range bytes / zero separately reconstructed static-data bytes / 4,010,700 retained reference bytes. Whole-image coverage is 3.6564%; this is not code-completion percentage. The code-only denominator remains unknown.

Exact additions include a 304-byte view visibility check, a 236-byte four-field interpolator, native virtual node update/draw loops, scalar node initialization, resource owners and loading/release, and two-allocation actor factories. The visibility check preserves the called vector normalization and observed floating-point comparisons. Factory construction retains the original allocated pointer and observed null checks. A reviewed 100-byte factory became the evidence-backed template for 23 sibling factories; all 23 matched on their first compilation. One further resource releaser also matched first try. Referenced runtime routines, constructor bodies, descriptors and globals remain reference-dependent; no static-data credit is claimed.

The collection used 48 distinct hypotheses / 49 compiler attempts, one pointer-declaration syntax correction and one duplicate output from an unsuccessful factory variation. The correction retested the same hypothesis. Compilation totaled 1.477 seconds. Existing candidate, binary grouping, admission, verification, staged audit and publication tools were reused; no public tooling or compiler-setting changes were needed.

Six targets are parked with generated/expected sizes, differing-byte counts, first mismatch, cumulative hypothesis counts and revisit conditions. The derived-view factory remains 176/176 bytes with 26 differing after two identical outputs. Transition update is 288/292 with 153 differing; transition drawing is 144/144 with 59 differing. Border drawing is 564/556 with 339 differing after two hypotheses. Record actor initialization is 1052/1048 with 767 differing after two hypotheses; render-state initialization is 188/184 with 111 differing. Their provisional sources preserve the investigations without completion credit. Remaining blockers concern native constructor/argument context, natural branch scheduling, owner-resource pointer registers and affine/aggregate lifetimes. Historical parked targets, including 0x8c045f04 and 0x8c05fbf8, remain unchanged and incomplete.

All 38 admitted modules reproduced twice before integration. One full verification pass ran two fresh exact builds in each checkout, exact integrated-image comparisons, both five-function proofs, 58 research and 63 public tests, and source-only rejection with artifact preservation. New focused exports were checked once; unchanged primary exports were reused. Verification performed 7,932 module comparisons, **2.15 per new byte**. Concurrent research/public command times were 119.871/122.299 seconds.

Measured candidate yield improved to **76.75 bytes per hypothesis**, versus 54.56 in batch 180, 25.65 in batch 179 and 50.95 in the sampled baseline. Verification overhead improved from batch 180's 3.66 comparisons per new byte to 2.15, below the sampled baseline's 6.48, but remains worse than batch 178's 1.82. This collection meets the 20–50-function target and replaces several KB. Token/cost records and comparable baseline timings remain unavailable; no overall monetary or token saving is asserted. The proven factory family supplied most of the gain without repeated source substitutions. Continue following its constructor and vector/resource dependencies, proving one representative before expanding a family. Independent next-batch trials are excluded from these totals.

Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup. Check saved focused analysis using tools/dossier.py --check. Continue immediate complete-range trials in scratch, with full verification at integration checkpoints. Do not reopen parked targets without specific new evidence.
