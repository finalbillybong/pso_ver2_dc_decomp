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

`compiler` absent means CodeWarrior; CodeWarrior units, flags, linkers and
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

238 pool-group units, 46,406 bytes, 740 functions (listed in `config/project.json`
with `"compiler": "shc-v5.1r13"`; sources in `src/sdk/`):

| Region | Units | Bytes | Functions |
| --- | ---: | ---: | ---: |
| Library block `0x8c1f0000`–`0x8c205000` | 22 | 5,350 | 83 |
| SDK region from `0x8c340000` | 216 | 41,056 | 657 |

Units are complete pool groups: one or more consecutive literal-pool groups whose
functions only branch to each other. A literal pool may sit inside a unit (and
even inside a function) where SHC had to flush it.

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
* **Jumps to the next statement.** The reference sometimes has an unconditional
  `bra` to the very next block, typically where one arm of an `if`/`else if`
  chain or a `case` ends. SHC emits that branch for `goto L; L:` (a jump to the
  following statement), which also shifts the scratch-register rotation
  described above. The pattern is accepted as a known SDK idiom: it most likely
  comes from macro or `do { ... } while (0)` expansions in the original source,
  whose exact form is not recoverable from the code. Recently added units mark each occurrence
  with a one-line comment; earlier units use it unmarked.

## What to expect

Of the literal-pool groups screened so far, those blocked are:

* hand-written assembly (`fschg`, `ftrv`, `fipr`, `pref`, `ldc`/`stc` sequences,
  `dmuls.l`);
* code with nop padding before a literal pool or mid-sequence `nop`s (some SDK
  areas, apparently built with an alignment setting);
* inline struct copies through r1/r0 register pairs, which need `-speed`;
* groups that branch to static functions outside themselves until the
  neighbouring groups are matched too;
* remaining near misses, mostly the choice or order of callee-saved registers.

Some code tagged "library-style" earlier (calls through `jsr @r0`, `mov.l` for
small constants) is CodeWarrior-shaped, not SHC; leave it to the main pipeline.
