# Non-matching draft archive

This directory holds the closest **non-matching** C/C++ draft found so far for functions
that are not yet matched. It is reading, modding and porting material: a functionally close
source tree for code that the build still takes from generated assembly (the
`not_decompiled` fallback units, see [ASM.md](../docs/ASM.md)).

**Nothing here matches, and nothing here is built.**

The archive currently holds 2,386 drafts: 1,578 hand passes (282 of them with behaviour
fixes from review) and 808 generator drafts. 1,658 of them compile to exactly the reference
size, and 422 belong to a class that has a shared header. 393 carry a runtime verdict from
emulator A/B runs (378 equal, 3 suspect, 10 diverged, 2 unverified replacements); 1,993 were
not reached by any scenario. See [Runtime verdicts](#runtime-verdicts).

- No file in this directory is compiled by `tools/project.py`, `tools/verify_source.py` or
  any other build step. The build reads `config/project.json` only, and no draft appears there.
- No draft is admitted, and none counts toward any figure: matching functions, code-range
  coverage, image coverage, source-buildable bytes or progress history. `tools/progress.py`
  does not read this directory or `config/nonmatching.json`.
- The same address is still built from its fallback assembly unit. A draft is a reading of
  that code, not a replacement for it.
- A draft is **not proven equivalent** to the original. Generator drafts are inferred from
  the listing, so callee signatures, types and control flow may be wrong. Hand-revised
  drafts have had a review pass, but they can still differ in behaviour. Check against the
  listing before relying on one.

## Layout

`nonmatching/<area>/<name>_<address>.c` (or `.cpp`), the same naming as `src/`. Function
and callee identifiers use the applied names from `config/names.json` (the canonical
`<name>_<address>` form that `tools/rename.py` writes). A function with no applied name is
called `operation_<address>`. `config/nonmatching.json` lists every draft with its
address, file, metrics, provenance and the symbol bindings (identifier to address) that
its callees and globals need.

## The per-file header

Every file starts with a comment block in this form:

```c
/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0102e4
 * function: operation_8c0102e4
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 172 of 178 reference instruction lines
 * differing bytes: 311
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: ...
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * class header: src/include/classes/TObjCollision.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
```

- **reference size** is the function's complete range (body, literals and padding).
  **compiled size** is what the pinned compiler produced for the draft.
- **differing lines** counts instruction lines that differ from the reference listing in a
  line diff, with literal-pool addresses masked. **differing bytes** counts differing bytes
  over the complete range.
- **provenance** is `generator draft (mode ...)` for an automated draft (the mode names the
  generator variant that produced the closest result), or `hand pass on a generator draft`
  for a hand revision. `(behaviour reviewed)` means that a review found and fixed behaviour
  defects in the generator draft, such as lost stores, invented arguments or a garbled loop.
  `address casts converted to prototypes` means that calls written as casts of raw
  addresses were rewritten as calls to extern prototypes bound by address.
- **known gaps** lists what is known to be different or unverified.
- **runtime** appears only when the draft has been run in an emulator A/B test; see
  [Runtime verdicts](#runtime-verdicts).
- **class header** appears only when the function belongs to a class that has a shared
  header in `src/include/classes/` (matched by the `<Class>_` prefix of its name). It is a
  pointer for modders. The draft still declares its own local structs, because its code
  was compiled and measured with them. Switching a draft to the shared header is part of
  promoting it, and it must still compile afterwards.

## Quality gate

A draft enters the archive only if all of these hold:

- it compiles with the pinned compiler and flags;
- its compiled size is within 25% of the reference size;
- it has no `/* TODO` holes and no `/* ? r3 */`-style register or value holes;
- it uses none of the code-generation steering forms `if (0)`, `if (1)`, `while (0)`,
  `do {} while (0)` or `(v >= 0 ? v : v)`.

If several drafts pass, the one with the fewest differing lines is kept. A hand revision is
preferred when it is at least as close. When a review found behaviour defects in the
generator draft, only the fixed hand revision is eligible. Exact drafts are not archived,
because they belong in the matching pipeline. A function that already has an admitted unit
is never archived.

## Runtime verdicts

Some drafts have been run in the Flycast emulator against the original. Each run is an A/B
test: the same scenario is played twice from the same start, once with the original code
and once with the draft compiled and placed in the running image instead of the original
function. Four scripted scenarios are used: `boot+title+opening movie`,
`menu to registration screen`, `offline start: new character to Pioneer 2`, and
`offline start: Pioneer 2 office walk and NPC dialogue`. The test compares three things:

- **RAM**: full memory dumps at fixed frames, outside the draft's own code block, with
  known timing noise masked;
- **trace**: the per-frame execution trace;
- **I/O**: a sample of the function's calls: the arguments, return values and preserved
  registers of the first 8 calls and then of calls 8, 12, 18, 27, ... (each index 1.5 times
  the last, up to 32 records), plus the total call count and a checksum over every call.

The verdict for each draft is recorded in the optional `runtime` field of
`config/nonmatching.json` and in a matching `runtime:` header line:

| Verdict | Header line | Meaning |
| --- | --- | --- |
| `equal` | `runtime: equal on <scenarios> (emulator A/B: RAM, trace and sampled call I/O); not proof` | No difference was seen in the scenarios that called the draft. |
| `suspect` | `runtime: suspect on <scenarios> (<n> bytes differ, I/O equal); not proof` | Calls matched, but a few RAM bytes differed, such as stack scratch or buffers. |
| `diverged` | `runtime: DIVERGED on <scenarios> (<first divergence>); known incorrect` | The draft behaves differently: a different return value or call count, RAM changes outside timing noise, or a crash. |
| `unverified` | `runtime: unverified; replaces a draft that DIVERGED on <scenarios>; not yet run` | The previous draft diverged, and this next-best draft passing the gate replaced it. It has not been run. |

The scenarios listed are those in which that verdict was observed; a draft may be equal in
other scenarios. A draft that no scenario reached has no `runtime` line. What this does
**not** show:

- An `equal` verdict covers only the paths those scenarios took, and only the sampled calls
  are compared argument by argument (the rest only through the count and checksum). It is
  evidence, not proof of equivalence.
- Unexercised branches, other game modes, online play and save-file paths are not tested.
- A verdict belongs to the exact draft that was run. If a draft is replaced, its `runtime`
  field must be removed or re-measured. Renames do not affect it.

A diverged draft stays in the archive only when no other draft passes the gate. It is kept
as a reading aid, and its header says it is known to be incorrect.

The emulator tooling, scenario inputs, memory dumps, traces, screenshots and receipts are
local-only. They come from your own dump and registration and are never committed. Only the
per-draft verdict is in this repository.

## Checking and regenerating

```sh
python3 -B tools/nonmatching.py check                  # also run by the unit tests
python3 -B tools/nonmatching.py regenerate --dry-run
python3 -B tools/nonmatching.py regenerate --prune-admitted
```

`check` confirms that the manifest and the files agree, that every header is complete,
that the quality gate holds, that every bound symbol still appears in its file, that every
`runtime` record is well formed and agrees with its header line, and that no
draft overlaps an admitted unit. After a batch admits functions, `regenerate
--prune-admitted` deletes the drafts those units replaced. After `config/names.json` changes,
`regenerate` applies the new names to function and callee identifiers (renaming files to
match), adds or removes the `class header:` line, rewrites the `runtime:` line from the
manifest's `runtime` record (which it preserves), and rebuilds the manifest from the headers.

## Promoting a draft into `src/`

A draft earns credit only by going through the normal matching pipeline in
[CONTRIBUTING.md](../CONTRIBUTING.md):

1. Copy the file into `src/<area>/` and delete the header comment. Remove the draft's entry
   from `config/nonmatching.json`, or delete the archived file and run `regenerate`.
2. Add a unit to `config/project.json` for the complete range, with the function's
   address and size, the `symbols` bindings from the manifest entry, `"language": "c++"`
   for a `.cpp` draft, and the boundary review.
3. Iterate until the complete range matches byte for byte under the pinned compiler and
   flags. A near match stays out of `src/`.
4. Run both fresh builds and `tools/verify_source.py`, then the tests,
   `tools/progress.py --record` / `--check` and `tools/check_publication.py`, exactly as for
   any admission. The build re-cuts the fallback assembly around the newly admitted unit
   automatically.

## Figures are unaffected

The archive adds no bytes, functions or modules to any figure. The progress proof
(`config/progress-proof.json`) does not list it as an input, and the build, the
source-only image and the history are identical with or without this directory.
