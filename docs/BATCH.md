# Reconstruction batch: 182: proven reconstruction families

27 new matching functions / 3,480 bytes. All 2057 prior functions preserved.

2084 exact functions in 2010 modules; 155,692 compiled function-range bytes; 0 reconstructed data bytes; 4,007,220 retained reference bytes. Whole-image coverage 3.7400% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| select_actor_animation | 0x8c01d17c | 48 |
| actor_animation_ready | 0x8c01d1ac | 56 |
| initialize_manager_8c03bfdc | 0x8c03bfdc | 48 |
| initialize_manager_8c040254 | 0x8c040254 | 48 |
| initialize_manager_8c040790 | 0x8c040790 | 48 |
| initialize_manager_8c040a44 | 0x8c040a44 | 48 |
| initialize_manager_8c040d10 | 0x8c040d10 | 48 |
| initialize_file_task_queue | 0x8c040fe8 | 140 |
| destroy_file_task_queue | 0x8c041074 | 64 |
| process_file_task_queue | 0x8c0410b4 | 976 |
| create_file_read_task | 0x8c041484 | 252 |
| create_file_read_callback | 0x8c041580 | 272 |
| create_file_buffer_task | 0x8c0416c0 | 288 |
| remove_first_file_task | 0x8c0417e0 | 80 |
| complete_first_file_task | 0x8c041830 | 124 |
| create_named_file_task | 0x8c0418ac | 144 |
| cancel_file_task | 0x8c04193c | 52 |
| drain_file_task_queue | 0x8c041970 | 72 |
| initialize_file_task_manager | 0x8c0419b8 | 48 |
| copy_actor_records | 0x8c052098 | 140 |
| transform_actor_records | 0x8c053c70 | 196 |
| initialize_manager_8c106568 | 0x8c106568 | 48 |
| initialize_manager_8c1216c0 | 0x8c1216c0 | 48 |
| initialize_manager_8c1b087c | 0x8c1b087c | 48 |
| initialize_manager_8c208384 | 0x8c208384 | 48 |
| initialize_manager_8c23bf5c | 0x8c23bf5c | 48 |
| initialize_manager_8c25e5a8 | 0x8c25e5a8 | 48 |

This batch adds 27 complete exact functions / 3,480 compiled function-range bytes in 27 modules, preserving all 2,057 prior functions and source/header hashes. Totals: 2,084 functions / 2,010 modules / 155,692 compiled function-range bytes / zero separately reconstructed static-data bytes / 4,007,220 retained reference bytes. Whole-image coverage is 3.7400%; this is not code-completion percentage. The code-only denominator remains unknown.

The largest addition is the complete 976-byte file-task processor: five states, cancellation, asynchronous reads, final-sector copying, switch table and embedded literal pools all match. File-task creation, callbacks, queue lifecycle and manager constructors supply the related family. Other additions select/check actor animations and copy/transform 44-byte records. The task processor retains its signed-remainder/division runtime dependencies and original unchecked behavior. The unresolved 180-byte remainder helper remains reference-backed. No data credit is claimed.

There were 50 distinct source hypotheses / 50 compiler attempts, zero compiler errors and nine duplicate outputs. Three duplicates were unsuccessful variations; six were byte-identical corrections to manager argument forwarding and pointer declarations. Candidate compilation totaled 1.567 seconds. The file-task representative and six siblings matched first try; the 976-byte processor also matched first try. Eleven screened manager siblings matched immediately. A historical geometry candidate was rejected by the prior-attempt guard before compilation and is not counted as a new experiment or gain. Existing orchestration was reused; no public tooling or compiler-setting changes were made.

Six investigations are parked with cumulative counts, precise mismatch evidence and revisit conditions: anchor initialization 392/392 with 33 differing after three hypotheses; slot actor initialization 228/228 with 27 differing after two; parameter actor initialization 416/416 with 12 differing after two; animation binding 224/224 with two differing after three; horizontal border drawing 404/396 with 357 differing after one; cancellation loop 48/48 with 23 differing after one. Provisional sources preserve these investigations without completion credit. Historical primary targets remain unchanged and incomplete.

All new functions reproduced twice. Callee inspection then established that five new manager R6 parameters are descriptor pointers; their provisional integer declarations were corrected while retaining identical bytes. Ten additional admission reproductions and a second full verification pass were required. Across both passes there were **eight fresh builds**, exact integrated-image comparisons, both five-function proofs per pass, **242 test executions**, and source-only rejection/artifact checks. Unchanged focused exports were checked/reused. Total verification was **16,080 module comparisons / 4.62 per new byte**, with research/public command totals 243.253/248.089 seconds. The final pass alone uses 8,040 comparisons; the earlier pass is retained in the overhead total.

**Efficiency did not improve over batch 181.** Candidate yield is 69.60 bytes per hypothesis versus 76.75, and total verification overhead rose from 2.15 to 4.62 comparisons per new byte. It remains below the original sampled baseline's 6.48, but that does not erase the regression. Token/cost records and comparable baseline timings remain unavailable. The workflow correction is to complete callee argument/field inspection before expanding a family or starting integration, including byte-identical prototypes. The next independent collection follows manager storage and record operations using that check first. Its candidates are excluded from these totals.

Reproduce acceptance with tools/reconstruct.py verify after BUILDING.md setup; validate saved analysis with tools/dossier.py --check. Continue cheap trials and collection before full integration. Do not reopen parked targets without specific new evidence.
