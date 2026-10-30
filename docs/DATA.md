# Typed static data

Static data outside function ranges can be admitted as **typed data modules**.
They are listed in `config/data.json`, live in `src/data/*.c`, and are built,
compared and accounted separately from code modules.

## What counts

Only typed source counts:

| Kind | Source form | Rule |
| --- | --- | --- |
| `vtable` | `VirtualFunction const vt_<addr>[N] = { 0, 0, name, ... };` | Header words are the CodeWarrior type-information pointer and this-adjustment (both zero in this build). Every other entry is `0` or a declared function. |
| `string` | `const char str_<addr>[N] = "...";` | Only C string literals, one object per string. CodeWarrior gives char arrays byte alignment and a section each, so back-to-back strings are separate objects; the terminator and any zero padding come from the array size. |

### Virtual-table slots

A slot names the admitted function at that address by its manifest name (for
example `destroy_object_8c0111d0`). A slot whose function is not admitted yet is
declared as `extern void fn_<addr>(void);` and bound to that address. It is still a
named symbol, not an integer, and the object check requires a relocation for it.
Before generation, every `fn_<addr>` target was checked to be a real code entry
point. Acceptable evidence is one of:

* a reconstruction target;
* a Ghidra function start;
* a listed instruction that follows a return/branch delay slot, a literal pool or padding;
* for three addresses that the listing did not decode (`8c18d2e4`, `8c18dde0` and
  `8c18ddf4`), a register-save prologue reviewed by hand.

When such a function is admitted, its slot can be renamed to the manifest name
without changing any bytes.

All 1,119 virtual tables in the image are reconstructed (125,976 bytes).

### Strings

Every string from the static-data map is reconstructed except doubtful ones, which
stay reference-backed (587 bytes):

* bytes outside printable ASCII, tab, newline and carriage return (`0x80` and above
  are floats or code, for example `\315\314L?` = 0.8f);
* whitespace-only or single-character strings outside the main data region;
* strings of four characters or fewer without word or format evidence;
* runs of four or more one-character strings at a 2-byte stride, which are more
  likely halfword tables.

The last string before a code range keeps only its terminator, so code alignment
is not claimed as data. Shift-JIS text is not included yet.

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
