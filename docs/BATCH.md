# Reconstruction batch: 172: proven reconstruction families

59 new matching functions / 4,112 bytes. All 1654 prior functions preserved.

1713 exact functions in 1655 modules; 125,264 compiled function-range bytes; 0 reconstructed data bytes; 4,037,648 retained reference bytes. Whole-image coverage 3.0090% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| destroy_virtual_context_8c010edc | 0x8c010edc | 88 |
| destroy_virtual_context_8c01116c | 0x8c01116c | 88 |
| forward_reviewed_8c01c2a0 | 0x8c01c2a0 | 16 |
| destroy_context_8c03c454 | 0x8c03c454 | 76 |
| forward_reviewed_8c03f1bc | 0x8c03f1bc | 16 |
| destroy_context_8c03f2e8 | 0x8c03f2e8 | 76 |
| destroy_context_8c04fee4 | 0x8c04fee4 | 76 |
| destroy_context_8c051f28 | 0x8c051f28 | 84 |
| destroy_context_8c084258 | 0x8c084258 | 88 |
| destroy_virtual_context_8c0888e0 | 0x8c0888e0 | 92 |
| destroy_context_8c0a127c | 0x8c0a127c | 76 |
| forward_reviewed_8c0a36ec | 0x8c0a36ec | 12 |
| destroy_context_8c0a47dc | 0x8c0a47dc | 76 |
| destroy_context_8c0b9ce8 | 0x8c0b9ce8 | 96 |
| destroy_context_8c0bbb98 | 0x8c0bbb98 | 88 |
| destroy_context_8c0db244 | 0x8c0db244 | 88 |
| forward_reviewed_8c0e9ac4 | 0x8c0e9ac4 | 32 |
| forward_reviewed_8c0e9ae4 | 0x8c0e9ae4 | 32 |
| check_resource_table_lengths | 0x8c0e9b04 | 132 |
| destroy_context_8c0e9c78 | 0x8c0e9c78 | 76 |
| destroy_context_8c0f34a0 | 0x8c0f34a0 | 76 |
| destroy_context_8c0f7db4 | 0x8c0f7db4 | 76 |
| destroy_context_8c0fb0d0 | 0x8c0fb0d0 | 96 |
| relocate_resource_trailer | 0x8c104e00 | 60 |
| relocate_resource_header | 0x8c104e3c | 52 |
| forward_reviewed_8c104e7c | 0x8c104e7c | 16 |
| forward_reviewed_8c104e8c | 0x8c104e8c | 16 |
| load_named_resource | 0x8c104f68 | 144 |
| destroy_context_8c11208c | 0x8c11208c | 76 |
| destroy_context_8c11dc84 | 0x8c11dc84 | 88 |
| destroy_context_8c120328 | 0x8c120328 | 76 |
| destroy_context_8c127918 | 0x8c127918 | 76 |
| destroy_context_8c13c24c | 0x8c13c24c | 76 |
| destroy_context_8c13e8ac | 0x8c13e8ac | 76 |
| destroy_context_8c140270 | 0x8c140270 | 76 |
| destroy_context_8c1505b0 | 0x8c1505b0 | 76 |
| destroy_context_8c15107c | 0x8c15107c | 76 |
| destroy_context_8c15a9dc | 0x8c15a9dc | 76 |
| destroy_context_8c1658c4 | 0x8c1658c4 | 76 |
| destroy_context_8c174a10 | 0x8c174a10 | 76 |
| destroy_context_8c174ed0 | 0x8c174ed0 | 76 |
| destroy_context_8c191b38 | 0x8c191b38 | 96 |
| destroy_context_8c198f08 | 0x8c198f08 | 104 |
| destroy_context_8c1ccd60 | 0x8c1ccd60 | 104 |
| destroy_context_8c1d57d0 | 0x8c1d57d0 | 88 |
| destroy_context_8c1dbd44 | 0x8c1dbd44 | 104 |
| forward_reviewed_8c1e608c | 0x8c1e608c | 16 |
| forward_reviewed_8c1e62f0 | 0x8c1e62f0 | 16 |
| destroy_context_8c21108c | 0x8c21108c | 76 |
| destroy_context_8c215cdc | 0x8c215cdc | 96 |
| destroy_context_8c21e478 | 0x8c21e478 | 88 |
| load_global_resource_8c21edc8 | 0x8c21edc8 | 32 |
| forward_reviewed_8c2213dc | 0x8c2213dc | 16 |
| destroy_context_8c2248d0 | 0x8c2248d0 | 104 |
| destroy_context_8c22b6d0 | 0x8c22b6d0 | 76 |
| load_global_resource_8c2327cc | 0x8c2327cc | 32 |
| destroy_context_8c250714 | 0x8c250714 | 88 |
| forward_reviewed_8c282d60 | 0x8c282d60 | 16 |
| forward_reviewed_8c28455c | 0x8c28455c | 16 |

The batch adds 41 destructor functions (3,440 bytes), four resource-table/loading/relocation functions (388 bytes), and 14 reviewed forwarding wrappers (284 bytes). All ranges include their complete literals and natural alignment. Three destructors use ordinary C++ virtual calls with checked provisional layouts. Static-data reconstruction adds zero bytes.

Cheap trials used 77 distinct hypotheses and 78 compiler attempts, with seven duplicate outputs and 2.342 seconds of measured compiler execution. One invalid attempt came from an overbroad local-declaration substitution that changed a checked header; offset checks rejected it, and the corrected source matched under the same hypothesis. A separate generator syntax error stopped before any compilation. These errors add no progress. Integration independently reproduced all 59 matches twice (118 additional compiler runs).

The workflow reused the trial, comparison, output-grouping, integration, verification and publication tools. The scratch family scanner gained an input for already-exact trial templates, allowing family screening before integration without modifying the project manifest. A small reviewed destructor generator handles the newly observed cleanup sequences and checked field offsets. This tooling work is separate from reconstructed bytes. No compiler settings or public tools changed.

The action-selection target remains 452 bytes / 33 differing after three hypotheses. The level reader remains 56 generated / 72 expected, 66 differing, after two identical-output hypotheses. The paired-resource loader remains 224 bytes / 18 differing after two identical-output hypotheses. Both decode wrappers remain four bytes off (132-byte and 108-byte complete ranges), with three identical-output hypotheses each. All five are explicitly parked with cumulative counts and evidence-based revisit conditions. The original primary targets remain unresolved; supporting matches do not resolve them.

Verification ran once for this integration: two fresh exact builds in each checkout, four integrated-image comparisons, both five-function proofs, 58 research tests plus 63 public tests, and source-only rejection with unchanged-artifact guards. All 1,654 prior exact functions and their source/header provenance were preserved. New focused exports cover only the 59 additions and five newly parked targets; unchanged primary-target evidence was reused.

Measured verification performed 6,620 module comparisons for 4,112 new bytes: 1.61 comparisons per byte, versus 6.48 in the five-batch baseline. Research verification took 100.757 seconds and public verification 102.996 seconds, running concurrently. The baseline had 38 hypotheses / 19 functions / 1,936 bytes across five batches, 20 fresh builds and 555 test executions; this batch has 77 hypotheses / 59 functions / 4,112 bytes, four builds and 121 tests. This improves measured integration overhead, but does not establish token or financial savings: token/cost records and comparable historical timings are unavailable. Whole-image coverage is not code-completion percentage; the code-only denominator remains unknown.
