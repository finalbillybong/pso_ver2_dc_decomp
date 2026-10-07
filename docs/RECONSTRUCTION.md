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
