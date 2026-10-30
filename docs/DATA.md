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
| `function_table` | `Function const d_<addr>[N] = { name, 0, ... };` | Entries are `0` or declared functions. |
| `pointer_table` | `const void *const d_<addr>[N] = { str_..., (void *)name, d_..., 0 };` | Entries are `0`, a declared function cast to `void *`, a declared data object (`vt_`, `str_` or `d_`) at its start, or an external `g_<addr>` (see below). |
| `float_table` | `const float d_<addr>[N] = { 1.5f, -0.0f, ... };` | Decimal literals with enough digits to round-trip to the exact bits. NaN, infinity and denormals are not accepted. |
| `int_table` | `const int` or `const unsigned int d_<addr>[N]` | Integer literals within the element type's range. |
| `int16_table` | `const short` or `const unsigned short d_<addr>[N]` | As above. |
| `byte_table` | `const unsigned char` or `const signed char d_<addr>[N]` | Small-integer tables only (see below). |
| `record_table` | `const Record_<addr> d_<addr>[N] = { { ... }, ... };` with `typedef struct { const void *f0; float f1; int f2; ... } Record_<addr>;` | Fields are `const void *`, `float`, `int`, `unsigned int`, `short` or `unsigned short`, laid out without padding; every record has every field; pointer fields follow the pointer-table rule. |

**No integer or float word may equal a known symbol address.** That covers admitted
functions, data objects and every bound symbol; such a word must be written as a
pointer. `tools/data.py` enforces this in the lint and in `progress.py --check`.

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
are not accepted as data modules.

### Tables

Tables come from the static-data map's pointer, function-pointer, float, integer,
halfword, byte and record pieces. The generator kept a piece only when all of
these hold:

* **Pointers:** every nonzero word is a pointer to one of:
  * an admitted function;
  * a code entry point with evidence, named `fn_<addr>` as for virtual tables;
  * the start of a data object that is itself typed source;
  * an external `g_<addr>` (see below).

  A pointer into the middle of an emitted object, or into code that is not an
  entry point, is rejected.
* **Floats:** every word is zero or a normal float.
* **Integers:** no word is in the pointer range `8c000000`–`8d000000` or equals a
  known symbol address. Integer tables hold no float-like words; halfword tables
  hold no pointer-like or float-like aligned words, since those are probably structs.
* **Byte tables:** at least 4 bytes, every byte at most `0x7f`, no run of three
  letters, entropy of at most 3 bits per byte, and no float- or pointer-like aligned
  word.
* **Records:** use the map's stride when it is consistent, otherwise the smallest
  consistent stride from 4 to 64 bytes with at least two records.
  * Each 4-byte column is consistently pointers, normal floats or integers (zero is
    allowed in any of them).
  * An integer column whose two halves are both small values becomes two `short`
    or `unsigned short` fields.
  * Halfword tables that hold floats are typed this way as structs.
  * A partial trailing record is cut off and left reference-backed.
  * A uniform column set that is not at the map's stride is a plain table, not a
    struct.
* **Placement:** nothing inside the game code region (likely literal pools of
  unlisted functions), nothing overlapping an unmatched candidate code range, and
  a module starts at an address aligned to its largest object alignment.

Rejected pieces stay reference-backed with a recorded reason. The main reasons are
bytes above `0x7f` (excluded by decision), columns mixing floats and integers or
pointers and integers, embedded text, NaN/infinity or denormal floats, and partial
trailing records.

### External pointer targets (`g_<addr>`)

A pointer whose target is still reference-backed data, or RAM outside the image
(bss), is written as `extern const char g_<addr>[];`. The name is bound to `<addr>`,
the same convention code modules use for data. `tools/data.py`
(`check_external_symbols`, also run by `progress.py --check`) requires:

* every `g_<addr>` and `fn_<addr>` name to be bound to its own address;
* a data object's name to be bound to that object's address in every module;
* a `g_` target to lie outside every emitted data object, every code module and
  every unmatched candidate code range.

When the target is later emitted as typed data, it must be renamed to that object.
Every pointer-valued word still goes through a relocation.

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

1. `tools/data.py` lint: the source contains only the `VirtualFunction`/`Function`
   and `Record_<addr>` typedefs, `extern void name(void);` and `extern <type> name[];`
   declarations, and the typed definitions above, in manifest order and size. No
   preprocessor directives, character constants or other statements.
2. Compile with the pinned compiler and flags; the relocatable object may contain
   only `.rodata` sections (CodeWarrior emits one per object), fully owned by the
   manifest objects.
3. Object check: each manifest object is a symbol of its declared size; every
   nonzero pointer word (each word of a vtable, function or pointer table; each
   pointer field of a record) is produced by an `R_SH_DIR32` relocation against a
   named symbol (no bare integers); no relocation falls outside a pointer word.
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

## Assets

Some bytes inside the executable are embedded files or opaque resources, not
program data. They are listed in `config/assets.json` with their range, SHA-256,
kind and what is known of their format. **Their bytes are never committed.**
`tools/project.py build` extracts each asset from your own verified dump, checks its
hash, writes it to the private scratch directory and places it into the image.
`tools/check_publication.py` allows the manifest only and rejects long values in it,
and binary files remain forbidden everywhere.

| Asset | Range | Bytes | Format |
| --- | --- | ---: | --- |
| `access_resource_8c28ad54` | `8c28ad54`–`8c2e0ac1` | 351,597 | ACCESS Co. resource image; begins with "ASK Copyright (C) ACCESS CO.,LTD." (ACCESS makes the NetFront browser engine). Internal layout not identified; Shift-JIS codes near the end suggest font or text resources. |
| `resource_8c32c5f8` | `8c32c5f8`–`8c3335a4` | 28,588 | Unidentified: a short header of 32-bit fields, then dense data with a 3-byte rhythm (perhaps packed graphics or a compressed table). Referenced only from unmatched code. |

The zero padding and pointer word after the ACCESS resource are not evidently part
of the file, so they stay reference-backed.

The static-data map's other high-entropy pieces were **not** made assets:

* 57 pieces (about 55 KB, mostly in the SDK region) start with SH-4 register-save
  prologues and contain `rts`. They are undecoded code and remain reference-backed
  code gaps.
* Seven 256–560-byte pieces are lookup tables, such as CRC-16 tables. They are
  program data, typed as tables where the rules allow.

Assets count in their own figure, **asset bytes extracted from your dump**. They
earn no image-coverage or typed-data credit. A source-only build accepts them as
dump-provided and reports them separately from the bytes that still require the
reference. A later step could rebuild the ACCESS resource from its parts once its
format is understood.

## Progress figures

* **Code-range coverage**: compiled function ranges / decoded image (unchanged).
* **Typed data**: typed data bytes / recorded static-data extent.
* **Image coverage**: (compiled function ranges + typed data bytes) / decoded image.
* **Assets**: embedded-asset bytes extracted from your dump; listed separately and not
  counted as reconstructed.

Retained reference bytes are the decoded image minus both.
