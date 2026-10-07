# Contributing

Read [BUILDING.md](docs/BUILDING.md) and [START_HERE.md](docs/START_HERE.md).
Pick a target from `config/reconstruction-targets.json`; preserve existing matches.

1. Review raw instructions, boundaries, delay slots, literals and callers.
2. Keep each source-level hypothesis, source snapshot, compiler receipt and exact
   comparison in your private scratch directory. Consult prior failed hypotheses.
3. Keep provisional names and offset-checked types. Declare header dependencies in
   the unit manifest so changes invalidate its evidence.
4. Admit a function only after its complete range matches under the fixed compiler
   and flags. Update the matching manifest and unresolved queue explicitly.
5. Run two fresh builds and the five-function proof with `tools/verify_source.py`,
   run the test suite, and confirm `--source-only` still rejects any remaining gaps.
6. Refresh public progress with `python3 -B tools/progress.py --record`, then run
   `python3 -B tools/progress.py --check` and `python3 -B tools/check_publication.py`.

No inline assembly, embedded instruction bytes, copied runtime objects, binary
patches or normalized comparisons count as source matches. Preserve observed
behavior until there is evidence for an intentional change. Keep scratch-only
compiler or language diagnostics out of admitted build settings.

A PR should describe the function's behavior, reviewed range, compiler/settings,
exact results, dependency changes and verification. A near match remains provisional
and earns no completed-byte credit. Supporting matches do not close unrelated targets.

Never attach game dumps, SDK/compiler binaries, credentials, emulator configuration,
VMU saves, screenshots of registration screens, or raw private logs to commits,
issues, PRs or Actions artifacts. The publication check is an additional safeguard;
review staged content and metadata before pushing.
