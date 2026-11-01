# Second compiler: Hitachi SHC pool groups

Most of the game was built with CodeWarrior. Some code was not: the Sega SDK
libraries linked into the executable (from about `0x8c340000`) and several
library blocks inside the game region (notably `0x8c1f0000`–`0x8c205000`, and the
runtime helpers around `0x8c12b000`) have the shape of Hitachi SHC output. That
code can be admitted as **SHC units**. They count as compiled code ranges, exactly
like CodeWarrior modules.

## Compiler and settings

| Item | Value |
| --- | --- |
| Compiler | Hitachi SH C/C++ Compiler 5.1 Release 13 (`shc-v5.1r13`) |
| Second release | Hitachi SH C Compiler 5.0 Release 28 (`shc-v5.0r28`), only for the `0x8c3d0000` region; see [Second release](#second-release-50r2628) |
| `-macsave=1` | `shc-v5.1r13-macsave1` (and `shc-v5.0r28-macsave1`): the same release with `-macsave=1`, only for code whose reference saves MACL in the prologue; see [-macsave=1 units](#-macsave1-units) |
| Flags | `-cpu=sh4 -endian=little -fpu=single -optimize=1 -macsave=0` |
| Linker | Hitachi LNK 6.0E, ELF output, from the same release |
| Archives | Pinned in `config/compiler-packages.json`, installed by `tools/setup_compilers.py` |

There is one fixed flag set and no per-unit override. The settings were chosen by
a scratch measurement over 50 sampled functions, three releases (5.0r31, 5.1r01,
5.1r13) and six flag sets:

* 5.1r13 reproduced 27 of the 28 code-exact sources; the older releases need
  `-speed` for one power-of-two division and lose seven other functions with it.
  The remaining source (`8c12b0a4`) first matched only at `-optimize=0`, then at
  `-optimize=1` once written with an unused result (`int r = g();`), which stops
  SHC turning the call into a tail jump. No `-optimize=0` exception is needed.
* `-macsave=0`: the reference never saves `MACL` around `mul.l`.
* `-fpu=single`: without an FPU setting SHC wraps calls in `FPSCR` saves; with
  `-fpu=double` the float functions differ.
* `-size` and the default produced identical code on the sample.

The source must be C89 (no `//` comments). The archives contain no C headers;
declare SHC intrinsics yourself when needed (for example
`float _builtin_fabsf(float);`).

## Units are pool groups

SHC places literal pools after a group of functions rather than after each
function, so the functions that share a pool must be rebuilt together. A unit is
one **pool group**:

* one contiguous range starting on a four-byte boundary (SHC sections are
  `ALIGN=4`);
* every function that loads from the pool, in address order, followed by the pool
  (words first, an alignment halfword when needed, then long words);
* functions called with `bra`/`bsr` must be file-static or defined in the same
  source, because SHC only branches directly within one source file;
* alignment padding before the next source file is not part of the unit.

Example (`src/sdk/shc_work_value_8c370860.c`, 28 bytes):

```c
typedef struct WorkArea {
    char unknown0[0xfbc];
    int value;
} WorkArea;

extern WorkArea *g_work_area_8c562834;

void set_work_value_8c370860(int value) { g_work_area_8c562834->value = value; }
int get_work_value_8c37086a(void) { return g_work_area_8c562834->value; }
```

builds to the two functions and their shared pool: the word `0x0fbc`, one
alignment halfword and the long word `0x8c562834`.

## Manifest

SHC units live in `config/project.json` beside CodeWarrior modules and add one
field:

```json
{"id": "shc_work_value_8c370860", "source": "src/sdk/shc_work_value_8c370860.c",
 "address": "0x8c370860", "entry": "_set_work_value_8c370860",
 "compiler": "shc-v5.1r13",
 "symbols": {"_g_work_area_8c562834": "0x8c562834"},
 "ranges": [{"offset": 3541088, "size": 28}],
 "functions": [{"name": "set_work_value_8c370860", "address": "0x8c370860", "size": 10},
               {"name": "get_work_value_8c37086a", "address": "0x8c37086a", "size": 18}],
 "reference_sha256": "...", "headers": [], "boundary_review": "..."}
```

`compiler` is `shc-v5.1r13` or, in the `0x8c3d0000` region, `shc-v5.0r28`; MACL-saving code uses `shc-v5.1r13-macsave1` or `shc-v5.0r28-macsave1` with `macsave_evidence`; any other value is rejected. `compiler` absent means CodeWarrior; CodeWarrior units, flags, linkers and
receipts are unchanged. An SHC unit must be C, must not name a `linker` and may
not use project headers or `#pragma` (SHC pragmas include `inline_asm`).
`python3 -B tools/shc_units.py --unit <id> --output <file>.bin` builds one unit. The
`entry` is the first function and must link at the unit address. `functions` must
tile the range, the last one including the pool.

## Build chain

`tools/shc_units.py` holds all SHC logic. `project.py`, `reconstruct.py`,
`candidates.py`, `verify_source.py` and `progress.py` dispatch to it for units that
declare the SHC compiler and to the unchanged `tools/matching.py` for every other
unit. `matching.py` is deliberately not edited: its hash is part of the
reconstruction-history fingerprint, so CodeWarrior history reuse is unaffected.
`shc_units.py` reuses `tools/shc.py` to load and re-hash the installation.

For an SHC unit:

1. Re-hash the pinned SHC release and runner against
   `config/installed-compilers.json` and `config/compiler-packages.json`.
2. Compile with the fixed flags to a SYSROF object, and again to an assembly
   listing kept as a review artifact. Any warning, error or fatal message fails.
3. Bind `symbols` with a generated assembler module that contains only
   `.EXPORT` and `.EQU` lines (absolute addresses, no code or data), assembled
   by the pinned `asmsh`.
4. Link with the pinned `LNK` (`start P(<address>)`, `entry <first function>`).
   Any linker message fails, including an undefined external.
5. The link map must show exactly one section with contents, `P`, at the unit
   address. Constant (`C`), data (`D`) and bss (`B`) sections are rejected: file
   statics, string literals and initialised data would have to be placed and
   compared separately, and no admitted unit needs them yet.
6. LNK writes program headers only, so the code comes from the single loadable
   segment at the unit address (no other loadable segment, no zero-filled tail,
   entry equal to the address). Its length must equal section `P`.
7. `tools/project.py build` compares the output with the complete reference
   range, as for every module.

Receipts record the compiler, flags, linker `hitachi`, object, source, symbol
module and installation hashes. When SHC units exist, build provenance adds the
hashes of `tools/shc_units.py`, `tools/shc.py` and the SHC package lock, and the
progress checkpoint binds the two drivers. `tools/reconstruct.py` uses a separate
SHC tool profile (compiler, tool hashes, receipt, lock, both drivers); the
CodeWarrior profile and fingerprint fields are unchanged.

## Verification and progress

`tools/verify_source.py` records `shc_pool_groups_exact` when SHC units exist,
and `tools/progress.py --check` then requires it. Progress reports SHC ranges as
part of the code-range figure, with a per-compiler breakdown
(`compiled_range_bytes_by_compiler`, `shc_modules`, `shc_functions`).

CI never runs a compiler. `tests/test_shc.py` checks the adapter with fixtures
and runs three real compiles (one known-bytes control and two negative controls:
a file-static variable and an unresolved extern) only when the pinned SHC
installation is present.

## Current units

350 pool-group units, 93,006 bytes, 1197 functions (listed in `config/project.json`
with `"compiler": "shc-v5.1r13"` or `"shc-v5.0r28"`; sources in `src/sdk/`):

| Region | Compiler | Units | Bytes | Functions |
| --- | --- | ---: | ---: | ---: |
| C runtime library `0x8c12b000`–`0x8c131000` | 5.1r13 | 14 | 884 | 14 |
| C runtime library, MACL-saving routines ([-macsave=1](#-macsave1-units)) | 5.1r13, -macsave=1 | 3 | 4,464 | 8 |
| Library block `0x8c1f0000`–`0x8c205000` | 5.1r13 | 26 | 8,158 | 106 |
| SDK region from `0x8c340000` | 5.1r13 | 293 | 74,200 | 1023 |
| `0x8c3d0000` region ([second release](#second-release-50r2628)) | 5.0r28 | 14 | 5,300 | 46 |

Units are complete pool groups: one or more consecutive literal-pool groups whose
functions only branch to each other. A literal pool may sit inside a unit (and
even inside a function) where SHC had to flush it.

A unit need not be a whole source file. Many SDK files hold several pool groups,
and a unit may be one closed group from the middle of a file, as long as every
pc-relative reference and every `bsr`/`bra` inside it stays inside its range
(for example `shc_stream_ops_8c3560f4` is called with `bsr` from 0x8c3560ba, just
before it). Padding before the next file stays outside the unit: one unit
(`shc_obj_pairs_8c356d5c`) ends two bytes before a zero halfword that pads to the
next four-byte boundary.

## Source idioms that reproduce the SDK code

These SHC 5.1r13 behaviours were found while matching the units; each one is used
by at least one exact unit:

* **Scratch-register rotation.** SHC rotates scratch registers (r3, r2, r1) by basic
  block, so the block structure decides which register a temporary or call
  address gets. The SDK uses goto-style error handling
  (`if (!x) { err = E; goto done; } ... done: if (err) report(err); return err;`);
  writing the source that way, sometimes with an extra label, reproduces the
  rotation.
* **`register` locals** take callee-saved registers from r14 downward.
* **Unfolded member offsets.** SHC folds constant offsets within one expression
  only; the reference's separate adds (`base + 0x2774`, then `+ 0x1f80`) come from
  stepwise pointer arithmetic, arrays of embedded structs (`&o->lists[1]`) or
  `member_array + constant` expressions, which also set literal-pool order.
* **Calling conventions.** `int f(int, char *, ...)` reproduces the trace calls that
  pass the first argument in r4 and push the rest; an unprototyped callee keeps
  arguments in registers; old-style (K&R) definitions reproduce parameter homing
  and narrowing through the stack.
* **Tail calls.** `int r = f();` (result unused) keeps `jsr`/`rts`; a plain final
  call becomes `jmp`. Some functions fall off the end without `return`; the
  reference then returns whatever r0 holds, and the source keeps that shape.
* **Memory order.** `volatile` locals reproduce values kept in stack slots;
  `volatile` globals stop SHC moving literal-pool loads above stores. Byte globals
  declared as arrays (`g[0] = x`) reproduce the reference's address/value
  registers.
* **Runtime helpers** are bound by address like any extern: `__divls`
  (`0x8c12ba9c`, signed divide), `__modls` (`0x8c12bc48`, signed remainder),
  `__divlu`/`__modlu`, the struct-copy helpers `__quick_evn_mvn`/`__quick_odd_mvn`,
  and the `_builtin_strcpy` intrinsic's helper.
* **Variable arguments.** SHC's `stdarg.h` is not available (system headers are not
  allowed), so the `va_start` users spell out the macro.
* **Compiler intrinsics.** `pref`, `ftrv`, `fipr`, `fsca`, `fsrra`, `frchg`,
  `tas.b`, `trapa` and the `ldc`/`stc` SR, GBR and VBR sequences come from SHC's
  built-in functions, declared directly in the source because there are no
  headers: for example `void _builtin_prefetch(void *);`,
  `int _builtin_get_imask(void);` and `void _builtin_set_imask(int);` (the
  interrupt-mask save and restore used by the SDK's lock functions).
* **Calls through pointers.** A tail call through a function pointer
  (`(*g_cb)(g_arg);`) compiles to `jmp @r0`; it is ordinary SHC output, not a
  CodeWarrior sign.
* **Jumps to the next statement.** The reference sometimes has an unconditional
  `bra` to the very next block, typically where one arm of an `if`/`else if`
  chain or a `case` ends. SHC emits that branch for `goto L; L:` (a jump to the
  following statement), which also shifts the scratch-register rotation
  described above. The pattern is accepted as a known SDK idiom: it most likely
  comes from macro or `do { ... } while (0)` expansions in the original source,
  whose exact form is not recoverable from the code. Recently added units mark each occurrence
  with a one-line comment; earlier units use it unmarked.

## Second release (5.0r26/28)

Most of the code at `0x8c3d0000`–`0x8c408000` was not built with 5.1r13 (an
exception is the MPEG motion-compensation file at `0x8c400afc`, which matches
5.1r13 but has no admitted source; see "Withdrawn units"). It schedules differently, and a version sweep over the decomp.me
SHC releases (5.0r10, r26, r28, r31, r32; 5.1r01, r03, r04, r08, r11, r13; optimize 0/1, speed/size, fpu single/double,
cpu variants) found that its marker-free files are **SHC 5.0 Release 26 or 28**
output. Units there declare `"compiler": "shc-v5.0r28"` and use the same fixed flag
set; `tools/shc_units.py` whitelists exactly 5.1r13 and 5.0r28 and rejects any other
release.
Releases 26 and 28 produced identical code on every test so far; r28 is chosen.

Discriminators of the region compiler against 5.1r13: literal-pool loads stay in
statement order (never hoisted above preceding stores or pushes); `lds.l @r15+,pr`
can precede the final store; `cmp/eq` switch chains are sorted ascending while case
bodies keep source order; call-address scratch registers rotate differently.

| Test (drafts tuned for 5.1r13 unless noted) | 5.1r13 | other releases | 5.0r26 / 5.0r28 |
| --- | --- | --- | --- |
| `0x8c3f0e48` ring buffer put (204 bytes) | 16 lines differ | 16–24 | **exact** |
| `0x8c3e9670` group (264 bytes, 19 functions) | 6 lines differ | 6 | **exact** |
| four further near misses of the region | 4–16 lines differ | 4–16 | 2–14 |
| 20-function region sample, untuned sources | 6/20 exact | 3–7/20 | 7/20 |
| 16 random published SDK units | **16/16 exact** | — | 1/16 |

The SDK and library units stay on 5.1r13; no other release fits them better.
Files in the region whose code puts a `nop` after every non-delay-slot `mov rX,r0`
(661 of 686 such moves there, 1 of 1,568 in the SDK) come from yet another release
that no available compiler reproduces; they remain unmatched.
Many marker-free files contain no non-delay-slot `mov rX,r0` at all, so the absence
of the marker does not prove which release built them; a unit's `compiler` records
the release that reproduces it byte for byte.

Assembly of the symbol module and the link always use the pinned 5.1r13 `asmsh` and
`LNK`: the link only places section P and binds absolute symbols, one linker keeps
that step identical for every unit, and not every release ships one.

## -macsave=1 units

A few C runtime routines save MACL in their prologue (`sts.l MACL,@-r15`, restored
with `lds.l @r15+,MACL`). The pinned compilers emit that save only under
`-macsave=1`; under the fixed `-macsave=0` they leave MACL unsaved and read it with a
plain `sts MACL,rN`. These units therefore declare a second fixed flag set:
`"compiler": "shc-v5.1r13-macsave1"` (`shc-v5.0r28-macsave1` exists for the second
release) is the pinned release with `-macsave=1` and nothing else changed.

The flag set is restricted by evidence. Such a unit must list the addresses of its
MACL prologue saves in `"macsave_evidence"`, and `tools/shc_units.py` rejects the
unit unless the built code has `sts.l MACL,@-r15` at every listed address; because
the build must equal the reference, the saves are the reference's own. Code in the
same source file as a MACL-saving function is built with the same flag set.

Calibration: `rand` (`shc_rand_8c12b944`, a linear congruential generator using
`mul.l`) is byte-exact only with `-macsave=1`; under `-macsave=0` both pinned
releases produce the same code without the MACL save and restore.

| Unit | Bytes | Functions | MACL save (`macsave_evidence`) |
| --- | ---: | ---: | --- |
| `shc_rand_8c12b944` | 44 | 1 | `0x8c12b948` |
| `shc_strtol_8c12b24c` | 708 | 1 | `0x8c12b25c` |
| `shc_scanf_8c12c760` (scanf file, 6 functions) | 3,712 | 6 | `0x8c12cc04` (in `getint`) |

`strtol` uses two ordinary forward gotos (`goto bad`, `goto done`) to reach the
reference's distant error block (errno 1200) and to jump over it, as its branches
do. The units introduce the extern names `__ctype` (`0x8c285e40`, the character
class table), `__ptrchk` (`0x8c12f67c`, the range-check callback strtol calls) and
`__seed` (`0x8c312688`, rand's state) and, in the scanf file, `__digits_to_float`
(`0x8c12f5f0`) because no admitted names exist for those addresses. In the scanf
file only `getint` saves MACL; the other five functions share its source file and
therefore its flag set. Its `getfloat` contains two `switch (c->size) { default: ... }`
statements: the reference loads the size byte (`mov.b @(1,r14)`) at both points and
then takes one path for every size, because float, double and long double share one
format under `-fpu=single`. Writing the original size cases (`'l'`, `'L'`) with
identical bodies adds compares the reference does not have, so the default-only
form is kept as the one that reproduces the observed loads.

## Unread parameters

A parameter the function never reads is admitted only when the reference's own call
sites load a value into that argument register and removing the parameter changes
the bytes: it is then an unused parameter of the original source, not an argument
added to steer registers. Two units rely on this:

| Function | Parameter | Evidence |
| --- | --- | --- |
| `node_cost_8c1f2cd4` (`shc_slot_score_8c1f2c64`) | `idx` (r4) | its in-file callers load idx into r4; the callee overwrites r4 (`mov #0`) on entry; without the parameter the unit is 1,836 bytes instead of 1,852 |
| `getfloat` (`shc_scanf_8c12c760`) | `conv` (r4) | the caller loads the conversion character (`*p`) into r4 |

`shc_slot_score_8c1f2c64` also keeps an address-taken local (`&v;` in
`node_link_bonus`) because the reference stores `v` to and reloads it from its
stack slot, and it uses ordinary forward gotos to blocks the reference's branches
reach (shared return and bonus blocks).

## Not accepted

Statements whose only purpose is to perturb code generation are not admitted:
dead `if (0) ...` statements, `while (0) ;`, and `do { } while (0)` or `if (1)`
wrappers emit no code and exist only to split a basic block or steer register
choice, so they reproduce nothing in the reference. Accepted idioms reproduce
instructions or stack traffic the reference contains: an empty `if` whose test is
observed, `goto L; L:` for an observed branch, or an address-taken local (`&x;`)
for a variable the reference really keeps in a stack home (it is stored to and
reloaded from its slot).

## Withdrawn units

21 SHC units published earlier relied on dead `if (0)` statements to steer
register allocation, which these rules do not allow. 12 were reworked into
ordinary C and stay byte-exact: `shc_chunk_ops_8c3822a0`, `shc_heap_lists_8c359224`,
`shc_modem_link2_8c36167c`, `shc_port_modes_8c3636f4`, `shc_rate_hist_8c360314`,
`shc_ring_buffer_8c358db8`, `shc_slot_reset_8c36d9c8`, `shc_slot_table_8c1f90e4`,
`shc_sound_init_8c352e20`, `shc_start_handle_8c3474c8`,
`shc_submit_request_8c3472e4` and `shc_udp_8c3c4a30`. Nine had no clean form and
were withdrawn (their bytes returned to fallback assembly); one of them,
`shc_flash_cmd_8c379038`, has since been readmitted with an ordinary-C source:

| Unit | Bytes | Functions |
| --- | ---: | ---: |
| `shc_mpeg_mc_8c400afc` | 1,724 | 13 |
| `shc_stream_ring_8c35faac` | 1,872 | 14 |
| `shc_thread_sched_8c371e5c` | 1,032 | 13 |
| `shc_mps_init_8c35add0` | 816 | 18 |
| `shc_bank_find_8c34d9b8` | 720 | 10 |
| `shc_flash_cmd_8c379038` (readmitted) | 584 | 12 |
| `shc_buf_geom_8c342640` | 510 | 7 |
| `shc_net_timers_8c204144` | 468 | 9 |
| `shc_buf_write_8c3dc1b4` (5.0r28) | 112 | 1 |
| **Total** | **7,838** | **97** |

## What to expect

Of the literal-pool groups screened so far, those blocked are:

* hand-written assembly (`fschg`, `movca.l`, cache-block instructions, `rte`,
  `ldc`/`stc` of banked or exception registers), and `#pragma inline_asm`
  bodies (they end in a padding `nop` before `rts; nop`, and the pinned
  `-object` build rejects that pragma);
* code with nop padding before a literal pool or mid-sequence `nop`s (some SDK
  areas, apparently built with an alignment setting);
* inline struct copies through r1/r0 register pairs, which need `-speed`;
* in the C runtime library, routines built with other settings: `rand` saves MACL
  (`-macsave=1`) and a double-precision file toggles FPSCR.PR (not `-fpu=single`);
  the runtime's assembler helpers (division, `longjmp`, `__slow_strcpy`) stay assembly;
* groups that branch to static functions outside themselves until the
  neighbouring groups are matched too;
* remaining near misses, mostly the choice or order of callee-saved registers.

Some code tagged "library-style" earlier (calls through `jsr @r0`, `mov.l` for
small constants) is CodeWarrior-shaped, not SHC; leave it to the main pipeline.
