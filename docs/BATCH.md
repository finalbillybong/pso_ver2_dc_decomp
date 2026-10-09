# Reconstruction batch: 186: proven reconstruction families

30 new matching functions / 3,668 bytes. All 2168 prior functions preserved.

2198 exact functions in 2122 modules; 172,268 compiled function-range bytes; 0 reconstructed data bytes; 3,990,644 retained reference bytes. Whole-image coverage 4.1382% is not code completion.

| Module | Address | Complete bytes |
| --- | --- | ---: |
| reconstruct_8c0c5a08 | 0x8c0c5a08 | 92 |
| reconstruct_8c0e8a28 | 0x8c0e8a28 | 88 |
| reconstruct_8c103c94 | 0x8c103c94 | 80 |
| start_positioned_view_8c106208 | 0x8c106208 | 148 |
| create_callback_dialog | 0x8c1063fc | 116 |
| initialize_callback_dialog | 0x8c1067ec | 240 |
| start_positioned_view | 0x8c10aab8 | 148 |
| create_callback_dialog_8c11280c | 0x8c11280c | 116 |
| start_positioned_view_8c112b10 | 0x8c112b10 | 148 |
| create_callback_dialog_8c112d0c | 0x8c112d0c | 116 |
| reconstruct_8c137720 | 0x8c137720 | 88 |
| load_record_block | 0x8c1868b4 | 160 |
| load_record_block_8c186954 | 0x8c186954 | 160 |
| reconstruct_8c1974c0 | 0x8c1974c0 | 84 |
| position_indexed_label | 0x8c1994ec | 140 |
| reconstruct_8c1ac5b4 | 0x8c1ac5b4 | 120 |
| reconstruct_8c1c1138 | 0x8c1c1138 | 88 |
| draw_screen_quad | 0x8c1ca744 | 140 |
| create_conditional_menu | 0x8c1d399c | 200 |
| create_conditional_menu_8c1d429c | 0x8c1d429c | 200 |
| create_pair_widget | 0x8c1e3d14 | 88 |
| create_pair_widget_8c1f1880 | 0x8c1f1880 | 88 |
| create_pair_widget_8c218624 | 0x8c218624 | 88 |
| reconstruct_8c21ffb0 | 0x8c21ffb0 | 84 |
| draw_screen_quad_8c221ca0 | 0x8c221ca0 | 140 |
| position_indexed_label_8c22519c | 0x8c22519c | 140 |
| create_pair_widget_8c231e40 | 0x8c231e40 | 88 |
| reconstruct_8c24e0f0 | 0x8c24e0f0 | 84 |
| reconstruct_8c250d24 | 0x8c250d24 | 108 |
| create_pair_widget_8c255c08 | 0x8c255c08 | 88 |

This batch adds **30 complete exact functions / 3,668 compiled function-range bytes in30 modules**, preserving all2,168 prior functions and source/header hashes. Totals:2,198 functions /2,122 modules /172,268 compiled function-range bytes /zero separately reconstructed static-data bytes /3,990,644 retained reference bytes. Whole-image coverage is 4.1382%; it is not code-completion percentage. The code-only denominator remains unknown.

Ten previously overlooked cleanup, destructor and rendering candidates supplied916 bytes. Five pair-widget constructors add440 bytes; two conditional menus400; two indexed labels280; two record loaders320; two screen quads280; three positioned-view starters444; three callback-dialog factories348; their constructor240. Complete bodies, own literal pools, natural alignment, adjacent entries and changed operands were reviewed. Initial callee inspection preceded admission, but later dispatcher inspection exposed a callback signature error. One ignored return declaration was corrected from void to pointer after inspecting the configure helper; the compiled bytes stayed identical and the extra trial is counted. The dispatcher also proves acceptance receives a parent while cancellation takes no arguments. Four callback declarations were corrected after the first acceptance pass, requiring eight extra admission reproductions and a second full acceptance pass. All outputs stayed identical; both passes and every correction are counted. Checked provisional prefixes and existing header dependencies are retained. Skipped initialization, unchecked allocation paths, repeated radius operations and original field-store order remain intact.

There were **54 distinct hypotheses /56 compiler attempts /two link errors /seven duplicate outputs**, totaling1.717 compiler seconds. Both errors were missing bindings, corrected without new source hypotheses. Five duplicates are corrected declarations (one pointer result and four callbacks); two are unsuccessful source variants (native C++ motion members and captured menu labels). Ten unresolved targets are parked after one to three hypotheses with persistent counts and exact blockers. The tiered initializer improves to492/12 differences and the record-taking version540/9, but neither is admitted. The primary045f04 and05fbf8 targets remain unchanged and incomplete. Investigation receives zero matching-byte credit.

The bounded tooling correction addresses an observed false negative: the existing template screen rejected catalog entries whose reported size spans several genuine functions. A scratch-only policy now permits those entries when their fixed instructions, own literal pool, entry references and adjacent boundary are independently reviewed. Its first scan found19 template hits covering ten distinct functions; all ten compiled exactly on their first attempt. Existing trial, grouping, admission, progress and publication tools were reused. Later scans used only newly proved templates. The scratch report helper now accepts an explicit focused-receipt list, retaining original exports while selecting their validated input-rebound receipts after source corrections. This removes manual receipt-path rewriting. No public tooling, compiler version, flags or acceptance/privacy checks changed.

| Parked target | Hypotheses | Best saved generated / expected bytes | Differing bytes | First difference |
| --- | ---: | ---: | ---: | --- |
| initialize_actor_motion (0x8c1ebb98) | 2 | 308 / 312 | 248 | 0x8c1ebb9e |
| open_global_choice_menu (0x8c016f50) | 1 | 192 / 192 | 26 | 0x8c016f76 |
| load_indexed_record_block (0x8c1861cc) | 1 | 396 / 400 | 349 | 0x8c1861dc |
| load_record_groups (0x8c1860ac) | 2 | 144 / 144 | 29 | 0x8c1860b5 |
| create_three_choice_menu (0x8c1d3bc8) | 2 | 172 / 172 | 26 | 0x8c1d3bf6 |
| send_record_notice (0x8c05406c) | 3 | 128 / 128 | 7 | 0x8c05409b |
| advance_pursuit_vector (0x8c1e9b10) | 2 | 308 / 308 | 110 | 0x8c1e9b16 |
| choose_distant_actor_position (0x8c1b1884) | 3 | 340 / 340 | 44 | 0x8c1b194f |
| initialize_tiered_effect (0x8c0afe6c) | 2 | 492 / 492 | 12 | 0x8c0afe9f |
| initialize_tiered_effect_from_records (0x8c0b0058) | 1 | 540 / 540 | 9 | 0x8c0b0091 |

All30 modules reproduced twice before admission; four corrected modules reproduced twice again (68 total reproductions). **Two fresh exact builds in each checkout**, integrated-image comparisons, both five-function proofs, **all121 current tests** (58 research,63 public) in both passes (242 test executions), and source-only rejection/artifact-preservation checks passed. Two acceptance passes used **16,976 module comparisons /4.63 per new byte**, with cumulative research/public command totals251.653/256.528 seconds. Unchanged primary exports were checked and reused; one new focused dossier covers eight representative entries.

**Efficiency regressed against batch185:** yield fell from103.90 to67.93 bytes per hypothesis, and verification overhead rose from2.01 to4.63 comparisons per new byte. Both remain better than the original sampled baseline's50.95 bytes per hypothesis and6.48 comparisons per byte. Token/cost records and comparable historical timings remain unavailable; no overall token or monetary saving is claimed. The catalog correction was productive, but that does not establish a completed-batch efficiency improvement. A late callback correction repeated the avoidable verification cost observed in batch182; explicitly inspect indirect call sites as well as direct callee bodies before integrating new callback fields.

Change the next collection accordingly: follow the newly exact dialog constructor, resource-loading and geometry families, and screen each proved template before unfamiliar source work. Inspect callback dispatch sites before admission, not merely callback bodies. Avoid menu scheduling and float-lifetime spelling variants without new evidence. Collect at least5 KiB before the next full integration where practical; do not repeat a smaller integration merely on reaching20 functions. Keep the persistent two-or-three-hypothesis parking rule. Continue independent reconstruction after publication.

Reproduce with tools/reconstruct.py verify after BUILDING.md setup; validate focused receipts with tools/dossier.py --check. Saved admission plans, source snapshots, compiler receipts, binary groups, screening policies and failed-hypothesis records preserve reproducible commands. Original data, private saves and the research index remain untouched; only reviewed public source and metadata are published.
