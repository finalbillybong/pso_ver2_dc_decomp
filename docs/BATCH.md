# Reconstruction batch: 165: dispatch-referenced destructor family

50 new matching functions / 3,400 bytes. All 779 prior functions preserved.

829 exact functions in 771 modules; 73,396 compiled function-range bytes; 0 reconstructed data bytes; 4,089,516 retained reference bytes. Whole-image coverage 1.7631% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| destroy_object_8c080280 | 0x8c080280 | 68 |
| destroy_object_8c081864 | 0x8c081864 | 68 |
| destroy_object_8c0861cc | 0x8c0861cc | 68 |
| destroy_object_8c086db0 | 0x8c086db0 | 68 |
| destroy_object_8c08a398 | 0x8c08a398 | 68 |
| destroy_object_8c08a3dc | 0x8c08a3dc | 68 |
| destroy_object_8c08a63c | 0x8c08a63c | 68 |
| destroy_object_8c08b35c | 0x8c08b35c | 68 |
| destroy_object_8c08b900 | 0x8c08b900 | 68 |
| destroy_object_8c08de2c | 0x8c08de2c | 68 |
| destroy_object_8c096514 | 0x8c096514 | 68 |
| destroy_object_8c09674c | 0x8c09674c | 68 |
| destroy_object_8c0986b0 | 0x8c0986b0 | 68 |
| destroy_object_8c098d54 | 0x8c098d54 | 68 |
| destroy_object_8c09a0ec | 0x8c09a0ec | 68 |
| destroy_object_8c09a954 | 0x8c09a954 | 68 |
| destroy_object_8c09ae88 | 0x8c09ae88 | 68 |
| destroy_object_8c09ce5c | 0x8c09ce5c | 68 |
| destroy_object_8c09d6fc | 0x8c09d6fc | 68 |
| destroy_object_8c09fc3c | 0x8c09fc3c | 68 |
| destroy_object_8c09fe00 | 0x8c09fe00 | 68 |
| destroy_object_8c0a9c78 | 0x8c0a9c78 | 68 |
| destroy_object_8c0aad54 | 0x8c0aad54 | 68 |
| destroy_object_8c0abf3c | 0x8c0abf3c | 68 |
| destroy_object_8c0ac240 | 0x8c0ac240 | 68 |
| destroy_object_8c0ac630 | 0x8c0ac630 | 68 |
| destroy_object_8c0ac8e0 | 0x8c0ac8e0 | 68 |
| destroy_object_8c0adbc8 | 0x8c0adbc8 | 68 |
| destroy_object_8c0b0380 | 0x8c0b0380 | 68 |
| destroy_object_8c0b05ec | 0x8c0b05ec | 68 |
| destroy_object_8c0b2984 | 0x8c0b2984 | 68 |
| destroy_object_8c0b3048 | 0x8c0b3048 | 68 |
| destroy_object_8c0b36f4 | 0x8c0b36f4 | 68 |
| destroy_object_8c0b650c | 0x8c0b650c | 68 |
| destroy_object_8c0b67a0 | 0x8c0b67a0 | 68 |
| destroy_object_8c0b691c | 0x8c0b691c | 68 |
| destroy_object_8c0b7c5c | 0x8c0b7c5c | 68 |
| destroy_object_8c0b83c0 | 0x8c0b83c0 | 68 |
| destroy_object_8c0b8c24 | 0x8c0b8c24 | 68 |
| destroy_object_8c0b91c8 | 0x8c0b91c8 | 68 |
| destroy_object_8c0b95fc | 0x8c0b95fc | 68 |
| destroy_object_8c0ba7bc | 0x8c0ba7bc | 68 |
| destroy_object_8c0baa20 | 0x8c0baa20 | 68 |
| destroy_object_8c0bad1c | 0x8c0bad1c | 68 |
| destroy_object_8c0baf2c | 0x8c0baf2c | 68 |
| destroy_object_8c0bb658 | 0x8c0bb658 | 68 |
| destroy_object_8c0cb374 | 0x8c0cb374 | 68 |
| destroy_object_8c0cb410 | 0x8c0cb410 | 68 |
| destroy_object_8c0cb578 | 0x8c0cb578 | 68 |
| destroy_object_8c0cb7e0 | 0x8c0cb7e0 | 68 |

All 50 hypotheses predict only four observed address-literal changes in the proven nullable destructor. Each complete 68-byte match includes all instructions, delay slots, literals and natural alignment. All entries have independent dispatch-table references and reviewed adjacent boundaries; offset-checked provisional types and dependencies are preserved.

50 candidate trials produced 50 exact matches and zero duplicate outputs, with 1.485 seconds of recorded compilation. A further 100 compilations reproduce admission twice; they are verification, not additional experiments or gains. No failed investigation or parked-target retry occurred.

Verification ran once for this integration: four fresh project builds across both checkouts, exact integrated images, five-function proofs, 58 research tests and 63 public tests. Source-only rejection preserved artifacts. Verification commands took 48.805 seconds in research and 50.058 seconds in public, running concurrently. Unchanged focused evidence was reused; only new ranges were exported.

The representative five earlier small batches added 19 functions / 1,936 bytes with 38 hypotheses, four duplicate outputs, 20 full builds and 555 test executions. This batch adds 50 functions / 3,400 bytes with 50 hypotheses, no duplicates, four full builds and 121 test executions. The measured verification overhead per gained byte is lower; task-attributed token/cost records and historical timings are unavailable, so no cost or runtime saving is claimed. See [EFFICIENCY.md](EFFICIENCY.md) for the original bounded-pass comparison.

Tooling-only work fixes automatic refresh of the research pickup paragraph; it receives no byte credit. The two primary targets remain parked and incomplete. Zero standalone data bytes are added. Another 398 shapes remain in the candidate inventory, including 50 already under cheap trial; none count until admitted and verified. Reproduce with `tools/reconstruct.py verify` and the commands in [RECONSTRUCTION_WORKFLOW.md](RECONSTRUCTION_WORKFLOW.md).
