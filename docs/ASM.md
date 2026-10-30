# Assembly from your dump

Assembly is **not decompiled code**, and **no assembly is committed to this
repository**. A committed `.s` tree would reassemble straight back to the original
executable's code, including Sega and Hitachi SDK code, which is exactly the original
binary this project does not distribute. Instead the assembler sources are regenerated
locally, from your own dump, at build time, the same way embedded assets are extracted
(see [DATA.md](DATA.md)). The publication check rejects any committed `.s` file.

Two classes, each with its own figure; neither counts toward the code-range,
matching-function or image-coverage figures:

| Class | What it is | Figure |
| --- | --- | --- |
| `hand` | Routines with evidence that no compiler produced them: an instruction neither CodeWarrior nor the pinned Hitachi SHC emits. | **Assembly (hand-written)** |
| `fallback` | Generated assembly for code with no matching C yet, labelled `not_decompiled`. Only so more of the image builds from source; matching C replaces it. | **Source-buildable with your dump** only |

## What is committed

`config/asm.json` records, per unit, only: the range, id, class, the SHA-256 of the
reference range, and (for `hand` units) the evidence instructions. It carries **no
instruction text and no symbol or entry lists** — those are regenerated deterministically
at build time. `tools/asm_units.py` is the build driver; `tools/asmgen.py` is the
generator. `tools/matching.py` is unchanged.

## Generator inputs (your dump)

`tools/asmgen.py` turns a range into GNU assembler text from:

* the decoded executable from your verified dump (checked against `config/decoded.json`);
* the pinned SH-4 encoding table, built once from the pinned objdump.

It needs no committed disassembly. Every encoding it emits round-trips through the
pinned assembler, and because SH-4 instructions are a fixed two bytes, each halfword
is emitted independently as its instruction (or `.short` when the encoding is invalid)
and reassembles to the same two bytes; PC-relative operands are written with labels, so
the assembler recomputes the identical displacement. Literal-pool words and switch tables
become `.long`/`.short`; a word that equals an admitted function, data object or other
known address is written as that symbol, resolved by the linker, never as a bare integer.

Builds (`project.py build`, `verify_source.py`, `asm_units.py lint`) need only those
two inputs: entry labels come from committed config (admitted functions and
reconstruction targets). Until this change the build also loaded the analysis listing,
which made it fail on checkouts whose analysis was not under `<scratch>/analysis/game`;
it no longer reads it. CI reads neither the dump nor the listing.

`tools/asm_units.py plan` (a maintainer step, run with the dump) recomputes the unit
ranges and is the only step that reads the analysis listing and function table — pinned
by SHA-256 in `config/analysis.json` — to tell code from data and to choose cut points.
They are produced from your dump by `python3 -B tools/setup_analysis.py` (pinned
Ghidra) and `python3 -B tools/analyze.py game --base 0x8c010000`, which writes
`<scratch>/analysis/game/`. `plan` looks there, then in the parent of the scratch
directory (for checkouts whose scratch moved after analysis), and first in a
`"analysis"` directory named in `local.json` if set; if none holds hash-matching files it
stops with a message naming the paths it tried and these commands.

### Planning rules

* **Code side.** A byte is code if it is a listed instruction, inside an admitted or
  candidate function range, or between a listed PC-relative load (`mov.l`, `mov.w`,
  `mova`) and its literal slot. SH-4 load displacements only reach forward, so that
  interval is the function and its pool; this keeps alignment padding the listing left
  undecoded from separating a function from its pool. Admitted C/SHC, typed data and
  assets are never fallback.
* **Cuts.** Units are cut at function starts only where no listed PC-relative load or
  conditional branch crosses the cut.
* **Literal pools and switch tables.** Pool slots are the targets of loads in the unit;
  `mova` targets become literal words or, when their words are code addresses, switch
  tables written as `.long` labels; aligned words whose upper halfword is not an
  instruction and whose value is a memory address become symbolic pointers.
* **Only proven data.** If a range still holds a hex data run that no load in the unit
  references (more than four bytes, or an unreferenced prefix longer than four bytes
  before a referenced slot), `plan` cuts out **just that run**; it stays
  reference-backed and the rest of the range is kept. `asmgen.raw_runs` mirrors the lint
  rule exactly, and every kept unit is re-linted before it is recorded.
* **Strict hand class.** A piece is `hand` only if every function in it (by the pinned
  function table) contains its own evidence instruction; a piece that cannot be split
  from evidence-free code is `fallback` (still assembled, no hand-written credit).

Known limitation: the generator decodes every halfword that is not proven data as an
instruction, so a data table that no load references and whose halfwords are valid
encodings is emitted as instructions. It reassembles byte for byte, but it is not
classified as data; that only affects readability of not-decompiled fallback.

## Build chain

At build time `tools/project.py build` (and so `tools/verify_source.py`), after the code,
data and asset modules, for every assembly unit:

1. Verify the unit's full range against its recorded `reference_sha256` in your dump.
2. Re-cut the committed range around any admitted C, SHC or data module it now overlaps,
   so matching C shrinks the fallback with no retained bytes left behind, and regenerate
   the assembler source for each remaining sub-span into a private scratch directory.
3. Lint the generated source (below).
4. Assemble with the pinned GNU assembler (`--isa=sh4 -little --fatal-warnings`).
5. Object-check: only `.text` has contents, of the unit size (plus an alignment phase);
   global symbols are exactly the generated entries; the only relocations are
   `R_SH_DIR32` literal words against bound symbols or the unit's own section.
6. Link at the original address with the pinned GNU linker and `--defsym` bindings;
   exactly one allocated `.text` at that address, no relocations left.
7. Compare the extracted range with the complete reference range; the integrated image
   must equal the pinned executable.

Steps 3–7 run in at most four parallel assembler/linker processes. On the reference
machine the whole assembly part of one build (regenerating about 5,200 units and
assembling, linking and comparing them) takes about 10 seconds and 130 MB; a closeout's
time is dominated by the CodeWarrior compiles, not by assembly.

A unit that starts two bytes past a four-byte boundary begins with `.skip 2` (the
alignment phase) and is linked two bytes early so the assembler computes `mov.l`/`mova`
displacements and `.balign` padding against the real alignment; the phase bytes are zero
and are not part of the unit.

Record the pinned assembler once (it is the GNU `as` that `tools/setup_matching.py`
already builds beside the pinned linker, but does not install):

```sh
python3 -B tools/asm_units.py setup --assembler <scratch>/binutils-build/gas/as-new
```

The setup step checks the version and that the `ld/ld-new` beside it is byte-identical
to the pinned `sh-elf-ld`, and writes the ignored receipt `config/asm-installed.json`.

## Source lint

`tools/asm_units.py lint` regenerates every source from your dump and accepts only:
`.text` once; `.global` for exactly the generated entries; labels and instructions;
`.set name, label ± offset` equates for out-of-unit PC-relative targets; `.balign 4`
padding and the `.skip 2` phase; and `.long`/`.short` with one hex word/halfword or one
symbol. It rejects `.incbin`, `.include`, macros, `.fill`, `.org`, `.byte`, `.ascii` and
other sections. Data directives are allowed only in literal blocks that start at a label
a `mov.l`, `mov.w` or `mova` references; outside such a block a raw run is capped at four
bytes. A literal word equal to a known symbol address must be written as the symbol.

This lint needs the dump (to regenerate), so it runs locally at build and record time.
Public CI, which has no dump, validates the manifest structure and the recorded figures
instead.

## Hand-written evidence

An instruction is evidence only if neither compiler produces it. The pinned SHC 5.1r13
emits, through its intrinsics, `ldc`/`stc` `SR`/`GBR`/`VBR`, `sleep`, `trapa`, `pref`,
`fipr`, `ftrv`, `frchg`, `tas.b`, `clrmac`/`mac.w` and `lds ...,FPSCR`; **those are not
evidence.** Accepted evidence: `fschg`, `movca.l`, `ocbi`, `ocbp`, `ocbwb`, `rte`,
`ldtlb`, and `ldc`/`stc` of `SSR`, `SPC`, `SGR`, `DBR` or a banked register. CodeWarrior
emits none of these anywhere in the admitted code. A range whose only such instructions
are intrinsic-reachable stays `fallback`.

## Figures

`progress.json` and [PROGRESS.md](PROGRESS.md) report, apart from the code/data/image
figures: hand-assembly bytes and their share of the recorded code extent (the image
minus the static-data extent); fallback bytes, labelled not decompiled; and
**source-buildable with your dump** — the bytes a build can produce from any source form
(C, SHC, typed data, extracted assets, hand-written and fallback assembly) over the whole
image. Prune is automatic: because the generator re-cuts fallback around admitted C on
every build, a newly matched function shrinks the fallback with no leftover retained
bytes.
