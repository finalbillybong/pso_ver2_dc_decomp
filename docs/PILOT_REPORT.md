**Target not achieved — no verified decompilation progress.** This pilot admitted
**0 new bytes and 0 functions**, leaving a **5,120-byte target shortfall**. One new
44-byte exact candidate remains unintegrated, 5,076 bytes below the collection
threshold. Tooling and classification changes receive no reconstruction credit.

The bounded contact/vector investigation is complete for this batch. It did not
produce a qualifying reconstruction collection. No integration, fresh full build,
admission reproduction, commit or push was performed.

| Reconstruction measure | Baseline | Final | Net gain |
| --- | ---: | ---: | ---: |
| Admitted functions | 2,240 | 2,240 | 0 |
| Admitted modules | 2,164 | 2,164 | 0 |
| Compiled complete-range bytes | 183,012 | 183,012 | 0 |
| Retained reference bytes | 3,979,900 | 3,979,900 | 0 |
| Decoded image bytes | 4,162,912 | 4,162,912 | 0 |
| Whole-image coverage | 4.39624955% | 4.39624955% | 0 percentage points |
| Separately reconstructed data | 0 | 0 | 0 |

Code-only completion and the total game function count remain unknown. These
figures were derived from the source-bound checkpoint and checked again after the
pilot. All 2,505 pre-existing source/header files were hash-preserved, along with
the manifest, queue, progress and toolchain inputs. The pre-existing uncommitted
documentation changes remain; cookbook and workflow additions preserve their
original contents as exact prefixes.

| Candidate accounting within this pilot | Bytes | Functions |
| --- | ---: | ---: |
| New complete exact candidates | 44 | 1 |
| Selected carried candidates | 0 | 0 |
| Newly admitted | 0 | 0 |
| Remaining unintegrated | 44 | 1 |

`slide_and_dispatch_contact` at `0x8c05ae38` matched all 44 bytes on its first
trial: 36 instruction bytes and eight literal bytes. It composes an admitted
slide helper with the previously reviewed virtual slot `0x1b4`. Its private
source and compiler receipt are preserved; it has not passed admission's two
independent reproductions. The earlier contact/vector collection's 3,360 bytes
were already admitted and earn no new credit. A separate historical discovery
list retains 18 exact-receipt entry keys not equal to current module starts;
these may include covered subfunctions or superseded layouts, and none was
selected, credited or recompiled as carryover.

The selected inventory was frozen before compiler trials: **32 nonoverlapping
review intervals / 14,588 bytes**, below the 16 KiB limit. It includes four prior
representatives, ten prior siblings, eight direct callees and ten caller/relative
intervals. Priority went to admitted controls and relatives with known ABIs and
boundaries, then larger complete ranges and address. The actor-motion targets
and original primary targets remained excluded. Nine intervals retain boundary
disagreements; the inventory is not a claim of 32 verified function boundaries.
No coverage is implied for addresses between selected intervals.

| Census classification | Bytes |
| --- | ---: |
| Instructions | 3,960 |
| Literals | 612 |
| Tables | 0 |
| Padding | 28 |
| Unknown | 9,988 |
| Selected union | 14,588 |

Classified bytes total **4,600**, distinct from the **3,672 admitted compiled
bytes** overlapping the selection. Reusing the prior controls' reviewed spans
left 11,228 bytes unknown at entry; new review reduced unknown by **1,240 bytes**.
Those classifications are not new compiled coverage. Three admitted callee
controls intentionally retain unknown classifications.

Hash-validated Ghidra catalog/listing evidence was cross-checked with the pinned
SH objdump and raw range bytes. Reviewed instruction addresses were present in
both listings; return paths, delay slots, PC-relative pools and natural alignment
were reviewed for the classified ranges. This address cross-check alone does not
prove instruction semantics or boundaries. Prior exact controls also reused
whole-range binary and source identities. Five larger caller intervals remain
entirely unknown pending full ownership, indirect-flow and ABI review; no inferred
jump-table destinations were promoted into classified coverage. Three vector-math
intervals have separate trailing return stubs of unresolved ownership. A fourth
nearby wrapper has an unconfirmed adjacent entry. These are the **nine unresolved
disagreements**, and affected entries were excluded from trials.

The new `reconstruct.py census` command validates the reviewed inventory,
reference and evidence hashes, alignment, nonoverlap, bounds and classification
accounting; implicit gaps stay unknown. It writes an immutable private JSON
receipt, reports the selected union, and keeps admission and classification
separate. The first census eligibility result omitted lifetime history. A trial
preflight exposed the older parked heading/apply target at `0x8c05c464` before
compilation. The census was corrected to consult current lifetime history and
exclude parked, uncertain or unavailable histories. The original receipt remains
private, superseded by `census-history-aware.json`. Even an otherwise eligible
entry still needs the workflow's representative and sibling-expansion review.

| Experiments | Count |
| --- | ---: |
| Registered target hypotheses | 3 |
| Target compiler attempts | 3 |
| Complete exact outputs | 1 |
| Unsuccessful target outputs | 2 |
| Compiler errors / corrections | 0 / 0 |
| Duplicate unsuccessful outputs | 1 |
| Preflight requests rejected before compilation | 1 |
| Prepared sibling specifications not executed | 1 |
| Small compiler-probe variants / attempts | 0 / 0 |
| Admission reproductions | 0 |

Five source specifications were formulated in total: three registered trials,
one rejected preflight and one withheld sibling. The new batch identifier is
`contact-census-pilot-20261010`; all three trials use the initial contact-composition
family. The 40-hypothesis, ten-initial-family and eight-probe limits were caps,
not quotas. Reconciliation preserved all **13,478 existing history attempts**
and added exactly three. Cached negative screens and their hashes were retained,
including the earlier contact-pattern screen that found only its own template.

The new heading/dispatch representative at `0x8c05c69c` produced 176 bytes for a
180-byte range, with 109 differing bytes. CW12's mixed-argument ordering variation
produced an identical complete output. The target was parked after two failures;
no third hypothesis or sibling expansion followed. The older heading/apply target
was not reopened. Its related apply sibling was withheld. No separate compiler
probe was needed to establish that the tested argument-order change had no effect.
The successful composition and failed transfer are recorded in the
[matching cookbook](MATCHING_COOKBOOK.md#bounded-contact-pilot-transfer-limits).

| Cost measurement through report generation | Seconds |
| --- | ---: |
| Preparation, dedicated tooling and reporting phase windows | 362.50 |
| Investigation phase window | 308.82 |
| Target compilation, nested in investigation | 0.099398 |
| Automatic diagnostics, nested in investigation | 0.057418 |
| Verification phase window | 35.56 |
| Compiler-probe overhead | 0 |
| Total measured since baseline snapshot | 706.89 |

Phase windows include reasoning and command orchestration. Census refinements
interleaved with investigation cannot be separated reliably from that window.
Compilation and diagnostics are already included in investigation, so they must
not be added again. Initial reconnaissance before the snapshot was not timed:
**complete pilot wall time is unavailable; 706.89 seconds is a measured
lower bound through report generation**. A reporting-only loop was stopped and
rerun with a cached reference hash; its overhead remains in the reporting window.
No compiler attempt was interrupted. Token costs and historical wall-time savings
are unavailable and are not inferred.

New exact bytes per registered hypothesis were **14.67** (44 / 3), below both the
**81.46** historical aggregate and **166.25** batch-187 result recorded in
[THROUGHPUT.md](THROUGHPUT.md). Those historical figures describe admitted batches;
this pilot's numerator is an unintegrated exploratory match. Including all five
formulated specifications would yield 8.80 bytes per specification. This small,
boundary-limited sample does **not demonstrate improved reconstruction efficiency**.
The new census guards are tested functionality, not evidence of measured savings.

| Verification executed | Result / private receipt |
| --- | --- |
| Host test suite, including seven new census tests | 93 passed in 2.482 s; `host-tests.log` |
| Overlap, image bounds, alignment, missing evidence, implicit gaps, stale identity, conflicting spans, admitted controls and history exclusions | Passed in host suite |
| Source-bound progress consistency | Passed; 2,240 functions / 183,012 bytes |
| Existing module outputs and integrated image compared to pinned reference | Passed; `existing-build-check.json` |
| Source-only rejection | Expected rejection of 3,979,900 bytes; `source-only-check.json` |
| Source-only artifact preservation | All 15,187 artifact hashes unchanged |
| Baseline source/header/manifest/queue preservation | Passed; `preservation.json` |
| Public Git-index content check | 2,583 indexed text files passed; `publication-index.log` |
| Final changed/untracked public text content and whitespace checks | Recorded in `final-content-check.json` |
| Two fresh builds, new five-function proof and candidate reproductions | Not run: collection did not qualify |

Existing build and verification receipt identities are recorded in
`existing-receipts.json`; validating them does not constitute a new full-build
verification. All raw exports, game bytes, candidate sources and detailed receipts
remain private under the task scratch directory `pso-contact-pilot-20261010`.
Its `pilot-report.json` is the supporting machine-readable report. Other key
receipts are `baseline.json`, `inventory-frozen.json`, `cross-check.json`,
`history-reconciliation.json`, `selected-history-review.json`,
`census-initial-classification.json`, `census-history-aware.json`,
`trial-freeze.json`, and `trials/summary.json`.

**Recommendation: revise this approach before another reconstruction batch.**
Keep the census and lifetime-history guards, but resolve whole-range ownership
and indirect-call evidence for a sufficiently large collection before compiling.
Retain the 44-byte candidate for a future qualifying batch. Leave parked heading
and actor-motion targets closed until genuinely new evidence addresses their
recorded blockers. Repeating the current small-wrapper search has no measured
efficiency justification.
