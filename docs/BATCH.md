# Reconstruction batch: 183: proven reconstruction families

41 new matching functions / 3,956 bytes. All 2084 prior functions preserved.

2125 exact functions in 2050 modules; 159,648 compiled function-range bytes; 0 reconstructed data bytes; 4,003,264 retained reference bytes. Whole-image coverage 3.8350% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| initialize_position_controller | 0x8c03c92c | 228 |
| initialize_manager_storage | 0x8c040144 | 92 |
| destroy_manager_storage | 0x8c0401a0 | 92 |
| reset_manager_record_slots | 0x8c0401fc | 52 |
| manager_record_dispatch | 0x8c040230 | 36 |
| create_descriptor_managers | 0x8c0405b4 | 296 |
| clear_descriptor_tables | 0x8c0406dc | 80 |
| append_descriptor_record | 0x8c04072c | 32 |
| initialize_offset_owner_effect | 0x8c05f4c4 | 112 |
| destroy_offset_owner_effect | 0x8c05f534 | 84 |
| initialize_control_manager | 0x8c1066e4 | 56 |
| initialize_timed_owner_effect | 0x8c132d88 | 104 |
| destroy_timed_owner_effect | 0x8c132df0 | 80 |
| update_timed_owner_effect | 0x8c132e40 | 132 |
| initialize_timed_owner_effect_8c132ec4 | 0x8c132ec4 | 104 |
| destroy_timed_owner_effect_8c132f2c | 0x8c132f2c | 80 |
| update_timed_owner_effect_8c132f7c | 0x8c132f7c | 132 |
| initialize_timed_owner_effect_8c133000 | 0x8c133000 | 104 |
| destroy_timed_owner_effect_8c133068 | 0x8c133068 | 80 |
| update_timed_owner_effect_8c1330b8 | 0x8c1330b8 | 132 |
| initialize_timed_owner_effect_8c13313c | 0x8c13313c | 104 |
| destroy_timed_owner_effect_8c1331a4 | 0x8c1331a4 | 80 |
| update_timed_owner_effect_8c1331f4 | 0x8c1331f4 | 132 |
| initialize_timed_owner_effect_8c133278 | 0x8c133278 | 104 |
| destroy_timed_owner_effect_8c1332e0 | 0x8c1332e0 | 80 |
| update_timed_owner_effect_8c133330 | 0x8c133330 | 132 |
| initialize_timed_owner_effect_8c1333b4 | 0x8c1333b4 | 104 |
| destroy_timed_owner_effect_8c13341c | 0x8c13341c | 80 |
| update_timed_owner_effect_8c13346c | 0x8c13346c | 132 |
| destroy_child_owner_8c18a09c | 0x8c18a09c | 84 |
| destroy_timed_owner_effect_8c18a6b4 | 0x8c18a6b4 | 80 |
| destroy_timed_owner_effect_8c1c56c0 | 0x8c1c56c0 | 80 |
| destroy_timed_owner_effect_8c1c5b40 | 0x8c1c5b40 | 80 |
| destroy_child_owner_8c1d983c | 0x8c1d983c | 84 |
| destroy_timed_owner_effect_8c1dde04 | 0x8c1dde04 | 80 |
| destroy_timed_owner_effect_8c223368 | 0x8c223368 | 80 |
| destroy_timed_owner_effect_8c22ae68 | 0x8c22ae68 | 80 |
| destroy_child_owner_8c2301f8 | 0x8c2301f8 | 84 |
| destroy_child_owner_8c231d48 | 0x8c231d48 | 84 |
| destroy_child_owner_8c25effc | 0x8c25effc | 84 |

This batch adds **41 complete exact functions / 3,956 compiled function-range bytes in 40 modules**, preserving all 2,084 prior functions and source/header hashes. Totals: 2,125 functions / 2,050 modules / 159,648 compiled function-range bytes / zero separately reconstructed static-data bytes / 4,003,264 retained reference bytes. Whole-image coverage is 3.8350%; it is not code-completion percentage. The code-only denominator remains unknown.

Manager storage allocation/reset/destruction, descriptor-manager creation and table operations form the first group. A real, independently referenced empty callback immediately follows record append; compiling those two functions together generates the observed natural alignment and matches the full 36-byte module. No padding was inserted. Descriptor declaration scope reproduces the factory's saved-register lifetimes. Explicit shift-by-two reproduces slot allocation arithmetic where multiplication emitted a different instruction sequence.

Timed owner effects provide six constructors, six periodic updaters and their lifecycle operations. The first constructor/destructor/updater matched immediately; reviewed instruction patterns then supplied 21 exact siblings on their first attempts. A position-controller initializer and owner-offset effect initialization/destruction also matched first try, followed by five exact child-owner destructor siblings. Callee argument/field inspection preceded family generation; integer effect handles and child pointers are represented separately. Periodic updaters retain the unresolved signed-remainder runtime dependency. No standalone-data credit is claimed.

There were **48 distinct hypotheses / 49 compiler attempts / one compiler error / one duplicate output**. The extra compiler attempt corrected a C90 declaration placement under the same hypothesis. Candidate compilation totaled 1.475 seconds. The two parked investigations are coordinate-table initialization (164/164 bytes, nine differing, first0x8c04051f, three hypotheses) and owner-offset updating (236/232 bytes,126 differing, first0x8c05f5a4, two hypotheses with identical output). The former still differs in float-constant register allocation and resource-index scheduling; the latter adds scalar expression scheduling/reloads after vector normalization. Revisit only new exact source-context patterns. Their provisional sources and cumulative counts remain recorded without completion credit. Historical primary targets remain unchanged and incomplete.

All 40 new modules reproduced twice, then **two fresh exact builds in each checkout**, integrated-image comparisons, both five-function proofs, **all 121 current test executions** (58 research,63 public), and source-only rejection/artifact-preservation checks passed. This required one full acceptance pass: **8,200 module comparisons / 2.07 per new byte**, with research/public command totals 122.631/125.039 seconds. Existing primary exports were checked and reused; one new focused dossier covers representative new ranges. The periodic updater has complete raw instruction/reference evidence but Ghidra did not produce pseudocode for that entry; pseudocode is not the acceptance oracle.

**Measured efficiency improved:** yield is 82.42 bytes per hypothesis versus batch182's69.60 and batch181's76.75; verification overhead fell to 2.07 comparisons per new byte from4.62 and2.15 respectively. Against the original five-batch sample, yield increased from50.95 and overhead decreased from6.48. Reusing the existing trial, family scanner, admission, verification and publication helpers required no new public tooling. Token/cost records and comparable historical timing records remain unavailable; no monetary or token savings are estimated. New scratch work begun during verification is excluded from these totals.

Reproduce with tools/reconstruct.py verify after BUILDING.md setup; check saved focused analysis using tools/dossier.py --check. Keep candidate compilation immediate and collect related matches before the next integration. Do not reopen parked targets without new evidence.
