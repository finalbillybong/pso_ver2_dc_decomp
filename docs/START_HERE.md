# Current reconstruction checkpoint

The current public checkpoint has **2240 exact functions in 2164 modules**, replacing
**183,012 bytes** of the 4,162,912-byte decoded executable (**4.3962% image coverage**).
It retains **3,979,900 reference bytes** and has no separately reconstructed static
data. This is a hybrid build; code-only completion and total function count are
unknown. See [PROGRESS.md](PROGRESS.md) for source-bound verification and
[BUILDING.md](BUILDING.md) to configure a new checkout with your own game dump.

## Parked unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04`, `0x8c045f04` | 512 bytes | 30 differing; first `0x8c045fdd` | Two angle conversions; radius and virtual dispatch regions match |
| `emit_5fbf8`, `0x8c05fbf8` | 388 bytes | 8 differing; first `0x8c05fc56` | Loop ordering and final-call scheduling |
| `emit_or_update_slot`, `0x8c05fd7c` | 448 bytes | 4 differing; first `0x8c05feba` | Shared final-call scheduling |
| `initialize_effect_manager`, `0x8c0a7db8` | 280 bytes | 8 differing; first `0x8c0a7e6e` | Five-argument text-buffer call; resource-copy loop matches |
| `signed_remainder`, `0x8c18e8a0` | 180 bytes | No complete match | Incoming R0/carry, register preservation and zero-divisor behavior |

The authoritative queue is `config/reconstruction-targets.json`; unmatched
sources remain in `src/provisional`. Both original primary targets remain parked
and incomplete. Their original objective has not been achieved; their recorded
blockers and revisit conditions still apply. Resolving them is not a prerequisite
for broader reconstruction work. Preserve repeated radius squaring and skipped vector
initialization as observed; do not introduce speculative behavior fixes.

Other private scratch blockers include effect update 536/25, effect advance
800/46, shared-base initialization 200 versus 196 expected with 170 differences,
and a position setter producing 30 versus 32 bytes. Missing alignment gets no
credit. Check every proposed range against existing modules before integration.

## Latest integration batch: 188: parallel family continuation

22 admitted functions / 5,424 bytes, including 3,360 new bytes and 2,064 carried bytes. See [BATCH.md](BATCH.md) for measured gains, investigation-only work and verification.

## Autonomous iteration

The active priority is project-wide verified-byte throughput. See
[THROUGHPUT.md](THROUGHPUT.md) for the bounded demonstration and
[RECONSTRUCTION_WORKFLOW.md](RECONSTRUCTION_WORKFLOW.md) for enforced history,
diagnostics and reporting. Global code-completion percentage remains unknown.

Inspect → implement → compile → compare → collect → verify.
Publication of the verified batch 188 checkpoint was explicitly authorized after review.
Prioritize credible exact-match opportunities. Record each distinct hypothesis
and its predicted instruction change; consult history and group identical outputs.
Park after two unsuccessful hypotheses without improvement; a third requires
referenced actionable evidence. Park after the third failure, and never exceed
ten lifetime unsuccessful hypotheses. Reopening requires a new observation
addressing the recorded blocker. Record its precise blocker and evidence-based revisit condition.
Counts persist across sessions. Prior parked targets remain parked; this policy
does not reset their history. Continue to another productive target after each
checkpoint. Publish only reviewed public source and sanitized receipts; preserve
the separate research workspace, original data and private saves.

## Compiler and acceptance rules

Keep the pinned CodeWarrior compiler and base optimization settings. C++ is
allowed when explicitly declared with `"language": "c++"`; it adds only
`-lang c++`. All functions must match their complete range, including literals,
jump tables and padding. No assembly substitutions, copied runtime objects,
reference-informed output patches or shortened comparison ranges are admitted.

GNU remains the default linker. A module can explicitly declare
`"linker": "codewarrior"` for the already-pinned native linker's handling of
compiler RELA addends. Metadata stripping must leave all code/literal bytes
unchanged, and the same strict final ELF and full-range checks apply. Stage 38
records the 123-module native compatibility test and negative checks. Compiler
flags are identical for both link paths.

## Iteration commands

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py
python3 -B tools/verify_source.py
python3 -B tools/progress.py --record
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --check
python3 -B tools/project.py build --source-only
python3 -B tools/check_publication.py
```

The source-only command is expected to reject the current gaps. Record progress
after fresh exact verification and before tests of the source-bound public
checkpoint. Admit only full matches, update queue status explicitly, and preserve
source snapshots, hypotheses and compiler/comparison receipts for each experiment.
Focused Ghidra exports use a disposable database copy and are reused while their
inputs remain current. Raw instructions, delay slots, literals and adjacent
entries establish boundaries; pseudocode alone does not.

Keep serial/access keys, saves, runtime settings, captures and game/tool binaries
out of publication. Check the staged allowlist and redacted history scan before
pushing, then verify CI for the exact commit. Gameplay, disc repacking and
analysis-tool integration are outside the reconstruction loop. Continue from
verified checkpoints; they are progress records, not requests to stop.

## Verified parallel continuation

The full 22-candidate / 5,424-byte collection is now admitted and verified in both checkouts, including 3,360 newly reconstructed bytes. The new baseline is 183,012 bytes / 2,240 functions. All old sources/headers remain unchanged. Four fresh builds, both integrated images and five-function proofs, 81 research tests, 86 public tests and both source-only artifact guards passed.

Continue proven contact/vector compositions; do not reopen the parked selection update (1024/12), region constructors (404/6 and 252/10) or actor motion (524/70) without new evidence. The actor third hypothesis duplicated its second output. The 1,700-byte selection activation and 544-byte actor sibling remain untried. Original primary targets remain incomplete. The demonstration has used 35/40 hypotheses and all 10/10 selection/view hypotheses; do not reset its budget or historical counts. The verified batch 188 checkpoint is authorized for publication; this does not reset the trial budget.

See [THROUGHPUT.md](THROUGHPUT.md) and [BATCH.md](BATCH.md). Private inventory, sources, failed-target counts, timings and receipts remain under `reconstruction-throughput-continuation`.
