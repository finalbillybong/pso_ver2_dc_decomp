> Historical reconstruction notes. Paths under `<scratch>` and local receipt files
> refer to private, machine-specific evidence excluded from this repository.
> See [BUILDING.md](BUILDING.md) to generate your own evidence.

# Object operation reconstruction

All eight requested targets match as ordinary C with CodeWarrior SH-4 hardware
floating point, exceptions off, `-O2`. No assembly, embedded instruction bytes,
normalization, or compiler-output patching is used. The project now accounts for
26 functions, 3,104 compiled bytes and 4,159,808 retained reference bytes.

## Reviewed boundaries

Addresses below are hexadecimal. End addresses are exclusive. Each range ends
at the next independently observed function entry, including every referenced
literal and alignment byte. The first four ranges have a two-byte zero alignment
word after the return delay slot; the final four need no such word.

| Entry | Return delay slot | Literal pool begins | End | Bytes |
| --- | --- | --- | --- | ---: |
| 8c0455ac | 8c045670 | 8c045674 | 8c0456a4 | 248 |
| 8c0456a4 | 8c0457f8 | 8c0457fc | 8c045844 | 416 |
| 8c045844 | 8c0458e0 | 8c0458e4 | 8c045910 | 204 |
| 8c045910 | 8c0459ac | 8c0459b0 | 8c0459d8 | 200 |
| 8c0459d8 | 8c045a6a | 8c045a6c | 8c045a8c | 180 |
| 8c045a8c | 8c045b56 | 8c045b58 | 8c045b8c | 256 |
| 8c045b8c | 8c045d06 | 8c045d08 | 8c045d6c | 480 |
| 8c045d6c | 8c045ea6 | 8c045ea8 | 8c045f04 | 408 |

The already matched callers at 8c029fec–8c02a190 supply the object in r4.
Cross-references also include numerous dispatch tables beginning around
8c261090. Data references are not counted as executable callers. The adjacent
8c045f04 entry is a further operation, not part of the final literal pool.
Ghidra exports and the raw SH-4 disassembly are retained in scratch under
`analysis/game/`; manifest hashes freeze the reviewed reference ranges.

Ghidra's floating-point mode alternatives and inferred argument lists were
checked against instructions. In particular, 8c18e8a0 consumes r4 and r5 and
implements signed remainder. Ordinary C `% 45` emits `__l_mods`, explicitly
bound to that existing runtime address by the linker. It is not a newly matched
runtime routine. Direct declarations for 8c05fbf8 and 8c0b6394 preserve compiler
call scheduling; their bindings are also explicit in the manifest. Other calls
use named typed address constants in `src/include/calls.h`.

## Observed behavior and fields

Names remain provisional; matching bytes does not establish gameplay meaning.
`src/include/object.h` contains partial layouts and compile-time checks for every
named offset. The complete original class and translation-unit boundaries remain
unknown.

| Field | Observation |
| --- | --- |
| 20 | 16-bit identifier; unsigned comparison against 1000, signed 16-bit argument to effect binding |
| 34 | 32-bit flags; bits 0–5 select operations and bit 25 suppresses certain effects |
| 3c | Three floats passed to an external effect routine |
| 198, 330 | Signed 16-bit limit and current value, clamped after adjustment in 455ac |
| 1a2–1a8 | Four signed 16-bit base values |
| 1aa–1b0 | Four signed 16-bit adjusted values |
| 2c0/2c4/2c8 | Integer kind, float factor, integer counter group |
| 2cc/2d0/2d4 | Integer kind, float factor, integer counter group |
| 2d8/2dc/2e0 | Integer kind, float factor, integer counter group |
| 2e4/2e8/2ec | Integer kind, float factor, integer counter group |
| 2f0/2f4/2f8 | Integer kind, float factor, integer counter group |
| 308 | Signed 16-bit mode; equality with 2 enables the alternate cleanup path |
| 324 | Three floats passed to effect creation |
| 34c | Copy of the low six flags after clearing operation bits |
| 37c | State field used by the previously matched readiness predicate |

455ac increments a counter and acts every 45 counts, applies a minimum-one
adjustment proportional to field 330, clamps it and requests a state change at
zero. 456a4 treats identifiers below/above 1000 differently and handles flag
4000 separately. 45844, 45910, 459d8 and 45a8c decrement the 2d4 counter, perform
periodic effects and clear/reset fields when expired; some reverse signed
16-bit adjustments using a negated float factor. 45b8c and 45d6c handle the
2e0/2ec counters and their kind-dependent effects, with alternate cleanup when
mode 308 equals 2. Exact float multiplication operand order and short conversion
points matter for code generation and are preserved.

## Build provenance

A module declares its entire transitive `headers` list using project-relative
quoted include names. The driver rejects undeclared/system/macro imports, path
escapes and external symlinks. Declared headers are copied into the isolated
compiler workspace and hashed in compiler and project receipts. Report rejects
header changes, including comments that do not alter output bytes. Symbol
bindings are part of the hashed manifest. The five original proof sources remain
independent and unchanged.

`python3 -B tools/verify_project.py` repeats the entire source build and disc
packaging twice, compares both receipts, and requires all 5,897 payload checks.
`config/project-validation.json` pins the resulting evidence; it does not claim
runtime or whole-game validation.

## Continuing reconstruction

The next dependency queue follows these operations: effect creation 8c0a77e8,
binding 8c0a7628, emission 8c05fbf8, adjustment 8c04a770, state change 8c04a7d8,
lookup 8c122700 and extended effect 8c0b6394. Review the adjacent 8c045f04 operation
and executable callers separately from dispatch-table references. None of these
is counted as reconstructed by this stage. Retain the explicit reference image
map until all executable regions, runtime code and static data are accounted for.

## Follow-through source batch

The eight operations remain exact. Eight additional dependency/adjacent-wrapper
functions now match; see [RECONSTRUCTION.md](RECONSTRUCTION.md). The old
`state_change_at` name was provisional: `8c04a7d8` sets field `330` and clamps
it against field `198`. It is now named `set_330_at`. `lookup_68_at` is now
`allocate_block_at`, a free-list allocator. These renames preserve code generation.
The adjacent `8c045f04` and emission/runtime mismatches remain explicitly active.
Gameplay is paused; the current objective is a complete source-only executable.
