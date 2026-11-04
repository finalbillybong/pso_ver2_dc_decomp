# Non-matching draft archive

This directory holds the closest **non-matching** C/C++ draft found so far for functions
that are not yet matched. It is reading, modding and porting material: a functionally close
source tree for code that the build still takes from generated assembly (the
`not_decompiled` fallback units, see [ASM.md](../docs/ASM.md)).

**Nothing here matches, and nothing here is built.**

The archive currently holds 2,451 drafts: 1,613 hand passes (289 of them with behaviour
fixes from review) and 838 generator drafts. 1,685 of them compile to exactly the reference
size, and 433 belong to a class that has a shared header.

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
- **class header** appears only when the function belongs to a class that has a shared
  header in `src/include/classes/` (matched by the `<Class>_` prefix of its name). It is a
  pointer for modders. The draft still declares its own local structs, because its code
  was compiled and measured with them. Switching a draft to the shared header is part of
  promoting it, and it must still compile afterwards.

## Quality gate

A draft enters the archive only if all of these hold:

- it compiles with the pinned compiler and flags;
- its compiled size is within 25% of the reference size;
- it has no `/* TODO` holes;
- it uses none of the code-generation steering forms `if (0)`, `if (1)`, `while (0)`,
  `do {} while (0)` or `(v >= 0 ? v : v)`.

If several drafts pass, the one with the fewest differing lines is kept. A hand revision is
preferred when it is at least as close. When a review found behaviour defects in the
generator draft, only the fixed hand revision is eligible. Exact drafts are not archived,
because they belong in the matching pipeline. A function that already has an admitted unit
is never archived.

## Checking and regenerating

```sh
python3 -B tools/nonmatching.py check                  # also run by the unit tests
python3 -B tools/nonmatching.py regenerate --dry-run
python3 -B tools/nonmatching.py regenerate --prune-admitted
```

`check` confirms that the manifest and the files agree, that every header is complete,
that the quality gate holds, that every bound symbol still appears in its file, and that no
draft overlaps an admitted unit. After a batch admits functions, `regenerate
--prune-admitted` deletes the drafts those units replaced. After `config/names.json` changes,
`regenerate` applies the new names to function and callee identifiers (renaming files to
match), adds or removes the `class header:` line, and rebuilds the manifest from the headers.

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
