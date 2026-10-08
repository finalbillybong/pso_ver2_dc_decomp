# Reconstruction workflow

Use `tools/reconstruct.py` for cheap immutable trials and larger integration
batches. Keep the configured compiler and flags unchanged. Only full exact ranges,
including literals and natural padding, may enter the matching manifest.

## Candidate iteration

Consult `config/reconstruction-targets.json` and historical scratch experiments
before proposing a hypothesis. Record the hypothesis, predicted instruction
change, reviewed boundaries, ordinary source and declared dependencies in a trial
specification. The `unit` object uses the existing manifest schema; the remaining
fields are `code`, `hypothesis`, `predicted_change` and `boundary_review`.

```
python3 -B tools/reconstruct.py trial candidate-spec.json --out SCRATCH/unique-trial
python3 -B tools/reconstruct.py summary SCRATCH/trials
```

Each trial retains source/header snapshots, the compiler receipt, a complete-range
comparison, binary hash and timing. Output directories cannot be overwritten.
The summary groups identical compiler outputs, including unsuccessful variants.
Park after two or three unsuccessful hypotheses unless concrete new evidence
justifies more. Ten cumulative unsuccessful hypotheses remains the absolute
limit. Counts persist across sessions. Reproductions are validation, not new
hypotheses or reconstruction gains.

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

Collect roughly 20–50 functions or several KB where practical. After the batch 169
measurement, prefer at least 4 KiB of collected exact candidates before another
full integration where practical; a count of short wrappers alone does not
justify repeated full verification. List the reviewed
trial directories in a JSON plan, then reproduce them twice and admit them together:

```
python3 -B tools/reconstruct.py integrate reviewed-plan.json --out SCRATCH/admission
python3 -B tools/reconstruct.py verify --out SCRATCH/research-verification
```

The integration command refuses existing targets/source paths and checks full
layout before writing the research manifest. Preserve all existing source/header
hashes. Copy only intended public source, headers, tools and metadata to the
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
Commit and push using the authorized repository identity, then verify the remote
commit and checks. These publication steps remain explicit and are not bypassed
by the runner. Continue to the next productive family after each checkpoint.
