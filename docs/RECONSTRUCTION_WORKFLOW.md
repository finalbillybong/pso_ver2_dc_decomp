# Reconstruction workflow

Use `tools/reconstruct.py` for cheap immutable trials and larger integration
batches. Keep the configured compiler and flags unchanged. Only full exact ranges,
including literals and natural padding, may enter the matching manifest.

## Candidate iteration

Consult `config/reconstruction-targets.json` and historical scratch experiments
before proposing a hypothesis. Record the hypothesis, predicted instruction
change, reviewed boundaries, ordinary source and declared dependencies in a trial
specification. The `unit` object uses the existing manifest schema; the remaining
fields are `code`, a stable `hypothesis_id`, `hypothesis`, `predicted_change`
and `boundary_review`. Optional `classification` spans contain `offset`, `size`,
`kind` (instructions/literals/tables/padding/unknown) and reviewed `evidence`.
Missing classifications remain unknown. The compiler and complete-range byte
comparison remain unchanged.

```
python3 -B tools/reconstruct.py trial candidate-spec.json --out SCRATCH/unique-trial
python3 -B tools/reconstruct.py summary SCRATCH/trials
```

Each trial retains source/header snapshots, compiler inputs, full artifact hashes,
complete-range comparison and timing. Output directories cannot be overwritten.
History lives in the configured private scratch root's `reconstruction-history.json`.
It is keyed by whole-reference SHA256 and entry address, independent of target name.
Use one writer per history index. Checkouts sharing a reference can set the same
private `reconstruction_history` path in `local.json`. Import other checkout/session
evidence explicitly:

```
python3 -B tools/reconstruct.py index-history --root SCRATCH --root OTHER_SCRATCH
```

Indexing preserves original receipts. Reindex after external experiments or queue
changes; do not delete history to start a session. Legacy count uncertainty blocks
new experimentation pending a referenced reconciliation, rather than assuming zero.
Legacy input reuse validates recorded source/dependency hashes, flags, bindings and
pinned installation; the current adapter is bound at import because old receipts
lack its historical hash. Such reuse is never an admission proof.

An identical previously tested input returns its existing receipt without compiling.
Source, dependency, tool, flags, binding or range changes invalidate this reuse.
`kind: correction` requires `correction_of` and `correction_evidence`; it counts as
an attempt, not a new hypothesis. Admission uses `kind: reproduction` internally
and always compiles afresh. All attempts, including errors, are retained.

Park after two unsuccessful hypotheses without improvement. A third requires
`third_evidence`; always park after the third failure. Ten lifetime unsuccessful
hypotheses is the absolute limit. Reopening uses `reopen_evidence`, with a new
observation addressing the recorded blocker. Evidence objects contain a private
file `path`, its `sha256`, `observation`, `addresses_blocker` and `blocker_sha256`.
The blocker hash is SHA256 of the recorded blocker text. Reusing an observation or
restating the hypothesis does not reopen a target. `history_review` uses the same
schema plus a reconciled `unsuccessful_hypotheses` count.

Unsuccessful compiled outputs automatically receive compact disassembly diagnostics:
at most five groups, six instructions per side per group. Full diagnostics remain
in scratch. Registers, immediates, calls, instruction counts and delay slots remain
visible. Reference classification is reviewed; generated code uses a conservative
direct-flow/PC-load walk unless separately reviewed spans are supplied in
`actual_classification`. Indirect destinations and unclassified bytes stay unknown.
Diagnostic address alignment never changes exact acceptance. Identical complete
outputs are grouped across sessions, with failed duplicates, matching siblings and
ABI corrections reported separately.

For a bounded collection, include `batch: {"id": "NAME", "family": "FAMILY",
"initial_family": "FIRST"}` in every new trial. The index enforces at most 40 new
hypotheses, ten for the initial family and three families. Budget limits are caps,
not quotas: stop an unproductive line without spending the remainder on variations.
Review callees, indirect dispatch and field layouts before expansion. Expand siblings
only after a complete representative match; cache screens against reference,
catalog, boundaries, source/receipt, policy, prior-address and scanner inputs.
Do not rerun unchanged negative legacy screens merely to create a new receipt.

## Proven patterns

```
python3 -B tools/reconstruct.py destructors --out SCRATCH/destructor-trials
```

The initial generator recognizes the previously matched 68-byte destructor shape.
It requires every instruction, delay slot and natural padding byte to have the
proved structure, extracts four observed address literals, and generates ordinary
C from the admitted source template. It never substitutes assembled bytes or
runtime objects. Historical and queued targets are skipped automatically.

The next entry must appear in the function catalog, or its boundary must have been
reviewed explicitly and supplied as a JSON address list with `--boundaries`.
That list can also include entries omitted from the catalog; independently
confirm their entry references and complete boundaries before generating them.
Review the shared instruction shape, every extracted dispatch/base/allocator
reference, and adjacent entry evidence before admission. Pattern recognition is a
candidate generator; recompilation and full comparison remain mandatory.

## Integration and verification

Collect at least **5,120 exact bytes** before integration. Prefer larger related
routines and include small helpers only when they support the subsystem. Carried
candidates count toward this threshold but not new experimental yield. If the
bounded investigation falls short, preserve the candidates and report the
shortfall; do not perform a small integration to create a checkpoint. List reviewed
trial directories in a JSON plan, then reproduce them twice and admit them together:

```
python3 -B tools/reconstruct.py integrate reviewed-plan.json --out SCRATCH/admission
python3 -B tools/reconstruct.py verify --out SCRATCH/research-verification
```

The integration command refuses existing matching targets and source paths and
checks full layout before writing the research manifest. A parked target may be
resolved only with referenced `reopen_evidence` (or structured `revisit_evidence`)
and unchanged entry address, function extents, complete ranges and reference hash.
Queue lookup uses the entry address, so renaming cannot discard parked history. Its full previous queue record, including failed
hypothesis counts, is preserved under `previous_target`; the new evidence is
recorded beside it. Existing provisional source remains unchanged. Preserve all
existing source/header hashes. Copy only intended public source, headers, tools and metadata to the
separate public checkout, then run its own `verify` command. Verification calls
the existing two-build/image/proof tools and all current tests, records timings,
updates public progress, and checks source-only rejection without changing build
artifacts. Run additional checks only after relevant changes or failures.

For unchanged analysis ranges, reuse an existing focused export:

```
python3 -B tools/reconstruct.py reuse-evidence OLD_RECEIPT --out NEW_RECEIPT
```

Only unrelated manifest/queue hashes are rebound. Requested ranges and the entire
reference must be unchanged; the original exporter, all analysis tools, every
artifact and the original database are still verified by `dossier.py`. The new
receipt preserves the original receipt and its hash. Export only newly requested
or changed ranges with the existing dossier tool.

After verification, `reconstruct.py report` generates the current batch table and
summary numbers from the manifest and verification receipt. Supply the published
baseline manifest and reviewed findings; do not count investigation or tooling
as reconstructed bytes. Keep data gains separate and report whole-image coverage
as distinct from code completion.

Before every publication, review the exact staged diff, stage an explicit file
list, run the public allowlist and redacted secret/history scans, and verify that
no credentials, serial/access keys, saves or proprietary binaries are included.
The trial kept changes local until verification and review. The user subsequently
authorized publication of batch 188. These publication steps remain explicit and
are not bypassed by the runner. Continue to the next productive family after each checkpoint.

## Measured demonstration

The verified batch 188 baseline is 2,240 functions / 183,012 bytes / zero separate-data bytes. Preserve it until a later qualifying integration passes. The demonstration began at 2,218 functions / 177,588 bytes; its six corrected carried candidates totaled 1,432 bytes and were admitted with the 5,424-byte collection. Report admitted bytes, unintegrated bytes, new hypotheses/attempts,
corrections, errors, duplicate categories and verification overhead separately.
`summary.json` includes these receipt-derived measurements; `measured_report`
accepts carried and admitted reference/address keys for combined collections.
Attributable token measurements are null when unavailable; observed aggregate goal
counters are separate and cannot establish batch cost. Tooling work receives no
reconstruction-byte credit. Compare against completed batches 178–187 and 187
separately, explaining the difference between collected and admitted bytes.

Use `classification_audit` for each reviewed range and `audit_subsystem` for the
bounded subsystem. These reject overlaps and reconcile instruction, literal/table,
natural padding and unknown bytes. They do not establish a global code denominator.
Keep complete-range matching as the sole admission gate.
