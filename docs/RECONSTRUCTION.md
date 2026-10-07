# Source reconstruction evidence

The objective is source that compiles and links into the exact original decoded
executable without copying unreconstructed executable regions. The original is
the comparison oracle; original disc assets remain separate packaging inputs.
The present build is a hybrid scaffold, not a complete decompilation.

## Verified baseline and this batch

The starting manifest and receipts were checked: 26 matching functions, 3,104
compiled range bytes and 4,159,808 retained bytes in the 4,162,912-byte image.
All 36 existing tests and the five-function compiler proof passed. The baseline
manifest is preserved in scratch under `reconstruction-stage2/project-before-batch.json`.

This batch adds eight functions in seven modules, replacing 540 retained bytes:

| Entry | Complete range end (exclusive) | Bytes | Observed behavior |
| --- | --- | ---: | --- |
| `8c04a770` | `8c04a7a0` | 48 | Reject negative decrement; subtract from signed field `330`, clamp below zero, return status |
| `8c04a7d8` | `8c04a7ec` | 20 | Store field `330` and tail-call its clamp |
| `8c04a7ec` | `8c04a814` | 40 | Clamp a signed short against zero and object field `198` |
| `8c0a7628` | `8c0a763c` | 20 | Store the low 16-bit identifier at `32` unless it is `ffff` |
| `8c0a77e8` | `8c0a785c` | 116 | Allocate `68` bytes and initialize an effect from a `98`-byte table entry |
| `8c0b6394` | `8c0b6448` | 180 | Initialize an extended effect, copy its parameters and owner's identifier |
| `8c122700` | `8c122744` | 68 | First-fit free-list allocation, splitting a larger block |
| `8c122744` | `8c122774` | 48 | Allocate and clear the requested payload |

Names and partial layouts remain provisional. The setter's former
`state_change_at` name is replaced by `set_330_at`; `lookup_68_at` is now
`allocate_block_at`. These declaration/name changes preserve all existing code
generation, as verified by the complete project builds.

The allocator is an immediate dependency of the matched operations, effect
creation and extended-effect construction. Its adjacent clearing wrapper is
compiled in the same module: the compiler naturally emits the two alignment
bytes after the allocator. No bytes were appended or substituted. The setter
and clamp are separate entries despite Ghidra's inferred combined range.

For every admitted range, review included raw little-endian SH-4 instructions,
branches, return delay slots, literal references, padding and the next entry.
Existing Ghidra analysis and cross-references informed the review; inferred
Ghidra sizes were not used as proof. All literals and padding are compared.
The extended-effect initializer uses a volatile local pointer to reproduce the
observed stack reloads, with local pointer snapshots at the final two accesses;
this is a matching C construction, not a claim about the original qualifier.

## Current accounting and checks

- 34 functions in 25 modules, totaling 3,644 compiled function-range bytes.
  This includes local literals and alignment, not just instruction bytes.
- Zero separately reconstructed static-data bytes. Global effect tables,
  vtables and other data still depend on the original image.
- 4,159,268 bytes remain explicitly reference-backed. No gap is inferred to be
  data, padding or code merely from its position.
- Two fresh exact builds produced identical receipts and an exact integrated
  image. The five-function compiler proof still matches; all 43 tests pass.
- No disc was repacked and no runtime route was run for this batch.

`config/source-validation.json` records current source verification separately
from historical `config/project-validation.json` packaging evidence. The latter
belongs to the old manifest and is not a current source-build receipt. Runtime
evidence is separately described in [RUNTIME.md](RUNTIME.md).

```sh
python3 -B tools/verify_source.py
python3 -B tools/verify_source.py --check
python3 -B tools/project.py build --source-only
python3 -B tools/candidates.py
```

The source-only command currently fails explicitly with the retained-byte count
before replacing any existing artifacts. Its integration path accepts compiled
modules only, with no reference buffer. This guard does not solve the original
whole-program link layout, separate data sections or runtime reconstruction;
those remain required work. The ordinary `build` command remains an explicitly
identified hybrid scaffold. Generated artifacts and detailed raw listings live
in scratch; original disc data and private saves are preserved.

## Unresolved targets remain active

`config/reconstruction-targets.json` and `tools/candidates.py` retain and
reproduce this queue without admitting candidates to the matching manifest:

| Target | Current result | Remaining work |
| --- | --- | --- |
| `8c045f04–8c046104` | 512 of 512 bytes generated, 46 differing bytes; first difference `8c045fdd` | Floating-point scheduling/register assignment and indirect-call evaluation order |
| `8c05fbf8–8c05fd7c` | 388 of 388 bytes generated, 18 differing bytes; first difference `8c05fc43` | Slot-table addressing, register allocation and call scheduling |
| `8c18e8a0–8c18e954` | Raw runtime routine reviewed; no matching C candidate | Signed remainder uses processor carry state and `div0s`/`rotcl`/`div1`; writing `%` merely calls the same retained helper |

The adjacent `8c045f04` entry transforms a contact vector, tests XZ distance and
angle limits, then dispatches through vtable offset `78`. It observes position
`3c`, angle `64`, contact pointer/count `dc/e0`, limits pointer `33c`, contact
stride `2c`, flags at `18`, and limit fields `8/c`. These have partial-layout
checks. The no-contact branch squares its radius twice in the reference; the C
preserves this rather than imposing a guessed gameplay meaning. The flagged
contact path skips initializing the local vector; that uncertainty is retained.

The emission dependency scans 54 entries of stride `20`, suppresses a matching
recent kind, initializes a slot, and calls handle operations. Field meanings
remain provisional. It is not counted as a match despite reconstructed control
flow. Candidate receipts pin source/header inputs and report length and byte
differences; comparison is never relaxed.

Continue resolving these targets and follow their callers and dependencies:
effect initializer `8c0a6ff0`, base initializer `8c0330e4`, resolver `8c013bd0`,
clear routine `8c12b880`, matrix/vector and angle helpers used by `8c045f04`,
and the effect tables/vtables. Keep the hard targets visible while extending
coverage; the exact dependency matches above do not discharge them.

## 2026-10-07 candidate-resolution batch: incomplete

Neither primary target passed full-range comparison. No function was added to
`config/project.json`: the project remains at 34 functions, 3,644 compiled-range
bytes, zero separately reconstructed data bytes and 4,159,268 retained bytes.
The required 36-function / 4,544-byte milestone has **not** been reached.
`config/candidate-batch-validation.json` pins this work and its verification.
The earlier eight-function dependency batch above is separate from this batch.

The starting source receipt, five-function proof and focused export all checked
current. The baseline comparisons reproduced 512/512 bytes with 48 differences
and 360/388 bytes with 373 differences (including the missing 28 bytes).
The original queue, manifest, provisional sources and receipts were preserved
under `reconstruction-stage3/before` in the configured scratch directory.

### Retained provisional changes and remaining bytes

For `operation_45f04`, an explicit contact-radius value temporary makes the
radius loads and sum use the reference floating-point registers. The prefix
through `8c045fda` now matches. The remaining differences are:

| Complete region, end exclusive | Differing bytes | Evidence |
| --- | ---: | --- |
| `8c045fda–8c045ff4` | 15 | Angle constants use `fr2/fr1` rather than reusing `fr1`; orientation load and conversion scheduling differ |
| `8c046060–8c04607a` | 15 | The same conversion difference in the no-contact branch |
| `8c04608e–8c0460a0` | 16 | Reference moves the object to `r4` before reading the vtable, then adds the method offset in `r2`; candidate computes the pointer before setting arguments |

All other bytes, including the complete literal pool at `8c0460c4–8c046104`,
match. The two no-contact radius squares and the flagged path's skipped vector
initialization are unchanged. The raw return delay slot and the adjacent entry
at `8c046104` confirm the boundary; Ghidra pseudocode still misrepresents parts
of the floating-point context and is not the behavioral authority.

For `emit_5fbf8`, separate field-base lifetimes recover the reference's indexed
addressing and all seven saved registers. A local pointer to the last-slot
output reproduces the early stores; expressing the counter test as a negated
less-than reproduces its branch direction. The current function is 388 bytes:

| Complete region, end exclusive | Differing bytes | Evidence |
| --- | ---: | --- |
| `8c05fc3c–8c05fc7a` | 23 | Scan-loop register choices and final shift scheduling |
| `8c05fc7a–8c05fccc` | 2 | Zero initialization uses `r1` instead of `r5` |
| `8c05fccc–8c05fd10` | 21 | Redundant signed-byte extension and the final handle-call argument scheduling |

The prologue, early rejection paths, final return region and complete 64-byte
literal pool at `8c05fd3c–8c05fd7c` match. The next entry begins at `8c05fd7c`.
The scan bound is signed `i < 54`, with a `0x20` stride, a signed 32-bit counter
at `0xc`, a signed byte at `0x1c`, and signed extension of the high kind halfword
for the final call. `src/include/emit.h` asserts the stride and every accessed
field offset and is explicitly declared in the queue's header dependencies.
Names remain provisional; the original field meanings are not established.

### Failed source hypotheses retained for reproducibility

Scratch `reconstruction-stage3/experiment-index.json` hashes all 119 trials.
Each trial directory has `candidate.c`, `hypothesis.txt`, `unit.json`, source
header snapshots, compiler outputs/receipt and `comparison.json`. The one
C90 declaration-order error has its diagnostic in `comparison.json` and no
successful compiler receipt. Experiment scripts use the existing matching
adapter with the unchanged compiler and flags; no project tool was changed.

- Radius operand reversal, `register` qualifiers and volatile loads alone did
  not improve the first target. Direct structure expressions worsened addressing.
  The explicit entry-value temporary removed exactly two differences.
- Named angle intermediates, constant grouping, reversed multiplication,
  double literals, external versus absolute call declarations and pointer
  temporaries did not reproduce the reference conversion schedule. Constants
  declared before the call worsened register allocation. Reading factors by
  their image addresses did not match and was discarded, retaining source
  literals in the candidate.
- Direct vtable field calls shortened/reordered dispatch; local pointer forms,
  offset types and argument temporaries did not reproduce the early `r4` move.
  This does not establish that ordinary C cannot reproduce it.
- A shared emission flag-base variable changed the saved-register allocation;
  retaining field bases only for kind/counter recovered the original size.
  Loop scopes, mask declaration order, signed-byte local/prototype types and
  splitting the kind halves were tested. The retained form has the smallest
  observed difference count, but the full-range comparison still fails.

### Signed-remainder calling convention and blocker

The raw `8c18e8a0–8c18e954` range takes dividend in `r4` and divisor in `r5`.
It copies them to `r1/r2`, saves `r4`, and tests the divisor before touching
`r0`. A zero divisor branches to `sett; rts` with the stack restore in the delay
slot: incoming `r0` is preserved and T is one. There is no zero-divisor numeric
result assignment. On the nonzero path, `div0s r3,r1` establishes the dividend
sign; `movt` saves it in `r4`. The two `subc` instructions form the sign seed and
adjust the dividend. A second `div0s` seeds Q/M/T for 32 `rotcl r1; div1 r2,r0`
pairs. The trailing sign check may perform one corrective `div1`; the helper
then adds the saved sign, clears T, and restores `r4` in the return delay slot.
Thus incoming T is not a numeric input. `r0–r3` and status flags are scratch;
`r4`, `r5` and the higher general registers are preserved on return.

The available CodeWarrior package has compiler documentation but no runtime
source/library implementing this helper. The local GCC 2.95.3 SH runtime has a
related assembly signed-division sequence; it uses different registers, returns
a quotient and handles zero differently. It was inspected as algorithm evidence,
not linked or copied into the build. The local Ghidra SH instruction semantics
were also inspected; material hashes are pinned in the batch receipt.

Two unsigned-magnitude, shift/subtract C experiments avoid both division and
remainder operators. They compile to **68 bytes / 180 differences** and
**72 bytes / 179 differences**, respectively, across the required 180-byte range.
They have no recursive helper calls. Their zero-divisor return is an explicitly
incomplete arithmetic-test convention and does not model the observed ABI.
The `%` control compiles to 12 bytes that call `__l_mods` at the same address;
it would recurse if substituted and is rejected.

A scratch opcode model executed the saved raw range for 20,180 nonzero-divisor
cases and 20 zero-divisor cases, covering both incoming T values and randomized
incoming `r0`. It confirmed signed remainder, T=0 for normal returns, preservation
of `r4–r15`, and incoming `r0`/T=1 on zero. `INT_MIN / -1` produces remainder
zero with T=0 in this model. The two host-compiled C algorithms passed 40,360
nonzero arithmetic comparisons. These are model/host checks, **not hardware
execution or proof of target ABI equivalence**. `remainder-checks.json` records
the scope. No runtime candidate was admitted or placed in the source queue.

### Verification and next commands

Two fresh exact project builds, exact integrated-image comparison, the
five-function compiler proof and all 43 existing tests pass. The matching
manifest and all admitted source/header provenance are unchanged. Source-only
builds reject 4,159,268 retained bytes and preserve existing build artifacts.
The updated queue invalidated the old focused-export input hashes, so exports
were regenerated from a disposable copy and rechecked; the original database
remained unchanged. `config/analysis-workflow.json` points to the new receipt
and retains the previous pointer. No gameplay, repacking, REA work, compiler
changes, commits or pushes were performed.

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py operation_45f04 emit_5fbf8
python3 -B tools/dossier.py --check <scratch>/function-dossiers/run-keb1gx00/receipt.json
```

Resume from the three angle/dispatch regions and the three emission regions
above; inspect the preserved failed hypotheses before repeating source trials.
Keep both primary targets unresolved until their complete ranges match. Only
then follow the operations further into effect initialization, matrix/vector
helpers and referenced static data; dependency matches cannot replace these
batch acceptance criteria.

## Follow-up to the candidate batch: still incomplete

The follow-up retains a smaller emission mismatch, **37 bytes instead of 46**,
with unchanged 388-byte length. A named `threshold = 148`, declared between the
mask and counter-base pointer, and a loop-local `i` declared after the kind-base
pointer reproduce nine more reference bytes. The first mismatch is now
`8c05fc43`. Its remaining regions are 14 differing loop bytes, two zero-store
bytes and 21 signed-byte/final-call bytes. The literal pool and all previously
exact regions remain exact. This is still a provisional candidate, not a new
matching function. The spatial operation is unchanged at 512 bytes with 46
differences, first at `8c045fdd`.

The stage-4 receipt is preserved by the current receipt chain. Its
`previous_batch_receipt` points to the preserved preceding receipt. Scratch
`reconstruction-stage4/experiment-index.json` hashes 858 trials, including a
720-case search over the declaration order of the loop's kind base, mask,
threshold, counter base, index and named bound. That search did not improve the
37-byte candidate. The source retained for the loop bound remains literal 54.
The two compiler-rejected trials used declaration placement not accepted by
this compiler's C dialect; their diagnostics are preserved.

Other follow-up results:

- Inline conversion helpers, a full inline angle-call helper and inline callback
  wrappers collapsed to the same conversion/dispatch code or worsened it.
- Alternate literal forms, shared versus block-local float/angle temporaries,
  call result/argument types and qualifiers did not solve the spatial operation.
  Do not repeat these trials without a new instruction-level hypothesis.
- External emission-call declarations, signed-byte argument temporaries/types,
  array/structure access and integer-address forms did not remove the redundant
  byte extension or reproduce final call scheduling. Typed array declarations
  also altered addressing and code length; the checked provisional header is
  retained without changing the external storage declaration.
- Raw neighboring code at `8c045322` repeats the target's angle-conversion order.
  Another routine contains both the target-style `fr1` sequence and a `fr2/fr1`
  sequence like the candidate. Thus the desired sequence exists in the original
  image, but this observation does not identify the required source form.
- The angle-difference callee at `8c0c52f4` masks both arguments to 16 bits,
  subtracts, conditionally negates according to the signed low halfword, and
  returns a zero-extended halfword. Its behavior was inspected to test call
  declarations; no new function was admitted. Little-endian raw disassemblies
  and reproduction commands are preserved in the follow-up directory.

All 34 admitted functions and their source/header provenance remain unchanged.
Two fresh exact builds, integrated-image comparison, the five-function proof and
all 43 tests pass again. Source-only rejection still reports 4,159,268 retained
bytes and preserves existing build artifacts. Queue metadata changed, so the
focused export was refreshed and checked from a disposable database copy; the
original database is unchanged. No compiler flags, comparison rules, gameplay,
packaging, commits or pushes changed.

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py operation_45f04 emit_5fbf8
python3 -B tools/dossier.py --check <scratch>/function-dossiers/run-f80p10xp/receipt.json
```

The next useful investigation must explain a remaining instruction sequence,
not repeat declaration-order or algebraic sweeps. Neither complete-range
acceptance criterion has been met, and dependency work has not been substituted
for those criteria. The signed-remainder ABI blocker from the preceding batch
also remains open.


## Continuous iteration checkpoint: verified emission ABI corrections

The stage-5 checkpoint reduces emission from 37 to **18 differing bytes** over
its unchanged complete 388-byte range. Operation remains 512 bytes with 46
differences. Neither is admitted; this remains an incomplete two-target batch,
with 34 matches, 3,644 compiled bytes and 4,159,268 retained reference bytes.

Three combined changes produced the improvement:

- `prepare_slot_at` saves incoming `r5` at `8c05ff9a` and tests it at
  `8c060078`. Its old one-argument declaration was incomplete. Passing the
  observed second argument, zero, makes the zero store and preparation call
  exact. The callee's remaining semantics are still provisional.
- `handle_byte_at` sign-extends `r5` at `8c34571e`. Both its parameter and the
  loaded local must be `signed char` to eliminate the caller's redundant
  extension. Changing either alone did not do so; this corrects an earlier
  negative conclusion based on separate type experiments.
- `((int)kind >> 16)` expresses the high half's sign extension using this
  compiler's arithmetic right shift. It reproduces the in-place halfword
  extension and preserves the intended signed high-half value.

| Emission region | Differing bytes | Remaining issue |
| --- | ---: | --- |
| `8c05fc3c–8c05fc7a` | 14 | Kind-column base and scan offset occupy swapped registers; one shift/move pair schedules differently |
| `8c05fc7a–8c05fccc` | 0 | Initialization and preparation call now exact |
| `8c05fccc–8c05fcfe` | 0 | Handle reset, field call and signed-byte call exact |
| `8c05fcfe–8c05fd10` | 4 | `mov #0,r7` and `mov r10,r5` exchange positions around the final call delay slot |

`reconstruction-stage5` preserves small compiler probes, every candidate source,
hypothesis, compiler receipt and comparison, plus little-endian raw callee
inspection commands. Probe results are diagnostic and are not admitted matches.
The experiment index includes compiler failures with their diagnostics.
Inline wrappers with reordered arguments, direct declarations, narrow return
values, local lifetime/register changes, volatile memory diagnostics, packed
union/bitfield forms and alternate loop index/address forms did not resolve
the last differences. Narrow callback returns also worsened operation output.
No volatile diagnostics or speculative narrow return declarations were retained.

The emission source and unresolved queue now retain the 18-byte checkpoint.
Both fresh exact project builds, integrated-image comparison, the five-function
proof and all 43 existing tests pass. Source-only builds still reject the
4,159,268-byte reference dependence without changing build artifacts. The
focused export was regenerated because its tracked queue metadata changed;
the original Ghidra database remains unchanged. All admitted source provenance,
compiler flags, range checks and provisional offset assertions remain intact.

Resume with the current receipt in `config/analysis-workflow.json` and:

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py operation_45f04 emit_5fbf8
```

The continuous goal remains active. Next inspect comparable neighboring emission
calls/loops and the operation's mixed floating-point schedules to form a new
instruction-level hypothesis. Preserve the separate signed-remainder exceptional
ABI blocker; no dependency match replaces either primary acceptance criterion.

A subsequent scratch-only continuation in `reconstruction-stage6` preserves 36
additional trials and `findings.txt`. Equivalent loop control-flow forms, typed
word columns and narrow angle/loop declarations did not improve either retained
candidate. The adjacent emission routine repeats the desired final-call delay
slot; local compiler manuals identify no SH-specific C member-call annotation.
The stage-5 source/build receipt remains current.

The stage-7 continuation preserves 61 full-range trials (nine rejected) and four
minimal compiler probes in `reconstruction-stage7`, indexed and hashed there.
No retained source changed. Symbol renaming, wider intermediates, address-based
inline arithmetic, result-flow changes, ABI-equivalent float-argument positions,
aggregate argument probes and reuse of dead locals did not reduce the 46/18
mismatches. Minimal probes reproduce the two-constant `fr2/fr1` schedule and the
zero-argument delay slot, narrowing the issue to persistent code generation
rather than merely the large function context. This does not establish that
matching ordinary C is impossible or identify a different original compiler.
The fixed compiler/language/flags remain unchanged; the user was asked whether
to permit scratch-only C++/settings diagnostics, and no such diagnostics were
run without an answer. Current source verification still passes.

Stage 8 adds three fixed-C standard math-name probes (`atan2f`, `atan2`,
`__atan2f`), all identical to the retained 512/46 operation candidate. Source
and focused-export receipts revalidate. `reconstruction-stage8/impasse-audit.json`
records a practical impasse and the pending request for scratch-only language/
settings diagnostics; no compiler or language setting has changed. The
remaining full-range mismatches are still 46 and 18 bytes, not accepted matches.

After three consecutive revalidated impasse audits, the continuous goal was
marked **blocked**, pending the requested scratch-only diagnostic-scope decision.
See `reconstruction-stage8/impasse-audit-3.json`. Neither primary target is
complete; no new function was admitted and all retained source/header/manifest
hashes remain unchanged. No broader diagnostic ran without an answer.


## Authorized C++ and settings diagnostics

The user approved scratch-only C++ and different compiler-setting diagnostics,
clearing the prior permission blocker. The verified fixed-C build remains
unchanged. `config/diagnostic-validation.json` pins the resulting stage-9 work:
69 comparisons, one compiler/linker rejection, two minimal virtual-call probes,
source snapshots, compiler settings and outputs. Existing source verification
passes; the previous two-build/image/proof/43-test receipts remain current.

A real C++ virtual call resolves **all 16 dispatch differences**. With the same
compiler and O2 settings plus C++ language mode, a 24-byte nonvirtual prefix
produces an implicit vptr at `0x18`. A 28-byte polymorphic base followed by the
provisional derived fields satisfies the existing offset checks. The vtable
starts method entries at offset 8, so 28 unnamed virtual entries place contact
at `0x78`. Their names are placeholders, not recovered identities. The compiler
emits the reference's early self move into `r4`, vptr load, slot arithmetic in
`r2` and call delay slot without assembly or patched instructions.

The checked C++ candidate was compiled twice with identical complete output:

| Region | Differing bytes |
| --- | ---: |
| `8c045fda–8c045ff4`, first angle conversion | 15 |
| `8c046060–8c04607a`, second angle conversion | 15 |
| `8c04608e–8c0460a0`, virtual dispatch | 0 |
| Every other byte through `8c046104`, including literals/padding | 0 |

It therefore matches 482 of 512 bytes and remains **incomplete**. This strongly
supports C++ virtual dispatch as the source of that instruction sequence, while
not proving the original class hierarchy or the impossibility of equivalent C.
The best source and receipt are in `reconstruction-stage9/best-operation-checked`.
No C++ source has been admitted or substituted into the fixed-C project.

Changing language mode alone produced identical output. O2/size remained best;
O2/speed worsened emission, and levels 0, 1, 3 and 4 worsened full functions.
Level 1 reused `fr1` for constants but lacked the required complete scheduling
and delay-slot behavior. Individual optimization/peephole/scheduling pragmas
had no output effect in these tests; accepting a pragma does not prove SH
backend support. `optimization_level 1` did change output as expected. Debug
information and inlining controls did not help. Making operation itself a
nonstatic member changed saved-register allocation and worsened output.
Nonvirtual handle member calls and narrow parameter variants did not solve the
emission delay slot. C++ loop scopes, field accessors, reference helpers and
wrapped angle values also failed to finish the remaining differences.

The retained ordinary-C results remain operation **512/46** and emission
**388/18**. Coverage remains 34 functions, 3,644 compiled bytes and 4,159,268
retained bytes. Original data, Ghidra database, saves, admitted sources, headers,
compiler binary, project settings and comparison rules were preserved. No
packaging, gameplay, commits or pushes occurred. Next work should investigate
the two constant-load schedules and emission allocation/call scheduling using
this concrete distinction between language lowering and optimization; avoid
repeating the recorded failed sweeps. Diagnostic authorization does not itself
admit a nonmatching function or replace the full-range acceptance criteria.

## Continued diagnostic loop, stage 10

The user requested continued iteration without repeated restart questions.
`reconstruction-stage10` preserves 47 additional comparisons, including three
rejections, and an audit of earlier exact-length outputs by mismatch region.
Neither primary candidate improved. Checked orientation field representations,
C++ scalar/reference wrappers, table row/member access and further floating-point
and optimizer controls were tested. The historical `-constpool` option is
rejected by this driver; the local Dreamcast manual explicitly lists scheduling,
peephole, register-coloring and section pragmas as unsupported. Accepted pragmas
must not be taken as evidence of working SH backend controls.

The regional audit found no better remaining region among the saved candidates
at their required complete lengths. This is a fixed-offset comparison, not a
proof about other lengths or possible source forms. Best results remain fixed C
**512/46 and 388/18**, and the scratch C++ operation **512/30**. No functions or
replacement bytes were added. `verify_source.py --check` confirms the existing
build evidence is current. All hypotheses, source snapshots, comparisons and
compiler receipts or rejection evidence are indexed in stage 10; its findings
record the failed approaches. `config/diagnostic-validation.json` now points to
that checkpoint and retains the prior receipt under `before/`.


## Angle dependency integrated, stage 11

`src/math/angle_difference.c` matches **all 28 bytes** at
`8c0c52f4–8c0c5310`, including the return delay slot, zero alignment word at
`8c0c530a`, and `0x0000ffff` literal at `8c0c530c`. The next entry starts at
`8c0c5310`; the prior entry and its separate literal end at `8c0c52f4`.
The provisional function masks both inputs to 16 bits, subtracts converted angle
minus orientation, wraps to signed 16 bits, conditionally negates, and returns
the low 16 bits. The half-turn case deliberately returns 32768. It uses no headers.

A named mask used only for the first input preserves the reference's `mov.l`
and `and` sequence. Literal masks everywhere emit 18 or 20 bytes. Sharing one
mask across all three uses emits 28 bytes with incorrect registers/instructions.
O3/O4 diagnostics first reproduced the dependency, but a source refinement then
reproduced it with the **unchanged C/O2 configuration**. No compiler-setting
change was admitted. The final readable source was compiled twice independently
before admission. A scratch host behavior check tests every 16-bit difference
at eight origins, including high input bits: **524,288 checks pass**.

All 34 prior matching functions remain exact. Current totals are **35 functions,
26 modules, 3,672 compiled range bytes and 4,159,240 retained reference bytes**.
Two fresh full project builds, full integrated-image comparison, five-function
compiler proof and all **43 existing tests** pass. Source-only mode rejects the
remaining 4,159,240 bytes and preserves existing build artifacts. The focused
Ghidra export was regenerated because the manifest and queue changed, using a
read-only disposable database copy; its current receipt is
`function-dossiers/run-_1slf2wp/receipt.json` under scratch.

Both primary targets remain incomplete: fixed C is **512/46 and 388/18**, while
the scratch C++ operation is **512/30**. Applying the mask-temporary lesson to
integer scale constants makes the operation larger or unchanged. O3/O4 with
actual virtual dispatch still differs in 233 bytes. This dependency match is
additional progress and does not replace either primary acceptance criterion.
The signed-remainder exceptional ABI blocker remains unchanged.

Raw comparison of two adjacent callers, `8c043fb4` and `8c044018`, finds both
floating constant patterns in the original image: the former uses fr2/fr1,
while the latter reuses fr1 in the same order as the unresolved operation.
Their listings are preserved in stage 11. This gives a smaller real caller to
investigate; it does not identify the original source or a different compiler.
No gameplay, packaging, assembly substitution, binary patch, commit or push was
performed. Earlier evidence is retained under stage 11's `before/` directory.


## Smaller caller and translation-unit context, stage 12

`src/objects/operation_43fb4.c` matches the complete **100-byte** range
`8c043fb4–8c044018` under unchanged C/O2 settings. The provisional routine takes
an object, an integer step, and a supplied relative vector. It converts the
vector's X/Z angle using the observed constants, calls `8c0c4f90` with the
current angle, converted angle and step, stores that result at object offset
`0x64`, and returns the reconstructed `angle_difference` result. The partial
object/Vec3 types come from the declared, offset-checked `spatial.h` dependency.
The return delay slot ends at `8c044002`; five four-byte literals occupy
`8c044004–8c044018`, followed immediately by the next function. Names remain
provisional. The final source matches independently twice before admission.

The adjacent real caller at `8c044018–8c0440a0` is a smaller reproducer of the
primary angle issue: **136 bytes, 15 differences**, with every other byte exact.
Its reference reuses fr1 for both constants, whereas the admitted 100-byte
caller uses the compiler's fr2/fr1 sequence. Both patterns thus occur in the
original image. Compiling both callers together produces 236 bytes with only
the same 15 differences. Compiling the exact preceding operation `45d6c` with
`45f04` produces 920 bytes and the unchanged 46 C / 30 C++ differences. All
comparisons include the whole combined ranges; no prefix trimming or output
patching was used. This rules out those specific preceding-function contexts,
not all possible original translation-unit effects.

Volatile FP locals add stack traffic. Block-local optimization pragmas restored
to O2 leave the smaller caller unchanged; leaving O1 active changes the entire
function. Float/double transitions and reused factor locals do not improve it.
C++ default arguments, const member functions, and explicitly qualified virtual
calls all leave emission's 388/18 result unchanged. These failed hypotheses and
all compiler receipts/comparisons are preserved in `reconstruction-stage12`.

Current totals are **36 functions, 27 modules, 3,772 compiled range bytes and
4,159,140 retained reference bytes**. The latest two supporting matches replace
128 bytes, preserving all original 34 matches. Two fresh exact builds, exact
integrated image, five-function proof and all **43 tests** pass after integration.
Source-only mode rejects all remaining reference bytes and leaves existing
artifacts unchanged. The new read-only focused export receipt is
`function-dossiers/run-eyp4k8eo/receipt.json` under scratch.

The requested primary batch remains **incomplete**. Its targets still differ by
46/18 bytes in fixed C, with a separate 30-byte C++ operation diagnostic. The
36-function total here is not the originally proposed 36-function/4,544-byte
outcome: neither primary function has been admitted. The signed-remainder
exceptional ABI blocker also remains. Continue using the smaller actual caller
and verified dependency types to investigate the angle schedule, alongside the
emission loop and final-call schedule. No gameplay, packaging, compiler change,
assembly substitution, commit or push was performed.


## Wrapped angle adjustment dependencies, stage 13

`angle_halfway` matches all **24 bytes** at `8c0c4fc8–8c0c4fe0`.
It masks the orientation, forms a signed 16-bit wrapped difference, shifts that
difference arithmetically by one, adds it, and returns the low 16 bits. Negative
odd differences round downward. The return delay slot at `8c0c4fd8`, zero word
at `8c0c4fda`, and `0x0000ffff` literal at `8c0c4fdc` are included.
A named mask for the first input plus a signed-short local reproduces the range;
a literal-only expression emits 16 bytes, and a combined mask expression differs
in three bytes. The next function starts at `8c0c4fe0`.

`angle_step` matches all **56 bytes** at `8c0c4f90–8c0c4fc8`.
It masks both angles, converts their difference to signed 16 bits in an int
local, tests both signed step bounds, then either returns the desired angle or
adds/subtracts the step according to difference bit 15. The final value wraps
through signed and unsigned 16-bit conversions. Both returns and their delay
slots, the zero alignment word at `8c0c4fbe`, and literals at `8c0c4fc0/4fc4`
are included. A short-typed difference local emits the same size with 23 wrong
bytes; the int local preserves the exact observed code. Names/types remain
provisional. Both final readable sources matched twice independently at fixed
C/O2 before admission. No header dependencies are required.

The host behavior harness exercises every wrapped 16-bit difference at six
origins, with nine positive/zero/negative step values and input high bits:
**3,932,160 checks pass**, with undefined-behavior instrumentation configured to
trap without requiring a host runtime library. Tested steps span -65535 through
65535; this does not establish behavior for every possible 32-bit step.
The initial runtime-linked sanitizer build could not link the installed host
libubsan, so the successful build uses `-fsanitize-undefined-trap-on-error`.

The primary source loop remains unresolved: block/goto boundaries in the
136-byte caller leave its 15 differences; narrower approach declarations are
unchanged or worse. Emission zero-dataflow, kind references/enums and pointer,
enum or aggregate call-argument diagnostics do not improve its 18 differences.
These diagnostic types were not adopted. The final primary sources are unchanged.
A read-only inspection of the PSO GC reference project at
`https://gitlab.com/mrb0nk500/pso-gc`, commit
`c904f9d4f1055330f437845ee5a323a9646e8686`, found no implementation of these
callers. No external game code was copied into this project.

Current verified totals are **38 functions, 29 modules, 3,852 compiled range
bytes and 4,159,060 retained reference bytes**. All prior 36 matches are preserved.
Two fresh exact builds, exact integrated image, five-function proof and all
43 existing tests pass. Source-only mode rejects the remaining reference gaps
without changing existing artifacts. Manifest/queue changes required the new
read-only focused export `function-dossiers/run-26fcqzdm/receipt.json`.
The two primary targets still have 46/18 differing bytes in fixed C, and the
C++ diagnostic remains 512/30. The original primary batch is incomplete;
these supporting matches do not replace its acceptance criteria. The signed
remainder's 180-byte exceptional ABI blocker is unchanged. Continue investigating
angle address/register lifetimes and emission scheduling from the retained
candidates; do not substitute assembly or copied runtime objects.


## Exact emission slot selector and continued primary trials, stage 14

`src/effects/choose_emit_slot.c` reproduces all **88 bytes** at
`8c05ff3c–8c05ff94`, a direct dependency of unresolved `emit_5fbf8`.
It scans 54 32-byte emission rows, requiring bit 0 set and bit `0x400` clear,
then tests bit 0 at offset 24 in a corresponding 28-byte secondary row. It
returns the first qualifying index or -1. Preserve this short-circuit read order.
The return/delay slot at `8c05ff82/84`, zero alignment at `8c05ff86`, and three
four-byte literals at `8c05ff88/8c/90` are included; the next entry is `8c05ff94`.

The exact source uses a loop-local secondary-field pointer declared after the
flags load, inside the conditional block. The compiler hoists that pointer while
retaining the needed allocation. Function-scope pointer forms differ only in
register choices once their address/stride expressions are corrected. The explicit
shift `i << 5` must remain: multiplication by `sizeof(EmitSlot)`, including an
int-cast size, emits 92 bytes rather than 88. This is not solely unsigned promotion.
A final type-checked source first failed that full-range gate; the shift form
then matched twice independently before admission. No nonmatching source was
added to the manifest. The new `emit_secondary.h` checks size 28 and flags offset
24; `emit.h` remains unchanged and both headers are declared dependencies.

Raw addresses also establish adjacent extents: the 54 handle pointers beginning
at `8c467a78` end at `8c467b50`; 54 secondary rows of 28 bytes end at `8c468138`;
54 emission rows of 32 bytes end at `8c4687f8`, the observed enabled flag address.
This adjacency does not establish a single original enclosing struct or reconstruct
any static-data bytes. Table and field names remain provisional.

Primary hypotheses remain unsuccessful. Hoisted kind-field scopes can put the
kind base in r1 but swap the table base/scan registers and reorder initialization.
An explicit flag base, implicit repeated stride, or separated counter lifetime
does not fix the entire loop. Reusing argument variables changes saved-register
allocation elsewhere. Equal branch arms retain extra instructions; inline scan
helpers add code; kind-field accessors swap comparison operands without fixing
the register mismatch. Constant aggregate/union float storage adds stack traffic
or separate data (rejected by the full-range compiler gate). The 136-byte real
angle caller remains 136/15 at O2, O3 and O4, for both size and speed. Old-style
angle prototypes are unchanged; variadic forms are worse. The advertised
`-mw_fp double64bit` diagnostic is explicitly rejected for SH4 by this compiler.
No diagnostic setting was admitted. All trial snapshots, hypotheses and success
or rejection receipts are indexed in `reconstruction-stage14`.

Current verified totals: **39 functions, 30 modules, 3,940 compiled range bytes,
4,158,972 retained reference bytes**. All prior 38 matches are preserved. Two fresh
exact builds, full image comparison, five-function proof and all 43 tests pass.
Source-only rejects all remaining reference bytes without changing artifacts.
Queue/manifest changes required the new disposable-copy focused export
`function-dossiers/run-5tn4r9q2/receipt.json`; the original database is unchanged.
Both primary targets remain incomplete at fixed-C 512/46 and 388/18; the scratch
virtual-call operation remains 512/30. The signed-remainder exceptional ABI blocker
is unchanged. Supporting matches do not replace the original acceptance criteria.
No gameplay, repacking, assembly substitution, compiler change, commit or push.


## Emission field scopes and two complete callees, stage 16

The emission candidate improves from **388/18 to 388/8**. Keeping the kind
column inside the loop and the counter column inside its conditional use fixes
all remaining loop register choices. The only differences are two instruction
pairs: shift/base-copy scheduling at `8c05fc56/58` (four bytes) and final-call
argument scheduling at `8c05fd08/0e` (four bytes). The complete range, including
all literals and padding, remains compared. This candidate is still provisional.
The operation remains **512/46** in C and **512/30** in the existing scratch C++
virtual-call diagnostic. Neither primary acceptance criterion is satisfied.

`clear_emit_slots` matches **100 bytes** at `8c0601a8–8c06020c`.
If the enabled flag is set it calls the two observed reset routines, then always
scans 54 rows, retaining flag bit 0 and clearing the counter and position fields.
Each store needs its own field-base scope to reproduce allocation. A row-pointer
baseline emits only 80 bytes; separately scoped columns produce the exact full
range. Return/delay slot at `8c0601f6/1f8`, zero word at `8c0601fa` and all four
literals through `8c06020c` are included. Final readable source with declared
`emit.h` layout checks matches independently twice.

`prepare_emit_slot` matches **532 bytes** at `8c05ff94–8c0601a8`.
This direct emission dependency calculates distance-dependent attenuation unless
flag `0x2000` or absent position/listener selects zero attenuation. Squared X/Z
distance must compare less than 90000; otherwise the -256 sentinel sets flag
`0x100` and returns zero. The accepted path clears that flag, adds the row argument
and one of two observed global adjustments, clips to [-127,127], and stores the
result at row offset 24. It computes a direction-dependent signed byte at offset
28, or an alternate scaled position value when the observed flag permits it.
A nonzero second argument forwards both values to the handle; the function returns
one. Gain/pan and listener names remain provisional.

Preserve the lower floating clamp as `a > 0 ? a : 0`, including its ordered
comparison behavior for NaN. No speculative behavior fixes were introduced.
The new `emit_listener.h` checks observed offsets X=0x90, Z=0x98 and angle=0xac;
its offset macros are used in source and both it and `emit.h` are declared headers.
Separately scoped field bases correct a 520-byte first candidate to 532 bytes;
direct declarations for the distance and direction helpers fix the remaining
literal/call register choices. The final source matches twice independently.
Return/delay slot at `8c06012a/12c`, zero word at `8c06012e` and all 30 literals
at `8c060130–8c0601a8` are included. No static data or SDK code was copied.

Additional hypotheses did not finish the primaries: extended field lifetimes,
integer address round-trips, comparison forms, scalar factor scopes, angle address
lifetimes, index decompositions, qualified reads, forwarding argument permutations
and equivalent loop control flow. Four initial scope trials were rejected for
C89 declaration placement and rerun with proper blocks. Two wide-argument ABI
diagnostics require an unresolved `__rt_ultoi64` helper and were rejected; a
by-value pair adds stack traffic. No such diagnostic types were admitted.
The signed-remainder dependency remains blocked by its complete 180-byte range
and exceptional incoming-r0/carry convention; no assembly/runtime substitution.

Current totals: **41 matching functions / 32 modules / 4,572 compiled range
bytes / 4,158,340 retained reference bytes**. This stage replaces **632 bytes**
while preserving all prior 39 matches; the continuous work since the original
34-function checkpoint replaces 928 bytes across seven additional functions.
Two fresh exact builds, the integrated-image comparison, five-function proof and
all 43 existing tests pass. Source-only rejects the remaining reference gaps and
preserves existing build artifacts. The new focused export is
`function-dossiers/run-wi0p2pe3/receipt.json`; the original database is unchanged.
The intermediate 40-function export `run-uk1huepw` is retained as historical evidence.
These supporting matches do not replace either primary target's acceptance gate.


## Adjacent emission controls and a shared scheduling blocker, stage 17

Six more ordinary-C entries match their entire ranges, including literals and
padding, with the compiler and flags unchanged:

| Provisional entry | Address | Bytes |
| --- | --- | ---: |
| `emission_setup_6020c` | `0x8c06020c` | 128 |
| `emit_alternate_6028c` | `0x8c06028c` | 36 |
| `emit_lookup_602b0` | `0x8c0602b0` | 20 |
| `clear_emit_slot` | `0x8c0602c4` | 92 |
| `emit_control_60320` | `0x8c060320` | 52 |
| `reset_emit_control` | `0x8c060354` | 44 |

Setup retains the observed bounded poll and last state written by the callee;
the reference does not initialize that output local. A named saved bound,
postincrement and count initialization after the initial call reproduce it.
The alternate wrapper requires a direct declaration to reproduce its fifth
stack argument and call delay slot. The lookup uses the observed explicit byte
stride. Slot control retains signed bounds 0..53, and reset preserves independent
field stores and call order. Checked `emit.h` dependencies remain declared.
Every final source matched in two independent compilations before integration.
The manifest records return/tail-call delay slots, padding and adjacent boundaries.

The related `emit_or_update_slot` at `0x8c05fd7c` is now a **448-byte candidate
with four differing bytes** at `0x8c05feba` and `0x8c05fec0`. Delaying the saved
reuse-argument copy, declaring offset before slot and scoping the kind column
inside the loop reproduce the rest of the complete range. The remaining pair
exchanges `mov #0,r7` with `mov r10,r5` across the final call's delay slot—the
same blocker as the primary emission candidate. It remains provisional and is
explicitly unresolved in the queue.

The primary targets remain **512/46** and **388/8**; the scratch C++ operation
remains 512/30. Register hints, parameter categories, typed row/array/union
address forms, argument-copy orders, equivalent high-half expressions and
ignored-result return declarations did not finish them. Three signed-division
experiments introduced an unresolved `_l_divs` dependency and were rejected.
All **174 trials**, source snapshots, hypotheses and comparison/compiler receipts
are preserved in `reconstruction-stage17`; failed hypotheses should not be repeated
without a new source or ABI reason. The signed-remainder exceptional ABI remains
unresolved; no assembly or copied runtime was substituted.

Verified totals: **47 matching functions / 38 modules / 4,944 compiled bytes /
4,157,968 retained reference bytes**. All prior 41 matches are preserved. This
stage replaces 372 bytes; continuous work since the original 34-function
checkpoint adds 13 functions and 1,300 bytes. Two fresh exact project builds,
the integrated-image comparison, five-function compiler proof and all 43 original
tests pass. Source-only rejects remaining gaps and preserves existing artifacts.
Focused export `function-dossiers/run-blqf0m8u/receipt.json` is current; the original
database is unchanged. The primary batch remains incomplete.

Reproduce the active comparisons with:

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py operation_45f04 emit_5fbf8 emit_or_update_slot
```

Continue investigating the shared call scheduling and angle conversions; follow
observed dependencies into effect initialization at `0x8c0a6ff0`, matrix/vector
helpers and static data. Keep private settings, registration details and evidence
out of the public repository. No gameplay or disc repacking was performed.


## Effect initialization and destruction, stage 18

Following the direct dependency of `create_effect` produces four complete
ordinary-C matches: `initialize_effect` at `0x8c0a6ff0` (192 bytes),
`initialize_effect_vector` at `0x8c0a70b0` (192),
`initialize_effect_vector_field30` at `0x8c0a7170` (200), and `destroy_effect`
at `0x8c0a7238` (68). The last entry ends at the adjacent `0x8c0a727c` entry.
Every range includes its literals and any alignment word. The initial candidates
matched; each final source matched twice again with the new declared `effect.h`.
All 12 trial sources and exact receipts are preserved in `reconstruction-stage18`.

The provisional layout is 0x68 bytes, with checked offsets for every accessed
field. Constructors preserve dispatch/global reads, individual floating and
integer defaults, the three-word position copy, untouched fields, resource
assignment and conditional owner selection. Two variants copy three additional
words in observed index order 0,2,1. Narrow stack arguments supply field 0x30;
its final meaning is not asserted. Destruction preserves the null guard, dispatch
restoration, detach call and positive signed-short condition for releasing memory,
then returns the original pointer. No assembly, runtime objects, or static-data
bytes were substituted. Existing headers and all 47 prior source matches are
unchanged.

Current verified totals are **51 functions / 42 modules / 5,596 compiled range
bytes / 4,157,316 retained reference bytes**. This stage replaces 652 bytes.
Since the original 34-function checkpoint, 17 functions replace 1,952 bytes.
Two fresh exact builds, full-image comparison, the five-function compiler proof
and all 43 original tests pass. Source-only rejects remaining gaps while keeping
existing artifacts intact. The focused export is
`function-dossiers/run-qa4bdx6c/receipt.json`; its inputs and artifacts validate,
and the original Ghidra database is unchanged.

Fresh candidate builds still reproduce **512/46**, **388/8** and **448/4** for
`operation_45f04`, `emit_5fbf8` and `emit_or_update_slot` respectively. The primary
batch remains incomplete. The scratch C++ diagnostic and signed-remainder
exceptional-ABI blocker are unchanged. Continue investigating these differences
and follow the now-explicit effect dispatch, matrix/vector and static-data
dependencies. Supporting matches do not replace primary acceptance criteria.


## Complete effect update and adjacent controls, stage 19

Ten functions in eight modules replace **1,336 more bytes**, preserving every
previous 51 match. Current verified totals are **61 functions / 50 modules /
6,932 compiled range bytes / 4,155,980 retained reference bytes**. Continuous
work since the original 34-function checkpoint adds 27 functions and 3,288 bytes.

| Module | Range | Functions | Bytes |
| --- | --- | ---: | ---: |
| `effect_bit0` | `0x8c0a727c–0x8c0a72a0` | 2 | 36 |
| `update_effect` | `0x8c0a72a0–0x8c0a75f0` | 1 | 848 |
| `reset_effect_resource` | `0x8c0a75f0–0x8c0a7608` | 1 | 24 |
| `effect_bits_and_words` | `0x8c0a763c–0x8c0a7660` | 2 | 36 |
| `reset_effect_by_index` | `0x8c0a7660–0x8c0a769c` | 1 | 60 |
| `create_effect_769c` | `0x8c0a769c–0x8c0a7708` | 1 | 108 |
| `create_effect_7708` | `0x8c0a7708–0x8c0a777c` | 1 | 116 |
| `create_effect_777c` | `0x8c0a777c–0x8c0a77e8` | 1 | 108 |

Adjacent controls are compiled together where the compiler naturally emits the
interfunction alignment. No padding bytes are supplied. The isolated position
setter remains scratch-only at 30 generated versus 32 reference bytes; its
neighbor `bind_id` remains in its original admitted module. All previous units,
sources and headers are unchanged.

The complete update first generated 856 bytes with 804 differing bytes. Keeping
the no-binding constant local to the spawn loop and reloading the resource after
callbacks fixes saved-register lifetimes. An inverse if/else countdown form
reproduces the early branch join and literal placement. Direct spawn declarations
correct stack arguments; a typed base flag field and symbolic dispatch-table base
reproduce the remaining addressing. Reading both scale inputs before writes
reduces the mismatch to 48 bytes, all the same register permutation in six blocks.
Naming the first destination pointer before the value captures resolves them.
The full 848-byte match includes eight literal islands and all alignment words.

The declared `effect_update.h` checks base flags at offset 4, resource mode and
floating fields, destination scales at 0x98/0x9c, and the 8-byte dispatch entries
with callback at offset 4. Existing effect and listener layouts remain declared
and unchanged. These are provisional views; static table contents remain retained
reference data. Preserve the observed ordered comparisons, including NaN behavior,
postdecrement, resource reload, missing lower mode/index bounds and untouched fields.
Each final source matches independently twice. All **127 trials** and hypotheses
are indexed in private `reconstruction-stage19`; none was a compiler rejection.

Two fresh exact builds, full-image comparison, the five-function compiler proof
and all 43 original tests pass. Source-only rejects the remaining 4,155,980 bytes
without changing artifacts. Focused export `function-dossiers/run-tneh30lb/receipt.json`
validates current inputs; the original database is unchanged. Primary candidates
remain **512/46**, **388/8**, and related emission/reuse **448/4**. The original
primary batch is incomplete; these supporting matches do not replace its gates.
Continue the shared scheduling investigation, direct initializer `0x8c0a6f38`,
spawned-effect dependencies, matrix/vector routines and referenced static data.


## Default initializer and spawn wrappers, stage 20

Four direct dependencies add **468 bytes**. Current totals are **65 exact
functions / 54 modules / 7,400 compiled range bytes / 4,155,512 retained bytes**.
Since the original 34-function checkpoint, 31 functions replace 3,756 bytes.

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `initialize_effect_default` | `0x8c0a6f38–0x8c0a6ff0` | 184 |
| `spawn_effect_0` | `0x8c0aa77c–0x8c0aa7e0` | 100 |
| `spawn_effect_1` | `0x8c0ab360–0x8c0ab3bc` | 92 |
| `spawn_effect_2` | `0x8c0abee0–0x8c0abf3c` | 92 |

The default initializer uses the declared, checked Effect layout and zeros
field_30. Spawn wrappers allocate the observed 0xac, 0xb4 and 0xa0 bytes, return
null after allocation failure and forward the original arguments. Unsigned-short
stack arguments and narrow constructor formals reproduce the single zero extension
per forwarded word. Wide formals duplicated extensions and changed saved registers;
signed-short incoming arguments removed required extensions. Register hints had no
effect. Constructor signedness remains provisional where only low words are used.

All 61 previous function ranges are preserved. The update routine's three spawn
prototypes now use unsigned short, consistent with these callees; its complete
848-byte output remains exact in two independent comparisons. No other previously
admitted source or header changed. Private source-refinement receipts pin both
source hashes. Each new source also matches independently twice, including all
literals and alignment. All 38 trials and hypotheses are retained in private
`reconstruction-stage20`; none was a compiler rejection.

Two fresh exact builds, full-image comparison, five-function compiler proof and
all 43 original tests pass. Source-only rejects the remaining 4,155,512 bytes
without changing artifacts. Focused export `run-9muoe080` validates current inputs;
the original analysis database is unchanged. Primary candidates remain **512/46**,
**388/8**, and related emission/reuse **448/4**. The primary batch remains incomplete.
Continue the scheduling investigation and constructors at `0x8c0a9934`,
`0x8c0aaa7c` and `0x8c0ab700`, then vector helpers and referenced static data.
Saved analysis body sizes do not establish complete boundaries; inspect raw
instructions, literals and adjacent entries before admission. Static data remains
reference-backed and is not counted as reconstructed.


## Shared spawned-effect initializer and lifecycle, stage 21

Three functions replace **480 more bytes**, preserving all 65 prior matching
functions and their sources. Current totals are **68 functions / 57 modules /
7,880 compiled range bytes / 4,155,032 retained reference bytes**. Since the
original 34-function checkpoint, 34 functions replace 4,236 bytes.

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `initialize_spawn_base` | `0x8c0ab3bc–0x8c0ab510` | 340 |
| `destroy_spawn_base` | `0x8c0ab510–0x8c0ab558` | 72 |
| `destroy_spawn_effect_2` | `0x8c0ab8e8–0x8c0ab92c` | 68 |

The initializer first generated 344 bytes. Taking the incoming object's address
makes this compiler retain its observed stack home slot. Keeping a scoped object
snapshot across each positive-only reciprocal conditional removes two redundant
reloads. Separating the resource-ID argument from the call resolves the final six
register-selection bytes. The complete match includes the return delay, alignment
and all fourteen literal words. The two lifecycle routines preserve null handling,
dispatch restoration, resource clearing in the base routine, signed-short release
tests and the observed heap. Their four-word literal pools and alignment also match.

The declared `spawn_effect.h` checks every exposed object/resource field offset
and the 0xa0-byte object extent. Resource and field meanings remain provisional;
the resource view does not claim a complete resource size. Existing headers and
sources are unchanged. Each final source matches independently twice.

The larger constructor at `0x8c0ab700–0x8c0ab8e8` remains scratch-only. Its first
ordinary-C trial generated 476 versus 488 bytes. Address-taking and explicit table
byte offsets reproduce 488 bytes; the best current trial still differs in 137
bytes. Volatile storage, aggregate arguments, typed views, arithmetic operand
order and temporary captures did not produce a complete match. Aggregate incoming
parameters were ABI diagnostics only. Nonconstant aggregate initializers are
rejected by the fixed compiler; ordinary declarations followed by assignments were
tested separately. No compiler flags or expected bytes were changed.

Applying scoped call-argument captures to the current emission candidates produced
96 more trials, covering declaration order and register hints. Their best results
remain **388/8** and **448/4**. The original operation remains **512/46**. Supporting
matches do not replace these incomplete primary acceptance criteria. Signed
remainder retains its documented exceptional-ABI blocker. Static data remains
reference-backed and separately reconstructed static-data bytes remain zero.

Two fresh exact project builds, full-image comparison, five-function compiler
proof and all 43 original tests pass. Source-only rejects 4,155,032 retained bytes
without changing existing artifacts. Current focused evidence is
`function-dossiers/run-1lk27rxx/receipt.json`; the original database is unchanged.
Dependency export `run-h_0xqpvk` records the earlier input snapshot, not current
manifest validity. Raw SH4 instructions control floating semantics where saved
Ghidra pseudocode retains unresolved FPSCR branches. All source snapshots,
hypotheses, compiler receipts and comparisons remain in private
`reconstruction-stage21`. Continue the primary scheduling investigation, randomized
spawn constructors, matrix/vector helpers and their referenced static data.


## Further scheduling diagnostics, stage 22

Another **223 preserved trials** add no matching functions. Totals remain
**68 functions / 57 modules / 7,880 compiled bytes / 4,155,032 retained bytes**.
The current exact source receipt still validates; no admitted source, manifest,
header, compiler flag or reference byte changed. Stage 21's two exact builds,
five-function proof, 43 original tests and source-only rejection remain current.
The published checkpoint also passed all 47 public tests and GitHub CI.

Inline random conversion helpers, shared or scoped random locals, 30 numeric
literal/conversion combinations, compound field stores, homed-pointer qualifiers,
four-byte float/double views and 48 inline component-helper forms did not improve
the larger constructor. Its best remains stage 21's **488/137**. The adjacent
constructor at `0x8c0ab558–0x8c0ab700` repeats the same randomized-position
instruction pattern; it supplies comparison evidence but is not admitted.

Qualified orientation reads and address-taken angle intermediates did not improve
the primary operation. Ten initial mixed-declaration trials were rejected by the
C89 compiler; corrected nested-scope trials are saved separately. The smaller
actual angle caller remains **136/15**. Homed intermediates increased the full
operation to 524 or 540 bytes; ordinary argument captures remain **512/46**.

A further 64 emission trials combine signed/unsigned packed-kind declarations,
narrow high/low/zero formals and direct versus numeric function declarations on
the current best sources. Every trial retains **388/8** or **448/4**. This excludes
those declaration combinations as the remaining scheduler cause. ABI diagnostics
are not admitted merely because their parameter widths appear compatible.

The primary batch remains incomplete. Private `reconstruction-stage22` contains
each source snapshot, hypothesis, compiler receipt, exact comparison, hashed
experiment index and `diagnostic-receipt.json`. Resume by validating current source
receipts, then compare only new hypotheses against these saved failures:

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py
```

Continue raw instruction and call-context analysis for the two primary targets,
and the unresolved randomized constructors and vector dependencies. Do not repeat
these unsuccessful expression/type families without new evidence.


## Spawn completion and alternate allocation, stage 23

Two complete ordinary-C matches add **124 bytes**, preserving all 68 previous
matching functions, sources and headers. Totals are **70 functions / 59 modules /
8,004 compiled range bytes / 4,154,908 retained reference bytes**. Since the
original 34-function checkpoint, 36 functions replace 4,360 bytes.

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `finish_spawn_motion` | `0x8c0abe64–0x8c0abe94` | 48 |
| `spawn_effect_alt` | `0x8c0abe94–0x8c0abee0` | 76 |

The completion check preserves the ordered `field_4c < 1.0f` test, including its
NaN branch behavior, the vector-helper call and the 16-bit flag update at offset
4. An offset-checked provisional view in `spawn_motion.h` permits the original
short displacement instructions without claiming the complete object size or
final field meanings. The allocation wrapper preserves the observed heap,
0xa0-byte allocation, null handling and constructor argument order. Return delay
slots, alignment and all literals match. Both final sources matched independently
twice before admission.

The smaller paired-angle helper at `0x8c0c5094–0x8c0c510c` generates 120 bytes
with seven differences: its first conversion is exact, while its second retains
the unresolved constant-register schedule. Return-flow changes, shared factors,
inline scalar arithmetic and aggregate temporaries do not fix it. The two other
paired helpers remain 124/15 and 120/12. Scoped emission-control variants also
fail to improve the primary candidates. Raw handle-start evidence confirms that
its full bank argument reaches the lookup; a narrower declaration cannot be
justified merely to alter scheduling.

The adjacent constructor at `0x8c0ab558–0x8c0ab700` improves from 428 generated
bytes to the expected 424. Capturing the radius destination and operands after
the random call removes an extra instruction and alignment padding. Further Y
operand captures reduce its mismatch to 79 bytes. Combining separate Y and Z
improvements regresses to 81, demonstrating allocation coupling. The count,
reciprocal branch and final initialization already match at the correct extent.
The flagged constructor remains 488/137. Neither constructor is admitted.

Runtime diagnostics retain specific evidence: the 44-byte random helper saves
and restores MACL, and tested ordinary C does not reproduce its complete bytes.
The 80-byte angle wrapper classifies IEEE-754 exponent/mantissa bits and records
1101 for NaN or 1100 for infinity; tested C emits 84 bytes. No assembly, copied
runtime objects or compiler changes were substituted. The signed-remainder
exceptional-ABI blocker remains.

All 116 source/hypothesis/compiler/comparison trials are preserved in private
`reconstruction-stage23`, with no compiler rejections. Current focused evidence
is `function-dossiers/run-azvdk4b1/receipt.json`; the original database is unchanged.
Earlier call and effect exports retain their historical input snapshots. Broad
analysis windows do not establish accepted function boundaries.

Two fresh exact project builds, full integrated-image comparison, the five-function
proof and all 43 original tests pass. Source-only rejects 4,154,908 retained bytes
without modifying existing artifacts. Primary acceptance remains **incomplete**:
operation 512/46, emission 388/8, related emission/reuse 448/4. Supporting matches
do not replace the two original targets. Static-data replacement remains zero.
Continue the angle/dispatch and call-scheduling investigations alongside observed
spawned-effect dependencies; use the standard commands in START_HERE.md.


## Vector stepping and signed angular delta, stage 24

Two exact math helpers replace **284 bytes**, preserving all 70 previous matches,
sources and headers. Totals are **72 functions / 61 modules / 8,288 compiled range
bytes / 4,154,624 retained reference bytes**. Since the original 34-function
checkpoint, 38 supporting functions replace 4,644 bytes.

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `step_vector_toward` | `0x8c0c51d8–0x8c0c52e4` | 268 |
| `signed_angle_delta` | `0x8c0c52e4–0x8c0c52f4` | 16 |

Vector stepping preserves the ordered length comparison and zero test, including
NaN behavior. It copies the target when indicated; otherwise it normalizes the
separate delta, scales it, adds the current position and writes components in
the observed order. Keeping these stages separate preserves aliasing behavior.
The declared `vector3.h` checks the 12-byte layout and offsets 0, 4 and 8.
The signed angular helper preserves 16-bit wrapping: its half-turn result is
-32768, unlike the existing absolute difference helper's 32768. Both full ranges,
literals and alignment match independently twice.

The spawned-effect update at `0x8c0ab92c–0x8c0abb44` first generated 536 bytes
with 46 differences. Reordering automatic vector declarations reproduces its
stack slots; naming the table base before the alternate-bank offset fixes the
literal order. It now differs in 25 bytes beginning at `0x8c0aba4f`, around angle
conversion and the following destination/address schedule. Twenty-four lifetime
variants and typed resource-field views do not resolve that region. It remains
scratch-only. Its true entry saves a floating register and has no function seed
in the existing Ghidra project; raw instructions establish behavior and boundary.

Eighteen scalar-value qualifier diagnostics leave emission at 388/8 and related
emission/reuse at 448/4. Operation remains 512/46. These supporting matches do
not complete the two primary targets. Signed remainder retains its exceptional
ABI blocker. No compiler settings, expected bytes or comparison rules changed.

All 59 trials and receipts remain in private `reconstruction-stage24`, with no
compiler rejections. Current focused evidence is
`function-dossiers/run-zhc90d92/receipt.json`; the original database is unchanged.
Two fresh exact builds, integrated-image comparison, five-function proof and all
43 original tests pass. Source-only rejects 4,154,624 retained bytes and leaves
existing artifacts intact. Continue the shared angle schedule and emission call
order investigation, then the observed effect, matrix/vector and data dependencies.


## Shared hierarchy lifecycle, stage 25

Three direct effect dependencies add **248 exact bytes**, preserving all 72 prior
matching functions, sources and headers. Totals are **75 functions / 64 modules /
8,536 compiled range bytes / 4,154,376 retained reference bytes**. Since the
original 34-function checkpoint, 41 supporting functions replace 4,892 bytes.

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `initialize_hierarchy_node` | `0x8c0330e4–0x8c03311c` | 56 |
| `destroy_hierarchy_node` | `0x8c03311c–0x8c0331c0` | 164 |
| `hierarchy_is_active` | `0x8c03347c–0x8c033498` | 28 |

The initializer preserves the observed parent/child and link writes. Destruction
preserves the 0x20 reentry flag, repeated child reload across release callbacks,
link removal, signed-short release test and observed heap. The activity check
walks parent links, rejects flag bit 1 and returns true for null input. Names
remain provisional. Declared `hierarchy.h` checks every accessed node/dispatch
offset without asserting the complete object extent. Each final source matches
independently twice, including delay slots and complete literal pools.

The 800-byte effect advance routine at `0x8c0abb44–0x8c0abe64` improves from
816 generated bytes to 800/56, with a best scalar-capture variant at **800/51**.
Raw review corrects an initial hypothesis: negative color channels skip alpha
multiplication, preserving behavior when alpha is NaN. Default fade factors are
initialized to 1 before conditional updates, and color scaling uses the observed
254 constant. Typed offset-4 flags and a signed offset-0x88 animation counter
remove extra addressing instructions. Those type refinements remain scratch-only;
the admitted `spawn_effect.h` is unchanged. Remaining differences concern motion
and radius address scheduling, frame lookup and callback receiver order. This
candidate earns no matching-byte credit.

Scalar/address captures, inline helpers, typed frame/dispatch views, nested vector
members and field qualifiers do not complete that routine. Twelve experimental
generator errors also changed resource assertions while testing effect members;
the compiler rejected them. Corrected variants are preserved separately and show
no improvement. The adjacent child-release helper generates 34 versus 36 bytes;
its missing trailing alignment prevents admission despite the matching prefix.
No artificial padding was added.

All 113 trials, hypotheses and compiler receipts remain in private
`reconstruction-stage25`. Current focused evidence is
`function-dossiers/run-0d3s0lil/receipt.json`; the original database is unchanged.
Two fresh exact project builds, full-image comparison, five-function proof and all
43 original tests pass. Source-only rejects 4,154,376 retained bytes without
changing existing artifacts. Primary acceptance remains incomplete: operation
512/46, emission 388/8, related emission/reuse 448/4. The signed-remainder blocker
and zero separately reconstructed static-data bytes remain unchanged. Continue
the primary scheduling investigation and the observed hierarchy/effect dependencies.


## Hierarchy reparenting and virtual-call evidence, stage 26

The complete **116-byte** reparent operation at `0x8c0333fc–0x8c033470` now
matches in ordinary C. Totals are **76 functions / 65 modules / 8,652 compiled
range bytes / 4,154,260 retained reference bytes**. All 75 prior matches, sources
and headers are unchanged. Since the original 34-function checkpoint, 42 supporting
functions replace 5,008 bytes. The existing checked `hierarchy.h` is reused.

Reparenting preserves removal from the old parent's links, all observed reloads,
destination assignment and insertion into the new child chain. All three return
delay slots match; this range has no literals or trailing padding. The final
source matches independently twice.

Two adjoining visitors isolate the virtual-call issue. The 52-byte visitor at
`0x8c0332a4` compiles to 80 bytes with named C recursion, or 48 with fixed-address
recursion. The 88-byte visitor at `0x8c0332d8` visits three explicit levels before
recurring; the corresponding C form emits 84 bytes. C++ virtual-call diagnostics
match both complete ranges, including literals and alignment. They remain
**unadmitted** under the supplied C-only requirement and earn no progress credit.
Those diagnostics retain the same compiler and optimization settings, with a
recorded language selector. They do not change the accepted compiler contract.

All ten trials and receipts are preserved in private `reconstruction-stage26`.
Current focused evidence is `function-dossiers/run-bx349hiz/receipt.json`; the
original database is unchanged. Two fresh exact builds, full-image comparison,
five-function proof and all 43 original tests pass. Source-only rejects 4,154,260
retained bytes without changing artifacts. Primary acceptance remains incomplete:
operation 512/46, emission 388/8, related emission/reuse 448/4. Continue the shared
angle/call scheduling work and the observed hierarchy dependencies.


## Hierarchy description, stage 27

The complete **204-byte** description/traversal function at
`0x8c033330–0x8c0333fc` matches in ordinary C. Totals are **77 functions /
66 modules / 8,856 compiled range bytes / 4,154,056 retained reference bytes**.
All 76 prior functions, sources and headers are unchanged. Since the original
34-function checkpoint, 43 supporting functions replace 5,212 bytes.

The provisional description view checks the observed argument and traversal
offsets. The code preserves two explicit traversal levels followed by recursion,
unsigned indentation arithmetic, depth updates, unsigned-short arguments and
variadic call order. Referenced strings remain reference-backed; no static data
replacement is credited. Return delay `0x8c0333e0`, padding at `0x8c0333e2` and
all six literal words through `0x8c0333fc` match independently twice.

The initial C form emitted 208 bytes. Making the length call explicit, doubling
depth with an unsigned shift and rematerializing the indentation address reduced
it to 204 bytes with 46 differences. Declaring the observed format base as an
external array preserves its base-plus-100 expression and fixes the literal/call
schedule. Folding it to an absolute format pointer emits 200 bytes; retaining a
local pointer across calls also fails. Fifteen trials, snapshots, hypotheses and
compiler/comparison receipts are retained in private `reconstruction-stage27`.

Current focused evidence is `function-dossiers/run-axrwidzq/receipt.json`; the
original database is unchanged. Two fresh exact builds, full-image comparison,
the five-function proof and all 43 original tests pass. Source-only rejects
4,154,056 retained bytes without changing artifacts. Primary acceptance remains
incomplete: operation 512/46, emission 388/8, related emission/reuse 448/4.
The two complete C++ visitor diagnostics remain unadmitted under the C-only
requirement. Continue shared call scheduling, hierarchy dependencies and the
referenced vector/matrix helpers.


## Hierarchy root lifecycle, stage 28

Three complete ordinary-C functions add **688 bytes**: root initialization at
`0x8c033498–0x8c0336c8` (560), root destruction at `0x8c0336c8–0x8c03373c`
(116), and output forwarding at `0x8c033470–0x8c03347c` (12). Totals are
**80 functions / 69 modules / 9,544 compiled range bytes / 4,153,368 retained
reference bytes**. All prior 77 functions, sources and headers are preserved.
Since the original 34-function checkpoint, 46 supporting functions replace
5,900 bytes. Referenced names, dispatch tables and global data remain retained.

The root constructor homes its receiver, initializes two 12-byte heap objects,
then creates ten 32-byte children and assigns their observed globals and names.
The allocation checks and unconditional subsequent stores are preserved exactly;
no speculative failure handling is added. A provisional root view checks name,
dispatch and final short-field offsets. External declarations for observed calls,
globals and name pointers reduce the initial 560/254 comparison to 560/5.
Independent heap temporaries, scoped temporaries or an inline allocation helper
resolve the last store/call scheduling difference. The scoped form is admitted.
Comma expressions, a destination-pointer scope and an opaque heap type alone
leave those five bytes unresolved. All literals and alignment match.

The destructor restores dispatch, releases children, releases the two heaps,
invokes the base destructor and tests the signed short release argument before
freeing. Its return delay and six literal words match. The output wrapper's
tail-call delay, alignment and address literal also match. Each final source was
compiled independently twice before admission.

Sixteen packed-argument lifetime trials do not improve emission: 388/8 and
related 448/4 remain best. Nine C receiver experiments on the 52-byte visitor
also fail: aggregate arguments use stack passing, and a variadic declaration
emits 52 bytes but has nine differences and the wrong argument ABI. It is not a
substitute for the observed virtual call. The exact C++ visitor diagnostics remain
unadmitted. Operation remains 512/46; both original primary targets are incomplete.

Raw vector-helper inspection records FIPR in the length and squared-length
entries, and FIPR/FSRRA plus a floating return in the in-place normalization entry.
These observations require further source reconstruction; no assembly or runtime
object is admitted. The previously matched caller ignores that normalization
return, as observed. Raw evidence remains private alongside 49 source trials,
hypotheses and compiler/comparison receipts in `reconstruction-stage28`.

Focused evidence is `function-dossiers/run-giwe1hme/receipt.json`; the original
database is unchanged. Two fresh exact builds, full-image comparison, the
five-function proof and all 43 original tests pass. Source-only rejects 4,153,368
retained bytes without changing artifacts. Continue the shared call/angle
scheduling investigation and the observed hierarchy and vector dependencies.


## Timed hierarchy and group operations, stage 29

Six complete ordinary-C functions add **860 bytes**: timed update at `0x8c03373c`
(144), timed visit at `0x8c0337cc` (144), output cycle at `0x8c03385c` (28), group
child cleanup at `0x8c033878` (264), clearing group flag 8 at `0x8c033980` (144),
and toggling group flag 8 at `0x8c033a10` (136). Totals are **86 functions /
75 modules / 10,404 compiled range bytes / 4,152,508 retained reference bytes**.
All 80 prior functions, sources and headers are preserved. Since the original
34-function checkpoint, 52 supporting functions replace 6,760 bytes.

Both timed wrappers compare a current and prior mask, update child flags in the
observed chain, run the appropriate traversal and store a converted elapsed time
as a short field. The provisional timing view checks both result offsets and its
embedded hierarchy base. The timer reader is confirmed to load the hardware
counter and subtract it from all ones; the elapsed helper subtracts its first
argument from its second. The conversion remains an external call. Declaring the
global root object preserves its base-plus-20 addressing; a distinct clear-mask
temporary reproduces the register allocation. Both initial 144/16 candidates
then match completely. Reordering mask/child declarations alone does not suffice.

The cleanup and flag operations explicitly address groups 1 through 9, preserving
the omitted group 0, link reloads and individual flag updates. Clear and toggle
forms match with either literal globals or external declarations; external names
are admitted for the flag functions. A named toggle mask emits 144 instead of
136 bytes and is rejected. The output cycle preserves both calls and its return.
All return delays, address literals and alignment match independently twice.

Nine inline emission-scan trials combine the corrected field scopes with earlier
helper hypotheses. All emit 400 instead of 388 bytes and do not improve the
primary candidate. The 47 scratch trials, hypotheses and compiler/comparison
receipts are retained in `reconstruction-stage29`. Primary acceptance remains
incomplete: operation 512/46, emission 388/8 and related emission/reuse 448/4.
Exact C++ visitor diagnostics remain unadmitted under the C-only requirement.

Focused evidence is `function-dossiers/run-0vmhgt6_/receipt.json`; the original
database is unchanged. Two fresh exact builds, full-image comparison, the
five-function proof and all 43 original tests pass. Source-only rejects 4,152,508
retained bytes without changing artifacts. Continue source-level call/angle
scheduling work and the observed hierarchy, effect and vector dependencies.


## Authorized C++ hierarchy reconstruction, stage 30

Following explicit authorization to admit fully matching C++ functions, four
functions in three modules add **368 bytes**: child release at `0x8c0331c0` (36),
hierarchy update at `0x8c0331e4` (192), visitor at `0x8c0332a4` (52), and the
three-level visitor at `0x8c0332d8` (88). Totals are **90 functions / 78 modules /
10,772 compiled range bytes / 4,152,140 retained reference bytes**. All 86 prior
C functions, sources and headers are unchanged. Since the original 34-function
checkpoint, 56 supporting functions replace 7,128 bytes.

The build adapter now accepts `.cpp` only when its manifest explicitly declares
`"language": "c++"`. Existing `.c` modules retain their original invocation.
C++ adds only `-lang c++` to the same pinned compiler and base settings, including
`-O2` and disabled C++ exceptions. Complete linked-section comparison remains
mandatory. Build provenance now binds the adapter hash and each module's effective
flags; portable progress also verifies those per-module settings. The public
allowlist admits text `.cpp` sources with the same credential/binary checks.
Machine-local adapter pins were refreshed after review; compiler/tool binaries
and base flags are unchanged. No assembly, copied objects or fabricated padding
is used.

The checked provisional C++ hierarchy view produces the observed dispatch
pointer at offset 24. The 192-byte update first differed only in saved-register
assignment; declaring the current node before the two clear masks fixes it.
The adjoining release helper emits 34 instruction bytes. Compiling it with the
update in original order naturally supplies the two alignment bytes and matches
the entire 228-byte module. Both visitors reproduce their prior diagnostic
matches through the normal build path. All final sources match independently
twice, including every return delay, literal and padding byte.

The active `operation_45f04` candidate is now checked C++ and improves from
512/46 to **512/30**, first difference `0x8c045fdd`. Its radius and virtual
dispatch regions match; both angle-conversion regions remain unresolved. The
older C source is preserved as evidence. The operation is still excluded from
the matching manifest. Emission remains 388/8 and related emission/reuse 448/4;
both original primary targets remain incomplete. Earlier C-only diagnostic
restrictions in this document describe historical checkpoints and are superseded
by this explicit language authorization.

Four new host tests cover C/C++ compiler invocation, invalid or implicit language
selection, changed-language evidence and changed-adapter evidence. All 43 existing
tests plus those four pass. Two fresh exact project builds, full-image comparison
and the five-function compiler proof pass. Source-only rejects 4,152,140 retained
bytes without changing artifacts. Fourteen source trials, hypotheses and receipts
are retained in `reconstruction-stage30`; focused evidence is
`function-dossiers/run-p5pyeoar/receipt.json`, with the original database unchanged.
Continue the active C++ angle-conversion work, emission scheduling and observed
effect/vector dependencies.


## Hierarchy arrays and shared resource buffer, stage 31

Eight complete ordinary-C functions add **492 bytes**, preserving all 90 previous
matching functions and their source/header hashes. Totals are **98 functions /
86 modules / 11,264 compiled range bytes / 4,151,648 retained reference bytes**.
This is 0.2706% of the entire decoded image, not a code-only completion measure.
Since the original 34-function checkpoint, 64 supporting functions replace 7,620
bytes. Both original primary targets remain incomplete.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `destroy_hierarchy_array` | `0x8c033a98` | 80 |
| `submit_hierarchy_array` | `0x8c033ae8` | 60 |
| `destroy_hierarchy_values` | `0x8c033b24` | 96 |
| `report_hierarchy_values` | `0x8c033b84` | 148 |
| `initialize_shared_buffer` | `0x8c033c18` | 32 |
| `release_shared_buffer` | `0x8c033c38` | 20 |
| `apply_resource_118780` | `0x8c033c4c` | 28 |
| `apply_resource_37d534` | `0x8c033c68` | 28 |

The declared provisional array view checks dispatch at 24, capacity/count at
32/36, items at 40, first index at 44, values at 48 and total at 52. It does not
claim a complete runtime object size. The destructors restore observed dispatch
addresses, destroy their arrays, invoke base destruction and conditionally free
the object for a positive signed-short disposal argument. The second preserves
the repeated null check present in the instructions. Submission visits ten
entries with tag `index | 0x20000` and argument 8. Explicit byte-offset shifts
reproduce the observed indexing; ordinary typed indexing emitted multiplication.

Reporting preserves the observed `first + index` access while iterating from
`first` under both count and capacity bounds. Raw `cmp/eq`, `movt`, `tst`, `bf`
skips entries whose first field equals the shared value; an initial equality
interpretation was corrected before admission. Materializing equality as an
integer and comparing that result to zero reproduces all instructions. Separate
loop-variable scopes and an external output declaration fix lifetime/scheduling.
The function sums the value array, reports its total and clears the count.
Buffer setup requests 0x1800 bytes and stores the returned pointer. Teardown
forwards that pointer without clearing it. The final two wrappers reject null,
otherwise invoke their bound routine and return one. Data and called routines
remain reference dependencies; no strings, assets or runtime data are copied.

The active operation stays **512/30**, emission **388/8** and related emission/reuse
**448/4**. Six direct C++ member-call variants on the corrected emission source
produce the same eight differences. Eight scalar C++ operator/member angle trials
regress in size and scheduling. Applying a checked C++ virtual position accessor
to the larger effect advance improves **800/51 to 800/46**; motion scheduling and
the final frame-table load still differ. The typed frame, owner/index, address and
lifetime variants do not improve that result. All these candidates remain outside
the matching manifest. The other effect update remains 536/25 and the signed
remainder retains its documented exceptional-ABI blocker.

All 74 trials retain source snapshots, hypotheses, fixed compiler receipts and
full-range comparisons in `reconstruction-stage31`; none was compiler-rejected.
Every admitted final source matches independently twice, including all literals
and alignment. Two fresh exact project builds, integrated-image comparison,
the five-function compiler proof and all 47 original-workspace tests pass.
Source-only rejects 4,151,648 retained bytes without changing existing artifacts.
Focused evidence is `function-dossiers/run-6loyom3y/receipt.json`; all exported
ranges match the pinned reference and the original database is unchanged.

Continue with `python3 -B tools/verify_source.py --check`,
`python3 -B tools/candidates.py`, and the iteration commands in START_HERE.md.
The next source hypotheses concern the shared angle schedule, emission argument
order, effect motion/frame-table lifetimes and the adjacent resource-copy caller.
Compiler version, optimization, complete-range rules and private-data exclusions
are unchanged.


## Resource-copy and load wrappers, stage 32

Four complete ordinary-C functions add **596 bytes**, preserving all 98 previous
matches and source/header hashes. Totals are **102 functions / 90 modules /
11,860 compiled range bytes / 4,151,052 retained reference bytes**. Whole-image
coverage is 0.2849%; this is not code-only completion. Since the initial
34-function checkpoint, 68 supporting functions replace 8,216 bytes. Both
original primary targets remain incomplete at 512/30 and 388/8.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `copy_resource_fields` | `0x8c033c84` | 148 |
| `load_resource_sized` | `0x8c033d18` | 176 |
| `load_resource_small` | `0x8c033dc8` | 136 |
| `load_resource_large` | `0x8c033e50` | 136 |

The provisional resource descriptor checks an entry pointer at zero, count at
four and an eight-byte extent. The twelve-byte entry view checks fields zero,
four and eight. Copying clears the first twelve shared-buffer bytes, prepares a
local descriptor, and returns zero if applying it returns -1. It copies fields
eight then four for the destination count; field zero is untouched. The shared
buffer is reloaded between stores, preserving possible alias effects. Separate
source-field scopes fix indexed addressing. Destination-column declaration order
fixes register choices, and initializing the explicit twelve-byte stride after
the loop index fixes the final delay-slot pair. No padding or assembly is used.

The sized loader formats the input name into its observed shared name buffer,
queries length, rounds through arithmetic right shift and multiplication, reads,
transforms and consumes the result. A named failure sentinel scoped after the
length query reproduces its separate comparison register. An early sentinel
lifetime, unsigned/pointer declarations, reversed comparison and a const sentinel
do not match. A valid length leads to return one even if the later read returns
-1; this observed path is preserved. The two other loaders allocate different
scratch sizes and use different name buffers. Their failed-load paths still call
release with the null pointer before returning zero. No speculative allocation
checks or altered return behavior were introduced. Formatting strings, buffers,
called implementations and other data remain reference dependencies.

All 86 trials retain snapshots, hypotheses, compiler receipts and full comparisons
in `reconstruction-stage32`. Six rejected trials came from a generator replacing
struct declarations while inserting local stride variables; their receipts remain,
and corrected trials restrict edits to the function body. Every final source
matches independently twice. Two fresh exact project builds, integrated-image
comparison, five-function proof and all 47 original-workspace tests pass.
Source-only rejects 4,151,052 remaining bytes without altering artifacts. Focused
evidence is `function-dossiers/run-byr1i55j/receipt.json`; exported bytes match the
pinned reference and the original database is unchanged.

Primary operation/emission and related emission/reuse remain **512/30**, **388/8**
and **448/4**. Scratch effect candidates remain **800/46** and **536/25**; the signed
remainder still has its documented exceptional-ABI blocker. These supporting
matches do not fulfill the original two-target acceptance criteria. Continue the
shared scheduling work and adjacent resource/matrix dependencies using
`python3 -B tools/verify_source.py --check`, `python3 -B tools/candidates.py` and
the START_HERE.md iteration commands. Compiler, optimization, full-range checks
and private-data exclusions are unchanged.


## Resource callbacks, record and allocation wrappers, stage 33

Thirteen complete ordinary-C functions add **720 bytes**. All 102 previous
matches and source/header hashes are preserved. Totals are **115 functions /
103 modules / 12,580 compiled range bytes / 4,150,332 retained reference bytes**,
or 0.3022% of the entire decoded image, not code-only completion. Since the
original 34-function checkpoint, 81 supporting functions replace 8,936 bytes.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `apply_resource_3827d8` | `0x8c033ed8` | 28 |
| `run_current_resource_start` | `0x8c033ef4` | 32 |
| `run_resource_start` | `0x8c033f14` | 40 |
| `run_current_resource_end` | `0x8c033f3c` | 32 |
| `run_resource_end` | `0x8c033f5c` | 64 |
| `initialize_resource_record` | `0x8c033f9c` | 48 |
| `spawn_object_0893a8` | `0x8c033fcc` | 68 |
| `spawn_object_088ce0` | `0x8c034010` | 68 |
| `spawn_object_1e7964` | `0x8c034054` | 68 |
| `spawn_object_19d108` | `0x8c034098` | 68 |
| `spawn_object_19d270` | `0x8c0340dc` | 68 |
| `spawn_object_1a9c84` | `0x8c034120` | 68 |
| `spawn_object_1ab324` | `0x8c034164` | 68 |

The two current-resource wrappers obtain the current identifier and invoke the
corresponding table traversal. The provisional eight-byte callback pair checks
start at zero and end at four. Start traversal has an early null-table return,
loads and tests each callback once, invokes it, then advances eight bytes.
Capturing the tested pointer removes the extra load emitted by the initial
source. End traversal initializes its count after the null check, scans to its
own end-callback sentinel, and calls the preceding entries in reverse order.
The start and end scans deliberately use their respective sentinel fields.
Static callback entries remain reference bytes.

The checked sixty-byte record view is cleared, then receives signed -1 at zero,
the low sixteen bits of a shared value at two, and literal 0xffff at four. The
seven allocation wrappers request their observed sizes, call their initializer
only for a non-null result, forward the observed parent pointer and caller
argument, and return the allocated pointer. Objects remain opaque; provisional
names use initializer addresses. The null-guarded resource wrapper preserves its
original zero/one return behavior. These matches include every delay slot,
literal and alignment byte; no assembly, copied objects or padding is added.

Eighteen further active-C++ operation trials test late float assignments, reused
factors, comma expressions, sibling scopes and explicit orientation offsets.
They do not improve 512/30; explicit offsets regress to 508 bytes. These trials
transfer the declaration/lifetime lessons from the newly matched resource copy
but do not resolve either angle region. Emission remains388/8 and related
emission/reuse 448/4. Scratch effects remain800/46 and 536/25, and signed remainder
retains its exceptional-ABI blocker. Both original primary targets remain
incomplete; supporting matches do not replace their acceptance criteria.

All 60 source trials, hypotheses, fixed compiler receipts and full comparisons
are retained in `reconstruction-stage33`, with no compiler rejections. Every
final source matches independently twice. Two fresh exact project builds,
integrated-image comparison, five-function proof and all 47 original-workspace
tests pass. Source-only rejects 4,150,332 retained bytes without changing
artifacts. Focused evidence is `function-dossiers/run-ic27wsx3/receipt.json`;
exports match the pinned reference and the original database is unchanged.
Continue with `python3 -B tools/verify_source.py --check`,
`python3 -B tools/candidates.py`, and the START_HERE.md iteration commands.
Next work follows the allocation callers and their effect initializers while
retaining the primary angle/argument-scheduling investigations.


## Proximity object and shared-base lifecycle, stage 34

Six complete C functions add **696 bytes**, preserving all 115 previous matches,
modules and source/header hashes. Totals are **121 functions / 109 modules /
13,276 compiled range bytes / 4,149,636 retained reference bytes**. Whole-image
coverage is 0.3189%, not code-only completion. Since the original 34-function
checkpoint, 87 supporting functions replace 9,632 bytes.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `destroy_shared_object` | `0x8c01d2b0` | 124 |
| `reset_shared_object` | `0x8c01d32c` | 88 |
| `initialize_proximity_object` | `0x8c1ab324` | 156 |
| `destroy_proximity_object` | `0x8c1ab3c0` | 96 |
| `update_proximity_object` | `0x8c1ab420` | 152 |
| `display_proximity_object` | `0x8c1ab4b8` | 80 |

The matched `spawn_object_1ab324` leads to this provisional proximity-object view.
Its observed allocation and extent field are 0x9c bytes. Offset checks cover name,
flags, dispatch, extent, position, integer angle words, source field at 0x6c,
radius at 0x94 and effect pointer at 0x98. The initializer calls the shared base,
restores dispatch/name/extent, applies the argument through slot 0x20, clears the
effect pointer, copies the source field to radius, substitutes 30 only if radius
is negative, and creates the observed effect. An external create declaration
fixes the last ten differing literal/argument bytes. The destructor releases a
non-null effect, clears the pointer, invokes base destruction, and conditionally
frees the object for a positive signed-short argument.

The update first copies position and angle fields to a live effect. Unless the
state query blocks the scan, it visits four object slots, compares the returned
distance against radius squared, triggers argument 8 for the first qualifying
object, sets flag bit one, and exits the scan. Display copies the source field
back to radius and performs the observed color/text/color calls. Names remain
provisional, and no pointed-to text or data is copied into source.

The shared-base destructor checks the pointer at 0x84 and identifier range
0x4000 through 0xfffe before its release call with -3. It then clears that pointer,
invokes hierarchy destruction, and optionally frees the object. Its reset helper
preserves chained store order while clearing the observed vectors, angle words,
mode and pointer. The checked shared view covers observed fields only and does
not assert the complete derived-object extent.

The shared-base initializer remains scratch-only: the straightforward source
is 200 bytes versus 196 expected, with 171 differences. Aggregate-copy chains,
scoped addresses, inline helpers, explicit offsets, C++ constructor/free-function
forms and representation/lifetime trials do not produce a match. One rejected
named-zero generator trial needed explicit pointer casts; both the rejected and
corrected receipts remain. Diagnostic memcpy forms also fail and are not admitted.

A complete 88-byte adjacent effect-setter module matched in scratch, but the
integrated range check correctly rejected it: 56 bytes were already admitted as
`bind_id` and `effect_bits_and_words`. That overlapping module was removed, all
prior modules retained, and no duplicate progress counted. Its new position
setter alone emits 30 of the required 32 bytes. It remains unadmitted because
manual alignment is not allowed. The failed integration logs are preserved;
fresh builds after removing the overlap pass. Direct setter inspection also
supports integer angle words in the final checked proximity view.

All 44 trials retain source, hypothesis, compiler receipt and full comparison in
`reconstruction-stage34`; one was compiler-rejected. Every admitted final source
matches twice. Two fresh exact project builds, integrated-image comparison,
five-function proof and all 47 original-workspace tests pass. Source-only rejects
4,149,636 retained bytes without changing artifacts. Focused evidence is
`function-dossiers/run-8uykrj0v/receipt.json`, with exact exported ranges and an
unchanged original database.

Primary operation/emission remain 512/30 and 388/8, related emission/reuse 448/4,
and scratch effects 800/46 and 536/25. Signed remainder retains its exceptional-ABI
blocker. Both original primary targets remain incomplete. Continue shared-base
vector-copy lifetimes, the observed effect initialization dependencies and primary
scheduling work with `python3 -B tools/verify_source.py --check`,
`python3 -B tools/candidates.py` and the START_HERE.md iteration commands.


## Effect creation and release wrappers, stage 35

Nine complete C functions in eight modules add **1,008 bytes**. All 121 previous
matches, modules and source/header hashes are preserved. Totals are **130
functions / 117 modules / 14,284 compiled range bytes / 4,148,628 retained
reference bytes**. Whole-image coverage is 0.3431%, not code-only completion.
Since the original 34-function checkpoint, 96 supporting functions replace
10,640 bytes. Both original primary targets remain incomplete.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `create_effect_78d0` | `0x8c0a78d0` | 124 |
| `create_effect_794c` | `0x8c0a794c` | 124 |
| `create_effect_79c8` | `0x8c0a79c8` | 128 |
| `create_effect_7a48` | `0x8c0a7a48` | 112 |
| `create_effect_7ab8` | `0x8c0a7ab8` | 120 |
| `create_effect_7b30` | `0x8c0a7b30` | 128 |
| `mark_effect_for_release` | `0x8c0a7bb0` | 16 |
| `create_effect_7bc0` | `0x8c0a7bc0` | 124 |
| `create_effect_7c3c` | `0x8c0a7c3c` | 132 |

These callers connect the matched proximity initializer to the already-matched
effect initializers. They retain the signed upper-bound-only resource-index
comparison, allocate 0x68 bytes from the observed heap, skip initialization for
null allocations, compute the resource address using stride 0x98, and forward
their original zero/one flags and extra arguments. No lower-bound or allocation
behavior is added. The final sources reuse checked `Effect`/`EffectVector` types
and the initializer's unsigned-short stack parameter where present. The wrapper
with its own narrow stack input preserves the explicit load and zero extension.
All wrappers match with the same compiler and base flags.

The release helper at 0x8c0a7bb0 sets hierarchy flag bit one for a non-null effect;
it does not directly free storage. Its fourteen instruction bytes plus natural
two-byte alignment match when compiled with the adjacent 124-byte wrapper in
original order. The complete module is 140 bytes. Existing hierarchy field
checks are reused. Old and proposed intervals were checked for overlap before
integration, and all prior modules remain unchanged. No manual padding, assembly,
new header definitions, copied runtime objects or reconstructed data is added.

Seventeen additional shared-base initializer trials remain unsuccessful.
Expression grouping, C++ references and typed late displacement lifetimes do not
remove the extra saved address register. The best still emits 200 bytes versus
196 expected, with 170 differences. A local initialized zero vector emitted
allocated data outside the allowed text/literal section and was correctly
rejected. It receives no matching credit. Position-setter alignment remains the
previously documented 30/32-byte blocker.

All 41 trials retain source, hypothesis, compiler receipt and full comparison in
`reconstruction-stage35`; one was rejected. Each admitted final source matches
twice independently. Two fresh exact project builds, integrated-image comparison,
five-function proof and all 47 original-workspace tests pass. Source-only rejects
4,148,628 retained bytes without changing artifacts. Focused evidence is
`function-dossiers/run-ya7ksxq_/receipt.json`; exported ranges match the pinned
reference and the original database is unchanged.

Operation remains 512/30, emission 388/8 and related emission/reuse 448/4.
Scratch effects remain 800/46 and 536/25. Signed remainder retains its documented
exceptional-ABI blocker. Supporting matches do not replace the original primary
acceptance criteria. Continue the shared scheduling investigations and remaining
effect callers with `python3 -B tools/verify_source.py --check`,
`python3 -B tools/candidates.py`, and the START_HERE.md iteration commands.


## Effect manager lifecycle and remaining wrappers, stage 36

Five complete C functions add **436 bytes**. Totals are **135 functions / 122
modules / 14,720 compiled range bytes / 4,148,192 retained reference bytes**.
Whole-image coverage is **0.3536%**; code-only completion remains unknown. All
130 previous matches, module definitions and source/header hashes are unchanged.
Since the initial 34-function checkpoint, 101 functions replace 11,076 bytes.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| `create_effect_7cc0` | `0x8c0a7cc0` | 120 |
| `create_effect_7d38` | `0x8c0a7d38` | 124 |
| `destroy_effect_manager` | `0x8c0a7ed0` | 68 |
| `start_effect_manager` | `0x8c0a7f14` | 104 |
| `stop_effect_manager` | `0x8c0a7f7c` | 20 |

The two remaining wrappers preserve the signed upper-bound-only index check,
104-byte allocation and 152-byte resource stride. They call the existing
non-orientation initializers with the observed arguments, including the narrow
stack field in the second wrapper. The manager destructor preserves its null
guard and signed-short disposal test. Start creates an effect using the manager's
position, stores even a null allocation, resets the observed state fields and
calls its base operation. Stop sets the effect's hierarchy flag and calls its
base operation, preserving the original assumption that the effect is non-null.

`effect_manager.h` checks the 136-byte manager view, all accessed field offsets,
and the 152-byte resource view. Existing effect and hierarchy declarations are
reused; names remain provisional. Typed hierarchy access reproduces the stop
function's word displacement instructions and complete 20-byte range; explicit
byte-pointer addition emitted an extra instruction and alignment word.

The adjacent manager initializer at `0x8c0a7db8` remains **280 bytes / 8 differing
bytes**, first `0x8c0a7e6e`. Its new explicit unresolved queue entry and provisional
source receive no progress credit. A block-scoped 512-entry limit makes its
resource-copy loop exact, reducing the initial 57 differences to 16. Direct call
declarations and a captured object reduce the remainder to eight bytes in one
five-argument call. Other temporary lifetimes, inline wrappers, nested views and
actual C++ member calls do not finish that scheduling. The one linker rejection
records a missing leading underscore on a C++ member binding; correcting the
symbol still leaves a mismatch. No compiler flags or comparison rules changed.

All 59 scratch trials preserve source, hypothesis and comparison; one has a
linker error instead of a successful compiler receipt. Each admitted final source
matches twice independently. Two fresh project builds, exact integrated-image
comparison, the five-function proof and all 47 original-workspace tests pass.
Source-only rejects the remaining 4,148,192 reference bytes without changing
existing artifacts. Focused exports are pinned in
`function-dossiers/run-b1q9giad/receipt.json`; full exported ranges match the
reference and the original database remains unchanged. Ghidra has no completed
pseudocode for these manager entries; raw instructions establish their behavior
and boundaries. No original database reanalysis was performed.

Both original primary targets remain incomplete: operation **512/30**, emission
**388/8**, related emission/reuse **448/4**. Scratch effects remain **800/46** and
**536/25**, shared-base initialization **200 versus 196 expected / 170 differences**,
and the position setter **30 versus 32 expected**. Signed remainder retains its
exceptional-ABI blocker. Supporting matches do not replace primary acceptance.
Continue with the START_HERE.md commands, the eight-byte manager call scheduling,
and the two primary regions; preserve failed hypotheses before new trials.


## Text-buffer initialization and update, stage 37

Two complete C functions in one module add **708 bytes**. Totals are **137
functions / 123 modules / 15,428 compiled range bytes / 4,147,484 retained
reference bytes**, or **0.3706% whole-image coverage**. Code-only completion
remains unknown. All 135 prior matches, module definitions and source/header
hashes are unchanged. Since the initial 34-function checkpoint, 103 functions
replace 11,784 bytes. Both original primary targets remain incomplete.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| initialize_text_buffer | 0x8c01e2fc | 48 |
| update_text_buffer | 0x8c01e32c | 660 |

Following the manager's five-argument call identifies a 24-byte text-buffer
view. Initialization stores its buffer and five integer fields and replaces
trailing zero bytes with spaces. Declaring the stack length parameter `register`
reproduces the single early load before aliasing stores. Its standalone output
matches 46 instruction bytes but lacks two bytes of alignment; it was not
admitted alone. Compiling with the fully reconstructed adjacent update in
original order naturally supplies the alignment. The entire 708-byte section,
including all update literals and padding, matches independently twice. No
manual padding or prefix comparison is used.

Update preserves the observed cached input-disabled byte, four inlined six-key
scans, cursor movement, deletion/insertion, enter/escape control dispatch and
text display calls. The raw inclusive shift and `buffer[length]` terminator
remain unchanged; storage is supplied externally. Enter returns the first byte
position at or below space and clears subsequent positions; escape returns zero;
the normal display path returns minus one. The new header checks the full
24-byte view and each accessed field offset. Field names remain provisional.

A scoped key-array base prevents premature address hoisting. Explicit shifted
buffer bases reproduce indexed byte accesses, and the control-character switch
reproduces dispatch before case bodies. These refinements reduce the initial
696-byte output to the exact 660-byte size with eleven register differences.
Giving the six-entry bound a local and initializing index zero before that bound
resolves the final allocation/scheduling differences. External declarations
preserve the observed variadic text-call ABI.

The same register-storage clue was tested on six emission declarations and four
manager declarations, without improvement. Six manager scalar-capture orders
leave ten differences, worse than the retained eight. C++ placement construction
also fails to improve the manager: its first declaration was compiler-rejected,
and the corrected size-type/default-constructor declaration emits 284 bytes
versus 280 expected. These trials receive no credit. All 58 trials, including
one rejected compile, retain source, hypothesis and comparison in
`reconstruction-stage37`.

Two fresh project builds, exact integrated-image comparison, five-function proof
and all 47 original-workspace tests pass. Source-only rejects the remaining
4,147,484 bytes without changing artifacts. Focused exports are refreshed after
the manifest change on a disposable database copy; current receipt is recorded
in `config/analysis-workflow.json`. No compiler/base-flag, gameplay, packaging or
original analysis-database change is made.

Operation remains **512/30**, emission **388/8**, related reuse **448/4**, and
manager initialization **280/8**. The signed-remainder exceptional-ABI blocker
and other documented scratch mismatches remain. Continue the START_HERE.md loop,
using the now-recovered text-call ABI to investigate manager scheduling and
preserving primary acceptance criteria.


## Keyboard translation and explicit native linking, stage 38

One complete C function, `keyboard_character` at **0x8c01e1f4–0x8c01e2fc**, adds
**264 bytes**. Totals are **138 functions / 124 modules / 15,692 compiled range
bytes / 4,147,220 retained reference bytes**, or **0.3769% whole-image coverage**.
All 137 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial 34-function checkpoint, 104 functions replace
12,048 bytes. Code-only completion remains unknown; primary acceptance remains
incomplete.

The function translates the observed first key byte and modifier mask 0x22 into
characters. Numeric, letter and punctuation mappings are preserved exactly.
Its complete range includes a compiler-generated 17-entry switch table, return
delay slots, alignment and two final literals. Conditional-expression returns
reproduce the punctuation paths; ordinary if/return forms are eight bytes shorter.
The table is generated from the C switch, not copied from reference bytes.

The fixed compiler produces the correct switch object, but the default GNU SH
link path does not apply its explicit nonzero `R_SH_DIR32` RELA addends. All 17
linked entries then point to the function entry, leaving 34 differing table
bytes despite matching instructions. The saved compiler object contains each
correct target offset. Local binutils 2.44 source identifies the normal SH
`partial_inplace` relocation handling, whereas this object carries explicit
addends. A standard objcopy round trip does not resolve the discrepancy.

The already-installed, hash-pinned **CodeWarrior linker 2.4, March 3 2000** resolves
that untouched object into all 264 exact bytes. It also reproduced all **123
previous modules / 137 functions** from their saved compiler objects in a
separate diagnostic. No compiler binary, compiler flag, optimization setting,
source byte or generated instruction was altered for that comparison.

The matching driver now accepts explicit `"linker": "codewarrior"` for this
module; the default GNU path and every previous module definition remain
unchanged. The native executable must already be present in the verified
installation receipt. It is part of the existing pinned package, so no new
binary download or package-version change is required. A bounded ELF check
rejects compiler-emitted allocated data outside `.text` before the native linker
can omit it. The native linker keeps resolved relocation metadata; the pinned
objcopy strips that metadata, and the driver verifies that every code/literal
byte remains unchanged. The original strict final ELF validator and complete
reference comparison still apply. No reference-informed patching is performed.
Compiler receipts record the linker selection, compiler-object hash and commands;
the native executable is retained in private scratch for review. The adapter
hash pin is deliberately refreshed; all executable hashes and base flags stay
unchanged.

Six host tests cover selection, unchanged compiler flags, allocated data/BSS
rejection, object type, native command/receipt behavior, metadata mutation and
unrecorded-linker rejection. Real compiler negative trials also reject data,
BSS and an undefined symbol. The existing five-function proof and its negative
checks pass again. Both final-source native compilations match completely.

Stage 38 records **18 source trials**, including the three deliberate negative
rejections, plus the separately receipted 123-module native compatibility run
and linker metadata diagnostics. Recovered text types, callee reference/pointer
forms and five emission constant-lifetime transfers do not improve the active
manager or primary candidates. Operation remains **512/30**, emission **388/8**,
related reuse **448/4**, manager initialization **280/8**. Signed remainder and
other scratch blockers remain as documented. Supporting matches do not replace
primary acceptance.

Two fresh project builds, exact integrated-image comparison and all **53
original-workspace tests** pass; the public suite now has **58 tests**. Source-only
rejects 4,147,220 retained bytes without changing artifacts. Focused exports are
refreshed on a disposable database copy after manifest/driver changes. Current
receipt is in `config/analysis-workflow.json`. Continue START_HERE.md iteration
commands with the same compiler flags and whole-range rules.


## Angle-sample record helpers, stage 39

Three complete C functions add **136 bytes**. Totals are **141 functions / 127
modules / 15,828 compiled range bytes / 4,147,084 retained reference bytes**, or
**0.3802% whole-image coverage**. All 138 previous matches, module definitions
and source/header hashes are unchanged. Since the initial 34-function
checkpoint, 107 functions replace 12,184 bytes. Code-only completion remains
unknown; both original primary targets remain incomplete.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| initialize_angle_sample_record | 0x8c01e5c0 | 12 |
| bind_angle_sample_record | 0x8c01e5cc | 28 |
| check_angle_sample_record | 0x8c01e5e8 | 96 |

The provisional record stores an angle, a sampled global counter and a pointer
to a partial sample view. Initialization clears all three fields and returns the
record. Binding does nothing for a null sample; otherwise it stores the pointer
and captures the observed angle and global counter. The checker returns early
for a null sample or magnitude below 0.5. It updates the saved angle, wraps the
difference to sixteen bits and tests the strict interval 0x5000..0xb000. Only
within that interval does it update the counter and test a signed difference
below eight. Observed field reloads and floating-point NaN behavior are preserved.
These names describe the observed arithmetic, not established gameplay meaning.

A direct unsigned-short local produces two unsigned comparison instructions;
widening the wrapped value to `int` reproduces the reference's signed comparisons.
The complete 96-byte range then matches. The new header checks the 12-byte record,
its field offsets, and the accessed 32-byte sample view; it does not claim the
sample's full object extent. All three functions retain default GNU linking and
match twice independently, including all literals and alignment. The explicit
native link selector introduced in stage 38 is unchanged.

Fourteen further shared-base initializer trials do not resolve it. Vector-array
and nested-record layouts, assignment grouping and inline aggregate-copy wrappers
retain the extra address-register lifetime. A two-copy loop emits the required
196-byte size but differs in 156 bytes and introduces a loop absent from the
reference; it remains unadmitted. The prior straight-line best remains 200 bytes
versus 196 expected with 170 differences. No failed source replaces a verified
module or the preserved best candidate.

All **26 trials**, with no compiler rejections, preserve source, hypothesis,
compiler receipt and comparison in `reconstruction-stage39`. Two fresh project
builds, exact integrated-image comparison, five-function proof and all **53
original-workspace tests** pass. The public suite remains **58 tests**. Source-only
rejects 4,147,084 retained bytes without changing artifacts. Focused exports are
refreshed after the manifest change using a disposable database copy; current
receipt is recorded in `config/analysis-workflow.json`.

Operation remains **512/30**, emission **388/8**, related reuse **448/4**, and
manager initialization **280/8**. Signed remainder retains its exceptional-ABI
blocker. Supporting matches do not replace primary acceptance. Continue the
START_HERE.md source/compile/compare loop and preserve failed hypotheses before
new experiments. No compiler, linker implementation, flags, packaging, gameplay
or original database change is made in this stage.


## Manager resource operations, stage 40

Four complete C functions add **324 bytes**. Totals are **145 functions / 131
modules / 16,152 compiled range bytes / 4,146,760 retained reference bytes**, or
**0.3880% whole-image coverage**. All 141 previous matches, module definitions
and source/header hashes are unchanged. Since the initial 34-function
checkpoint, 111 functions replace 12,508 bytes. Code-only completion remains
unknown; both original primary targets remain incomplete.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| create_effect_manager | 0x8c0a9510 | 56 |
| load_effect_resources | 0x8c0a9548 | 88 |
| free_effect_resources | 0x8c0a95a0 | 20 |
| apply_effect_manager_resource | 0x8c0a95b4 | 160 |

The allocation wrapper requests the checked 136-byte manager size and calls its
initializer only for a nonnull allocation. Its void declaration does not assert
unverified return semantics. The resource loader allocates 512 records of 152
bytes, stores the table pointer, invokes the observed loader and clears the
count. A nonnegative loader result is divided by 152 through the observed helper.
The free wrapper tail-calls the observed deallocator with the table pointer; it
does not clear the pointer. These routines preserve the reference's allocation
and index handling without speculative guards.

Manager update preserves its three-way mode switch, resource index arithmetic,
resource-pointer reload before binding, mode reset, field conversions and copy
call ordering. The global array declaration has no invented complete extent.
Existing offset-checked manager/resource headers are unchanged. External
allocation/division and global declarations resolve the loader's literal and
instruction ordering. An external global-array declaration restores the update
routine's shared base addressing; an external bind declaration resolves its last
11 differing bytes. All four final sources match twice independently with the
unchanged compiler, flags, default GNU linker and full-range acceptance rules.

The adjacent resource field copier at 0x8c0a939c remains unresolved: 372 bytes
expected, best current ordinary source 380 bytes with 341 differing, first
0x8c0a93a2. Raw instructions copy a terminated name, observed integer/float fields,
six floats and sixteen unsigned bytes. Scalar temporaries improve the comparison
but do not remove two extra saved registers. Array/vector layouts, C++ member
and free-function forms, scalar access qualifiers, loop bases/bounds/counter
lifetimes and explicit addresses do not resolve it. All failed variants remain
in scratch; no partial source or padding workaround is admitted.

All **73 trials**, with no compiler rejections, preserve source, hypothesis,
compiler receipt and comparison in `reconstruction-stage40`. Two fresh project
builds, exact integrated-image comparison, five-function proof and all **53
original-workspace tests** pass. The public suite remains **58 tests**. Source-only
rejects 4,146,760 retained bytes without changing artifacts. Focused exports are
refreshed after the manifest change using a disposable database copy; the original
database is unchanged and the current receipt is recorded in the local workflow.

Operation remains **512/30**, emission **388/8**, related reuse **448/4**, and
manager initialization **280/8**. Signed remainder retains its exceptional-ABI
blocker. Supporting matches do not replace primary acceptance. Continue the
START_HERE.md source/compile/compare loop; retain failed hypotheses before new
experiments. No compiler, driver, flags, packaging or gameplay change is made.


## Complete manager update, stage 41

The complete ordinary-C manager update at **0x8c0a7f90..0x8c0a841c** adds
**1,164 bytes**. Totals are **146 functions / 132 modules / 17,316 compiled range
bytes / 4,145,596 retained reference bytes**, or **0.4160% whole-image coverage**.
All 145 previous matches, module definitions and source/header hashes remain
unchanged. Since the original 34-function checkpoint, 112 functions replace
13,672 bytes. Code-only completion remains unknown; both original primary
targets are incomplete.

The manager routine preserves its two explicit mode cases, duplicated input
navigation, resource selection and reloads, text-buffer copy/cursor order,
status drawing, preset copy, signed index clamp, conditional resource-field
store, mode transitions, effect position/pause/advance calls and final display.
The save call passes the observed address of the global table pointer, not its
value. Names remain provisional; reconstruction introduces no speculative
allocation/index guards or gameplay fixes. Existing manager, resource and text
views are reused, with an explicit check that the nested text cursor is at
manager offset 60 + 16 = 76. Format strings and referenced globals remain
reference data and receive no source-data credit.

Correcting the draw declaration to two named arguments restores the observed
mixed register/stack variadic ABI. Direct checked cursor addressing removes
extra address arithmetic. An external save declaration matches call ordering;
explicit two-bit preset-table indexing removes the compiler's multiply-by-four
sequence. The final five differing bytes are resolved by capturing the resource
pointer followed by the manager field value in a scoped block before comparing
and conditionally storing. Reversed capture order and reversed comparison
operands fail. The final readable source matches twice independently, including
all embedded literal pools, branch reach, delay slots and alignment.

The primary emission remains 388/8 after sixteen combinations of ordinary C++
nonvirtual handle methods and seven accessor/scan trials. Eight initial member
byte-call experiments failed linking because the signed-char mangled symbol is
`FSci`, not `Fci`; corrected symbol bindings compile but do not improve the bytes.
Seven inline literal/orientation accessor trials leave the primary operation at
512/30. No failed trial replaces either best source.

Resource-copy experiments improve the complete-size candidate from 380 versus
372 expected / 341 differing to **372/150**, first **0x8c0a93ba**. Inline scalar
accessors eliminate the two extra saved registers, and separate loop counters
improve register assignment further. C and C++ pointer/reference accessor forms
were compared; the remaining scalar address lifetimes and loop registers do not
match. This function is unadmitted. Manager initialization remains 280/8,
related emission reuse 448/4, and signed remainder retains its exceptional-ABI
blocker. Supporting matches do not replace primary acceptance.

All **103 source trials**, including **8 linker rejections**, retain snapshots,
hypotheses, compiler receipts where compilation/linking completed, and comparison
results in `reconstruction-stage41`. Two fresh exact project builds, integrated
image comparison, five-function proof and all **53 original-workspace tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,145,596 retained
bytes without altering built artifacts. Focused exports are regenerated after
the manifest change on a disposable database copy; original evidence is unchanged.
Compiler, driver, base flags and default GNU linking are unchanged. Continue the
source/compile/compare loop from START_HERE.md.


## Member-pointer editor dispatch, stage 42

Two complete functions add **596 bytes**: the C++ editor dispatcher at
**0x8c0a841c..0x8c0a8624** (520 bytes) and ordinary-C callback at
**0x8c0a9178..0x8c0a91c4** (76 bytes). Totals are **148 functions / 134 modules /
17,912 compiled range bytes / 4,145,000 retained reference bytes**, or **0.4303%
whole-image coverage**. All 146 previous matches, module definitions and
source/header hashes remain unchanged. Since the original 34-function checkpoint,
114 functions replace 14,268 bytes. Code-only completion remains unknown and
both original primary targets are incomplete.

The dispatcher first copies a 132-byte reference table to local storage, then
assigns eleven 12-byte member descriptors from the observed globals. It preserves
input/key short-circuiting, signed selection wrap, the mode-bit toggle, conditional
resource application and eleven member invocations. Ordinary C++ pointer-to-member
syntax emits the observed R0 descriptor / R4 receiver call through the existing
runtime entry at 0x8c18e6e4. Size and first-field offset assertions check the
provisional member/table view. Descriptor inspection confirms eleven zero this
adjustments and negative virtual offsets with direct callback addresses. The
reference table, descriptors and runtime implementation remain unreconstructed;
none is copied into source output or credited as source data.

The C callback edits manager field 0x7c with the observed metadata and mode
difference, converts its updated value and stores it at resource offset 0x14.
Its existing checked manager/resource views are unchanged. External integer-editor
declaration resolves call scheduling. Both final readable sources match twice
independently, including all literals and alignment, using the pinned compiler
and base flags; only the dispatcher declares C++ and adds `-lang c++`.

Nine adjacent three-field callbacks remain unadmitted. The closest at 0x8c0a8d2c
has the correct 116-byte size with ten differing bytes, first 0x8c0a8d55. The
remaining callbacks retain first-call constant/register and argument-lifetime
differences. External and member declarations, scoped captures, selector locals,
inline facades and arithmetic/predicate variants do not finish them. Nine `bool`
formal diagnostics are rejected because this pinned compiler configuration does
not recognize that built-in type; no flag or compiler change is made.

The final flag editor at 0x8c0a91c4 produces the expected 472 bytes but differs in
235, first 0x8c0a9284. Its raw reverse loop visits indices six through one and
skips zero when rebuilding the flag byte. Preserve that observed bound; do not
silently fix it. Its local seven-value table and all metadata remain reference
inputs. The 372-byte resource copier retains stage 41's best 150 differing bytes.

All **141 trials**, including **9 compiler rejections**, retain source snapshots,
hypotheses, available compiler receipts and comparisons in `reconstruction-stage42`.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,145,000 retained bytes without altering existing artifacts.
Focused exports are refreshed after the manifest change using a disposable
copy; the original database remains unchanged. Both primary candidates remain
512/30 and 388/8, related reuse 448/4, and manager initialization 280/8. Supporting
matches do not satisfy primary acceptance. Continue the recorded iteration loop.


## Scalar manager editors, stage 43

Two complete ordinary-C functions add **904 bytes**: the floating editor at
**0x8c0a89a4..0x8c0a8b74** (464 bytes) and integer editor at
**0x8c0a8b74..0x8c0a8d2c** (440 bytes). Totals are **150 functions / 136 modules /
18,816 compiled range bytes / 4,144,096 retained reference bytes**, or **0.4520%
whole-image coverage**. All 148 previous matches, module definitions and
source/header hashes remain unchanged. Since the original 34-function checkpoint,
116 functions replace 15,172 bytes. Code-only completion remains unknown and
both original primary targets are incomplete.

Both editors lazily initialize a format string, draw the current value, gate
editing on selection and input masks, clamp the selected decimal digit, apply a
power-scaled increment, clamp the result and highlight its selected character.
The provisional metadata views have checked sizes of 44 and 40 bytes and checks
for every accessed field offset. Existing manager and effect headers are unchanged.
The signed character accesses and floating comparison ordering, including NaN
behavior, follow the raw instructions. Static metadata, strings and input state
remain reference inputs with no separately reconstructed data credit.

The integer baseline already matched all 440 bytes. The floating baseline had the
correct length but 356 differing bytes: a repeated precision load shifted most of
the instruction stream. Capturing that precision reduced the differences to seven.
Separating change scaling from value addition and capturing precision for the
highlight calculation resolved the remaining register/lifetime differences.
Both final sources match twice independently, including literal pools and zero
alignment, with the same pinned compiler, base flags and default GNU linker.

The manager display at 0x8c0a8624 remains unadmitted at **896 bytes / 9 differing**,
first **0x8c0a87f9**. Its 35 fixed draws and subsequent variadic draws match except
for the local two-pointer label copy schedule. Pointer lifetimes, scopes, explicit
stores, inline helpers, C++ references and memcpy forms do not finish that block.
Automatic constant-pointer initialization emits an extra eight-byte allocated
section and is correctly rejected. Retaining the failed compiler/link artifacts
for diagnosis showed that its copy schedule was still nonmatching; it does not
justify broadening accepted output sections. No driver or acceptance rule changed.

The manager initializer remains **280/8** after using the observed text-buffer call
signature and checked pointers. This stage retains **60 trials**, including
**9 compiler/link rejections**, with source snapshots, hypotheses, available
compiler receipts and comparisons in `reconstruction-stage43`. Failed compilations
are preserved as failures and never receive matching credit.

Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass. The public suite remains **58 tests**.
Source-only rejects 4,144,096 retained bytes without altering existing artifacts.
Focused exports are refreshed after the manifest change on a disposable copy;
the original database is unchanged. Original primary candidates remain 512/30 and
388/8, related reuse 448/4, and manager initialization 280/8. These supporting
matches do not satisfy primary acceptance. Continue the recorded iteration loop.


## Constructor dependencies and vector helpers, stage 44

Four complete ordinary-C functions add **224 bytes**:

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `rotate_vector_xz` | `0x8c042030..0x8c042080` | 80 |
| `scale_by_half_angle` | `0x8c042080..0x8c0420b0` | 48 |
| `rotate_and_submit_vector_xz` | `0x8c042198..0x8c0421f4` | 92 |
| `effect_noop_9654` | `0x8c0a9654..0x8c0a9658` | 4 |

Totals are **154 functions / 140 modules / 19,040 compiled range bytes /
4,143,872 retained reference bytes**, or **0.4574% whole-image coverage**.
All 150 previous matches, module definitions and source/header hashes remain
unchanged. Since the original 34-function checkpoint, 120 functions replace
15,396 bytes. Code-only completion remains unknown; both original primary
candidates are still incomplete. Separately reconstructed static data remains zero.

The vector helpers capture source X and Z before either store, preserving in-place
use, and leave Y untouched. One writes to a destination vector; the other updates
the source and calls the observed submission entry. Both use the existing checked
Vector3 header. The scalar helper preserves the explicit signed quotient call
with divisor two, then the observed trigonometric call and multiply/divide order.
Its runtime dependency at 0x8c18e768 remains reference backed. Raw inspection
confirms signed division setup and the zero-divisor path; no runtime body is
copied or admitted. The empty entry is the complete return/NOP pair between the
manager and next constructor. Function and angle names remain provisional.

All four baselines matched. Final readable sources independently match twice,
including every literal, return delay and alignment byte. Compiler, base flags,
linker selection and complete-range acceptance are unchanged.

The newly followed constructor at **0x8c0a9658..0x8c0a9934** produces the complete
**732-byte** size with **89 differing bytes**, first **0x8c0a96ba**. Differences
are confined to randomized Z initialization, integer-count/flag scheduling and
the second randomized vector component. Preserve the repeated degree conversion,
random-call order and duplicated position branches. Checked resource/object views,
local captures, arithmetic trees, inline pointer accessors, external declarations
and C++ compilation do not improve its baseline. It remains scratch-only.

Using the now-matched scalar editor signatures, checked metadata arrays and actual
C++ member definitions does not resolve the nine field callbacks. One declaration-
order trial was rejected, corrected and retained. Their prior best comparisons
remain unchanged. All **86 trials**, including **1 compiler rejection**, retain
source snapshots, hypotheses, available compiler receipts and comparisons in
`reconstruction-stage44`.

Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass. The public suite remains **58 tests**.
Source-only rejects 4,143,872 retained bytes without altering existing artifacts.
Focused exports are refreshed after the manifest change on a disposable copy;
the original database is unchanged. Original primary candidates remain 512/30 and
388/8, related reuse 448/4, manager initialization 280/8 and manager display 896/9.
Supporting matches do not satisfy primary acceptance. Continue the recorded loop.


## Adjacent model, angle and query helpers, stage 45

Four complete ordinary-C functions add **456 bytes**:

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `count_model_nodes` | `0x8c0420b0..0x8c042114` | 100 |
| `step_clamped_angle_velocity` | `0x8c042114..0x8c042198` | 132 |
| `query_vector_position` | `0x8c0421f4..0x8c042258` | 100 |
| `query_vector_position_normal` | `0x8c042258..0x8c0422d4` | 124 |

Totals are **158 functions / 144 modules / 19,496 compiled range bytes /
4,143,416 retained reference bytes**, or **0.4683% whole-image coverage**.
All 154 previous matches, module definitions and source/header hashes remain
unchanged. Since the original 34-function checkpoint, 124 functions replace
15,852 bytes. Code-only completion remains unknown; the original primary batch
is incomplete. Separately reconstructed static data remains zero.

The model counter reads each node's flags once, counts when bit 8 is clear,
recurses when bit 16 is clear and follows the next pointer. Its ordinary recursive
C naturally causes this compiler to inline one level. Capturing the flags once
resolved the initial 96-versus-100-byte mismatch. Preserve the do-while assumption
that the initial node and any followed child are valid; no null check is added.
A new provisional header checks flags at 0 and child/next pointers at 44/48,
without claiming the complete model-object extent.

The angle helper clamps the signed difference, retains both product sign tests,
uses the existing step/delta entries and returns the observed signed-short wrap.
Reusing the incoming desired argument for the difference reproduces the saved
register lifetime and resolves the 128-versus-132-byte baseline. No arithmetic
or overflow behavior is repaired speculatively.

Both query wrappers copy the source, add 20 to destination Y, query with mask
0x16ef and copy the returned position on success. One also copies the normal.
On failure they recopy the original source and leave the normal untouched,
preserving the observed behavior even when source and destination alias.
External query declarations resolve the ten differing call/literal bytes in each
baseline. The checked result/data prefix header declares the nested pointer at
4 and vectors at 0/12, using the existing checked Vector3 type.

All final sources match twice independently, including literals, self-address
relocation, return delays and alignment. Compiler, base flags, default GNU linker
and complete-range acceptance remain unchanged. All **19 trials** retain source
snapshots, hypotheses, compiler receipts and comparisons in
`reconstruction-stage45`; there are **no compiler rejections**.

Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass. The public suite remains **58 tests**.
Source-only rejects 4,143,416 retained bytes without altering existing artifacts.
Focused exports are refreshed after the manifest change on a disposable copy;
the original database is unchanged. Primary candidates remain 512/30 and 388/8,
related reuse 448/4, manager initialization 280/8, manager display 896/9 and the
new constructor 732/89. Supporting matches do not replace primary acceptance.
Continue the recorded source/compile/compare loop.


## Matrix and vector wrappers, stage 46

Four complete ordinary-C functions add **252 bytes**:

| Function | Complete range | Bytes |
| --- | --- | ---: |
| `submit_in_vector_frame` | `0x8c041f34..0x8c041f70` | 60 |
| `transform_in_vector_frame` | `0x8c041f70..0x8c041fc8` | 88 |
| `cross_xz_negative` | `0x8c041fc8..0x8c041fe4` | 28 |
| `rotate_scalar_pair` | `0x8c041fe4..0x8c042030` | 76 |

Totals are **162 functions / 148 modules / 19,748 compiled range bytes /
4,143,164 retained reference bytes**, or **0.4744% whole-image coverage**.
All 158 previous matches, module definitions and source/header hashes remain
unchanged. Since the original 34-function checkpoint, 128 functions replace
16,104 bytes. Code-only completion remains unknown and separately reconstructed
static data remains zero. Both original primary targets remain incomplete.

The wrappers retain matrix push/setup/call/pop ordering and the observed previous-
matrix pointer adjustment of 64 bytes. The cross-product helper preserves its
floating comparison order. Scalar rotation captures both values before either
potentially aliased store, matching the neighboring vector rotation. Existing
Vector3 checks are declared where used; no prior header changes. All four
baselines match, and final readable sources match twice independently through
all literals, return delays and alignment.

The larger frame setup at **0x8c041de8..0x8c041f34** is reduced from **332/39** to
**332/9**, first **0x8c041e3b**. Reversing the two float local declarations fixes
saved-register assignment; external translation and root declarations fix their
argument schedules. Only the first sign test and root-result capture differ.
Comparison spelling, scoped component capture, register hints and an inline
predicate do not resolve the final nine bytes. Independent sign branches,
reused angle state, repeated conversions and zero-vector behavior remain as
observed; this candidate is not admitted.

Primary C++ scalar-wrapper angle experiments produce larger nonmatching output
and are rejected. C++ default-zero handle arguments leave emission at **388/8**
and related reuse at **448/4**. The historical effect update is freshly reproduced
at **536/25**, first **0x8c0aba4f**, with its angle/extent schedule unchanged.

The direct SDK vector subtraction dependency at 0x8c37f6f0 has a complete 28-byte
range including its final NOP. Ordinary snapshot/component sources produce
40 bytes, while a postincrement form produces 46. Neither is admitted. Raw matrix
translation at 0x8c382a40 uses XMTRX/FTRV and floating-bank state; this stage does
not replace that behavior with scalar code or copied assembly. The adjacent
436-byte RGB565 cross filter is also unresolved: its baseline produces 380 bytes.
Byte-return helpers, signed storage, pointer increments and captures do not
reproduce the retained narrowing operations and pointer lifetimes.

All **49 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage46`; there are **no compiler rejections**.
Compiler, base flags, default GNU linker and complete-range acceptance are
unchanged. Two fresh exact builds, integrated-image comparison, five-function
proof and all **53 original-workspace tests** pass. The public suite remains
**58 tests**. Source-only rejects 4,143,164 retained bytes without altering existing
artifacts. Focused exports are refreshed on a disposable copy; the original
database is unchanged. Supporting matches do not replace primary acceptance.
Continue the recorded source/compile/compare loop.


## Checked vector normalization, stage 47

Two complete ordinary-C wrappers add **168 bytes**: `normalize_vector_checked`
at **0x8c041d40..0x8c041d80** (64 bytes) and `normalize_xz_checked` at
**0x8c041d80..0x8c041de8** (104 bytes). Totals are **164 functions / 150 modules /
19,916 compiled range bytes / 4,142,996 retained reference bytes**, or **0.4784%
whole-image coverage**. All 162 previous matches, module definitions and
source/header hashes remain unchanged. Since the original 34-function checkpoint,
130 functions replace 16,272 bytes. Code-only completion remains unknown and
separately reconstructed static data remains zero. The original primary batch
is still incomplete.

The full-vector wrapper calls the observed normalization entry, tests the returned
float's exponent and clears all three components when it is all ones. The XZ
wrapper captures both inputs, calls the observed inverse-root entry, clears only
X/Z and returns zero for a nonfinite inverse, otherwise stores the normalized
components and returns `squared * inverse`. Y is untouched. Infinity and NaN are
both classified by the same exponent mask, exactly as in the raw instructions.
The SDK callees remain reference backed; no substitute implementation is admitted.

Initial baselines were four bytes short. An explicit `!= 0` classifier test
preserves the observed materialized integer result. A local mask with mask-first
operand order reproduces the remaining register copy and comparison. Narrow
predicate return types give the right size but add an unwanted extension and
remain nine bytes different. An explicit float/word union also matches, so the
final shared header uses that representation view with four-byte size and union
offset checks. Both final sources independently match twice through all literal
and return-delay bytes; the existing Vector3 header is unchanged.

The frame-setup return-lifetime tests (four-byte double/long-double views, identity
helper, reference store and comma condition) leave **332/9**, first 0x8c041e3b.
Transferring the local-mask lesson to emission does not improve **388/8**: reversed
loop operands and added low-word mask locals make the output larger. These failed
hypotheses remain scratch-only. All **41 trials** retain source snapshots,
hypotheses, compiler receipts and comparisons in `reconstruction-stage47`, with
**no compiler rejections**.

Compiler, base flags, default GNU linker and full-range acceptance remain
unchanged. Two fresh exact builds, integrated-image comparison, five-function
proof and all **53 original-workspace tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,142,996 retained bytes without changing
artifacts. Focused exports are refreshed on a disposable copy; the original
database remains unchanged. Primary operation/emission remain 512/30 and 388/8,
related reuse 448/4, manager initialization 280/8, manager display 896/9 and the
732-byte constructor 89 different. Supporting matches do not satisfy the primary
acceptance criteria. Continue the source/compile/compare loop.


## Scalar motion-profile helpers, stage 48

Five complete ordinary-C functions add **236 bytes**: construction at
**0x8c0428e0..0x8c0428f8** (24), conditional destruction at
**0x8c0428f8..0x8c04291c** (36), reset at **0x8c04291c..0x8c042950** (52),
completion query at **0x8c042a60..0x8c042a6c** (12), and sampling at
**0x8c042a6c..0x8c042adc** (112). Totals are **169 functions / 155 modules /
20,152 compiled range bytes / 4,142,760 retained reference bytes**, or **0.4841%
whole-image coverage**. All 164 previous matches, module definitions and
source/header hashes are preserved. Since the initial 34-function checkpoint,
135 functions replace 16,508 bytes. Code-only completion remains unknown;
separately reconstructed static data remains zero.

The provisional MotionProfile view has nine four-byte fields, each offset checked,
and a checked 36-byte extent. Reset preserves the observed chained store order.
Construction calls that reset and returns the receiver. Conditional destruction
retains both the null test and signed-short positive deletion flag. The sampler
preserves the four regions: negative time returns zero, acceleration uses the
observed successive products, cruise uses the stored ramp distance, and braking
uses the remaining time squared before returning the final distance. No algebraic
reassociation or edge-case repair is introduced. All five first candidates and
both independent compilations of each final readable source match exactly,
including return-delay instructions, literal pools and alignment.

The intervening **272-byte setup routine remains unadmitted**. Its first candidate
had 35 differing bytes; capturing the adjusted speed square before the chained
time stores reduces that to **10**, first **0x8c04298f**. The remaining differences
are floating register choices in the initial ramp/braking calculation and their
subsequent uses. Local renaming, parameter reuse, constant operand order, direct
root declaration, inline helper and an actual C++ member definition do not improve
that result. Regrouped expressions are worse and remain diagnostic scratch only.
Two generated local-capture variants had scope errors; two parameter-reuse variants
incorrectly renamed structure members. Their compiler failures and corrected
follow-up trials are retained, with no integration of rejected sources.

Further frame-setup scope, returned-aggregate and sign-temporary experiments do
not improve **332/9**, first **0x8c041e3b**. All **54 trials**, including **four
compiler rejections**, retain source snapshots, hypotheses and comparison evidence
in `reconstruction-stage48`. The best motion setup is
`profile-capture-square-first-only`; the five admitted sources are under `src/math`.

Two fresh exact builds, integrated-image comparison, the five-function proof and
all **53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,142,760 retained bytes without changing artifacts. Focused
exports are regenerated on a disposable copy after manifest/queue changes; the
original database remains unchanged. Compiler, base flags and exact acceptance
rules are unchanged. Primary operation/emission remain **512/30 and 388/8**, related
reuse **448/4**, manager initialization **280/8**. The original primary batch is
still incomplete; these supporting matches do not replace its acceptance criteria.


## Complete motion setup and running profiles, stage 49

Eight complete ordinary-C functions add **1,032 bytes**. Scalar motion setup now
matches **0x8c042950..0x8c042a60** (272 bytes). The adjacent running-profile group
matches construction **0x8c042adc..0x8c042af4** (24), conditional destruction
**0x8c042af4..0x8c042b18** (36), reset **0x8c042b18..0x8c042b58** (64), setup
**0x8c042b58..0x8c042cd8** (384), velocity **0x8c042cd8..0x8c042d2c** (84),
sampling **0x8c042d2c..0x8c042dac** (128), and step
**0x8c042dac..0x8c042dd4** (40). Totals are **177 functions / 163 modules /
21,184 compiled range bytes / 4,141,728 retained reference bytes**, or **0.5089%
whole-image coverage**. All 169 prior matches, module definitions and source/header
hashes are preserved. Since the initial 34-function checkpoint, 143 functions
replace 17,540 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The scalar setup's last ten differences were resolved by reading acceleration
into the ramp-distance temporary and then reusing it as the divisor. Capturing
the same value in a separate local with its lifetime ending at the root call also
matches. Capturing it across later field writes did not match in the preceding
batch. The speed square is computed before the chained time stores. This preserves
the observed arithmetic and reloads while reproducing the floating allocation.

The running profile adds initial velocity and a stored time counter. Its checked
44-byte header declares all eleven field offsets; the prior MotionProfile header
is unchanged. The setup initially differed in 38 bytes. Moving the peak square
before the initial-speed branch reduces that to eight, and reusing the braking
divisor resolves the rest. It retains the observed deceleration-only branch,
clamps and successive products, without repairing unusual or exceptional inputs.
The velocity function initially had an extra result move: reusing its time local
for the braking calculation gives the exact 84-byte range. Sampling writes the
position and returns a completion flag. Step calls it using the current time,
then reloads and increments stored time, preserving possible output aliasing.
All eight final readable sources independently match twice, through literals,
return-delay instructions and alignment.

Transferring divisor reuse to the primary operation does not help: constants held
across calls change allocation widely. Those three 512-byte diagnostic candidates
have 331 or 335 differences and remain scratch-only; active operation stays
**512/30**. Frame continuation helpers leave 332/9 or worsen it. A local zero after
the second root call improves frame setup to **332/8**, first **0x8c041e3c**,
with the remaining difference confined to zero-load, return-copy and branch-delay
scheduling. Best scratch: `frame-reuse-direction-zero-reuse`. It remains unadmitted.
Manager-display union/64-bit pair and C++ copy-constructor variants do not improve
its 896/9. These results are retained rather than replacing better candidates.

All **72 trials**, including **four compiler rejections**, retain source snapshots,
hypotheses and comparisons in `reconstruction-stage49`. The four rejections came
from an experiment generator selecting a macro definition instead of the later
rotation call as a continuation boundary; corrected trials are separate and fully
recorded. There are no output patches or altered comparison rules.

Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,141,728 retained bytes without altering artifacts. Focused
exports are refreshed on a disposable database copy after manifest/queue changes;
the original database remains unchanged. Compiler, flags and default GNU linking
are unchanged. Primary emission remains **388/8**, related reuse **448/4**, and
manager initialization **280/8**. Both original primary targets remain incomplete;
these supporting matches do not replace their acceptance criteria.


## Integer-field editor helpers, stage 50

Seven complete ordinary-C entries add **316 bytes**: construction
**0x8c042dd4..0x8c042dfc** (40), conditional destruction
**0x8c042dfc..0x8c042e38** (60), configuration **0x8c042e38..0x8c042e74** (60),
clear **0x8c042e74..0x8c042e7c** (8), cursor movement
**0x8c042e7c..0x8c042e9c** (32), value adjustment
**0x8c042e9c..0x8c042ed4** (56), and drawing **0x8c042ed4..0x8c042f10** (60).
Totals are **184 functions / 170 modules / 21,500 compiled range bytes /
4,141,412 retained reference bytes**, or **0.5165% whole-image coverage**.
All 177 previous matches, module definitions and source/header hashes are
preserved. Since the initial 34-function checkpoint, 150 functions replace
17,856 bytes. Separately reconstructed static data remains zero; code-only
completion remains unknown.

The new checked IntegerField header models only the first 20 bytes, with checked
state/cursor/dispatch/value/digit offsets. The trailing format buffer begins at
20, but neither its capacity nor the full allocation extent is claimed. The
constructor and destructor preserve the base calls, dispatch pointer and
signed-short deletion control. Configuration clamps digit count to 0..8; cursor
movement preserves the resulting negative cursor case when digits are zero.
Clearing, signed decimal-place adjustment and packed-coordinate drawing retain
the observed accesses and arithmetic. Base implementation, dispatch table, format
string and power/format/draw callees remain reference backed.

Four first candidates match. Configuration and drawing need the verified
**two named arguments plus varargs** declarations already used by the matching
manager editors; a one-named-argument declaration incorrectly pushes an extra
argument. Value adjustment improves from six differences to three by keeping the
power result in a local, then matches by retaining that product as the left operand
of the final sum. All seven readable sources with declared header dependencies
independently match twice, including literals, delay slots and alignment.

Primary angle experiments keep the better **512/30** candidate: division output
reuse changes the literal order, and introducing the divisor later restores the
same 30 differences. Effect update stays **536/25**. Similar random-component
experiments leave the constructor at **732/89** or enlarge it. Frame aggregate and
union locals introduce stack traffic; the prior **332/8** candidate remains best.
No failed diagnostic is admitted or used to modify output bytes.

The signed SDK root helpers at 0x8c37f6c0 and 0x8c37f6d8 were reviewed through their
24-byte ranges, including trailing return instructions. Ordinary sqrt/fabs
spellings remain external calls under the pinned configuration, despite math
intrinsic descriptions in the available compiler manual. Six such experiments
fail strict linking on unresolved math calls. No pragma, compiler option, assembly
substitution, shortened range or SDK object is used to bypass that result. The
raw instructions and manual locations remain in scratch for later investigation.

All **62 trials**, including **six link rejections**, retain source snapshots,
hypotheses and comparisons in `reconstruction-stage50`. Two fresh exact builds,
integrated-image comparison, five-function proof and all **53 original-workspace
tests** pass; the public suite remains **58 tests**. Source-only rejects
4,141,412 retained bytes without altering artifacts. Focused exports are refreshed
on a disposable database copy; the original database remains unchanged. Compiler,
flags and acceptance rules are unchanged. Primary emission remains **388/8**,
related reuse **448/4**, and manager initialization **280/8**. The original primary
batch remains incomplete; supporting functions do not substitute for its targets.


## Integer highlighting and hexadecimal fields, stage 51

Eight complete functions in seven ordinary-C modules add **460 bytes**: integer
highlighting **0x8c042f10..0x8c042fd4** (196), hexadecimal construction
**0x8c042fd4..0x8c043000** (44), destruction **0x8c043000..0x8c04303c** (60),
configuration/clear **0x8c04303c..0x8c043064** (32+8), cursor movement
**0x8c043064..0x8c043088** (36), adjustment **0x8c043088..0x8c0430a4** (28), and
drawing **0x8c0430a4..0x8c0430dc** (56). Totals are **192 functions / 177 modules /
21,960 compiled range bytes / 4,140,952 retained reference bytes**, or **0.5275%
whole-image coverage**. All 184 previous matches, module definitions and
source/header hashes are preserved. Since the initial 34-function checkpoint,
158 functions replace 18,316 bytes. Code-only completion remains unknown;
separately reconstructed static data remains zero.

Integer highlighting retains the ten-byte formatted buffer, two-byte character
buffer, three color changes and one draw per character. Reversing column/index
local declarations resolves its twelve register differences. The hexadecimal
helpers share the already checked 20-byte field prefix through a declared alias
header; no full allocation extent is inferred. They preserve the 1..8 digit clamp,
zero-step early exits, explicit nibble shifts and post-read integer accumulation.
An explicit shift reproduces the short nibble-offset instruction, and capturing
the value pointer before the calculation resolves the adjustment registers.

Hexadecimal configuration alone produces 30 bytes against its 32-byte complete
range. Compiling its immediately adjacent clear function in the same source
produces the original alignment naturally and matches the complete 40-byte module.
The manifest declares both function ranges and credits every byte once. No padding
is manually inserted, no existing range is overlapped, and the independently
matching clear function is not counted again as a separate module. All seven
readable final sources independently match twice, including literal pools and
return-delay instructions. All old headers remain unchanged.

Hexadecimal highlighting at **0x8c0430dc..0x8c04316c** remains unadmitted. Explicit
nibble shifts and corrected local declaration order reproduce the loop. Declaring
the fifth color parameter `register` then reproduces its observed stack addressing
and restores the full **144-byte** size. Only **eight bytes** differ: both digit
draws swap the constant-width move and coordinate-OR delay-slot scheduling.
Best scratch: `highlight-hex-call-register-selected`. Return types, local function
pointers, inline wrappers, C++ mode, scoped count/coordinate locals and narrow digit
prototypes do not resolve it. Packed-color aggregate views and selected-color
pointer/qualifier trials do not improve the final candidate.

All **66 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage51`, with **no compiler or linker rejections**.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,140,952 retained bytes without altering artifacts. Focused
exports are refreshed on a disposable database copy, preserving the original
database. Compiler, flags and full-range acceptance rules are unchanged.
Original primary operation/emission remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and scratch frame setup **332/8**.
The primary batch is still incomplete; supporting matches do not replace it.


## Floating-point field editors and common base, stage 52

Ten complete functions in nine ordinary-C modules add **684 bytes**, covering
**0x8c04316c..0x8c043418**: floating-field construction (44), destruction (60),
configuration (104), clear (8), cursor movement/adjustment (60+88), drawing (60),
highlighting (196), and common-base construction/destruction (20+44). Totals are
**202 functions / 186 modules / 22,644 compiled range bytes / 4,140,268 retained
reference bytes**, or **0.5439% whole-image coverage**. All 192 previous matches,
module definitions and source/header hashes are preserved. Since the initial
34-function checkpoint, 168 functions replace exactly 19,000 bytes. Code-only
completion remains unknown; separately reconstructed static data remains zero.

The new FloatField header checks the known 40-byte prefix, including its 12-byte
format buffer, digit counts, display width and value pointer. A separate FieldBase
header checks the common 12-byte prefix. Neither claims a larger object allocation
extent, and all previously admitted headers remain unchanged. Base constructors
and destructors retain their dispatch pointers, zero stores, null checks and
signed-short positive release tests. This replaces the actual common base
implementations called by the existing integer and hexadecimal constructors.
Their dispatch tables and format strings still come from reference data.

Floating configuration preserves whole-digit and fractional-digit clamps, the
width calculation, variadic format ABI, and precision reload after formatting.
Cursor movement skips the decimal point in the direction of travel after clamping.
Adjustment preserves separate power-call branches on either side of the decimal
point and accumulates the product before the old pointed-to value. Highlighting
retains the observed 18-byte text buffer plus two-byte character buffer, local
order, color changes and per-character draws. No extra range checks, reassociation
or unusual-input repair is introduced.

Nine standalone first candidates match immediately. Cursor movement alone
produces 58 bytes against its 60-byte complete range. Compiling its adjacent
adjustment routine in the same source naturally supplies the original alignment
and matches the full 148-byte two-function module. No bytes are inserted manually,
no existing range overlaps, and the adjustment function receives no duplicate
credit. All nine final readable sources independently match twice with declared
header dependencies, including literal pools and delay slots.

All **29 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage52`, with **no compiler/linker rejections**.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,140,268 retained bytes without altering artifacts. Focused
exports are refreshed on a disposable database copy; the original database is
unchanged. Compiler, flags and complete-range acceptance are unchanged.
Original primary operation/emission remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, scratch frame setup **332/8**, and
hexadecimal highlighting **144/8**. The primary batch remains incomplete;
supporting matches do not replace its acceptance criteria.


## Object-state destruction and height helpers, stage 53

Four complete ordinary-C functions add **384 bytes**: destruction at
**0x8c0436e0..0x8c043724** (68), object-height query at **0x8c043880..0x8c0438ec**
(108), supplied-position height query at **0x8c0438ec..0x8c043950** (100), and
center update at **0x8c043950..0x8c0439bc** (108). Totals are **206 functions /
190 modules / 23,028 compiled range bytes / 4,139,884 retained reference bytes**,
or **0.5532% whole-image coverage**. All 202 previous matches, module definitions
and source/header hashes are preserved. Since the initial checkpoint, 172
functions replace 19,384 bytes. Code-only completion remains unknown, and
separately reconstructed static data remains zero.

The new provisional ObjectStateView checks dispatch at 0x18, position at 0x3c,
query argument start at 0x94, height-source pointer at 0x184, and center at 0x324.
ObjectHeightView checks its height at 0x10. These are observed prefixes, not full
allocation sizes; the query argument's internal layout remains unknown. Existing
vector/result views and all older headers remain unchanged. Destruction preserves
the null guard, dispatch reset, base call, signed-short positive release test and
heap-global indirection. Height queries preserve component reads, resource-height
addition, selector 21, null result and successful Y update. Center update retains
half-height addition when the resource exists and whole-vector assignment when
it does not. No speculative guards or behavioral repairs are added.

The destructor, object query and center-update baselines match completely. The
supplied-position query initially has 26 differing bytes; an external callee
declaration reproduces call preparation and delay-slot scheduling. A scoped
query-argument temporary also matches, while capturing it before the Z read
produces 104 bytes instead of 100. Final readable sources and checked headers
match twice independently over each complete range, including literals and
alignment, before integration. Dispatch data, allocator and query implementation
remain reference dependencies.

The adjacent constructor **0x8c043418..0x8c0436e0** remains unadmitted. Initial
C/C++ candidates produce 732 bytes against 712 expected. Direct parameter homes,
typed fields, explicit component bases and separate loop lifetimes restore the
712-byte size, but **233 bytes still differ**, first **0x8c043441**. Its bind call
requires full-width zero extension of a short field; a narrow argument declaration
omits the observed extension. Return-type changes, scoped argument captures,
ordinary C++ constructor syntax and callback declarations do not resolve the
remaining register allocation and call scheduling. Array and field initialization
order remains preserved. The adjacent initializer at **0x8c043724..0x8c043880**
produces the full 348 bytes with **137 differences**, first **0x8c043746**;
individual and combined chained assignments do not improve it.

All **74 trials**, including **two compiler rejections** from a source-generator
replacement of the address-of declaration, retain snapshots, hypotheses, receipts
where compilation completed, and comparisons in `reconstruction-stage53`.
Corrected trials are separate records. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 original-workspace tests** pass;
the public suite remains **58 tests**. Source-only rejects 4,139,884 reference
bytes without modifying artifacts. Focused exports are regenerated on a disposable
copy after manifest/queue changes; the original database is unchanged. Compiler,
base flags, linker defaults and full-range acceptance remain unchanged.

Original primary operation/emission remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, scratch frame setup **332/8**, and
hexadecimal highlighting **144/8**. The primary batch remains incomplete;
supporting matches do not replace its acceptance criteria.


## Object distance lookup and squared XZ distance, stage 54

Two complete ordinary-C functions add **236 bytes**: object-distance lookup at
**0x8c043e3c..0x8c043ec0** (132), and direct squared XZ distance at
**0x8c043ec0..0x8c043f28** (104). Totals are **208 functions / 192 modules /
23,264 compiled range bytes / 4,139,648 retained reference bytes**, or **0.5588%
whole-image coverage**. All 206 previous matches, module definitions and
source/header hashes are preserved. Since the initial checkpoint, 174 functions
replace 19,620 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The new provisional ObjectDistanceView checks flags at 0x34, position at 0x3c
and context at 0x37c. It represents an observed prefix, not a full allocation.
Lookup preserves unsigned-short ID narrowing, the 4096 cutoff, lookup/null test,
0x800 exclusion flag, context comparison, distance call and optional output copy.
The direct helper subtracts object positions, replaces output Y with **0.01f**,
and returns **squared** XZ distance. Its null-other result is **100000000.0f**;
lookup retains the same sentinel for rejected IDs/objects. These observed values
and unusual output-Y behavior are not normalized or repaired. Object lookup,
context data and vector subtraction remain reference dependencies.

The lookup baseline matches immediately. Direct distance initially produces
108 bytes instead of 104 because its successful early return leaves a NOP in
a branch delay slot. A common return after explicit if/else reproduces the final
vector-copy store in that slot and matches the entire 104-byte range. Both final
readable sources match twice independently with declared checked headers before
integration. No bytes are inserted, omitted or patched.

The adjacent 712-byte constructor remains at 233 differences. Ordinary member
calls, automatic C++ base/member/array construction and separate/shared index
lifetimes do not improve its best result. Full resource configuration at
**0x8c0439bc..0x8c043ca4** produces 740 or 736 bytes against 744 expected. Base
configuration at **0x8c043ca4..0x8c043e3c** reaches **408/27**, first
**0x8c043cbb**, by capturing the first resource pointer; the existing-resource
branch and remaining field updates already match in that candidate. Other scoped
sums, operand regrouping and inline helpers do not resolve replacement-branch
register allocation. Neither configuration routine is admitted.

Target turning at **0x8c043f28..0x8c043fb4** produces 144 bytes against 140 expected
(126 differences for the direct candidate). Its angle conversion retains an
extra saved integer register and uses separate float scale/divisor registers,
resembling the unresolved primary conversion region. Current-angle capture,
inline call expressions, register hints, step/angle lifetimes, all sixteen callee
declaration combinations, literal precision and float casts do not yield a full
match. These experiments remain scratch evidence, not progress credit.

All **86 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage54`, with **no compiler/linker rejections**.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,139,648 reference bytes without altering artifacts. Focused
exports are regenerated on a disposable copy after manifest/queue changes;
the original database, pinned compiler, base flags and acceptance rules remain
unchanged. Original primary operation/emission remain **512/30 and 388/8**,
related reuse **448/4**, manager initialization **280/8**, scratch frame **332/8**
and hexadecimal highlighting **144/8**. The primary batch remains incomplete;
supporting matches do not replace its acceptance criteria.


## Movement capture and capped segment query, stage 55

Two complete ordinary-C functions add **312 bytes**: movement with position
capture at **0x8c0440a0..0x8c0440dc** (60), and capped segment query at
**0x8c0440dc..0x8c0441d8** (252). Totals are **210 functions / 194 modules /
23,576 compiled range bytes / 4,139,336 retained reference bytes**, or **0.5663%
whole-image coverage**. All 208 previous matches, module definitions and
source/header hashes are preserved. Since the initial checkpoint, 176 functions
replace 19,932 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The new provisional ObjectMovementView checks position at 0x3c, orientation at
0x64, captured position at 0x158 and target at 0x164. The header describes an
observed prefix, not a full object allocation. Movement receives its Vector3
argument by value in the caller's stack area, passes its address to the existing
movement callee, and copies the object's post-call position only on success.
The capped query reuses the existing checked ObjectStateView center field. It
preserves a 90000 squared-XZ threshold, the 300-unit vector, original angle
scale/divisor, matrix push/rotation/transform/pop, center addition and final
query-to-boolean conversion. Recopying the input in the short-distance branch
preserves the observed post-subtraction reads and possible alias behavior.
Matrix data and unreconstructed movement, angle and query callees remain
reference dependencies.

Movement capture matches immediately. The capped query initially has eight
mismatching bytes from push-callee/global-matrix literal order. An external push
declaration reproduces the full range. External angle, rotate or transform
declarations alone do not resolve it. Final readable sources with declared,
checked header dependencies match twice independently before integration.

An independently reconstructed 100-byte vector turning helper also matched,
but the pre-integration overlap check found it already admitted as
**operation_43fb4**. The first admission attempt stopped before any mutation;
the duplicate was excluded, and its existing source/module remain unchanged.
It receives no additional function or byte credit. Inlining that complete helper
into the unmatched target-vector wrapper still produces 144 rather than 140
bytes, so this source decomposition does not resolve the angle-conversion blocker.

The next movement/target routine at **0x8c0441d8..0x8c044320** improves from
332 versus 328 expected / 227 differences to **328/34**, first **0x8c044235**.
Declaring the shared vector as an external aggregate restores base-plus-member
addressing and removes extra absolute member-address literals; an external vector
add declaration further fixes call ordering. The angle-conversion region remains
unmatched. Reversing product operands, divisor constant expressions and scoped
scale temporaries leave 34 differences; divide-before-multiply is worse, and
reusing a stack vector component adds stores. This routine is not admitted.

All **20 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage55`, with **no compiler/linker rejections**;
the separate overlap-rejection receipt records the excluded duplicate. Two fresh
exact builds, integrated-image comparison, five-function proof and all **53
original-workspace tests** pass; the public suite remains **58 tests**. Source-only
rejects 4,139,336 reference bytes without modifying artifacts. Focused exports use
a disposable database copy after manifest/queue changes; the original database,
compiler, base flags and full-range acceptance rules remain unchanged.
Original primary operation/emission remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, scratch frame **332/8** and hexadecimal
highlighting **144/8**. The primary batch remains incomplete; supporting matches
do not replace its acceptance criteria.
