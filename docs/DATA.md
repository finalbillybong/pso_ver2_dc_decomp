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
| `string_table` | `const char name[N][W] = { "...", "...", "" };` | Fixed-width rows: each row is one string literal shorter than `W`; the rest of the row is zero. |
| `function_table` | `Function const d_<addr>[N] = { name, 0, ... };` | Entries are `0` or declared functions. |
| `pointer_table` | `const void *const d_<addr>[N] = { str_..., (void *)name, d_..., 0 };` | Entries are `0`, a declared function cast to `void *`, a declared data object (`vt_`, `str_` or `d_`) at its start, or an external `g_<addr>` (see below). |
| `float_table` | `const float d_<addr>[N] = { 1.5f, -0.0f, ... };` | Decimal literals with enough digits to round-trip to the exact bits. NaN, infinity and denormals are not accepted. |
| `int_table` | `const int` or `const unsigned int d_<addr>[N]` | Integer literals within the element type's range. |
| `int16_table` | `const short` or `const unsigned short d_<addr>[N]` | As above. |
| `byte_table` | `const unsigned char` or `const signed char d_<addr>[N]` | Small-integer tables only (see below). |
| `record_table` | `const Record_<addr> d_<addr>[N] = { { ... }, ... };` with `typedef struct { const void *f0; float f1; int f2; ... } Record_<addr>;`, or a descriptive type such as `typedef struct { const void *decode_args; const void *handler; } QuestOpcode;` | Fields are `const void *`, `float`, `int`, `unsigned int`, `short` or `unsigned short`, laid out without padding; every record has every field; pointer fields follow the pointer-table rule. Field names are `f0`..`fN` or distinct descriptive names (see *Named game tables*); names never change bytes. |

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

All 1,118 virtual tables in the image are reconstructed (125,556 bytes). The
35-entry game-mode table at `8c2e3258`, which the static-data map had filed as a
virtual table, is a record table of `{init, frame, exit}` functions.

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
is not claimed as data.

Tranche 6 added 315 strings (5,250 bytes) that lay inside untyped extracts, outside
the game code and virtual-table regions (below `8c284000`), including 44 Shift-JIS
strings (login errors, NPC voice-line labels, battle-mode messages). A string is kept
only when:

* every byte is printable ASCII, tab, newline, carriage return or a valid Shift-JIS
  double-byte character (lead bytes `81`–`84`, `88`–`9f`, `e0`–`ea`); a Shift-JIS string
  needs at least two such characters, an ASCII one a word or format specifier and
  mostly letters;
* no 4-byte-aligned word inside it is a pointer (`8c000000`–`8d000000`) or a round
  float such as `0x3f666666` (`"fff?"` = 0.9f), and short strings are not repetitive;
* it belongs to a run of strings that touches an edge of the extract, or a run of at
  least three, or its start address is stored as a pointer somewhere. One or two
  unreferenced strings between numbers are name fields of records (for example the
  technique names `FOIE`, `BARTA` at `8c304820`) and stay reference-backed;
* a lone string has at least five characters.

Zero padding up to the next 4-byte boundary belongs to the string; longer zero runs
stay reference-backed. The chat word-filter list at `8c3348b0` (258 rows of 20
characters; the filter at `8c2069b4` steps by 20) is a `string_table`.

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
  * When the records only line up a few words in, the leading words become a
    one-record header struct and the array follows it (for example the
    `8c31a61c` and `8c31aa4c` tables).
  * A float column may contain a few large or small round values (such as `1e8`).
    An integer column may contain a few float-like words that are not round
    numbers, such as packed bytes like `0x461e0906`.
  * Words that would be NaN, infinity or denormal are integer fields.
  * No union was needed: no column holds both floats and integers across records
    once the stride and start are right.
* **Lookup tables:** four CRC-style halfword tables that the map had filed as
  high-entropy blobs are `unsigned short` arrays.
* **Zero runs are not typed.** A run's true extent is unknown: it runs to the next
  referenced address and can absorb padding or several variables. Zero runs stay
  reference-backed until their extent is known.
* **Placement:** nothing inside the game code region (likely literal pools of
  unlisted functions), nothing overlapping an unmatched candidate code range, and
  a module starts at an address aligned to its largest object alignment.

Rejected pieces stay reference-backed with a recorded reason. The main reasons are
bytes above `0x7f` (excluded by decision), columns mixing floats and integers or
pointers and integers, embedded text, NaN/infinity or denormal floats, and partial
trailing records.

### Named game tables

Some tables have real names and field names where the evidence supports them
(names from `config/names.json` in the `<name>_<addr>` form `tools/rename.py` uses;
evidence in [SYSTEMS.md](SYSTEMS.md)). Unknown fields are named by offset
(`unknown_08`). Names never change bytes.

| Object | Type | Evidence |
| --- | --- | --- |
| `g_quest_opcode_table_8c317ba8` | `QuestOpcode { decode_args, handler }[512]` | Opcodes 0x00–0xFF then 0xF800–0xF8FF; handlers match newserv QuestScript.cc. |
| `game_command_handler_table_8c2e7624` | `GameCommandHandler { this_offset, vtable_index, function }[61]` | CodeWarrior pointer-to-member records `{0, -1, handler}` loaded by `dispatch_game_command` (`0x8c02d368`); handlers match newserv handler tables. `config/names.json` gives `0x8c2e7628`, the second word of the first record. |
| `subcommand_handler_table_8c2ed3dc` | `SubcommandHandler { subcommand, flags, handler }[147]` | Subcommand numbers and lobby/Pioneer 2/field flags match newserv. |
| `dat_object_ctor_table_<addr>`, `dat_enemy_ctor_table_<addr>` and their `..._list_8c2ebec8` / `..._list_8c2ee8b8` | `DatConstructorEntry { type, factory, unknown_08, unknown_0c }` | Per-area DAT type → factory tables ending with type `0xFFFF`; types and factories match newserv. `unknown_08` is a float (250000.0 or 2.25e6, perhaps a squared range). A table the map had typed as four entries per record is now one entry per record. |
| `g_game_mode_table_8c2e3258` | `GameMode { init, frame, exit }[35]` | Indexed by `g_game_mode_state` in `game_main`. |
| `g_login_server_table_8c2e2f24` | `LoginServer { host0, port0, host1, port1 }[3]` | Host strings and ports 9200/9201. |
| `g_area_object_asset_tables_8c2ed250`, `g_area_enemy_asset_tables_8c2eeea4`, `g_area_gsl_table_8c323e8c`, `g_se_bank_table_8c2fc788`, `g_vmu_drive_ids_8c2e20b8`, `TObject_vtable_8c261580`, `TObjectShared_vtable_8c2612d8` | unchanged | Renamed only. |

### External pointer targets (`g_<addr>`)

A pointer whose target is still reference-backed data, or RAM outside the image
(bss), is written as `extern const char g_<addr>[];`. The name is bound to `<addr>`,
the same convention code modules use for data. `tools/data.py`
(`check_external_symbols`, also run by `progress.py --check`) requires:

* every `g_<addr>` and `fn_<addr>` name to be bound to its own address;
* a data object's name to be bound to that object's address in every module;
* a `g_` target to lie outside every emitted data object, every code module and
  every unmatched candidate code range.

When the target is later emitted as typed data, it is renamed to that object. Tranche 5
renamed 17 such references in 7 earlier modules; their bytes are unchanged.
Tranche 6 renamed 73 more `g_` references to the strings and tables it typed.
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
   and record typedefs, `extern void name(void);` and `extern <type> name[];`
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
  prologues and contain `rts`. They are undecoded code; where reachability proves them
  (see ASM.md) they are now not-decompiled fallback assembly, and the rest are dump
  extracts.
* Seven 256–560-byte pieces are lookup tables, such as CRC-16 tables. They are
  program data, typed as tables where the rules allow.

Assets count in their own figure, **asset bytes extracted from your dump**. They
earn no image-coverage or typed-data credit. A source-only build accepts them as
dump-provided and reports them separately from the bytes that still require the
reference. A later step could rebuild the ACCESS resource from its parts once its
format is understood.

## Dump extracts

After compiled C/SHC, typed data, assets and assembly (see [ASM.md](ASM.md)), the
bytes no source form covers yet are listed in `config/extracts.json` by range,
SHA-256 and a coarse kind (`zero_run` or `untyped_bytes`). **Their bytes are never
committed.** Every build takes each extract from your own verified dump, checks its
hash and places it, so `tools/project.py build --source-only` can integrate the whole
image without copying any reference gap. On every build each extract is re-cut around
any C, SHC, typed-data, asset or assembly range that now overlaps it, so newly
reconstructed bytes just shrink the extracts; `python3 -B tools/extracts.py plan`
(maintainer step, with the dump) re-records them.

Extracts are **not decompiled code and not typed data**. They have their own figure,
**dump extracts**, and earn no code-range, matching, typed-data or image-coverage
credit. By the static-data map's classification they are mostly opaque high-entropy
pieces and unclassified data, zero runs, byte tables with values above `0x7f`, records
the typing rules do not yet accept and Shift-JIS text. About a quarter (roughly 54 KB)
lies where the earlier static-data map assumed code but no reference or prologue proves
it reachable; it may be code, and stays an extract rather than being called fallback
assembly without proof (see [PROGRESS.md](PROGRESS.md) for current figures).
`tools/check_publication.py` allows the manifest only and rejects long values in it.

## Progress figures

* **Code-range coverage**: compiled function ranges / decoded image (unchanged).
* **Typed data**: typed data bytes / recorded static-data extent.
* **Image coverage**: (compiled function ranges + typed data bytes) / decoded image.
* **Assets**: embedded-asset bytes extracted from your dump; listed separately and not
  counted as reconstructed.

Retained reference bytes are the decoded image minus both.
