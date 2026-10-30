# Typed static data

Static data outside function ranges can be admitted as **typed data modules**.
They are listed in `config/data.json`, live in `src/data/*.c`, and are built,
compared and accounted separately from code modules.

## What counts

Only typed source counts:

| Kind | Source form | Rule |
| --- | --- | --- |
| `vtable` | `VirtualFunction const vt_<addr>[N] = { 0, 0, name, ... };` | Header words are the CodeWarrior type-information pointer and this-adjustment (both zero in this build). Every other entry is `0` or a declared function. |
| `string` | `const char str_<addr>[N] = "..." "...";` | Only C string literals. Several strings in one object are written as separate literals ending in `\0`; trailing zero padding comes from the array size. |

Raw byte, halfword or word arrays, opaque or high-entropy data (including the
embedded file at `8c28ad54`), and pointers written as integers earn no credit and
are not accepted as data modules. Further kinds (pointer tables whose entries are
symbols, float/integer tables with real element types, records with checked
structure layouts) need their own lint and object checks before admission.

Vtable trailing zero words after the last nonzero slot are not evidently part of
the table; they stay reference-backed.

## Manifest

Each module describes one complete contiguous range:

```json
{"id": "vtables_8c260f70", "source": "src/data/vtables_8c260f70.c",
 "address": "0x8c260f70", "ranges": [{"offset": 2428784, "size": 28}],
 "symbols": {"_destroy_object_8c0111d0": "0x8c0111d0", "_hierarchy_output": "0x8c033470"},
 "objects": [{"name": "vt_8c260f70", "address": "0x8c260f70", "size": 28, "kind": "vtable"}],
 "reference_sha256": "..."}
```

`objects` must tile the range exactly in address order. `symbols` binds each
declared function to its address (`--defsym`), exactly as code modules bind
their externs. Data modules use the pinned C settings, the default GNU linker
and no per-module flags; no RTTI or C++ setting is involved because the tables
are written as C arrays.

`data_extent.bytes` records the denominator of the data figure: an analysis
estimate of the bytes outside listed instructions, admitted function ranges,
unmatched candidate code ranges and code-loaded literal slots. It is not a
recovered section size.

## Verification chain

`tools/project.py build` (and therefore `tools/verify_source.py`) does, for each
data module, after all code modules:

1. `tools/data.py` lint: the source contains only the typedef, `extern void
   name(void);` declarations and the typed definitions above, in manifest order
   and size. No preprocessor directives, character constants or other statements.
2. Compile with the pinned compiler and flags; the relocatable object must have
   exactly one allocated section, `.rodata`.
3. Object check: each manifest object is a symbol at its declared offset and size;
   every nonzero word of a `vtable` is produced by an `R_SH_DIR32` relocation
   against a named symbol (no bare integers); no relocation falls inside a string.
4. Link with the pinned GNU linker at the module address with the bound symbols;
   exactly one allocated `.rodata` section at that address, no remaining relocations.
5. Compare the raw section with the complete reference range; the integrated
   image (code modules, data modules and the remaining reference bytes) must equal
   the pinned decoded executable.

Receipts record the compiler object, output and source hashes. The build
provenance covers `config/data.json`, `tools/data.py` and every data source, so
`progress.py --check` in CI rejects a checkpoint whose data inputs changed, and
it re-runs the manifest and source lint without the compiler.
`python3 -B tools/data.py lint` runs the same compiler-free checks locally.

## Progress figures

* **Code-range coverage**: compiled function ranges / decoded image (unchanged).
* **Typed data**: typed data bytes / recorded static-data extent.
* **Image coverage**: (compiled function ranges + typed data bytes) / decoded image.

Retained reference bytes are the decoded image minus both.
