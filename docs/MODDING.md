# Modding and porting guide

This guide is for someone who has cloned the repository, owns the supported game dump and
wants to read, change or port the game. It says what is in the tree, how to build it, how to
find things, and what the tools do and do not support when you change behaviour on purpose.

Short version:

- The build is **byte-exact or nothing**. Every unit must compile to exactly the original
  bytes, and the integrated image must equal your decoded executable.
- That makes the repository a good **reading and analysis base**, and you can compile a
  modified unit at its original address.
- There is **no supported modded-image build, no supported disc repacking of a modified
  image and no runtime validation**. See [Building a modified image](#building-a-modified-image)
  for what the tools do today and what would be needed.

Supported reference: Europe, `MK-5119350`, `V1.000`, header date `20020110`. Other releases
are rejected by the pinned hashes.

## 1. What is in the tree

The executable (`DP_ADDRESS.JPN` on the disc) is decoded to a 4,162,912-byte image that
loads at `0x8c010000`. Every byte of that image is owned by exactly one of the origins
below. A build compiles or extracts each one, checks it, and joins them in address order.

| Origin | Where | Committed? | Counts as reconstructed? |
| --- | --- | --- | --- |
| Matched C/C++ (CodeWarrior) | `src/objects`, `src/effects`, `src/math`, `src/runtime`, `src/ui`, `src/io`, `src/random`, `src/render`, `src/resources`, `src/system`; listed in `config/project.json` | yes | yes |
| Matched C (Hitachi SHC SDK and library pool groups) | `src/sdk`; units with `"compiler"` in `config/project.json` ([SHC.md](SHC.md)) | yes | yes |
| Shared types | `src/include/classes/<Class>.h` (TObject classes), `src/include/types/<Name>.h` (non-class records), other headers in `src/include` ([TYPES.md](TYPES.md)) | yes | not bytes; they change no output |
| Typed static data | `src/data/*.c`; listed in `config/data.json` ([DATA.md](DATA.md)) | yes | yes, as typed data |
| Hand-written assembly | `config/asm.json` (`"class": "hand"`) lists ranges and hashes only | **never**; generated from your dump | own figure only |
| Fallback assembly | `config/asm.json` (`"class": "fallback"`, `not_decompiled`) | **never**; generated from your dump | no |
| Embedded assets | `config/assets.json` lists ranges and hashes only | **never**; extracted from your dump | no |
| Dump extracts (untyped bytes) | `config/extracts.json` lists ranges and hashes only | **never**; extracted from your dump | no |
| Non-matching drafts | `nonmatching/`, `config/nonmatching.json` ([README](../nonmatching/README.md)) | yes | no; **never built** |

Other directories: `src/samples` is the five-function compiler proof, `src/provisional` holds
unmatched candidates for the queue in `config/reconstruction-targets.json` (not built into the
image), `tools` holds the build and analysis scripts and `tests` holds host-side tests.

How the parts relate at build time (`tools/project.py build`):

1. Every unit in `config/project.json` is compiled with the pinned compiler and flags, linked
   at its original address with its `symbols` bound by address, and compared with the
   reference range. A mismatch stops the build.
2. Every module in `config/data.json` is linted, compiled, object-checked, linked and compared
   the same way.
3. Assets are extracted from your dump and hash-checked.
4. Assembly sources are regenerated from your dump by `tools/asmgen.py`, re-cut around any
   matched C that now overlaps them, linted, assembled, linked and compared ([ASM.md](ASM.md)).
5. Dump extracts fill the bytes no other origin owns.
6. The pieces are joined, and the result must equal the pinned decoded image.

Fallback assembly is the reason the whole image builds: most code has no matching C yet. When
a function is matched, the build shrinks the fallback around it automatically.

## 2. Setup and building

You need Linux x86-64, Python 3.12+, Git, CMake, Make, GCC/G++ (C++23 for the decoder), zlib
headers and the GNU binutils build prerequisites (bison, flex, texinfo). [BUILDING.md](BUILDING.md)
is the reference; the steps are:

```sh
git clone https://github.com/finalbillybong/pso_ver2_dc_decomp.git
cd pso_ver2_dc_decomp
python3 -m venv .venv && . .venv/bin/activate
python3 -m pip install -r requirements-dev.txt
cp config/local.example.json local.json
```

Edit `local.json` with absolute paths to your extracted data-track ISO, the raw Track 3, a
writable scratch directory and `<scratch>/build/pso-decode`, then create the scratch
directory. In the rest of this guide `<scratch>` means that directory. `local.json` is
ignored by Git; no serial number or access key belongs in it.

```sh
python3 -B tools/setup.py            # fetch and build the pinned decoder
python3 -B pso.py extract            # copy the executable files out of your ISO, check hashes
python3 -B pso.py decode             # decode to <scratch>/orig/DP_ADDRESS.dec.bin, check hash
python3 -B tools/setup_compilers.py  # pinned CodeWarrior and Hitachi SHC releases
python3 -B tools/setup_matching.py   # pinned GNU SH binutils
python3 -B configure.py              # write the ignored config/toolchain.json
python3 -B tools/asm_units.py setup --assembler <scratch>/binutils-build/gas/as-new
```

A different disc revision fails at `extract` or `decode`. Do not change the pins in
`config/reference.json` or `config/decoded.json` to accept it.

Build and check:

```sh
python3 -B tools/project.py build                # hybrid build
python3 -B tools/project.py build --source-only  # no reference gaps copied
python3 -B tools/project.py report               # re-check the last build, print figures
python3 -B tools/verify_source.py                # two fresh builds + compiler proof
```

The build writes `<scratch>/project-build/`: one `<unit>.bin` (plus `.asm`, `.elf`, `.map`,
`.log`) per compiled unit, the generated assembly in `asm-gen/`, assets in `assets/`, the
joined image `DP_ADDRESS.rebuilt.bin`, the per-byte origin map `image-map.json`, the receipt
`build.json` and `status.json`.

**What "exact" means.** Each unit's complete range (code, literal pool and padding) must equal
the reference bytes, and the joined image must equal the decoded executable whose SHA-256 is
pinned in `config/decoded.json`
(`11e3ad63a73c6d0ff4b5c883ae3df194d873925f8b9925af6435c7b97f6b73b0`). There is no
"close enough" and no normalised comparison. To check:

- `tools/project.py build` stops with `Module does not match: <unit id> {...}` (or
  `Data module does not match`) on the first unit that differs, giving the first differing
  offset and the expected and actual byte;
- on success, `tools/project.py report` prints `"integrated_image_exact": true`, and
  `sha256sum <scratch>/project-build/DP_ADDRESS.rebuilt.bin` prints the pinned hash;
- `"source_only_build_exact": true` in the report means the last build used `--source-only`:
  no byte came from the reference as a gap. That build still needs your dump, because
  assembly, assets and extracts come from it.

Checks that need neither the dump nor a compiler (CI runs the first three):

```sh
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --check
python3 -B tools/check_publication.py
python3 -B tools/data.py lint
python3 -B tools/nonmatching.py check
python3 -B tools/class_types.py check
python3 tools/names.py --lint
```

## 3. Finding things

Addresses are runtime addresses. A unit's file offset is `address - 0x8c010000` (the
`ranges[0].offset` field).

**By name.** `config/names.json` proposes names for about 5,300 functions and globals, each
with a confidence, a set (`curated`, `extended`, `derived`) and its evidence. Applied names
appear in the source as `<name>_<address>`.

```sh
python3 tools/names.py request_game_mode     # exact name
python3 tools/names.py --grep technique      # substring
grep -rn "request_game_mode_8c01c1a4" src/   # where the applied name is used
```

**By system.** [SYSTEMS.md](SYSTEMS.md) maps startup and the main loop, the object engine,
rendering, player, enemies, map objects, items, quests, menus, text, networking, sound, files,
save data and input to address ranges and entry points, each with a confidence level. Game
code is laid out per source file, not per system, so for objects, enemies, items and windows
follow the class instead.

**By class.** [CLASSES.md](CLASSES.md) lists 730 classes with vtable, constructor, size and
parent. `src/include/classes/<Class>.h` is the shared layout (flattened, vtable at `+0x18`,
`sizeof` pinned). Units named `<Class>_<method>_<addr>` belong to that class;
`config/class-attribution.json` maps further units to a class by other evidence (`slot`,
`ctor`, `callers`, `layout_unique`, ...). To list a class's matched units:

```sh
grep -rl "classes/TObjPlayer.h" src/                      # units that include the header
grep -n '"class": "TObjPlayer"' config/class-attribution.json  # units adopted by other evidence
python3 -B tools/class_types.py layout TObjPlayer          # merged layout and conflicts
```

**By address.**

```sh
python3 tools/names.py 0x8c16c290
```

prints the name at that address, or the nearest named function below it, and the repo module
that contains it (`repo: quest_thread_run_8c16c27c at 0x8c16c27c (+0x14, 124 bytes) in
src/objects/operation_8c16c27c.c`). If there is no `repo:` line, the address is not matched C.
After a build, `<scratch>/project-build/image-map.json` gives the owner of every byte: each
span has `offset`, `size`, `origin` (`compiled_source`, `compiled_data`, `assembled_hand`,
`assembled_fallback`, `dump_asset`, `dump_extract`) and `unit`. Fallback code is readable in
`<scratch>/project-build/asm-gen/<unit>.s`, and a non-matching draft may exist:

```sh
grep -rl "address: 0x8c100850" nonmatching/
```

Source file names and most symbols contain the address without `0x`, so
`grep -rn 8c0330e4 src/ nonmatching/ config/` also works.

**By string.** Typed strings are `const char str_<addr>[N] = "...";` in `src/data/strings_*.c`.
Code refers to data by address, so search for the string, then for its address:

```sh
grep -rn '"PSO______SYS"' src/data/          # -> str_8c319870 in src/data/strings_8c319864.c
grep -rln 8c319870 src/ nonmatching/         # matched and draft code that uses it
grep -l 8c319870 <scratch>/project-build/asm-gen/*.s   # fallback code that uses it
```

Some strings are still dump extracts or record fields (the technique names, for example), so
also grep `src/data/tables_*.c`. Strings inside assets and extracts are not in the tree at all.

**Reading a unit.** A code unit in `config/project.json` looks like this:

```json
{"id": "operation_8c01c17c", "source": "src/objects/operation_8c01c17c.c",
 "address": "0x8c01c17c", "entry": "_set_initial_game_mode_8c01c17c",
 "symbols": {"_g_8c41cb00": "0x8c41cb00", "_g_8c41cb38": "0x8c41cb38"},
 "ranges": [{"offset": 49532, "size": 40}],
 "functions": [{"name": "set_initial_game_mode_8c01c17c", "address": "0x8c01c17c", "size": 40}],
 "reference_sha256": "...", "headers": [], "boundary_review": "..."}
```

- `id` and the file name keep the original mechanical name; renames change only identifiers.
- `entry` is the linker entry symbol, `functions` the functions inside the range.
- `symbols` binds each external the source uses (callees, globals) to an address with
  `--defsym`. There is no global symbol table: a name means nothing until a unit binds it.
- `ranges` is the complete compared range; `reference_sha256` is the hash of those bytes in
  your dump.
- `headers` lists the project headers the source includes; they are hashed with the unit.
- Optional: `"language": "c++"` (adds only `-lang c++`), `"linker": "codewarrior"`,
  `"compiler": "shc-v5.1r13"` (an SHC pool group).

The source file itself starts with the unit's local types: its own throwaway view of each
struct it touches (`typedef struct S_L8c41cb00 {...}`), unless it includes a shared class
header, then `extern` declarations for everything bound in `symbols`, then the function.
Data modules in `config/data.json` have the same `id`, `source`, `address`, `ranges`,
`symbols` and `reference_sha256`, plus `objects` (name, address, size, kind) that tile the
range.

## 4. Making a change

### Matching contribution (byte-exact)

Follow [CONTRIBUTING.md](../CONTRIBUTING.md); the outline is:

1. Pick a target from `config/reconstruction-targets.json`, a draft from `nonmatching/`, or
   fallback code. Review the raw instructions, boundaries, delay slots and literals. Look up
   the symptom in [MATCHING_COOKBOOK.md](MATCHING_COOKBOOK.md).
2. Write the source and add a unit for the complete range to `config/project.json` (or a data
   module to `config/data.json` under the rules in [DATA.md](DATA.md)).
3. Iterate until `tools/project.py build` passes. A near match stays out of `src/`.
4. Run `python3 -B tools/verify_source.py`, the tests, `python3 -B tools/project.py build
   --source-only`, `python3 -B tools/progress.py --record`, `python3 -B tools/progress.py
   --check`, `python3 -B tools/nonmatching.py regenerate --prune-admitted` and
   `python3 -B tools/check_publication.py`.

Renames and type changes are matching contributions too: they must change no compiled byte
(see the Names section of CONTRIBUTING.md and [TYPES.md](TYPES.md)).

### Modding (changing behaviour on purpose)

A behaviour change is by definition not exact, so the exact checks fail. That is by design:
the tree is the record of the original, and a modified unit is never admitted.

What happens if you edit an admitted unit in place and run `tools/project.py build`:

- the build deletes the previous `build.json`, `DP_ADDRESS.rebuilt.bin` and `image-map.json`
  first, so no stale image is left behind;
- it stops at your unit with `Module does not match: <id> {'exact': False,
  'first_mismatch': ...}` and writes **no image**;
- `tools/project.py report`, `tools/verify_source.py`, `tools/progress.py --record` and
  `tools/test_disc.py` all refuse to run on that state.

Revert the edit (`git checkout -- <file>`) and rebuild to get your exact image back. Keep mod
work on a branch or in a copy of the file.

#### Compiling a modified unit

The build's compile function compiles and links any unit at its original address, with its
`symbols`, and does not compare. There is no command-line wrapper for it
(`tools/matching.py` only takes the five proof samples, and `tools/candidates.py` only takes
queue targets), so call it from Python, from the repository root, after
`mkdir -p mods/out`:

```sh
python3 -B -c "
import json, sys; sys.path.insert(0, 'tools')
import project
unit = next(u for u in json.load(open('config/project.json'))['units']
            if u['address'] == '0x8c01c17c')
project.shc_units.compile_unit('mods/operation_8c01c17c.c', 'mods/out/mod.bin', unit)
"
```

This writes `mod.bin` (the linked bytes of the range), `mod.asm` (objdump listing), `mod.elf`,
`mod.map`, `mod.o` and a receipt. It picks CodeWarrior or SHC from the unit's `compiler` field.
For a data module, use `data.compile_unit(source, output, unit)` with the unit from
`data.read()['units']`; it runs the data lint and object checks, but does not compare.

Constraints that follow from linking by address:

- **Size.** The image is joined from fixed ranges. A unit's output must be exactly its range
  size (the joiner rejects `Compiled module size changed`). A larger function would overwrite
  the next one; a smaller one leaves a gap you must pad. In practice, keep edits that do not
  change code size, or edit data.
- **Calls and globals.** Anything new you call or touch must be bound in the unit's `symbols`
  to its real address. You can call any function in the image, matched or fallback, by
  address.
- **Literal pools.** A new constant or address can add a pool entry and grow the range.

#### Building a modified image

No tool builds an image from non-exact units. What exists:

- `tools/project.py build` produces only the exact image.
- `tools/test_disc.py` packages the current integrated image into a private emulator test
  disc (`<scratch>/test-disc/disc.gdi`): it re-encodes `DP_ADDRESS.JPN` with the pinned
  newserv encoder built by `tools/setup_encoder.py`, writes it into a copy of your ISO,
  checks that it decodes back to the image and links your original tracks 1 and 2. It starts
  with `tools/project.py report`, so it **refuses any image that is not exact**, and its
  receipt records `"boot_verified": false`.
- `tools/runtime.py` runs isolated Flycast scenarios for research.

Both packaging and runtime tools are retained for research only. [RUNTIME.md](RUNTIME.md)
states that runtime testing and disc repacking are outside the current reconstruction batch,
and [BUILDING.md](BUILDING.md) says they are not part of the build instructions or CI. No
modified build has been run or validated by this project.

To get a runnable modified disc, a modder would currently need:

1. **A mod build mode.** Compile every unit, accept declared non-exact units, keep size
   checks, and write a separate image and receipt without touching the exact ones. Today
   you would have to place `mod.bin` at `ranges[0].offset` in a copy of
   `DP_ADDRESS.rebuilt.bin` yourself; no tool does or checks this.
2. **Room to grow.** Either same-size edits, or relocation: free space for new code plus a
   branch from the original site, or a full relink, which needs every function as source.
3. **Packaging that accepts a modified image.** `tools/test_disc.py` has the encode, ISO
   rewrite and decode check, but it is gated on the exact report; a modified-image variant
   would have to drop that gate and keep the round-trip check.
4. **Runtime testing.** An emulator or hardware run of both the original and the modified
   disc. None is part of this repository's verified workflow.

Never commit or share a modified image or disc: it is still the original executable with your
changes (see [FAQ](#7-faq)).

**Porting.** A port reads the tree rather than builds it: matched C/C++ (current figures in
[PROGRESS.md](PROGRESS.md)), typed data, class and record headers, and drafts for much of the
rest. Fallback assembly and extracts mark what is still undecompiled; `image-map.json` lists
them.

## 5. Using a non-matching draft

`nonmatching/` holds the closest non-matching C/C++ draft of functions that are still
fallback assembly. They are never built and earn no credit; the build uses the fallback for
that address. Example header (`nonmatching/objects/bgm_play_area_8c100850.c`):

```c
/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c100850
 * function: bgm_play_area_8c100850
 * language: c
 * reference size: 404 bytes
 * compiled size: 400 bytes (-1.0%)
 * differing lines: 8 of 141 reference instruction lines
 * differing bytes: 178
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; ...
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
```

- **reference size** is the complete original range; **compiled size** is what the draft
  compiles to. A size difference means it cannot be dropped in, even for a mod.
- **differing lines** and **differing bytes** measure how far the draft is from the original.
  Few lines is a good matching start.
- **provenance**: a `generator draft` is machine-inferred from the listing, so signatures,
  types and control flow may be wrong; a `hand pass` was revised by hand, and `(behaviour
  reviewed)` means behaviour defects were found and fixed.
- **known gaps** lists what is known to differ or be unverified.
- **class header**, when present, points at the shared layout in `src/include/classes/`; the
  draft still uses its own local structs.
- **runtime**, when present, is an emulator A/B verdict (`equal`, `suspect`, `DIVERGED` or
  `unverified`); a `DIVERGED` draft is known to be incorrect. See
  [Runtime verdicts](../nonmatching/README.md#runtime-verdicts).

A draft is not proven equivalent to the original. Check it against the generated assembly
(`<scratch>/project-build/asm-gen/`) before relying on it for a port.

To promote a draft (details in [nonmatching/README.md](../nonmatching/README.md)): copy it into
`src/<area>/`, delete the header, add a unit for the complete range to `config/project.json`
with the `symbols` from the draft's `config/nonmatching.json` entry, iterate until it is
exact, run the full verification of section 4, then
`python3 -B tools/nonmatching.py regenerate --prune-admitted`.

## 6. Worked examples

These use the repository's real names. Both examples change bytes, so neither can be built
into the exact image; they show how to make the change and compile it.

### Data: rename a technique

`technique_table_8c3047f8` in `src/data/tables_8c3047f8.c` holds 19 `TechniqueParameters`
records of 64 bytes, one per technique. Only the `name` field at `+0x28` is established; the
other fields are named by offset ([DATA.md](DATA.md), tranche 7). Whether the game displays
this name or takes menu text from elsewhere has not been checked.

```sh
mkdir -p mods/out
sed 's/"FOIE", 15, 1/"FIRE", 15, 1/' src/data/tables_8c3047f8.c > mods/tables_8c3047f8.c
python3 -B -c "
import sys; sys.path.insert(0, 'tools')
import data
unit = next(u for u in data.read()['units'] if u['id'] == 'tables_8c3047f8')
data.compile_unit('mods/tables_8c3047f8.c', 'mods/out/tech.bin', unit)
"
cmp -l mods/out/tech.bin <(tail -c +3098617 <scratch>/orig/DP_ADDRESS.dec.bin | head -c 1216)
```

`cmp` reports two bytes, numbered 42 and 43 from 1 (table offsets `0x29` and `0x2a`, inside
the name at `+0x28`: `O` becomes `I` and `I` becomes `R`); the size is unchanged. The offset
`3098616` and size `1216` come from the module's `ranges` in `config/data.json`. A numeric field can be changed the same way (a
`float` stays a decimal literal that round-trips; an integer must stay in its type's range),
but its meaning is unknown.

The same method works for a quest opcode handler. In `g_quest_opcode_table_8c317ba8`
(`src/data/tables_8c317ba8.c`, 512 `{decode_args, handler}` records, opcodes `0x00`–`0xFF`
then `0xF800`–`0xF8FF`), replacing one record's handler with `(void *)quest_op_nop_8c16ca58`
gives that opcode the no-op handler (its arguments are still decoded by `decode_args`). Use a function the file already declares and binds in its
`symbols`; a new one needs both an `extern void name(void);` line and a `symbols` entry, or
the lint rejects the module.

### Code: change the first game mode

`set_initial_game_mode_8c01c17c` (`src/objects/operation_8c01c17c.c`, 40 bytes) is called by
`game_init` and stores the first game mode in `g_game_mode_state.current` (`0x8c41cb00`) and
the fields at `+0x08` and `+0x0c`: 1 (the SEGA logo, `TAdSEGAlogo`) when `g_8c41cb38` is zero,
otherwise `0x13`. [SYSTEMS.md](SYSTEMS.md) lists mode 27 as the title. To start at the title
instead of the logo:

```sh
mkdir -p mods/out
sed 's/->\(f00\|f08\|f0c\) = 1;/->\1 = 27;/' src/objects/operation_8c01c17c.c > mods/operation_8c01c17c.c
diff src/objects/operation_8c01c17c.c mods/operation_8c01c17c.c
python3 -B -c "
import json, sys; sys.path.insert(0, 'tools')
import project
unit = next(u for u in json.load(open('config/project.json'))['units']
            if u['address'] == '0x8c01c17c')
project.shc_units.compile_unit('mods/operation_8c01c17c.c', 'mods/out/mode.bin', unit)
"
cmp -l mods/out/mode.bin <(tail -c +49533 <scratch>/orig/DP_ADDRESS.dec.bin | head -c 40)
less mods/out/mode.asm
```

The compiler loads the constant into one register for all three stores, so `cmp` reports one
byte (byte 11, the `mov #imm` operand, octal `1` to `33`, that is 1 to 27) and the size stays
40 bytes: the edit fits in place. Whether the title mode works without the modes before it has not been tested; no modified
image has been run. If you instead copy the file over `src/objects/operation_8c01c17c.c`,
`tools/project.py build` stops with `Module does not match: operation_8c01c17c`.

`mods/` is not a project directory. Keep it out of commits (for example, add `mods/` to
`.git/info/exclude`); `tools/check_publication.py` rejects staged files outside the public
allowlist.

## 7. FAQ

**What may I publish?** Source, configuration and documentation only. Never commit or
attach disc images, `DP_ADDRESS.JPN` or the decoded or rebuilt executable, extracted assets
or extracts, generated assembly (`.s` files are rejected), compiler or SDK binaries, serial
numbers, access keys, saves, emulator settings, screenshots of registration screens or raw
logs. A modified image or disc is still the original executable. [NOTICE.md](../NOTICE.md)
explains the provenance and that no repository-wide licence has been chosen yet;
`python3 -B tools/check_publication.py` checks the Git index against the allowlist.

**Why do the figures not change when I add a mod, a draft, a name or a type?** Figures come
only from exact, admitted units in `config/project.json` and `config/data.json`, recorded by
`tools/progress.py --record` after a fresh exact build. Drafts are never read by
`tools/progress.py`; names and types must change no byte; a modified unit cannot build.
Assembly, assets and extracts have their own figures and never count as decompiled.

**Is the source-only build a clean-room build?** No. It copies no reference gap, but it
still regenerates assembly and extracts assets and untyped bytes from your dump.

**Can I use another release (US, Japan, ver. 1)?** Not currently. The hashes are pinned to
the European `V1.000` release.

**Are the names original?** No. Every name is a reconstruction with recorded evidence; class
names come from the game's own strings.

**Where do I ask?** Open an issue or pull request on the GitHub repository
`finalbillybong/pso_ver2_dc_decomp`. Keep dumps, saves, keys and private logs out of it.
