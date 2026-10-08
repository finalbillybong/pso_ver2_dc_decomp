# Reconstruction batch: 164: dispatch-referenced destructor family

50 new matching functions / 3,400 bytes. All 729 prior functions preserved.

779 exact functions in 721 modules; 69,996 compiled function-range bytes; 0 reconstructed data bytes; 4,092,916 retained reference bytes. Whole-image coverage 1.6814% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| destroy_object_8c0111d0 | 0x8c0111d0 | 68 |
| destroy_object_8c011fc4 | 0x8c011fc4 | 68 |
| destroy_object_8c0130e8 | 0x8c0130e8 | 68 |
| destroy_object_8c013570 | 0x8c013570 | 68 |
| destroy_object_8c0135b8 | 0x8c0135b8 | 68 |
| destroy_object_8c013f10 | 0x8c013f10 | 68 |
| destroy_object_8c01410c | 0x8c01410c | 68 |
| destroy_object_8c01bb30 | 0x8c01bb30 | 68 |
| destroy_object_8c02d110 | 0x8c02d110 | 68 |
| destroy_object_8c032e38 | 0x8c032e38 | 68 |
| destroy_object_8c033050 | 0x8c033050 | 68 |
| destroy_object_8c03b8b8 | 0x8c03b8b8 | 68 |
| destroy_object_8c03c1d0 | 0x8c03c1d0 | 68 |
| destroy_object_8c03c214 | 0x8c03c214 | 68 |
| destroy_object_8c03c258 | 0x8c03c258 | 68 |
| destroy_object_8c03c29c | 0x8c03c29c | 68 |
| destroy_object_8c03c2e0 | 0x8c03c2e0 | 68 |
| destroy_object_8c03c324 | 0x8c03c324 | 68 |
| destroy_object_8c03c368 | 0x8c03c368 | 68 |
| destroy_object_8c040284 | 0x8c040284 | 68 |
| destroy_object_8c04074c | 0x8c04074c | 68 |
| destroy_object_8c0407c0 | 0x8c0407c0 | 68 |
| destroy_object_8c040a74 | 0x8c040a74 | 68 |
| destroy_object_8c040d40 | 0x8c040d40 | 68 |
| destroy_object_8c0419e8 | 0x8c0419e8 | 68 |
| destroy_object_8c04bb2c | 0x8c04bb2c | 68 |
| destroy_object_8c0577b4 | 0x8c0577b4 | 68 |
| destroy_object_8c05ec70 | 0x8c05ec70 | 68 |
| destroy_object_8c05edd8 | 0x8c05edd8 | 68 |
| destroy_object_8c05f30c | 0x8c05f30c | 68 |
| destroy_object_8c0651e8 | 0x8c0651e8 | 68 |
| destroy_object_8c077908 | 0x8c077908 | 68 |
| destroy_object_8c077a08 | 0x8c077a08 | 68 |
| destroy_object_8c077ba0 | 0x8c077ba0 | 68 |
| destroy_object_8c077be4 | 0x8c077be4 | 68 |
| destroy_object_8c077d9c | 0x8c077d9c | 68 |
| destroy_object_8c077e84 | 0x8c077e84 | 68 |
| destroy_object_8c077f60 | 0x8c077f60 | 68 |
| destroy_object_8c07805c | 0x8c07805c | 68 |
| destroy_object_8c078134 | 0x8c078134 | 68 |
| destroy_object_8c078320 | 0x8c078320 | 68 |
| destroy_object_8c0785b4 | 0x8c0785b4 | 68 |
| destroy_object_8c07868c | 0x8c07868c | 68 |
| destroy_object_8c078788 | 0x8c078788 | 68 |
| destroy_object_8c07b480 | 0x8c07b480 | 68 |
| destroy_object_8c07b5a8 | 0x8c07b5a8 | 68 |
| destroy_object_8c07ca70 | 0x8c07ca70 | 68 |
| destroy_object_8c07cd48 | 0x8c07cd48 | 68 |
| destroy_object_8c07d168 | 0x8c07d168 | 68 |
| destroy_object_8c07fdb8 | 0x8c07fdb8 | 68 |

## Evidence and measured work

Fifty previously unattempted entries omitted from the Ghidra function catalog
match the proven 68-byte destructor shape. Each is independently referenced at
its own dispatch-table slot eight. All instructions, branch/call/return delays,
natural padding, four address literals and adjacent entry boundaries were
reviewed. Ordinary generated C preserves the null guard, dispatch assignment,
base call with zero and signed release condition. No binary output is substituted.

All 50 first hypotheses matched, with zero duplicate trial outputs and no new
parked targets. The additional inventory of 448 matching instruction shapes is
not admitted and receives no completion credit. Previously parked investigations
remain parked. Referenced dispatch tables are not reconstructed static data.

Candidate compilation recorded 1.48 seconds. Reproductions are validation, not new hypotheses. This batch used four fresh project builds, two integrated-image checks and two
five-function proofs, with 58 research and 63 public tests. Source-only rejection
preserved existing build artifacts. Prior source/header hashes and all 729
published matches were preserved. Only new ranges were exported; unchanged
focused evidence was reused with its full provenance checks.

Verification commands recorded 45.30 seconds in research and 46.43 seconds in public, run concurrently. Token and cost measurements remain unavailable. See [EFFICIENCY.md](EFFICIENCY.md)
for the original measured comparison, including sunk small-batch work.

The sole workflow adjustment permits explicitly reviewed entries missing from
the catalog; an existing synthetic guard test covers this case. Automatic
historical exclusion, exact comparisons, dependencies, offset checks and privacy
checks remain unchanged. Continue with the next reviewed group, accumulating
20–50 functions before full verification and publication.
