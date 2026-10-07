> Historical reconstruction notes. Paths under `<scratch>` and local receipt files
> refer to private, machine-specific evidence excluded from this repository.
> See [BUILDING.md](BUILDING.md) to generate your own evidence.

# Feasibility findings — 2026-10-06

## Verified reference

The ISO identifies PSO VER.2, `MK-5119350`, `V1.000`, dated `20020110`.
Parsing its filesystem independently produced 6,201 entries. The high-density
track starts at LBA 45000; the ISO uses 2048-byte sectors and the raw track uses
2352-byte Mode 1 sectors with a 16-byte header before user data.

Four files were extracted and independently compared against raw-track payloads:

| File | Size | Purpose |
| --- | ---: | --- |
| `1ST_READ.BIN` | 156,976 | Initial loader |
| `DP_ADDRESS.JPN` | 2,326,823 | Packed main executable |
| `KATSUO.SEA` | 15,360 | Loader code and fixup-index information |
| `IWASHI.SEA` | 16,384 | Loader/support data and fixup values |

The upstream decoder produces **4,162,912 bytes**. Its size agrees with the
packed executable's declared size. SHA-256:

`11e3ad63a73c6d0ff4b5c883ae3df194d873925f8b9925af6435c7b97f6b73b0`

Repeated extraction and decoding produced identical results. File/sector
locations and individual hashes are pinned in the reference manifest. A
deliberately corrupted private copy of the executable was rejected before
decoding, leaving no decoded output.

## Loader evidence and limits

Static Ghidra analysis of the loader function at `0x8c012e78` shows loads of
IWASHI to `0x8c004000`, KATSUO to `0x8c008400`, and the packed executable to
`0x8c800000`. The initial loader transfers via the KATSUO entry table.

KATSUO's entry pointer at offset `0x24` points to `0x8c008428`. That function
flushes the decoded region at `0x8c010000` and transfers via the pointer stored
at `0x8c01002c`. Decoded offset `0x2c` contains `0x8c340848`; the decoded image's
initial stub also uses this pointer. These observations support the chosen load
address and startup address. They have not been validated by a live execution
trace or an emulator boot in this milestone.

The main image contains class-name strings, including `TObject`, and a Shinobi
1.757 build string dated October 31, 2000. It is not a symbol-rich ELF, and these
strings do not establish source file boundaries, types, or a compiler version.
Ghidra auto-analysis emits SH-4 instruction/reference warnings, including near
`0x8c18e520` and `0x8c18e6f8`; inferred boundaries require manual review.
The first pass reached its 180-second limit before a subsequent analysis pass
finished. A bounded follow-up run completed successfully in 41 seconds. The
final index contains 11,385 inferred functions; this is a navigation aid, not
a verified total or a progress denominator.

## Matching proof — completed 2026-10-06

Five reviewed PSO functions now compile from C to **128 exact bytes** using
Metrowerks CodeWarrior for Dreamcast 2.4 (Engineering Build, March 21, 2000),
`-proc SH4 -endian little -mw_fp hardware -Cpp_exceptions off -O2`.
GNU binutils 2.44 links each function at its original address.

The functions cover bit masking, conditional branching, a loop, structure
access with an external call, and single-precision arithmetic. Boundaries were
reviewed against disassembly, control-flow exits, delay slots, neighboring
functions, and references. Their literal pools and internal padding are included.
Sources and exact ranges are recorded in `config/samples.json`.

The compiler search first installed Hitachi SHC 5.0r31, 5.1r01, and 5.1r13.
They passed synthetic compiler tests, but none matched the final five sources
under tested settings. An exploratory GCC 2.95.3 build also produced different
code; that was not an exhaustive test of GCC or Sega's modified GCC releases.
CodeWarrior then reproduced all five samples with one shared configuration.

The final controlled matrix contains 95 builds: 12 Hitachi configurations and
seven CodeWarrior configurations, each tested on all five final sources.
CodeWarrior O2 matches 5/5; O3 and O4 match 4/5, differing on the loop.
Enabling exceptions prevents the five-function proof. Hardware floating point
is required to reproduce the float function with this source and configuration.

See [MATCHING.md](MATCHING.md) for the sample table and detailed limitations.
The results establish a compatible code-generation path. They do not prove the
unique original compiler version/settings, original linker, recovered original
source, or whole-game feasibility at a known cost.

## Validation

All 19 unit tests pass. Two fresh builds of each reconstructed function produce
identical exact bytes. Changed mask constants and call targets fail comparison;
changed source receipts and altered compiler copies are rejected; undefined
external calls fail linking and remove stale binary output.

The earlier extraction/decoder repeatability checks remain valid. No reference
game data was modified. Full executable linking and emulator/runtime testing
are not part of this proof. The Ghidra inferred-function count is not used as a
whole-game progress denominator.
