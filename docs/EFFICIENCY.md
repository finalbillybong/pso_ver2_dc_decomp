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

## Batch 171: more than 4 KiB in one integration

115 complete exact functions add 4,172 compiled function-range bytes, with zero reconstructed data bytes. Eight effect initializers contribute 1,424 bytes; generated call/resource/vector and scalar families supply the rest. Candidates required 121 distinct hypotheses plus one rejected generator-classification error, with five duplicate outputs and 3.595 seconds of recorded compilation. An explicit template-size guard now catches that generation error before compilation. Neither the error nor two parked near-matches counts as completion.

Four full builds, integrated-image comparisons, five-function proofs, 121 tests and source-only artifact checks passed. Verification used 6,384 measured module comparisons: 1.53 per new byte, versus 6.48 in the sampled baseline and 3.42 in batch 170. The baseline used 20 builds/555 tests for 1,936 bytes; this batch used 4/121 for 4,172 bytes. Hypotheses increased from 38 to 121, so lower verification overhead is not a claim that all investigation costs improved. Verification command times were 97.630/99.801 seconds for research/public, run concurrently. Task-attributed token/cost records and comparable historical timings remain unavailable.

The scratch scanner is parameterized to avoid copied screening variants. All source generation still requires reviewed boundaries and calling conventions. Fourteen tail wrappers use already exact callee signatures; 165 others are parked without compilation or credit until their ABI is established. Continue collecting meaningful batches and reuse unchanged evidence.

## Batch 172: reviewed cleanup and resource families

59 new exact functions add 4,112 compiled function-range bytes; reconstructed static data remains zero. There were 77 distinct hypotheses / 78 compiler attempts / seven duplicate outputs, plus 118 independent admission reproductions. One compiler-rejected generator edit and one pre-compilation syntax error add no completion credit. Five stalled targets are parked after two or three hypotheses.

One integration pass ran four fresh builds and 121 tests. It required 6,620 module comparisons, or **1.61 per new byte**, versus **6.48** in the five-batch baseline. Concurrent research/public verification took 100.757/102.996 seconds. This demonstrates lower verification overhead; token/cost records and comparable baseline timings remain unavailable. See [BATCH.md](BATCH.md) for measured reconstruction, tooling and investigation details.

## Batch 173: vector and rectangle helpers, with an overlap correction

25 exact functions add 1,724 compiled function-range bytes and zero static-data bytes. Candidate work used 52 hypotheses /53 compiler attempts /5 duplicate outputs. Three hypotheses rediscovered an existing match under another name; the integration guard rejected it before project writes after 16 redundant admission reproductions. That work gets no completion credit. A small range-based scratch preflight now catches this before compilation. Nine stalled targets remain explicitly parked.

Four fresh builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 6,720 module comparisons, **3.90 per new byte**: better than the 6.48 baseline but worse than batch 172's 1.61. Concurrent research/public verification took 102.744/104.937 seconds; measured candidate compilation totaled 1.650 seconds. Token/cost records remain unavailable. Keep the larger-byte batch preference, prioritize larger initializer contexts and avoid repeating exhausted scalar-lifetime hypotheses.

## Batch 174: adjacent accessors and actor helpers

31 exact functions replace 1,232 bytes in 23 modules; two saved candidates/220 bytes are included. Reconstructed data remains zero. There were 62 hypotheses/64 compiler attempts/10 duplicate outputs, followed by 46 admission reproductions. Twenty-one stalled targets retain explicit blockers and cumulative counts. Natural alignment between real adjacent functions and the proven inline-predicate pattern produced the later gains; broad scalar-lifetime investigations did not. Scratch generation reused the established trial, comparison, grouping and reporting tools.

All four exact builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification performed 6,812 module comparisons, **5.53 per new byte**, versus 6.48 in the original baseline, 3.90 in batch 173 and 1.61 in batch 172. Candidate compilation took 1.986 seconds; concurrent research/public verification took 103.263/105.481 seconds. Token/cost records remain unavailable. Bytes per hypothesis worsened; overall efficiency has not improved. The next collection follows the newly exact actor/child context toward larger related functions and defers another integration until several KB where practical. See [BATCH.md](BATCH.md) for the measured failures and adjustments.

## Batch 175: related actor and effect initialization

44 exact functions replace 3,684 bytes; reconstructed data remains zero. The collection used 55 distinct hypotheses / 55 compiler attempts / two duplicate outputs, followed by 88 admission reproductions. Three stalled targets are parked after two hypotheses each. Related child/callback constructors and updates, scoped loop captures and assignment-result tests supplied the gains. Existing workflow helpers were reused.

The staged diff caught trailing whitespace after the first verification. The formatting correction reproduced an unchanged binary twice, then verification was repeated to refresh source-hash receipts. The final four builds, integrated images, both five-function proofs, 121 tests and source-only guards passed. Both passes are charged: **eight builds, 242 tests, 13,976 module comparisons, 3.79 per new byte**, versus 6.48 in the baseline and 5.53 in batch 174. An admission preflight whitespace check now prevents this late failure. Bytes per reconstruction hypothesis improved to 66.98 versus 50.95 and 19.87 respectively. Candidate compilation took 1.678 seconds; cumulative research/public verification commands took 211.423/215.863 seconds. Reconstruction yield improved, but avoidable revalidation reduced the verification saving. Token/cost records and comparable baseline timings remain unavailable. Continue related families and larger integration collections.

## Batch 176: context transitions and embedded effects

43 exact functions replace 3,548 bytes in 39 modules; reconstructed static data remains zero. There were 58 distinct hypotheses / 59 compiler attempts / one failed compilation / one duplicate binary output, followed by 78 admission reproductions. Thirteen unresolved targets are explicitly parked. A native-linker relocation correction, ordinary C++ member-pointer dispatch and reviewed callback operand order supplied new compiler evidence; no compiler flags changed. Existing tools handled trials, comparison grouping, integration and publication. A small scratch scanner extension accepts reviewed bodies missing from the catalog; it produced no additional gains.

Four fresh builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 7,144 module comparisons, **2.01 per new byte**, versus 6.48 in the original baseline and 3.79 in batch 175. Pre-integration whitespace checks avoided the previous late rerun. Yield is 61.17 bytes per hypothesis, above the baseline's 50.95 but below batch 175's 66.98. Thus verification overhead improved, while reconstruction yield decreased from the preceding batch. Candidate compilation took 1.819 seconds; concurrent research/public verification took 108.255/110.509 seconds. Token/cost records and comparable baseline timings remain unavailable. Continue related larger families and bounded target rotation; do not infer overall cost savings from these partial measurements.

## Batch 177: generated resource lifecycle families

99 exact functions replace 5,152 bytes; reconstructed static data remains zero. The established scanner and ordinary-source templates produced 99 first-attempt matches after boundary, ABI and literal review. Three unsuccessful constructor hypotheses are included in the total 102 attempts/hypotheses, with one duplicate output and no compiler errors. The constructor is parked at 472/21; it receives no credit. Candidate compilation totaled 2.970 seconds.

Four full builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed after 198 admission reproductions. Verification used 7,540 module comparisons, **1.46 per new byte**, versus 6.48 in the baseline and 2.01 in batch 176. Concurrent research/public verification took 114.331/116.599 seconds. Bytes per hypothesis are 50.51, below the baseline's 50.95 and batch 176's 61.17; this measure did not improve. Verification overhead did improve, and repetitive variants were generated mechanically. Token/cost records and comparable baseline timings remain unavailable, so no overall cost saving is asserted.

A reusable scratch staged-index audit replaces duplicate snippets, and publication requires its current receipt. The report helper now labels grouped module rows automatically. These small fixes remove observed repetitive work without changing the public compiler/build pipeline or weakening acceptance/privacy checks. Continue collecting several KB per integration where practical.

## Batch 178: larger related transition routines

24 exact functions replace 4,180 bytes in 20 modules; reconstructed static data remains zero. Following the new embedded-blend context exposed larger transition functions, which matched on their first compile. 29 hypotheses/attempts produced the full collection, with no errors or duplicate outputs. Earlier failures resolved through demonstrated byte shifts, scoped loop captures, declaration order and natural alignment between real adjacent functions; no target was newly parked in this integration. Candidate compilation totaled 0.891 seconds. No tooling changes were needed.

After 40 admission reproductions, four full builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 7,620 module comparisons, **1.82 per new byte**. Concurrent research/public verification took 115.398/117.735 seconds. Yield improved to 144.14 bytes per hypothesis, versus 50.95 in the baseline and 50.51 in batch 177. Verification overhead remains below the baseline's 6.48 but above batch 177's 1.46; that metric worsened from the immediately preceding batch. Token/cost records and comparable baseline timings remain unavailable. Prioritize similarly related larger routines while keeping several-KB integration batches.

## Batch 179: scene controls, resources, trails and grids

20 exact functions replace 1,616 bytes; reconstructed static data remains zero. There were 63 distinct hypotheses / 65 compiler attempts / two linker-binding failures / five duplicate outputs, followed by 40 admission reproductions. Seventeen unresolved targets are parked after one to three hypotheses with precise blockers; no investigation-only work is counted as progress. Existing orchestration and acceptance tools were reused. Candidate compilation totaled 1.980 seconds.

All four fresh builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 7,700 module comparisons, **4.76 per new byte**, with concurrent research/public command times 116.606/118.972 seconds. Yield fell to 25.65 bytes per hypothesis versus 50.95 in the original baseline and 144.14 in batch 178. Verification overhead worsened from 1.82 in batch 178, remaining below the baseline's 6.48. Efficiency did not improve in this collection; no overall token or cost saving is claimed. Those records and comparable baseline timings remain unavailable.

The input-helper family was expanded before a representative matched, creating avoidable repeated failures. The next collection screens newly exact patterns first and tests one representative before expanding unfamiliar families. It follows successful factory bindings into larger constructors and keeps full verification at integration checkpoints. Several-KB collections remain preferred; this collection reached 20 functions but only 1,616 bytes.

## Batch 180: grid views, interpolation and record rendering

20 exact functions replace 2,128 bytes; reconstructed static data remains zero. There were 39 distinct hypotheses / 40 compiler attempts / one syntax rejection / seven duplicate outputs, followed by 40 admission reproductions. Five duplicates are exact sibling finalizers at distinct reviewed addresses; two are unsuccessful repetitions. Seven unresolved targets are parked after one to three hypotheses with precise blockers. Existing orchestration and acceptance tools were reused. Candidate compilation totaled 1.215 seconds.

All four fresh builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 7,780 module comparisons, **3.66 per new byte**, with concurrent research/public command times 117.686/120.073 seconds. Yield improved to 54.56 bytes per hypothesis versus 25.65 in batch 179 and 50.95 in the original baseline. Verification overhead improved from 4.76 in batch 179 and 6.48 in the baseline, but remains worse than batch 178's 1.82. Token/cost records and comparable baseline timings remain unavailable; no overall cost saving is claimed.

A focused scan of the newly proven native finalizer produced five first-try matches. Explicit aggregate frame order recovered a 292-byte renderer, and preserved unsigned-step lifetimes recovered a 268-byte interpolator. The family screen is useful; register-order spelling sweeps are not. This collection reached 20 functions but only 2,128 bytes; larger matrix/vector and record operations remain preferred for the next collection.

## Batch 181: actor factory family and view operations

38 exact functions replace 3,684 bytes; reconstructed static data remains zero. There were 48 distinct hypotheses / 49 compiler attempts / one declaration correction / one duplicate unsuccessful output, followed by 76 admission reproductions. Six unresolved targets are parked after one or two hypotheses with precise blockers. Existing orchestration and acceptance tools were reused. Candidate compilation totaled 1.477 seconds.

All four fresh builds, integrated images, both five-function proofs, 121 tests and source-only artifact guards passed. Verification used 7,932 module comparisons, **2.15 per new byte**, with concurrent research/public command times 119.871/122.299 seconds. Yield improved to 76.75 bytes per hypothesis versus 54.56 in batch 180 and 50.95 in the sampled baseline. Verification overhead improved from 3.66 in batch 180 and 6.48 in the baseline, but remains worse than batch 178's 1.82. Token/cost records and comparable baseline timings remain unavailable; no overall cost saving is claimed.

A proven two-allocation factory produced 23 reviewed 100-byte sibling matches on their first compilation. Native virtual node loops, a visibility check and four-field interpolation also matched. This collection meets the 20–50-function and several-KB targets. Unsuccessful constructors and renderers are investigation only. Continue following related constructor/vector dependencies, proving one representative before expanding each family.

## Batch 182: file tasks and record operations

27 exact functions replace 3,480 bytes; separately reconstructed static data remains zero. There were 50 hypotheses / 50 compiler attempts / zero errors / nine duplicate outputs, with 1.567 compiler seconds. Three duplicates were unsuccessful variations; six were byte-identical manager argument corrections. Six investigations are parked after one to three hypotheses. The 976-byte task processor and several file-task siblings matched on their first attempts. Eleven manager siblings also matched immediately.

A late callee inspection identified descriptor-pointer parameters in five new managers. Correcting the source declarations required ten extra admission reproductions and a second full acceptance pass. Both passes passed, but the cost is counted: 64 admission reproductions, eight fresh builds, 242 tests and 16,080 module comparisons, **4.62 comparisons per new byte**. Research/public command totals were 243.253/248.089 seconds. Focused exports were reused because their inputs remained unchanged.

**Efficiency regressed versus batch 181:** yield fell from 76.75 to 69.60 bytes per hypothesis and verification overhead rose from 2.15 to 4.62 comparisons per byte. Token/cost records remain unavailable. Complete callee argument and field inspection before family expansion or integration, even when a provisional declaration already emits exact bytes. This correction is in use for the next manager-storage collection. No new public tooling was needed.
