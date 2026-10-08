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


## Object velocity application, stage 56

The complete ordinary-C function at **0x8c044488..0x8c0444f8** adds **112 bytes**.
Totals are **211 functions / 195 modules / 23,688 compiled range bytes /
4,139,224 retained reference bytes**, or **0.5690% whole-image coverage**. All 210
previous matches, module definitions and source/header hashes are preserved.
Since the initial checkpoint, 177 functions replace 20,044 bytes. Code-only
completion remains unknown; separately reconstructed static data remains zero.

ObjectVelocityView checks position at 0x3c, previous position at 0x48, velocity at
0x318 and center at 0x324. It is an observed prefix rather than a full allocation.
The function snapshots position before either call, adds velocity to a local copy
of center, calls the existing movement routine with mode zero, and copies the
local result into position only on success. This preserves callback-visible
ordering and partial state updates on failure. Vector addition and the movement
callee remain reference dependencies. The baseline matches immediately; final
readable source with declared checked headers matches the full range twice before
integration, including literals, aggregate copies and branch delay slots.

The neighboring segment-velocity setter at **0x8c044320..0x8c044410** improves from
244 versus 240 expected / 88 differences to **240/20**, first **0x8c0443be**, using
a scoped destination vector base. The supplied-direction setter at
**0x8c044410..0x8c044488** remains **120/29**, first **0x8c04444e**; its scoped-base
variant is only 116 bytes and is not acceptable. Both preserve Y while updating
X/Z, but final stack-component reads and destination-address lifetimes still differ.
Pointer/scalar temporaries, vector accessors, array/union views, step reuse,
volatile accesses, equivalent blocks and source renaming do not produce full
matches. These failed hypotheses are retained, not admitted.

The complete motion wrapper at **0x8c0444f8..0x8c0446f8** is reconstructed using an
ordinary C++ virtual call and inline capture, segment-velocity and apply-velocity
helpers. Its initial candidate is **512/52**. External declarations for both
movement callees resolve their aggregate-call preparation and reduce it to
**512/22**, first **0x8c044626**; only the inline velocity stores differ. The return
ABI is corrected to float, consistent with its final distance callee. Additional
nested setter helpers increase code size; they do not replace this best candidate.
This wrapper and both velocity setters remain unadmitted. Six step-type variants
also leave the earlier 140-byte angle wrapper at 144 bytes.

All **68 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage56`, with **no compiler/linker rejections**.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 original-workspace tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,139,224 reference bytes without altering artifacts. Focused
exports use a disposable database copy after manifest/queue changes; the original
database, compiler, base flags and full-range acceptance remain unchanged.
Original primary operation/emission remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, scratch frame **332/8**, hexadecimal
highlighting **144/8** and movement/target update **328/34**. The primary batch
remains incomplete; supporting matches do not replace its acceptance criteria.


## Random-state and ID operations, stage 57

Six complete ordinary-C functions add **348 bytes**: random-state construction
at **0x8c037d5c** (24), seeded construction at **0x8c037d74** (24), table seeding at
**0x8c037d8c** (120), object random fraction at **0x8c04aa9c** (104), optional ID
copy at **0x8c04ab04** (24), and ID-field update at **0x8c04ab1c** (52). Totals are
**217 functions / 201 modules / 24,036 compiled full-range bytes / 4,138,876 retained
reference bytes**, or **0.5774% whole-image coverage**. All 211 earlier matches,
module definitions and source/header hashes remain unchanged. Since the initial
34-function checkpoint, 183 functions replace 20,392 bytes. Code-only completion
remains unknown; separately reconstructed static data remains zero.

RandomState checks index at zero, 56 unsigned words at offset 4, seed at 228 and
size 232. ObjectRandomView checks the embedded state at 0x1d4. Seeding preserves
unsigned subtraction wraparound, the untouched slot zero, 54 indexed assignments,
four refresh calls and final index 55. Expressing the remainder result as a byte
offset before the table accesses reproduces the entire 120-byte range. Ordinary
C `%` references compiler runtime symbol `__l_mods`, resolved to the existing
0x8c18e8a0 reference entry using the default GNU linker. Initial experiments used
an incorrect single-underscore symbol; the pinned native linker diagnostic
identified the actual name. No linker or compiler change was needed for admission.
The signed-remainder implementation itself remains unresolved and receives no
matching credit. Constructors seed and return the original state pointer.

The fraction routine selects the global signed generator divided by 32768 for
object type 15; otherwise it converts the unsigned high half of the object
random word and divides by 65536. The compiler's unsigned-to-float correction is
preserved. ID-field names remain offset-based because their gameplay roles are
not established. Checked fields are unsigned halfwords at 0x1b6 and 0x306, with a
signed source halfword at 0x20. The setter ignores 65535, stores then reloads the
first field, and conditionally copies it using the existing global comparison.
A full-width temporary followed by a halfword cast reproduces both observed zero
extensions; short temporaries and inline accessors do not. The wrapper preserves
its null-source guard and signed load. Every final readable source and declared
checked header combination matches independently twice, including all literals,
alignment and delay slots.

Motion experiments retain the 512-byte wrapper at **512/22** and reconstruct the
reverse-motion wrapper **0x8c044964..0x8c044bd4** to **624/22**, first **0x8c044af0**.
A borrowed input pointer removes an extra aggregate copy; an external rotation
callee declaration resolves its literal preparation order. Both remaining
mismatches are final X/Z stores. C++ members, scalar-copy helpers, alternative
field layouts, register hints and source/destination lifetime variants do not
resolve them. The adjacent roaming update remains 624 versus 620 expected.
Subtractive random-table refresh and next-word routines remain unresolved;
ordinary array indexing, unsigned indexes, expanded subtraction, byte offsets,
base-address grouping and C++ variants fail full-range comparison. SDK vector
length uses FIPR and retains an additional return/alignment sequence; it is not
replaced with speculative ordinary arithmetic or copied instructions.

All **133 trials** retain sources, hypotheses and comparisons in
`reconstruction-stage57`; successful compilations retain complete compiler
receipts. **Nine compiler/linker rejections** are recorded, including the wrong
runtime symbol and illegal C register/return forms. Two fresh exact builds,
integrated-image comparison, five-function proof and all **53 research tests**
pass. The public suite remains **58 tests**. Source-only rejects 4,138,876 retained
bytes without changing artifacts. Focused exports are regenerated after the
manifest/queue changes on a disposable database copy and checked against current
inputs; the original database is unchanged. Compiler binary, base flags and
full-range acceptance are unchanged. Original primary operation/emission remain
**512/30 and 388/8**, related reuse **448/4**, and manager initialization **280/8**.
The primary batch remains incomplete; these supporting matches do not replace
its acceptance criteria.


## Subtractive random-table generation, stage 58

Two complete ordinary-C functions add **180 bytes**: table refresh at
**0x8c037e04..0x8c037e50** (76) and next-word generation at
**0x8c037e50..0x8c037eb8** (104). Totals are **219 functions / 203 modules /
24,216 compiled full-range bytes / 4,138,696 retained reference bytes**, or
**0.5817% whole-image coverage**. All 217 earlier matches, module definitions and
source/header hashes are preserved. Since the initial checkpoint, 185 functions
replace 20,572 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The shared inline refresh body performs unsigned subtraction for slots 1..24
against slots 32..55, then slots 25..55 against slots 1..31. Capturing the current
word before computing the source base reproduces register lifetimes. An explicit
integer offset temporary of -92 reproduces the second loop's register-mediated
address addition. The adjusted base remains a 32-bit integer until the final
in-state address is formed, avoiding an intermediate C pointer before the state.
The checked RandomState layout is unchanged; the new shared implementation header
also checks address width. Next-word generation increments the index, refreshes
and resets it to one only when it exceeds 55, then reads the indexed word. Both
final readable source/header combinations match independently twice, including
all literals, alignment and delay slots. No compiler, linker or base flags change.

The same integer-offset hypothesis does not improve the neighboring velocity
stores: direction setter **120/29**, segment setter's new trials **244/88** (the
previous scoped-base candidate remains **240/20**), motion wrapper **512/22**, and
reverse wrapper **624/22**. These remain unadmitted. Random-word XOR reaches
**104/20**, first **0x8c037ef1**, after expressing its store as XOR assignment;
subtractive word transformation remains 100 versus 104 expected. Both preserve
the observed signed rounded word count and retained signed-division dependency.
The byte shuffle remains **132/45** after fixing its loop-bound lifetime; typed
bound helpers and short/full-width temporaries do not recover all narrowing.
Forward and inverse block transforms reach **124/37** each after preserving the
unsigned-division call with a scoped divisor and expressing component pointer
bases before block offsets. Their register allocation remains unresolved. The
mapping arrays and division runtimes remain reference dependencies and receive
no reconstructed-data credit.

All **101 trials** retain source snapshots, hypotheses and comparisons in
`reconstruction-stage58`; successful compilations retain compiler receipts. One
C89 declaration-order rejection is recorded. Two fresh exact builds, integrated
image comparison, five-function proof and all **53 research tests** pass; the
public suite remains **58 tests**. Source-only rejects 4,138,696 retained bytes
without changing existing artifacts. Focused exports are regenerated after
manifest/queue changes on a disposable database copy and validated against
current inputs; the original database remains unchanged. Original primary
operation/emission remain **512/30 and 388/8**, related reuse **448/4**, and manager
initialization **280/8**. The signed-remainder helper still lacks a complete
180-byte match. The primary batch remains incomplete; supporting matches never
replace its acceptance criteria.


## Effect callers and referenced virtual entries, stage 59

Eight complete ordinary-C functions in five modules add **288 bytes**. Four
wrappers at **0x8c037c3c** (72), **0x8c037c84** (56), **0x8c037cbc** (72) and
**0x8c037d04** (72) resolve an effect kind from the object's context and emit it
at its position. Four adjacent entries at **0x8c037d4c, 0x8c037d50, 0x8c037d54 and
0x8c037d58** contribute four bytes each: three empty functions and one returning
zero. Totals are **227 functions / 208 modules / 24,504 compiled full-range bytes /
4,138,408 retained reference bytes**, or **0.5886% whole-image coverage**. All 219
previous matches, module definitions and source/header hashes are unchanged.
Since the initial checkpoint, 193 functions replace 20,860 bytes. Code-only
completion remains unknown; separately reconstructed static data remains zero.

The checked provisional ObjectEffectView contains position at 0x3c and a context
word at 0x38c. Wrappers preserve kinds 0x3000b, 0x3000d, 0x3000b and 0x3000c,
zero emission argument/flags, and the optional post-emission call with -768.
External declarations for that post-call reproduce its literal preparation order,
resolving ten differences in each 72-byte wrapper. The 56-byte wrapper matches
immediately. Callees and context semantics remain provisional; no behavior fixes
are introduced. Each four-byte entry has independent static-table references,
recorded with the reference image hash in scratch. They are callable entries,
not alignment counted as functions. The compiler naturally emits their combined
16-byte range. Every final readable source with declared checked headers matches
independently twice, including literals, delay slots and alignment.

The forward/inverse random block transforms improve to **124/32** through an
explicit loop-bound and block-offset lifetime. Further forward-map scoping reaches
**124/23**, first **0x8c037fc9**; register allocation remains different. Scoped
counters, register hints, external arrays, reversed indexing, integer-address
forms and source/destination pointer variants do not give a complete match.
These candidates remain unadmitted. The prior random-word XOR **104/20**, shuffle
**132/45**, motion **512/22**, reverse motion **624/22**, segment velocity **240/20**
and direction velocity **120/29** are preserved without matching credit.

All **44 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage59`, with no compiler/linker rejections.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 research tests** pass; the public suite remains **58 tests**. Source-only
rejects 4,138,408 retained bytes without altering existing artifacts. Focused
exports are regenerated after manifest/queue changes on a disposable database
copy and validated against current inputs; the original database remains
unchanged. Compiler binary, flags, default linker and whole-range rules are
unchanged. The original operation/emission targets remain **512/30 and 388/8**;
related reuse **448/4**, manager initialization **280/8**, and the signed-remainder
helper remain unresolved. These supporting callers do not complete the primary
batch or remove its acceptance criteria.


## Effect selection, last-handle forwarding and list helpers, stage 60

Five complete ordinary-C functions in four modules add **232 bytes**: effect
selection at **0x8c24e6a4** (52), last-handle forwarding at **0x8c060770** (80),
list detach at **0x8c0607c0** (36), list append at **0x8c0607e4** (28), and nullable
release at **0x8c060800** (36). Totals are **232 functions / 212 modules /
24,736 compiled full-range bytes / 4,138,176 retained reference bytes**, or
**0.5942% whole-image coverage**. All 227 earlier matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 198 functions
replace 21,092 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The selector preserves the requested kind except in modes 16/17, where it returns
0x30043. Explicitly initializing a mode flag, conditionally setting it, and using
a conditional expression reproduces the reference's boolean and branch shape;
direct if/ternary forms are shorter. The last-handle routine preserves its active
check, both enabled/last reads, signed bounds 0..53, handle lookup and final value
plus zero arguments. Capturing the last-index pointer before the enabled read
resolves seven address-scheduling differences. Its call at 0x8c3457b0 remains a
reference dependency.

EffectListNode checks links at offsets zero/four and an eight-byte observed
prefix. Detach preserves head/tail updates without clearing the removed links;
append preserves the tail reload and final null next link. Compiled alone,
detach emits 34 bytes, short of its 36-byte full range. Compiling it with the
adjacent append function in original order naturally emits the required alignment
and matches all 64 bytes; no manual padding is added. Release checks both the
object and signed short release flag, calls the retained free routine only when
required, and returns the original pointer. All final readable sources and
checked headers match independently twice, including literals and delay slots.

Effect remapping at **0x8c24e644..0x8c24e6a4** improves from 88 versus 96 expected
to **96/31**, first **0x8c24e648**. Its mode/category exits, signed table sentinel
and unsigned kind adjustment are reconstructed, but saved-register selection and
second-field address lifetime differ. Late table bases, conditional results,
external declarations and scalar offset temporaries do not complete the match.
One redundant-conditional experiment is marked diagnostic-only and ineligible
for admission. The table itself remains retained static data.

All **45 trials** retain sources, hypotheses and comparisons in
`reconstruction-stage60`; successful compilations retain compiler receipts. One
C89 declaration-order rejection is recorded. Two fresh exact builds, integrated
image comparison, five-function proof and all **53 research tests** pass; the
public suite remains **58 tests**. Source-only rejects 4,138,176 retained bytes
without changing artifacts. Focused exports are regenerated after manifest/queue
changes on a disposable copy and checked against current inputs; the original
database remains unchanged. Compiler binary, base flags, default linker and
full-range rules are unchanged. Original operation/emission remain **512/30 and
388/8**, related reuse **448/4**, manager initialization **280/8**, and the
signed-remainder helper remains unresolved. The primary batch is still incomplete;
these supporting matches do not replace its acceptance criteria.


## Controller lifecycle, dispatch and mode query, stage 61

Five complete ordinary-C functions in five modules add **240 bytes**: controller
construction at **0x8c24e6d8** (60), destruction at **0x8c24e714** (68), update
dispatch at **0x8c24e758** (64), current-mode query at **0x8c032b10** (44), and
the referenced empty entry at **0x8c24e798** (4). Totals are **237 functions /
217 modules / 24,976 compiled full-range bytes / 4,137,936 retained reference
bytes**, or **0.6000% whole-image coverage**. All 232 prior matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 203 functions replace 21,332 bytes. Code-only completion remains
unknown; separately reconstructed static data remains zero.

EffectController checks its observed 40-byte prefix: tag at zero, dispatch at
24, unsigned short size at 30, mode byte at 32 and signed ticks at 36. Construction
preserves the base call, static dispatch/tag dependencies, size, incoming mode
and zero tick count. Destruction preserves the nullable object, dispatch reset,
base destructor and signed short release test. The dispatcher calls one of two
retained timeline routines for modes zero/one and increments ticks for every
mode. A full-width unsigned local produces the reference's two byte extensions;
an explicit byte switch cast produces an extra extension and four extra bytes.

The mode query preserves the enabled global, index global and first word of the
12-byte record table. ContextModeRecord checks that stride and field offset.
Using a common result variable with one final return reproduces the return delay
slot; early returns differ in five bytes. The query name is provisional: its
wider context-table role remains unknown. The empty entry has an independent
static reference at 0x8c27e4ac, recorded in private evidence. It is not credited
as arbitrary padding. Every final readable source matches independently twice.

All **23 trials** retain sources, hypotheses, compiler receipts and comparisons
in `reconstruction-stage61`; none were compiler/linker rejections. Two fresh
exact builds, integrated-image comparison, five-function proof and all **53
research tests** pass; the public suite remains **58 tests**. Source-only rejects
4,137,936 retained bytes without changing artifacts. Focused exports are
regenerated after manifest/queue changes on a disposable copy and checked against
current inputs; the original database remains unchanged. Compiler binary, base
flags, default linker and full-range rules are unchanged. Both timeline routines
remain retained dependencies and are the next controller targets.

Original operation/emission remain **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and the signed-remainder helper remains
unresolved. The primary batch is still incomplete; supporting matches do not
replace its acceptance criteria. The public README's stale function/module
counts are also corrected to the verified manifest totals.


## Controller timelines and child lifecycle, stage 62

Eight complete ordinary-C functions add **972 bytes**: controller mode-zero
and mode-one timelines at **0x8c24e79c** (448) and **0x8c24e95c** (100), child-A
construction/destruction/update at **0x8c24e9c0** (108), **0x8c24ea2c** (68),
**0x8c24ea70** (36), and corresponding child-B routines at **0x8c24ed04** (108),
**0x8c24ed70** (68), **0x8c24edb4** (36). Totals are **245 functions / 225
modules / 25,948 compiled full-range bytes / 4,136,964 retained reference bytes**,
or **0.6233% whole-image coverage**. All 237 prior matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint, 211
functions replace 22,304 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

Mode zero preserves all eight timed cases. At ticks 0/30/60/90/120 it attempts
52-byte child allocations with values 5/4/3/2/1 and emits kind 0x40010 even when
allocation fails. Tick 150 attempts the other child type, tick 160 makes the two
observed text calls, and tick 180 sets flag bit zero. Mode one attempts its child
and displays text at tick zero, then sets that flag at tick 30. Literal addresses,
text offsets and signed tick comparisons remain as observed. Starting the text
base lifetime after the prior call removes an extra saved register. A checked
halfword field at offset four permits the exact displacement access. Direct
external call declarations resolve the remaining literal/call scheduling; neither
compiler nor optimization settings change.

ControllerFlags is a separately checked header view, preserving the existing
controller header unchanged. ControllerChild checks the common observed 52-byte
prefix, including coordinates at 32/36, rate at 40, value at 44 and ticks at 48.
Both constructors preserve their base calls, distinct dispatch/tag globals, two
coordinate copies, negative reciprocal rate and zero ticks. Both destructors
preserve nullable objects and signed short release tests. Updates increment and
reload ticks, convert to float and set the flag unless the result is below 30.
No static table or string bytes receive source credit. Names remain provisional.

All **34 trials** retain sources, hypotheses, compiler receipts and comparisons
in `reconstruction-stage62`; none were compiler/linker rejections. Final readable
sources and declared checked headers match independently twice. Two fresh exact
builds, integrated-image comparison, five-function proof and all **53 research
tests** pass; the public suite remains **58 tests**. Source-only rejects 4,136,964
retained bytes without changing artifacts. Focused exports are regenerated after
manifest/queue changes on a disposable copy and checked against current inputs;
the original database remains unchanged. Full-range comparison includes natural
alignment and all literal pools. Child rendering and parameter helpers are next.

Original operation/emission remain **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and the signed-remainder helper remains
unresolved. The primary batch is still incomplete; supporting matches do not
replace its acceptance criteria.


## Child rendering, animation parameters and coordinates, stage 63

Nine complete ordinary-C functions add **1,196 bytes**: coordinate preparation
at **0x8c24eb10** (104), primary/secondary layers at **0x8c24eb78** (136) and
**0x8c24ec00** (104), rectangle drawing at **0x8c24ec68** (156), child-B drawing
at **0x8c24edd8** (200), animation parameters at **0x8c24eea0** (136), part loops
at **0x8c24ef28** and **0x8c24ef68** (64 each), and part drawing at **0x8c24efa8**
(232). Totals are **254 functions / 234 modules / 27,144 compiled full-range
bytes / 4,135,768 retained reference bytes**, or **0.6520% whole-image coverage**.
All 245 earlier matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 220 functions replace 23,500 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The animation routines preserve all observed segment boundaries, tick-to-float
conversions and arithmetic order, including integer division before conversion
in the initial alpha paths. The secondary layer's inverse range guard reproduces
the branch directions; naming the elapsed-tick intermediate resolves its last
21 differing bytes without changing arithmetic. Rectangle drawing preserves the
64-by-85 dimensions, half-scale operations, unsigned packed alpha conversion,
color call and rate. A direct external color declaration fixes both call timing
and the destination-register allocation. Renderer calls remain dependencies.

ChildRenderData checks all eight float offsets and its 32-byte size. ChildPart
checks all six float offsets and its 24-byte table stride. Part drawing preserves
the individual position and texture-coordinate operations and four divisions
by 256. The one-/two-part loops remain counted loops; direct draw declarations
fix callee-register selection. Their static records remain retained data.
Coordinate preparation uses explicit eight-byte index shifts and integer base
addresses before conversion to float pointers. Pointer-base variants differ by
24 bytes; integer bases reproduce the complete register and literal schedule.
No speculative bounds checks or behavior corrections are introduced.

Child-A drawing at **0x8c24ea94..0x8c24eb10** remains **124/4**, first difference
**0x8c24eac4**: the first layer call swaps the two argument MOV instructions,
including its delay slot. Direct external, old-style, untyped and integer-this
declarations, C++ member forms, scalar/array locals and inline call wrappers do
not resolve it. Shared pointer lifetimes instead add an unwanted saved register.
It receives no source credit; the successful lower-level routines do not hide it.

All **75 trials** retain source snapshots, hypotheses and comparisons in
`reconstruction-stage63`; successful compilations retain compiler receipts.
Two C89 declaration-order rejections are recorded. All final readable sources
and declared checked headers match independently twice. Two fresh exact builds,
integrated-image comparison, five-function proof and all **53 research tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,135,768 retained
bytes without changing artifacts. Focused exports are regenerated after the
manifest/queue changes on a disposable copy and checked against current inputs;
the original database remains unchanged. Compiler, base flags and full-range
rules remain unchanged; all nine modules use the default GNU linker.

Original operation/emission remain **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and the signed-remainder helper remains
unresolved. The primary batch is still incomplete; these supporting matches do
not replace its acceptance criteria. Next work revisits those original call and
float scheduling blockers using the additional source-level evidence.


## Render setup, float casts and vector helpers, stage 64

Ten complete ordinary-C functions in eight modules add **360 bytes**. Four
render-state wrappers at **0x8c0c5310**, **0x8c0c532c**, **0x8c0c5348** and
**0x8c0c5364** contribute 28 bytes each. Integer/float bit-casts at **0x8c0c5380**
(12) and **0x8c0c538c** (16) share an 88-byte module with the XZ angle helper at
**0x8c0c539c** (60). Vector offset at **0x8c0c53d8** adds 84 bytes, tiny-threshold
normalization at **0x8c0c542c** adds 52, and XZ squared distance at **0x8c0c5460**
adds 24. Totals are **264 functions / 242 modules / 27,504 compiled full-range
bytes / 4,135,408 retained reference bytes**, or **0.6607% whole-image coverage**.
All 254 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 230 functions replace 23,860 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The render wrappers preserve the observed pairs (0,8)/(1,10), (0,8)/(1,6),
(0,5)/(1,7) and (0,5)/(1,6); names are provisional. The bit-casts use ordinary
unions, preserving the raw bits rather than performing numeric conversion.
Compiled by themselves, the pair emits 26 versus 28 required bytes. Including
the adjacent angle routine in original order naturally supplies its alignment
and matches all 88 bytes without manual padding. The angle routine preserves
subtraction order and the exact multiply/divide constants; a direct external
atan declaration resolves eight register-selection differences.

Vector offset preserves sine/cosine calls, source reloads, the Y copy and
multiplication order. Normalization compares squared length against the float
with bits 0x283424dc (approximately 1e-14), retains its small-length return and
calls the existing normalizer otherwise. Squared distance uses X/Z only and
preserves the final return delay-slot addition. All use the unchanged checked
Vector3 header. Project validation caught a duplicate provisional normalization
name before building; the old source was restored to its recorded hash, the new
routine was renamed normalize_vector_tiny, and its full range was verified twice
again. The failed validation logs and repair receipt remain in scratch.

The primary candidates were freshly reproduced: **operation 512/30**, first
**0x8c045fdd**; **emission 388/8**, first **0x8c05fc56**; related reuse **448/4**,
first **0x8c05feba**. Applying the newly successful integer-base representation
to independently scoped emission columns and the operation's orientation address
does not improve them; extending it to every scan base worsens size to 392.
Best candidates remain unchanged. Raw handle-start inspection confirms signed
byte checks in the callee, without establishing a different full caller ABI.
Nearby renderer entries share a later literal pool and remain reference-dependent.

The signed-remainder 180-byte reference hash and saved opcode-model receipt are
unchanged. The normal path returns signed remainder with T clear; the zero-divisor
path preserves incoming R0 and sets T. Ordinary C candidates do not reproduce
that complete exceptional ABI or the instruction range. No runtime object or
assembly substitution is admitted. Prior model checks remain evidence, not a
claim of hardware execution.

All **38 trials** retain sources, hypotheses, compiler receipts and comparisons
in `reconstruction-stage64`; none were compiler/linker rejections. Final sources
match independently twice. Two fresh exact builds, integrated-image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,135,408 retained bytes without changing
artifacts. Focused exports are regenerated after manifest/queue changes on a
disposable copy and checked against current inputs; the original database remains
unchanged. Compiler, base flags, default linker and full-range rules are unchanged.
Both original primary targets and manager initialization **280/8** remain
incomplete. Supporting matches do not replace the primary acceptance criteria.


## Provisional setup, update and resource helpers, stage 65

Eight complete ordinary-C functions add **704 bytes**: **0x8c0c548c** (124),
**0x8c0c5508** (160), **0x8c0c55a8** (12), **0x8c0c55b4** (68),
**0x8c0c6270** (96), **0x8c0c62d0** (16), **0x8c0c62e0** (172), and
**0x8c0c638c** (56). Address-based names remain provisional because their wider
setup/update roles are not yet established. Totals are **272 functions / 250
modules / 28,208 compiled full-range bytes / 4,134,704 retained reference bytes**,
or **0.6776% whole-image coverage**. All 264 earlier matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint, 238
functions replace 24,564 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero.

The first group preserves initialization call order, the nullable 108-byte child
allocation and installed callback, signed-byte update predicate, conditional
counter increment and repeated cleanup calls. Direct external declarations for
the constructor and selected object routines resolve literal/call scheduling
without changing argument values or the pinned compiler. The callback preserves
its tail call with argument 25. Static strings, globals and remaining callees
continue to come from the reference.

ResourceSlot checks the observed 12-byte destination stride. Preparation visits
eight slots, reading a 32-byte indexed row of pointers and preserving the final
descriptor call. Another routine retains eight explicit calls to 32-byte-spaced
records with indices zero through seven and float value -150. Expressing the
record base as an external array prevents folding each pointer into a separate
absolute literal and yields the exact 172-byte function. No loop is substituted
for those observed unrolled calls, and the static records receive no source credit.

Selection refreshes the state, scans four flags from index three downward and
preserves the existing selection when no flag equals one. A separate 16-byte
field-base offset is required. Scoping that invariant base inside the loop gives
the reference's index/base register allocation after compiler hoisting; early
index initialization, register hints, integer bases and a while loop remain
eight bytes different. Final source uses the complete matching form.

All **40 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage65`; none were compiler/linker rejections.
Final sources match independently twice. Proposed identifiers, source paths and
byte intervals are checked before integration. Two fresh exact builds,
integrated-image comparison, five-function proof and all **53 research tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,134,704 retained
bytes without changing artifacts. Focused exports are regenerated after
manifest/queue changes on a disposable copy and checked against current inputs;
the original database remains unchanged. Compiler, base flags, default linker
and complete-range rules remain unchanged.

Original operation/emission remain **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder remains unresolved. The
primary batch is still incomplete; supporting matches do not replace its
acceptance criteria. Follow the newly resolved setup calls into their remaining
initialization helpers while preserving these exact blocker receipts.


## Initialization, cleanup and zero-fill wrappers, stage 66

Seven complete ordinary-C functions add **416 bytes**: cleanup at **0x8c0c56b0**
(40), **0x8c0c5750** (36), **0x8c0c57ec** (36) and **0x8c0c5888** (92), ordered
initialization at **0x8c0c5b78** (164), and zero-fill wrappers at **0x8c03cee8**
and **0x8c03cf00** (24 each). Totals are **279 functions / 257 modules / 28,624
compiled full-range bytes / 4,134,288 retained reference bytes**, or **0.6876%
whole-image coverage**. All 272 previous matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 245
functions replace 24,980 bytes. Code-only completion remains unknown; separately
reconstructed static data remains zero. Names remain provisional and address-based.

Initialization preserves all fifteen ordered calls and the observed integer
arguments. Cleanup preserves every repeated rendering call, the root-object
address and the distinct resource teardown sequences. The two separate zero-fill
entries preserve the same 576-byte buffer and tail-call behavior. A direct
external zero-fill declaration fixes thirteen literal/register-selection bytes;
no buffer contents are copied into source. All callee and static-data dependencies
remain explicit reference dependence unless independently admitted elsewhere.

Mode setup at **0x8c0c55f8..0x8c0c56b0** remains **184/10**, first **0x8c0c5619**;
its counterpart at **0x8c0c56d8..0x8c0c5750** remains **120/10**, first
**0x8c0c56f9**. Both preserve call order, global values and string offsets, but
the paired mode/detail stores differ in register allocation and scheduling.
Named mode/zero values, separate pointer lifetimes, external globals, inline
setters, comma expressions and direct following-call declarations do not finish
them. Combining both globals under one base incorrectly shortens each range by
four bytes. Neither receives source credit. Raw callee entries were checked
before changing declarations; no speculative mode argument was added.

All **49 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage66`; none were compiler/linker rejections.
Final sources match independently twice. Proposed identifiers, paths and intervals
are checked before integration. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,134,288 retained bytes without
changing artifacts. Focused exports are regenerated after manifest/queue changes
on a disposable copy and checked against current inputs; the original database
remains unchanged. Compiler, base flags, default linker and full-range rules are
unchanged. Original primary targets remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
The primary batch is still incomplete; these supporting matches do not replace
its acceptance criteria.


## Flag-object and bit-table operations, stage 67

Eleven complete ordinary-C functions add **664 bytes**: the provisional object
constructor **0x8c03cf18** (56), current-group wrappers **0x8c03cf50**,
**0x8c03cfe4** and **0x8c03d080** (20 each), bit set **0x8c03cf64** (128),
bit clear **0x8c03cff8** (136), Boolean conversion **0x8c03d094** (28), bit
query **0x8c03d0b0** (136), buffer copies **0x8c03d138** (32) and
**0x8c03d158** (20), and destructor **0x8c03d174** (68). Totals are **290
functions / 268 modules / 29,288 compiled full-range bytes / 4,133,624 retained
reference bytes**, or **0.7035% whole-image coverage**. All 279 previous matches,
module definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 256 functions replace 25,644 bytes. Code-only completion remains
unknown; separately reconstructed static data remains zero.

The table operations preserve signed group bounds 0..17, unsigned ID bounds
0..255, the incremented 16-bit ID, separate signed divide/remainder helpers and
MSB-first bit ordering. A full-width temporary after the 16-bit increment removes
six differing bytes. Decrementing the byte pointer in the zero-remainder branch
finishes the setter; combining this with an explicit 254 mask finishes the
clearer. Equivalent combined pointer/index expressions instead extend the ranges
and are rejected. The query returns -1 for invalid inputs. Its Boolean wrapper
maps any nonzero result, including -1, to true; that observed behavior is preserved.
The copy-out routine copies 576 bytes and returns 576. Copy-in forwards its
observed caller-supplied length without adding a speculative bound. Direct
external copy declarations resolve literal placement in both wrappers.

The new provisional FlagObject header checks every accessed offset and its
44-byte extent. Construction and destruction preserve base calls, dispatch
replacement, signed-short release flag, nullable object handling and return value.
No static buffer contents, unresolved callee bodies or runtime helper bytes
receive source credit. Both division dependencies remain explicit reference
symbols; matching callers does not resolve the signed-remainder ABI blocker.

All **48 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage67`; none were compiler/linker rejections.
Final sources match independently twice. Identifiers, source paths and intervals
are checked before integration. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,133,624 retained bytes without
changing artifacts. Focused exports are regenerated after manifest/queue changes
on a disposable copy and checked against current inputs; the original database
remains unchanged. Compiler, base flags, default linker and full-range rules are
unchanged. Original primary targets remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
The primary batch is still incomplete; these supporting matches do not replace
its acceptance criteria.


## Sampling, polling and indexed notifications, stage 68

Seven complete ordinary-C functions add **528 bytes**: **0x8c0c63c4** (72),
**0x8c0c640c** and **0x8c0c6468** (92 each), **0x8c0c64c4** (36),
**0x8c0c64ec** (68), **0x8c0c6530** (60) and **0x8c0c656c** (108).
Totals are **297 functions / 275 modules / 29,816 compiled full-range bytes /
4,133,096 retained reference bytes**, or **0.7162% whole-image coverage**.
All 290 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 263 functions replace 26,172 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The sampling caller preserves its 12-byte stack storage, unsigned conversion,
division by 440, increment and multiplication. Raw callees access mixed byte and
halfword fields; Sample12 describes caller storage only, not a decoded field
layout. Both polling loops preserve same-value retries, unsigned comparisons,
threshold offsets 170/356, global update and callback order. Capturing the
converted value in a full-width local removes an unwanted reload and finishes
the first loop. Giving the second threshold an outer lifetime reproduces its
saved register. Applying that lifetime to the first loop fails and is recorded.

The 128-entry zeroing loop needs an explicit shifted byte offset to preserve
shift addressing instead of multiplication. Notification operations likewise
match when byte offsets remain separate from the table base. The single-record
entry marks its slot before lookup and adds no speculative ID bound. The loop
stops at the first missing object and emits a four-byte 9/1/id record only for
unseen objects with flag 0x800. Checked provisional headers cover record offsets,
object flags and the minimal dispatch prefix; destructor matching does not imply
a complete object allocation layout. Callees and static table contents remain
reference-dependent unless separately admitted.

All **34 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage68`; none were compiler/linker rejections.
Final sources match independently twice. Identifiers, source paths and intervals
are checked before integration. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,133,096 retained bytes without
changing artifacts. Focused exports are regenerated after manifest/queue changes
on a disposable copy and checked against current inputs; the original database
remains unchanged. Compiler, base flags, default linker and full-range rules are
unchanged. Original primary targets remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
The primary batch is still incomplete; these supporting matches do not replace
its acceptance criteria.


## Vector dependencies and child-marking destructor, stage 69

Three complete ordinary-C functions add **200 bytes**: XZ distance with square
root at **0x8c03f0b8** (32), vector scaling at **0x8c03f0d8** (80), and the
child-marking destructor at **0x8c0c67c0** (88). Totals are **300 functions / 278
modules / 30,016 compiled full-range bytes / 4,132,896 retained reference bytes**,
or **0.7210% whole-image coverage**. All 297 previous matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint, 266
functions replace 26,372 bytes. Code-only completion remains unknown; separately
reconstructed static data is zero.

The distance helper preserves XZ subtraction order, separate squares and its
square-root tail call. Vector scaling preserves the exact threshold bits
0x3727c5ac, the strict greater-than comparison, the requested-length/root factor
and ordered XYZ stores. It returns the original length on the scaling path and
zero on the other path without modifying the vector. The destructor preserves
nullable input, dispatch replacement, optional child's flag 1, base destruction,
positive signed-short release flag and original object return. A new checked
prefix declares only observed dispatch/child offsets and reuses the existing
checked child-flags header; it does not establish a full allocation layout.

Following these dependencies identifies a **484-byte initializer at 0x8c0c65dc**.
Its best scratch source remains **484/92**, first **0x8c0c662b**, and receives no
credit. Baseline ordinary C and C++ both produce 476 bytes. A volatile local
pointer diagnostic reproduces observed incoming-object stack accesses and size;
external push/rotation declarations improve scheduling, but aggregate-copy and
two angle-conversion regions still differ. Plain pointer aliases, arrays,
aggregate storage, alternate vector-copy forms, angle-record fields and inline
conversion do not finish it. No partial initializer or unsupported layout is
integrated. One trial-generation script stopped on its declaration regex before
creating a lookup experiment; all completed compiler trials retain their receipts.

All **34 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage69`; none were compiler/linker rejections.
Final admitted sources match independently twice. Identifiers, source paths and
intervals are checked before integration. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,132,896 retained bytes without
changing artifacts. Focused exports are regenerated after manifest/queue changes
on a disposable copy and checked against current inputs; the original database
remains unchanged. Compiler, base flags, default linker and full-range rules are
unchanged. Original primary targets remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
The primary batch is still incomplete; these supporting matches do not replace
its acceptance criteria.


## ID lookup, sorted insertion and attachment, stage 70

Three complete ordinary-C functions add **464 bytes**: ID lookup at
**0x8c053d84** (152), sorted insertion at **0x8c053e1c** (280), and attachment
wrapper at **0x8c053f34** (32). Totals are **303 functions / 281 modules / 30,480
compiled full-range bytes / 4,132,432 retained reference bytes**, or **0.7322%
whole-image coverage**. All 300 previous matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 269
functions replace 26,836 bytes. Code-only completion remains unknown; separately
reconstructed static data is zero.

Lookup preserves sentinel 0xffff, the separate path for IDs below 12, signed
midpoint division, lower-bound search and final pointer/ID check. Capturing the
entry ID at full width or reversing the comparison operands resolves nine
register-selection bytes. Insertion preserves its sentinel and duplicate returns,
original overlapping-copy call, table count and three ID-class counters. Declaring
low/high before count reproduces the saved-register assignment. A locally scoped
-1 value after the count load reproduces its shared arithmetic/comparison use;
placing it earlier changes branch scheduling and fails. No speculative empty-table,
capacity or ID guards are added. The checked LookupObject header describes only
the observed ID field at offset 32 and its prefix, not complete object size.

Fresh primary emission and reuse comparisons remain **388/8 and 448/4**. Seven
signed-byte call-prototype combinations for each current caller, full-width kind
types and const value parameters leave their bytes unchanged. Transferring the
successful reversed-comparison idea also does not resolve the primary scan.
Those failures are preserved, including unchanged baselines, without source credit.

A related **668-byte effect update at 0x8c0c6818** improves from 660 generated bytes
to **668/22**, first **0x8c0c6827**. Explicit timer pointers recover two address-add
pairs; external lookup/emission declarations improve call scheduling; a full-width
inline getter followed by 16-bit conversion reproduces the final repeated
extension. The slot108 virtual call, aggregate argument and most vector movement
already match. Two lookup argument loads and one speed-addition schedule remain
unresolved. Raw lookup inspection confirms low16-bit input handling. Narrow
prototypes, masks, aliases, wrappers, scalar captures and volatile diagnostics do
not finish this update. Its source and provisional classes remain in scratch;
no incomplete initializer/update receives credit.

All **137 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons in `reconstruction-stage70`; none were compiler/linker rejections.
Final admitted sources match independently twice. Identifiers, source paths and
intervals are checked before integration. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,132,432 retained bytes without
changing artifacts. Focused exports are regenerated after manifest/queue changes
on a disposable copy and checked against current inputs; the original database
remains unchanged. Compiler, base flags, default linker and full-range rules are
unchanged. Original primary operation remains **512/30**, manager initialization
**280/8**, and signed remainder unresolved. The primary batch is still incomplete;
these supporting matches do not replace its acceptance criteria.


## Low-ID replacement and field transition, stage 71

Three complete functions add **212 bytes**: low-ID lookup at **0x8c021ef8** (40),
C++ object replacement at **0x8c021f20** (104), and field transition at
**0x8c021f88** (68). Totals are **306 functions / 284 modules / 30,692 compiled
full-range bytes / 4,132,220 retained reference bytes**, or **0.7373% whole-image
coverage**. All 303 previous matches, module definitions and source/header hashes
remain unchanged. Since the initial checkpoint, 272 functions replace 27,048
bytes. Code-only completion remains unknown; separately reconstructed static data
is zero.

Low-ID lookup preserves its signed-int input, sentinel 0xffff and upper bound 12;
no negative-ID guard is invented. A shared result variable reproduces the observed
return delay slot and complete 40-byte range; direct returns generate 36 bytes and
are rejected. Object replacement preserves the inlined lookup, both null checks,
virtual deleting-destructor call at slot 8 with release flag 1, unchecked table
replacement and insertion-result comparison. Declaring the derived destructor
without defining it prevents an unrelated implicit destructor body from being
emitted. Its actual body and virtual table remain reference-dependent. The new
provisional C++ header checks base/prefix sizes and ID offset 32. User authorization
permits fully matching C++; this module adds only the established -lang c++ option.

The field-transition view checks all accessed offsets: optional signed short at
0xf0, mode at 0x30a, previous mode at 0x30e, mask at 0x310 and flags at 0x350.
Typing the flag field recovers indexed load/store addressing, and the final fully
typed source preserves all 68 bytes. It retains the optional write, dynamic shift
and flag 0x10, without speculative clamps or additional state changes.

The related 668-byte effect update remains **668/22**, first **0x8c0c6827**.
Capturing subsequent vector-call pointers, integer bases and an inline paired
update leaves the bytes unchanged. Defining it as an actual C++ member worsens
the result to 668/80. A first member trial was rejected for a helper/field name
collision; renaming the helper fixes that compilation error but not the match.
No partial update is admitted.

All **23 trials**, including **two compiler/linker rejections**, retain source
snapshots, hypotheses and comparisons in `reconstruction-stage71`; completed
compilations retain compiler receipts. Final admitted sources match independently
twice. Identifiers, source paths and intervals are checked before integration.
Two fresh exact builds, integrated-image comparison, five-function proof and all
**53 research tests** pass; the public suite remains **58 tests**. Source-only
rejects 4,132,220 retained bytes without changing artifacts. Focused exports are
regenerated after manifest/queue changes on a disposable copy and checked against
current inputs; the original database remains unchanged. Compiler, base flags,
default linker and full-range rules are unchanged. Original primary targets
remain **512/30 and 388/8**, related reuse **448/4**, manager initialization
**280/8**, and signed remainder unresolved. The primary batch is still incomplete;
these supporting matches do not replace its acceptance criteria.


## State transition and query helpers, stage 72

Four complete functions add **224 bytes**: state transition at **0x8c021fcc**
(104), signed index at **0x8c02c350** (24), conditional float query at
**0x8c02c368** (40), and banked table lookup at **0x8c1e9610** (56).
Totals are **310 functions / 288 modules / 30,916 compiled full-range bytes /
4,131,996 retained reference bytes**, or **0.7427% whole-image coverage**.
All 306 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 276 functions replace 27,272 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The checked provisional header describes only observed prefixes. The transition
preserves the 0x1e000 guard at offset 0x310, flag 0x10000 at offset 52, mode 16,
signed short state/value and saved angle. Raw inspection establishes that its
lookup helper consumes the object argument. The signed index helper preserves
negative values and maps values at least 15 to 1. The banked lookup selects a
retained pointer table using flag 0x100000; explicit two-byte index arithmetic
matches all 56 bytes, while ordinary array indexing generates 60.

The float query returns zero for mode 2 and otherwise forwards the object,
second pointer and float argument. Raw callee instructions save R4, R5 and FR4,
so a one-argument declaration would be incorrect even if caller registers
happened to persist. An ordinary C inline predicate followed by explicit != 0
reproduces MOVT/TST and the entire 40-byte range. A direct predicate generates
36 bytes; == 1 differs by three bytes and bit masking generates 44. Unsigned int,
long and unsigned long predicate results also match. The C++ bool experiment was
rejected because bool is unavailable with the pinned flags; flags were not
changed. Other C++ predicate experiments did not match.

Long conversion, angle-local and angle-difference prototype experiments on the
primary operation remain **512/30**. The emission remains **388/8**, related reuse
**448/4**, and manager initialization **280/8**. Signed remainder remains unresolved.
The primary batch is incomplete; these supporting matches do not replace its
acceptance criteria. Related effect initializer/update remain 484/92 and 668/22.

All **28 trials**, including **one compiler rejection**, retain source snapshots,
hypotheses and comparisons in `reconstruction-stage72`; completed compilations
retain compiler receipts. Final sources match independently twice. Identifiers,
source paths and intervals are checked before admission. Two fresh exact builds,
integrated-image comparison, five-function proof and all **53 research tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,131,996 retained
bytes without changing artifacts. Focused exports were regenerated after manifest
changes on a disposable copy and checked against current inputs; the original
database is unchanged. Compiler, base flags, linker and full-range rules remain
unchanged.


## Guarded dispatch and virtual notice handler, stage 73

Four complete functions add **836 bytes**: guarded dispatch at **0x8c04ab50**
(100) and **0x8c04abb4** (104), eight-byte notice construction at **0x8c04ac1c**
(68), and its five-way C++ handler at **0x8c04ac60** (564). Totals are **314
functions / 292 modules / 31,752 compiled full-range bytes / 4,131,160 retained
reference bytes**, or **0.7627% whole-image coverage**. All 310 previous matches,
module definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 280 functions replace 28,108 bytes. Code-only completion remains
unknown; separately reconstructed static data is zero.

The guarded routines preserve ordered global, byte-query, signed-mode and
pointer/value checks. External declaration of the byte-query callee reproduces
its address/literal ordering; direct function-pointer declarations differ by eight
bytes. The callee consumes only the observed object pointer and returns a clamped
byte. Raw dispatch entries confirm all three forwarded integer-register inputs.
The notice builder retains the sentinel and zero stores before overwriting them
with arguments. Ordinary C reproduces the complete sequence; C++ and a default
constructor also match, but the simpler C source is admitted. Checked notice
fields occupy offsets 0, 1, 2, 4, 6 and 7 with total size eight.

The handler preserves the null check, source-ID bound, five-entry switch, signed
short field arithmetic, observed clamp conditions, three virtual slots and
conditional five-argument effect calls. Deferred notice-pointer assignment,
full-width byte capture, explicit field pointers, signed limit captures and a
separate counter-pointer/amount scope recover register allocation. The final
counter scope resolves the last six differing bytes. No additional guard, clamp
or semantic correction is introduced. Provisional C++ views check the base size,
flag, counter, limits, vector and short-field offsets. Virtual slots 0x8c, 0x90 and
0x94 are represented by declarations; their bodies and tables remain reference
inputs. The pinned native linker handles this compiler's switch-table RELA
addends. GNU incorrectly resolves those entries; no code or table patching is
used. Both linkers use the established compiler and base flags; C++ adds only
-lang c++.

The related effect update remains **668/22**. Bitfield and const/volatile ID
representations do not improve it; two-byte C++ ID wrappers generate 684 or 690
bytes. Narrow call formals replace needed delay-slot zero extension with NOP and
are rejected. Diagnostic volatile trials are not admitted. Primary candidates
remain **512/30 and 388/8**, related reuse **448/4**, manager initialization
**280/8**, and signed remainder unresolved. The primary batch remains incomplete;
supporting matches do not replace its acceptance criteria.

All **52 trials**, with **no compiler rejection**, retain source snapshots,
hypotheses, compiler receipts and comparisons in `reconstruction-stage73`.
Final checked sources match independently twice. Identifiers, paths and intervals
are checked before admission. Two fresh exact builds, integrated-image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,131,160 retained bytes without changing
artifacts. Focused exports were regenerated on a disposable database copy after
manifest changes and validated against current inputs. The original database,
compiler, base flags and whole-range acceptance rules remain unchanged.


## Guarded update and bounded state queries, stage 74

Six complete functions add **376 bytes** in three modules: guarded update at
**0x8c02be50** (256), four adjacent bounded byte queries at **0x8c2391f4**,
**0x8c239208**, **0x8c239218**, **0x8c239228** (68 combined), and weighted
state update at **0x8c23959c** (52). Totals are **320 functions / 295 modules /
32,128 compiled full-range bytes / 4,130,784 retained reference bytes**, or
**0.7718% whole-image coverage**. All 314 previous matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 286 functions
replace 28,484 bytes. Code-only completion remains unknown; separately reconstructed
static data is zero.

The guarded update preserves the global enable test, signed byte interpretation,
repeated active-ID tests, object flag 0x10000000 and late mode/null checks. Its
notice retains default header, sentinel and zero stores before explicit values.
Capturing the source ID as unsigned short avoids a packet reload and reproduces
all 256 bytes; signed short differs in one extension byte and full-width captures
differ in 33 bytes. No guard is moved or added despite the observed late null
check. Raw callee inspection establishes that the embedded state occupies four
floats, not a scalar: checked offsets are 0, 4, 8 and 12, embedded at 0x704.

The weighted updater converts the signed amount once, adds it to the total,
selects a factor using the source flag and updates the value in observed operand
order. Capturing the converted float recovers the 52-byte size; declaring it
before the factor fixes the remaining eight register-allocation bytes. Repeated
casts generate 56 bytes. A late declaration trial is rejected by the pinned C89
compiler and retained as evidence. The bounded byte queries preserve bounds
2, 3, 4 and 2. The first query alone emits 18 bytes against its 20-byte interval;
compiling the four adjacent functions together supplies natural alignment and
matches all 68 bytes. No explicit padding or shortened range is used.

The related formatting routine at **0x8c02bd40** remains unresolved at **268
bytes versus 272 expected**, with 199 differing/missing bytes in the aligned
comparison. Its ordinary candidate uses a short conditional return where the
reference uses an inverted condition and long branch; downstream instructions
and literals consequently move. Early returns, nested guards, goto forms,
ignored return types, direct/extern calls, inline getters, result widths and
long conversion hypotheses are recorded. Narrow predicates produce 272 bytes
but incorrect instructions; size alone receives no credit. This routine is not
admitted. The primary candidates remain **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
The primary batch remains incomplete; supporting matches do not replace it.

All **71 trials**, including **one compiler rejection**, retain source snapshots,
hypotheses and comparisons in `reconstruction-stage74`; completed compilations
retain compiler receipts. Final checked sources match independently twice.
Identifiers, source paths and intervals are checked before admission. Two fresh
exact builds, integrated-image comparison, five-function proof and all **53
research tests** pass; the public suite remains **58 tests**. Source-only rejects
4,130,784 retained bytes without changing artifacts. Focused exports are regenerated
on a disposable database copy after manifest changes and validated against current
inputs. The original database, compiler, base flags, default GNU linker and
whole-range acceptance rules remain unchanged.


## Bounded fields and state-owner lifecycle, stage 75

Twenty-seven complete functions add **700 bytes** in five modules: twelve bounded
queries at **0x8c239238–0x8c2392fc** (196), seven scalar accessors at
**0x8c2392fc–0x8c239394** (152), three owner reset/destruction routines at
**0x8c2394a8–0x8c239540** (152), three timer/child routines at
**0x8c239540–0x8c23959c** (92), and list initialization plus its adjacent factory at
**0x8c2395d0–0x8c23963c** (108). Totals are **347 functions / 300 modules / 32,828
compiled full-range bytes / 4,130,084 retained reference bytes**, or **0.7886%
whole-image coverage**. All 320 previous matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 313 functions
replace 29,184 bytes. Code-only completion remains unknown; separately reconstructed
static data is zero.

The bounded-field view checks every accessed offset in its 32-byte prefix.
Unsigned byte queries keep their individual bounds. Signed short queries preserve
negative values where only an upper bound is observed. Scalar setters/getters
preserve their distinct accepted ranges, zero fallback and signed -1 sentinel;
no uniform validation rule is imposed. Names remain provisional and do not establish
gameplay semantics. Only the first seven scalar accessors are admitted: the four
following accessors and the owner constructor retain their full reference ranges.

The state-owner view checks the timer, child pointer, five four-float records and
child tag/flag prefix. Reset clears only each record's first two floats, leaving
its factors unchanged. Child validation clears a mismatched tag before returning
the pointer; flagging follows that validation. The timer decrements, reads back,
clamps negative results to zero and returns the observed status. Destruction keeps
the nullable object check and positive signed release flag. The list initializer
uses explicit shifted index addressing for four zero words and clears two trailing
words. Its standalone candidate emits 30 bytes against a 32-byte interval; the
adjacent factory supplies natural alignment and the complete 108-byte group matches.
The factory preserves its input null check, allocation pool and size, allocation
failure return and three initializer inputs. No explicit padding is inserted.

The unadmitted four trailing accessors match their instruction bytes after an
explicit trailing-base pointer helper, but the final alignment requires the next
constructor. That **168-byte constructor** remains unresolved: direct field stores
generate 188 bytes, inline/member construction generates 168/140, and ordinary
loops generate 84 or 92 bytes. Named records, chained/comma stores, inline stores,
placement construction and actual C++ constructors do not resolve it. An automatic
array-construction trial requires an unresolved runtime helper and is rejected.
No matching prefix or size-only result is admitted.

The successful float-declaration-order pattern from stage 74 was transferred to
both primary angle conversions. All twelve declaration/expression trials remain
**512/30**, with first difference **0x8c045fdd**. Inline formatting-body hypotheses
leave the neighboring formatting routine at 268 versus 272 bytes. Primary emission
remains **388/8**, related reuse **448/4**, manager initialization **280/8**, and
signed remainder unresolved. The original primary batch remains incomplete;
supporting matches do not replace its acceptance criteria.

All **56 trials**, including **one compiler/linker rejection**, retain source
snapshots, hypotheses and comparisons in `reconstruction-stage75`; completed
compilations retain compiler receipts. Final checked sources match independently
twice. Identifiers, source paths and intervals are checked before admission. Two
fresh exact builds, integrated-image comparison, five-function proof and all **53
research tests** pass; the public suite remains **58 tests**. Source-only rejects
4,130,084 retained bytes without changing artifacts. Focused exports are regenerated
on a disposable copy after manifest changes and validated against current inputs.
The original database, compiler, base flags, default GNU linker and complete-range
acceptance rules remain unchanged.


Stage 75 publication scan: the generic API-key rule flagged the generated source
SHA-256 associated with `settings_scalar_access.c`. The value was verified against
the actual public source file. A local exception permits only that exact hash,
with all default rules retained; a separate synthetic credential control is still
detected. The full redacted history scan then passes. The original finding and
verification receipts are preserved privately; no serial/access key was published.


## Specialized resource owner and angle step, stage 76

Eight complete functions add **512 bytes** in eight modules: resource-owner
construction **0x8c23963c** (156), destruction **0x8c2396d8** (68), angle dispatch
**0x8c23971c** (24), periodic scalar increase **0x8c239734** (56), scalar decrease
**0x8c23976c** (32), draw wrapper **0x8c23978c** (108), conditional rotation
**0x8c2397f8** (40), and angle step **0x8c172c14** (28). Totals are **355 functions /
308 modules / 33,340 compiled full-range bytes / 4,129,572 retained reference
bytes**, or **0.8009% whole-image coverage**. All 347 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 321 functions replace 29,696 bytes. Code-only completion remains
unknown; separately reconstructed static data is zero.

The provisional owner prefix checks every accessed offset through 0x240 and all
three intermediate link prefixes. Construction preserves the base initializer's
three inputs, observed dispatch/tag fields, allocation size, flag OR and scalar
writes. Raw base instructions establish the forwarded inputs. Destruction keeps
the nullable pointer, dispatch reset, base release argument and positive signed
release flag with its allocation pool. Static dispatch, tag and callback data
remain reference inputs.

The scalar increase retains its four-step counter test and threshold without
clamping a possible overshoot. The decrease likewise subtracts only when above
its observed threshold. Conditional rotation preserves the mode check and two
integer arguments. The draw wrapper follows the observed pointer chain, sets
bit 0x10 when state is zero, performs both calls and reads state again before
conditionally clearing that bit. It does not invent restoration of a prior bit
value. An external declaration of the first draw/update callee resolves the final
four scheduling bytes. External declaration also resolves ten bytes in the tail
angle-dispatch wrapper.

The angle-step dependency adds a signed amount and subtracts 65,536 at most once
when the result reaches that bound. Negative and large increments retain the
observed behavior; modulo reduction or additional clamps are not substituted.
A local bound reproduces the R0 accumulator/R1 constant allocation and all 28
bytes. Literal comparisons and long types leave ten bytes different, while an
explicit readback temporary generates 32 bytes and is rejected.

All **33 trials**, with **no compiler rejection**, retain source snapshots,
hypotheses, compiler receipts and comparisons in `reconstruction-stage76`. Final
checked sources match independently twice. Identifiers, source paths and intervals
are checked before admission. Two fresh exact builds, integrated-image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,129,572 retained bytes without changing
artifacts. Focused exports are regenerated on a disposable copy after manifest
changes and validated against current inputs. The original database, compiler,
base flags, default GNU linker and complete-range rules remain unchanged.

Primary candidates remain **512/30 and 388/8**, related reuse **448/4**, manager
initialization **280/8**, and signed remainder unresolved. The primary batch
remains incomplete; supporting matches do not replace its acceptance criteria.
The history scanner retains all default rules and the single exact source-hash
exception verified in stage 75, including its synthetic detection-control receipt.


## Resource-owner callbacks and child lifecycle, stage 77

Seven complete functions add **588 bytes**: owner update **0x8c239820** (220),
delayed state callback **0x8c2398fc** (20), child factory **0x8c239998** (84),
constructor **0x8c2399ec** (52), angle increment **0x8c239a20** (16), draw
**0x8c239a30** (116), and destructor **0x8c239aa4** (80). Totals are **362 functions /
315 modules / 33,928 compiled full-range bytes / 4,128,984 retained reference
bytes**, or **0.8150% whole-image coverage**. All 355 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 328 functions replace 30,284 bytes. Code-only completion remains
unknown; separately reconstructed static data is zero.

Checked provisional views describe the 100-byte child, target position/mode,
owner fields and virtual dispatch slots. Raw root initialization at 0x8c1aba3c
establishes that the two forwarded values in R6/R7 are vector pointers and FR4
is a scalar. The final factory and constructor use those corrected pointer types.
Construction retains base initialization, dispatch/tag writes, size and angle
zeroing. The angle increment adds 0xccc without introducing wrapping. Drawing
preserves both resource guards and push, matrix, translation, Y/Z rotation, mesh
and pop order. Destruction preserves both null checks, both dispatch writes,
base destruction and positive signed release through the original pool.

Owner update retains the target mode query, signed part, output position,
virtual query, scalar threshold, reset, allocation and delayed callback. Its
late redundant owner null check remains. External mode and delayed-constructor
declarations recover 10 and 8 scheduling bytes, respectively. The callback sets
state only for a nonnull owner. Static tables, base constructors and remaining
callbacks still depend on reference bytes.

The emission callback **0x8c239910** remains unadmitted: 136 expected/generated
bytes, best 16 differing from 0x8c23994e. External emission/configuration
prototypes improve 39 differences to 21; a local position pointer improves to
16 but calculates it before the stack argument. Inline getters, wrappers,
reference arguments, formal permutations, integer widths and an actual C++
member do not reproduce the reference scheduling. Snapshots prevent repeating
these hypotheses without new evidence.

All **52 trials** retain hypotheses, sources and comparisons. One driver check
rejected an undeclared relative header include before compilation; the include
was corrected to its declared project path. All successful compiler invocations
retain compiler receipts. Final checked sources match independently twice.
Two fresh exact builds, integrated-image comparison, five-function proof and
all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,128,984 retained bytes without changing artifacts. Focused
exports use a disposable copy and are checked against current inputs; the
original database, pinned compiler, base flags and complete-range rules remain
unchanged. All new units use the existing default GNU linker.

Primary candidates remain **512/30 and 388/8**, related reuse **448/4**, manager
initialization **280/8**, and signed remainder unresolved. The primary batch
remains incomplete; these supporting matches do not replace its acceptance
criteria. Publication uses the existing default secret-scanner rules and only
the exact source-hash exception verified with a detection control in stage 75.


## Base-child construction and callbacks, stage 78

Six complete functions add **656 bytes**: destruction **0x8c1abb78** (84),
update **0x8c1abbcc** (160), empty callback **0x8c1abc6c** (4), factory
**0x8c1abd98** (104), construction **0x8c1abe00** (184), and draw **0x8c1abeb8**
(120). Totals are **368 functions / 321 modules / 34,584 compiled full-range
bytes / 4,128,328 retained reference bytes**, or **0.8308% whole-image coverage**.
All 362 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 334 functions replace 30,940 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

New provisional C and C++ views check the 100-byte child, linked flags and parent
resources, plus the mode field and virtual update slot. Destruction preserves
nullable owner and linked-object checks, dispatch reset, root destruction and
positive signed release. The factory checks its floating scalar, parent and
global before allocation, forwarding both vector pointers and the scalar. NaN
passes its observed nonzero test. The empty callback includes its RTS delay slot.

The constructor installs the observed dispatch, tag and size, copies parent
mesh/matrix pointers and calculates an angle only when velocity Y differs from
zero. It retains the exact floating multiply/divide constants, negation and
zero-write order. Direct C keeps the object in a register and emits 168 rather
than 184 bytes. A scoped address-taken object parameter reproduces the observed
stack residence without volatile qualification. An external angle declaration
then fixes the remaining ten scheduling bytes. The final unused address alias
is explicitly consumed with a void cast; it preserves compiler allocation and
adds no instructions. Loaded return aliases produce an extra move; a volatile
pointer diagnostic emits 196 bytes and is rejected.

Update preserves separate missing-parent and wrong-mode paths, each with two
flag writes; clears bit 16 on the valid path; applies velocity; conditionally
updates the linked position; calls virtual slot 28; and decrements/reloads its
floating lifetime. Its final comparison retains the observed NaN termination
behavior. Drawing guards only the mesh, retaining the unchecked matrix pointer,
state calls, push/translate/three-angle rotation/draw/pop order. An external
rotation declaration fixes four scheduling bytes; captured-angle alternatives
leave eight differences or grow the function.

All **43 trials** retain hypotheses, snapshots and comparisons. One C89 compiler
rejection for a nonconstant local aggregate initializer is retained. Final checked
sources match independently twice. Two fresh exact builds, integrated-image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,128,328 retained bytes without
changing artifacts. Focused exports use a disposable database copy and are
validated against current inputs. Original data, pinned compiler, base flags,
default GNU linking and full-range rules remain unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and signed remainder unresolved.
Supporting matches do not replace those acceptance criteria. Root initialization,
remaining child callbacks and static data retain reference dependence. Publication
retains all default scanner rules and the single verified exact source-hash
exception with its stage-75 detection control.


## Two-slot derived-child lifecycle, stage 79

Four complete functions add **408 bytes**: factory **0x8c1abf30** (104),
construction **0x8c1abf98** (80), destruction **0x8c1abfe8** (132), and effect-slot
update **0x8c1ac0c4** (92). Totals are **372 functions / 325 modules / 34,992
compiled full-range bytes / 4,127,920 retained reference bytes**, or **0.8406%
whole-image coverage**. All 368 previous matches, module definitions and
source/header hashes remain unchanged. Since the initial checkpoint, 338
functions replace 31,348 bytes. Code-only completion remains unknown; separately
reconstructed static data is zero.

The provisional 104-byte child view checks all accessed offsets and its two effect
slots. Factory guards and branch-local allocation result preserve the nonzero
floating test, including NaN, parent/global checks and vector/scalar forwarding.
Construction retains dispatch/tag/size writes, zero flags, both slot clears and
the final object flag OR. Destruction calls release for both slots, retains the
inlined base null check and linked flag write, then conditionally releases the
owner for a positive signed flag. Update rereads each slot after position update,
queries activity and clears only inactive slots.

Direct array expressions generate MUL.L addressing and larger functions. Byte
addressing relative to the checked array base with explicit index shift matches
the constructor and destructor. Keeping the shifted offset live across calls
while independently recalculating each array base matches all 92 update bytes.
Hoisting the base instead emits 88 bytes and remains rejected.

Effect replacement **0x8c1ac06c** remains unadmitted: 88 bytes, four differences
from **0x8c1ac0a2** in final argument scheduling. Shifted slot addressing and a
narrow flags prototype reproduce the preceding instructions. The existing
admitted factory forwards flags to an unsigned-short initializer field; these
prototype experiments remain provisional. External declarations, captured
position/angle pointers, inline getters and a nonvirtual member-call form do
not complete the match.

The primary C++ operation was revalidated and external angle/difference callee
declarations were tested independently and together on its current source; all
remain **512/30**. Modeling the emission start call as a nonvirtual C++ member
likewise leaves **388/8** and related reuse **448/4** unchanged. These failed
hypotheses are retained with source and compiler evidence.

All **42 trials**, with no compiler rejection, retain hypotheses, snapshots,
compiler receipts and comparisons. Final checked sources match independently
twice. Two fresh exact builds, integrated-image comparison, five-function proof
and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,127,920 retained bytes without changing artifacts. Focused
exports are regenerated on a disposable copy and validated against current
inputs; the original database, pinned compiler, base flags, default GNU linker
and complete-range rules remain unchanged.

The primary batch remains incomplete. Manager initialization remains **280/8**;
signed remainder, root initialization, effect replacement and static data remain
reference-dependent. Supporting matches do not replace primary acceptance.
Publication retains the default secret-scanner rules and the single verified
exact source-hash exception with its stage-75 detection control.


## Matrix-child callbacks, stage 80

Four complete functions add **344 bytes**: factory **0x8c1ac120** (92),
destruction **0x8c1ac36c** (96), scalar step **0x8c1ac3cc** (20), and draw
**0x8c1ac3e0** (136). Totals are **376 functions / 329 modules / 35,336 compiled
full-range bytes / 4,127,576 retained reference bytes**, or **0.8488% whole-image
coverage**. All 372 previous matches, module definitions and source/header hashes
remain unchanged. Since the initial checkpoint, 342 functions replace 31,692
bytes. Code-only completion remains unknown; separately reconstructed static data
is zero.

A checked provisional 108-byte child view reuses the unchanged base prefix and
adds the observed scalar/index fields. Two mesh-chain prefixes check pointers
at offset four. Factory preserves its preparatory call, 108-byte allocation and
all forwarded vector/scalar inputs. Destruction retains both null tests,
2748b4/2748d4 dispatch writes, linked-object marking, root destruction and positive
signed pool release. The scalar step adds 0x1999 without wrapping.

Draw preserves the mesh-only guard, unchecked two-link resource lookup, index
selection, matrix pointer, state calls and push/translate/three-angle rotation/
mesh/pop order. External selection resolves the final ten scheduling bytes;
a captured intermediate link also matches, while mesh/resource captures do not.
The existing external rotation declaration preserves its complete argument order.

Root initialization **0x8c1aba3c** remains unadmitted: 316 bytes, 28 differences
from **0x8c1abaf7**. A scoped address-taken parameter improves direct C from
288 bytes to 316/49; external angle declaration resolves 21 more differences.
Remaining mismatches concern floating literal reuse, angle store and the following
callee load. Captured radians/owner/field/divisor, reused factor, converted value
and inline conversion helpers fail to complete it. Its three vector copies,
scalar division and unchecked inputs remain as observed; no speculative fixes
are introduced. The 108-byte child's constructor remains reference-dependent.

All **32 trials**, with no compiler rejection, retain hypotheses, source snapshots,
compiler receipts and comparisons. Final checked sources match independently
twice. Two fresh exact builds, integrated-image comparison, five-function proof
and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,127,576 retained bytes without changing artifacts. Focused
exports use a disposable copy and are validated against current inputs; the
original database, pinned compiler, base flags, default GNU linker and complete
range acceptance remain unchanged.

The primary batch remains incomplete at **512/30 and 388/8**, related reuse
**448/4**, manager initialization **280/8**, and unresolved signed remainder.
Supporting matches do not replace primary acceptance. Publication retains all
default scanner rules and the single exact source-hash exception verified with
its stage-75 detection control.


## Resource outputs and list query, stage 81

Five complete functions add **228 bytes**: paired outputs **0x8c193288** (60),
triple outputs **0x8c1932c4** (60), indexed output **0x8c193300** (36), adjacent
indexed output **0x8c193324** (36), and list query **0x8c193348** (36). Totals are
**381 functions / 334 modules / 35,564 compiled full-range bytes / 4,127,348
retained reference bytes**, or **0.8543% whole-image coverage**. All 376 previous
matches, module definitions and source/header hashes remain unchanged. Since the
initial checkpoint, 347 functions replace 31,920 bytes. Code-only completion
remains unknown; separately reconstructed static data is zero.

Checked provisional prefixes establish owner table/extra pointers at 1068/1072,
fixed table outputs at 40/44, extra value at four, and list head/next/ID fields
at 20/12/32. Indexed outputs retain 16-byte strides, column offsets eight/twelve,
null output guards and unchecked signed indexes. Paired outputs narrow the index
to an unsigned byte, guard both outputs and use columns 56/60. A retained table
offset variable recovers the reference register lifetime across both writes.
List lookup guards the list and follows the observed chain; reversed source
equality operands recover its final two comparison bytes.

Boundary review rejected an initial interior-body hypothesis at **0x8c1932d0**.
Reading the preceding raw instructions establishes the true entry at **0x8c1932c4**,
with three output null checks and a shared RTS/NOP. Including those guards matches
all 60 bytes. Interior-body and speculative return-value trials remain scratch
only; no prefix credit or artificial padding was admitted. Output writes retain
intervening owner/table reloads, including possible aliasing through the outputs.

The larger child constructor **0x8c1ac17c** remains unadmitted: best size-correct
candidate **496/362**, first difference **0x8c1ac189**. An explicit returned-color
copy and word-aligned 20-byte default record reproduce the 60-byte local frame
and required full size. Inline-base stack copies, resource/default copy register
selection and later call scheduling still differ. External declarations, pointer
aliases, base casts and actual C++ construction do not resolve it. Actual C++
constructor entry emits 460 bytes; placement wrapper emits 488. Its initially
abbreviated mangled symbol was corrected from object-table evidence and retested.
Taking the address of a register-qualified parameter was rejected by the compiler.

All **46 trials** retain source snapshots, hypotheses and comparisons, with one
compiler rejection; completed compilations retain receipts. Final checked sources
match independently twice. Two fresh exact builds, integrated-image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,127,348 retained bytes without changing
artifacts. Focused exports use a disposable copy and are checked against current
inputs. Original data, compiler, base flags, default GNU linking and complete-range
acceptance remain unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Root initializer
remains **316/28**. Supporting matches do not replace primary acceptance; static
resource tables/global objects remain reference inputs. Publication retains all
default scanner rules and the verified exact source-hash exception with its
stage-75 detection control.


## Resource lifecycle operations, stage 82

Five complete functions add **452 bytes**: root construction **0x8c19336c** (156),
root destruction **0x8c193408** (68), handle reset **0x8c19344c** (36), derived
construction **0x8c193470** (92), and derived destruction **0x8c1934cc** (100).
Totals are **386 functions / 339 modules / 36,016 compiled full-range bytes /
4,126,896 retained reference bytes**, or **0.8652% whole-image coverage**. All 381
previous matches, module definitions and source/header hashes remain unchanged.
Since the initial checkpoint, 352 functions replace 32,372 bytes. Code-only
completion remains unknown; separately reconstructed static data is zero.

A provisional checked view identifies the root's first 24 bytes and derived
extra-buffer/size fields at 24/28. Root construction preserves unsigned count
rounding, buffer allocation, zero fields and the start/status loop. Status two
waits and continues without incrementing the retry counter; status three sets
ready. Other statuses retry at most three times, retaining the redundant bound
check. No timeout, allocation guard or error recovery is invented. Explicit
left shift recovers the observed allocation arithmetic; multiplication emits
four extra bytes. Writing the retry guard as negated less-than reproduces the
reference comparison polarity, whereas reversed relational operands leave three
differences.

Handle reset closes and clears only an existing handle. Root destruction retains
nullable owner, dispatch reset, handle cleanup, buffer release and positive signed
owner-release flag. Derived construction preserves all root inputs and the fifth
stack parameter, uses signed division for its 2048-byte rounding, stores the
allocation and original size, and retains its address-taken object parameter.
A register-qualified size parameter reproduces the saved R14 lifetime; a local
copy leaves six differing bytes. Derived destruction frees the extra buffer,
then preserves the inlined base null guard, handle close/clear, root buffer free
and conditional owner free. Repeated guards and dispatch writes remain intact.

All **19 trials**, with no compiler rejection, retain source snapshots,
hypotheses, compiler receipts and comparisons. Final checked sources match
independently twice. Two fresh exact builds, integrated-image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,126,896 retained bytes without changing
artifacts. Focused exports are regenerated on a disposable copy and checked
against current inputs. Original data, pinned compiler, base flags, default GNU
linking and complete-range acceptance remain unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Larger child
construction remains **496/362**, root child initialization **316/28**. Supporting
matches do not replace primary acceptance. Division/runtime helpers, allocation
and status callees, dispatch data and resource contents remain reference inputs.
Publication retains all default scanner rules and the exact source-hash exception
verified with its stage-75 detection control.


## Resource state loop and cleanup, stage 83

Four complete functions add **496 bytes**: state loop **0x8c193530** (296), buffer
owner destruction **0x8c193704** (52), global buffer release **0x8c193764** (32),
and flag-owner destruction **0x8c193784** (116). Totals are **390 functions /
343 modules / 36,512 compiled full-range bytes / 4,126,400 retained reference
bytes**, or **0.8771% whole-image coverage**. All 386 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 356 functions replace 32,868 bytes. Code-only completion remains
unknown; separately reconstructed static data is zero.

The state routine preserves its ready gate, three attempts, repeated ready check,
conditional handle cleanup, open/length operations and immediate failure for a
missing handle. Its inner status loop retains states one/three/four completion,
state-three success, state-two wait and continued polling for other values.
There is no added timeout. After closing the handle, success builds the observed
64-byte stack context, writes dispatch/buffer/size fields, queries a result,
resets dispatch and destroys the context before returning. Checked prefixes cover
that context, the eight-byte buffer owner and the flag-based resource view.

Buffer destruction retains nullable owner and positive signed release. Global
release unconditionally frees its buffer and clears only that pointer. Flag-owner
destruction preserves bit-four boolean materialization, conditional shared-state
clear and inlined base cleanup. An explicit nonzero comparison of the inline
predicate recovers all 116 bytes; a direct condition collapses the boolean
sequence and emits 112, while comparison with one emits 120.

Buffer initialization **0x8c193658** remains unadmitted at **172/4**, first difference
**0x8c1936c0**, around context destruction. External declaration, release local,
inline helper and C++ member cleanup do not resolve it. Automatic C++ destruction
requires an unresolved delete symbol and is rejected. Global allocation
**0x8c193738** remains unadmitted: ordinary void source 44/8 after an external
allocator declaration; a provisional pointer-return experiment reaches 44/5 but
does not establish the original return type. Captured outputs, result and zero
lifetimes do not finish it. No size-only candidate is admitted.

All **30 trials** retain hypotheses, source snapshots and comparisons, including
one linker rejection; completed compilations retain compiler receipts. Final
checked sources match independently twice. Two fresh exact builds, integrated
image comparison, five-function proof and all **53 research tests** pass; the
public suite remains **58 tests**. Source-only rejects 4,126,400 retained bytes
without changing artifacts. Focused exports use a disposable copy and are checked
against current inputs. Original data, compiler, base flags, default GNU linker
and complete-range acceptance remain unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Root child
initialization remains **316/28**, larger child construction **496/362**. Supporting
matches do not replace primary acceptance. Runtime callees, static dispatch,
resource tables and global contents retain reference dependence. Publication
retains all default scanner rules and the exact source-hash exception verified
with its stage-75 detection control.


## Resource flag-state callbacks, stage 84

Six complete functions add **676 bytes**: start **0x8c1937f8** (144), poll
**0x8c193888** (96), empty callback **0x8c1938e8** (4), derived destruction
**0x8c1938ec** (128), completion **0x8c19396c** (176), and adjacent derived
destruction **0x8c193a1c** (128). Totals are **396 functions / 349 modules /
37,188 compiled full-range bytes / 4,125,724 retained reference bytes**, or
**0.8933% whole-image coverage**. All 390 previous matches, module definitions
and source/header hashes are preserved. Since the initial checkpoint,
362 functions replace 33,544 bytes. Code-only completion remains unknown;
separately reconstructed static data is zero.

The start routine retains the materialized bit-four predicate, shared busy gate,
argument capture before opening, repeated ready check and conditional cleanup.
Capturing both the global buffer address and length recovers the final five
bytes of call scheduling; capturing either alone, external declarations and
capturing the buffer value do not. The complete range now matches, including
its literals and alignment. The new 40-byte provisional prefix checks every
observed field offset and does not change the earlier resource headers.

Poll preserves status-two early return, status-three success, error bit updates,
conditional reset and materialized error predicate selecting states one/four.
Both derived destructors retain three null checks, three dispatch assignments,
shared-state cleanup and positive signed release. Flattening the intermediate
inline destructor recovers the compiler's inline depth; flattening only reset
still emits out-of-line helpers and fails the complete-range comparison.
Completion preserves the readiness gate, nullable copy, unconditional conversion,
finish call, output clear, conditional handle cleanup, done bit, ownership release
and final idle state. No extra guards, timeout or speculative behavior fixes.

All **27 trials** retain source snapshots, hypotheses, comparisons and compiler
receipts; none were rejected by the compiler. Each final checked source matches
twice independently. Two fresh exact project builds, integrated image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,125,724 retained bytes without changing
artifacts. Focused exports are regenerated on a disposable copy and validated
against changed manifest inputs; the original database is unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace those acceptance criteria. Earlier buffer initialization
remains **172/4**, root child construction **316/28**, larger child construction
**496/362**. Static dispatch, globals and remaining callees retain reference
dependence. Compiler, base flags, default GNU linking and full-range acceptance
are unchanged. Publication retains all default scanner rules and the narrowly
verified source-hash exception with its stage-75 detection control.


## Resource chunk and paired-owner operations, stage 85

Four complete functions add **768 bytes**: chunk completion **0x8c193a9c** (348),
paired allocation **0x8c193bf8** (208), paired cleanup **0x8c193cc8** (80), and
state dispatch **0x8c193d18** (132). Totals are **400 functions / 353 modules /
37,956 compiled full-range bytes / 4,124,956 retained reference bytes**, or
**0.9118% whole-image coverage**. All 396 previous matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint,
366 functions replace 34,312 bytes. Code-only completion remains unknown;
separately reconstructed static data is zero.

Chunk completion preserves the unsigned offset/length loop, three stack outputs,
32-byte cursor rounding, four model slots, first texture-list assignment and
motion pointer. Explicit shift addressing, stack declaration order, late counter
and mask initialization recover saved registers and setup. An external chunk
callee and texture-list local reloaded in each loop condition finish the match;
the latter removes a redundant generated reload while preserving observed reads.
Entry type substitutions alone do not. The checked texture entries are 12 bytes,
texture-list prefix eight bytes, and full resource view 64 bytes. The first
paired allocation uses only its observed 40-byte prefix.

Allocation preserves separately nullable 40/64-byte owners, root calls, duplicate
flag/state/dispatch assignments, four-slot clearing and final shared allocation.
Typed external globals and buffer allocator reduce the mismatch to five bytes;
separate source lifetimes for the two owners recover the final call delay slot.
Reusing the owner, merely capturing size/callee or adding a second declaration
does not. Cleanup releases the buffer, invokes two nullable dispatch slot-eight
calls, then clears three globals. External globals recover all address loads;
chained assignments and captured addresses alone fail. Dispatch preserves both
nullable owners, fixed start/poll calls for states one/two and slot-twelve calls
for state four, skipping other states.

All **46 trials** retain source snapshots, hypotheses and comparisons. One
scratch substitution accidentally changed a structure declaration and was
compiler-rejected; its companion altered the scratch layout and was excluded.
Corrected local-only experiments are separately retained. Final checked sources
match twice independently. Two fresh exact project builds, integrated image
comparison, five-function proof and all **53 research tests** pass; the public
suite remains **58 tests**. Source-only rejects 4,124,956 retained bytes without
changing artifacts. Focused exports use a disposable copy, are validated against
current inputs, and leave the original database unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace primary acceptance. Earlier buffer initialization remains
**172/4**, root child construction **316/28**, larger child construction **496/362**.
Static dispatch, globals and remaining callees retain reference dependence.
Compiler, base flags, default GNU linker and full-range acceptance are unchanged.
Publication retains all default scanner rules and the narrowly verified
source-hash exception with its stage-75 detection control.


## Resource task owner operations, stage 86

Four complete functions add **656 bytes**: owner construction **0x8c193d9c** (92),
destruction **0x8c193df8** (200), state update **0x8c193ec0** (296), and adjacent
base destruction **0x8c193fe8** (68). Totals are **404 functions / 357 modules /
38,612 compiled full-range bytes / 4,124,300 retained reference bytes**, or
**0.9275% whole-image coverage**. All 400 previous matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint,
370 functions replace 34,968 bytes. Code-only completion remains unknown;
separately reconstructed static data is zero.

Construction preserves the fifth stack argument, repeated state writes, root
call, dispatch assignment and four-slot shift loop. Destruction retains distinct
state-two/state-three ownership resets, materialized bit-four predicates, shared
busy clear, conditional residency cleanup, root teardown and positive signed
release. The resident entry dereference retains the observed missing intermediate
null guard. Checked provisional views cover the 72-byte owner, resource fields
and resident-entry prefixes; no earlier headers are changed.

Update preserves all three states, sequential model/texture requests, explicit
start and done predicates, nullable destination guards and repeated global loads.
Two nested inline wrappers initially emit an out-of-line start helper and fail
full-range comparison. Flattening the intermediate wrappers reaches 296/68;
keeping an independent resource alias before the first request and capturing the
second request's output first reaches 296/8. A local value for each copied model
pointer resolves the final destination/source register difference. Capturing the
array base or loop offset instead does not. No guard or state transition is added.

All **25 trials** retain source snapshots, hypotheses and comparisons, including
one compiler rejection caused by an incorrectly ordered scratch helper
declaration. The corrected helper experiment is retained separately. Final
checked sources match twice independently. Two fresh exact project builds,
integrated image comparison, five-function proof and all **53 research tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,124,300 retained
bytes without changing artifacts. Focused exports use a disposable copy and are
checked against current inputs; the original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace primary acceptance. Earlier buffer initialization remains
**172/4**, root child construction **316/28**, larger child construction **496/362**.
Static dispatch, globals and remaining callees retain reference dependence.
Compiler, base flags, default GNU linker and full-range acceptance are unchanged.
Publication retains all default scanner rules and the narrowly verified
source-hash exception with its stage-75 detection control.


## Shared buffer and resource widget callbacks, stage 87

Four complete functions add **380 bytes**: shared allocation **0x8c193738** (44),
widget destruction **0x8c194098** (84), update **0x8c1940ec** (108), and six-case
dispatch **0x8c1941c0** (144). Totals are **408 functions / 361 modules /
38,992 compiled full-range bytes / 4,123,920 retained reference bytes**, or
**0.9367% whole-image coverage**. All 404 previous matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint,
374 functions replace 35,348 bytes. Code-only completion remains unknown;
separately reconstructed static data is zero.

Typed external shared globals together with the allocator declaration resolve
all 44 bytes of the earlier shared-buffer initializer. Its observed void return
is preserved. Destruction retains the nullable owner, unconditional child
release-one call, base release-zero call and positive signed pool release.
Update preserves the flag-dependent field100 assignment, child-triggered panel
clear/configuration and subsequent unconditional calls. A new checked 112-byte
provisional view declares the observed tag, dispatch, size, panel, flags and
child offsets without changing any earlier header.

Dispatch uses the signed child byte, six cases and default skip. The complete
144-byte comparison includes its compiler-generated six-entry jump table,
literals and alignment. GNU linking leaves eleven differing table bytes; the
already pinned native linker resolves the compiler's relocation encoding exactly,
as in the earlier keyboard/notice switches. This module explicitly declares
that linker; compiler binary, base flags and complete-range rules are unchanged.
No table bytes are copied or patched.

The two primary candidates are freshly reproduced at **512/30 and 388/8**.
Independent pointer/constant aliases do not resolve them: angle variants emit
536 or 548 bytes or retain 512/30; the scan-owner alias emits 384 bytes. Earlier
buffer initialization remains **172/4**, first difference **0x8c1936c0**. A raw
object-symbol audit establishes the triple-underscore delete symbol hidden by
the linker diagnostic. Resolving it allows the C++ automatic-destructor trial
to link, but it emits 232 bytes with an extra standalone destructor and still
fails. Signed-short/owner-return declarations and cleanup scopes also fail.

Widget construction **0x8c19402c** remains **108/4**, first difference
**0x8c194047**, after external base and captured tag value. Notification
**0x8c194158** remains **104/4**, first difference **0x8c19418e**, after actual
C++ virtual dispatch. External/nonvirtual member panel calls and pointer/address
variants do not resolve its delay-slot swap. Neither function is admitted.

All **52 trials** retain source snapshots, hypotheses and comparisons, including
one linker rejection; completed compilations retain receipts. The additional
object-symbol audit records its compiler command and object/source hashes.
Final checked sources match twice independently. Two fresh exact project builds,
integrated image comparison, five-function proof and all **53 research tests**
pass; the public suite remains **58 tests**. Source-only rejects 4,123,920 retained
bytes without changing artifacts. Focused exports use a disposable copy and are
checked against current inputs; the original database remains unchanged.

The primary batch is incomplete. Related reuse remains **448/4**, manager
initialization **280/8**, and signed remainder unresolved. Supporting matches do
not replace primary acceptance. Static dispatch, globals and remaining callees
retain reference dependence. Publication retains all default scanner rules and
the narrowly verified source-hash exception with its stage-75 detection control.


## Widget value and child-state callbacks, stage 88

Six complete functions in five modules add **532 bytes**: second dispatch
**0x8c194250** (144), value update **0x8c1943f0** (120), child construction and
destruction **0x8c192b14/0x8c192b28** (20/36), input **0x8c192b4c** (188), and
decay **0x8c192c08** (24). Totals are **414 functions / 366 modules /
39,524 compiled full-range bytes / 4,123,388 retained reference bytes**, or
**0.9494% whole-image coverage**. All 408 previous matches, module definitions
and source/header hashes remain unchanged. Since the initial checkpoint,
380 functions replace 35,880 bytes. Code-only completion remains unknown;
separately reconstructed static data is zero.

The second dispatch retains six signed-byte cases and default skip. Its complete
compiler-generated table/literals use the already pinned native linker. Value
update uses the authorized C++ virtual query at slot76, nullable actor/stats,
query-plus-one, repeated row-table loads and final helper-minus-current value.
Checked views cover stats at actor388, row value32 and owner table48.

The child's signed selection/count bytes and float displacement are checked.
Its standalone constructor emits 18 bytes against a 20-byte reference range;
compiling it together with the adjacent destructor supplies the observed
alignment naturally. The whole 56-byte bundle matches; no partial range or
manual padding is admitted. Destruction preserves positive signed release and
nullable child. Decay retains subtraction of the original value times0.1,
including the exact float literal, rather than changing the expression to0.9.

Input preserves decay before input checks, sound emission, both direction-bit
updates, signed-byte wrap conditions, unchanged-selection return and direction-
dependent displacement. Typed external input storage recovers the base-plus-40
access. One captured flags value after emission recovers both direction checks;
an external emitter declaration recovers the last literal/call scheduling bytes.
The final flag read after storing selection remains independent.

First-case setup **0x8c1942e0** remains unadmitted at **272/25**, first difference
**0x8c194320**. Explicit signed class-index shift fixes size; external calls and
row captures improve scheduling. Alternative pointer qualifiers, getter helpers
and table/global temporaries do not complete the static-row loads. Its float
comparison against7.5 and derived-profile null check remain as observed.

All **45 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact project builds, integrated image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,123,388 retained bytes without changing
artifacts. Focused exports use a disposable copy and are checked against current
inputs; the original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Widget
constructor/notification remain **108/4 and 104/4**; earlier buffer initialization
remains **172/4**. Supporting matches do not replace primary acceptance. Static
dispatch, globals and remaining callees retain reference dependence. Compiler,
base flags and full-range rules remain unchanged. Publication retains all default
scanner rules and the narrowly verified source-hash exception with its stage-75
detection control.


## Signed widget values and empty callbacks, stage 89

Five complete functions add **608 bytes**: stats update **0x8c194570** (476),
five signed values **0x8c194838** (120), and empty dispatch callbacks
**0x8c194988**, **0x8c194b44**, **0x8c194c70** (4 each). Totals are
**419 functions / 371 modules / 40,132 compiled full-range bytes /
4,122,780 retained reference bytes**, or **0.9640% whole-image coverage**.
All 414 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 385 functions replace 36,488 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The stats handler uses two 22-byte signed-value records on a 44-byte stack.
Aggregate zero initialization emitted an allocated data section and was rejected.
Explicit initialization follows the observed descending first-six and last-five
fields; a captured stats pointer recovers the 476-byte length. Maximum-first
comparisons recover signed halfword load ordering, and a declared selected-actor
global recovers the final 14 scheduling bytes. Both current-value and maximum-value
helper calls retain their original order. The current-value call remains outside
the actor-null guard, as observed; no speculative guard is added.

Checked provisional views cover all accessed actor halfwords, the stats pointer
at388, row color28/value32, owner table48, and both stack records. Current values
update six rows with the exact yellow/white comparison branches. The adjacent
handler preserves its nullable actor lookup and all five signed halfword accesses.
The three empty dispatch entries are complete RTS/NOP ranges; they are not gaps
or manually inserted padding.

Text setup **0x8c194468** remains unadmitted at **264/54**, first difference
**0x8c1944a4**. External string-table storage, shared row variables, table captures,
and direct calls do not recover the remaining per-call register scheduling.
Earlier setup **0x8c1942e0** remains **272/25**; pointer-table and C++ frontend
experiments make no improvement. These failed hypotheses remain in scratch.

All **35 trials** retain sources, hypotheses and comparisons; the aggregate
initializer trial was rejected before a complete compiler receipt could be made.
The other trials retain compiler receipts. Final checked sources match twice
independently. Two fresh exact project builds, integrated image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,122,780 retained bytes without changing
artifacts. Focused exports are regenerated on a disposable copy after manifest
changes and checked against current inputs; the original database is unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace those acceptance criteria. Static data and unmatched
callees retain reference dependence. Compiler, base flags and complete-range
comparison rules are unchanged. Publication uses the default secret-scanner rules
with the single verified source-hash exception and stage-75 detection control.


## Paired counter-buffer callbacks, stage 90

Five complete functions add **316 bytes**: allocation **0x8c194c74** (76),
release **0x8c194cc0** (84), initialization **0x8c194d14** (76), next value
**0x8c194d60** (76), and empty callback **0x8c194dac** (4). Totals are
**424 functions / 376 modules / 40,448 compiled full-range bytes /
4,122,464 retained reference bytes**, or **0.9716% whole-image coverage**.
All 419 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 390 functions replace 36,804 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The paired buffers each contain twelve 32-bit counters and receive separate
48-byte allocations. Allocation preserves the initialization call, both state
resets and owner return. External state declarations and independent zero stores
recover literal scheduling; a chained assignment does not match. Cleanup retains
nullable owner, both buffer frees and pointer clears, positive signed release,
and owner return. External buffer declarations recover the complete cleanup.

Initialization reloads each buffer pointer for every iteration. It stores
(index shifted left21)+0x10000 and the corresponding +0x10010000 value in the
other buffer. Explicit byte offsets shifted left2 recover the reference's SHLL2
addressing; ordinary array indexing emits a general multiply and extra saved
registers. Next-value selection retains the mode-equals15 branch, unsigned-short
index, separate value read and increment, and old-value return. It also requires
explicit shifted byte offsets. No bounds check or allocation-failure handling is
added beyond the reference. The empty callback is a complete RTS/NOP entry.

The original emission target was revisited with explicit packed-kind views.
Union-local and union-helper forms emit396 bytes; C++ accessors emit396 and
nested start methods432. A const-reference helper retains388/8. None match the
complete range, and none enter the manifest. Earlier register/type, halfword,
inline-forwarding and table-address hypotheses were reviewed before these trials.

All **37 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact project builds, integrated image comparison,
five-function proof and all **53 research tests** pass; the public suite remains
**58 tests**. Source-only rejects 4,122,464 retained bytes without changing
artifacts. Focused exports use a disposable copy and are validated against current
inputs; the original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace those acceptance criteria. Static data and unmatched
callees retain reference dependence. Compiler, base flags and complete-range
comparison rules are unchanged. Publication retains default scanner rules and
the single verified source-hash exception with its stage-75 detection control.


## Notice record construction and dependencies, stage 91

Three complete functions add **280 bytes**: record builder **0x8c194db0** (152),
counter selection **0x8c1954bc** (76), and payload initializer **0x8c1c7dd4** (52).
Totals are **427 functions / 379 modules / 40,728 compiled full-range bytes /
4,122,184 retained reference bytes**, or **0.9784% whole-image coverage**.
All 424 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 393 functions replace 37,084 bytes.
Code-only completion remains unknown; separately reconstructed static data is zero.

The record builder initializes a 36-byte stack record with byte/halfword sentinels,
zero floats and a 20-byte payload. It then assigns the supplied fields, copies
the complete payload, selects its counter and submits the record. Writing the
zero flag byte before the negative kind sentinel recovers the exact 152-byte
range; the opposite order emits156. Checked views cover every field and both
record sizes. The payload index passed to selection is signed, as the callee's
raw comparisons establish.

Counter selection keeps the mode check, strict signed lower/upper limits,
unsigned-short narrowing of the shifted index, indexed comparison and conditional
increment. Capturing the counter base before the index recovers the final five
register-allocation bytes. External storage alone does not. The observed index
access remains unchecked; no speculative bounds restriction is introduced.

Payload initialization clears six individual bytes, three two-byte pairs and
the final word, then stores the negative index sentinel. Ordinary pair indexing
emits a multiply and54 bytes. Shifted addressing alone emits50. Independent byte
column pointers produce52, and separate pointer lifetimes around each store
recover the remaining six bytes. Register hints and reversed pointer declarations
do not match. The original store order and loop condition are preserved.

Actual nonvirtual C++ text methods, const methods and unused row-pointer return
variants do not improve earlier text setup: **264/54** and **272/25** remain
unadmitted. Three trials failed to link because the scratch declaration rewrite
missed the race helper's C linkage. Corrected trials preserve the original free
helper ABI and still do not improve matching; both failed and corrected snapshots
remain available.

All **38 trials** retain source snapshots, hypotheses and comparisons; three
linker rejections retain their diagnostics. Successful compilations retain
compiler receipts. Final checked sources match twice independently. Two fresh
exact builds, integrated image comparison, five-function proof and all
**53 research tests** pass; the public suite remains **58 tests**. Source-only
rejects 4,122,184 retained bytes without changing artifacts. Focused exports are
regenerated on a disposable copy and validated against current inputs; the
original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace those acceptance criteria. Static data and unmatched
callees retain reference dependence. Compiler, base flags and complete-range
comparison rules are unchanged. Publication retains default scanner rules and
the single verified source-hash exception with its stage-75 detection control.


## Record cleanup and packet construction, stage 92

Four complete functions add **936 bytes**: cleanup **0x8c194e48** (204), general
packet builder **0x8c194fa4** (356), notice initializer **0x8c195108** (44), and
small-record packet builder **0x8c195134** (332). Totals are **431 functions /
383 modules / 41,664 compiled full-range bytes / 4,121,248 retained reference
bytes**, or **1.0008% whole-image coverage**. All 427 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 397 functions replace 38,020 bytes. This passes one percent of the
whole image; code-only completion remains unknown. Separately reconstructed
static data remains zero, and the executable still depends on reference gaps.

Cleanup preserves payload calls, signed tag interpretation, both record widths,
copy-before-bound behavior, sentinel writes and final clear. Independent base,
copy-pointer and index captures recover register allocation; direct named-stack
sentinel writes recover the last two bytes. Pointer-only sentinel stores differ.
When sharing the checked packet layout, explicit signed interpretation of its
flag byte is necessary: the initial unsigned view differed by one instruction
byte and was rejected. The corrected checked source matches twice. Existing
notice headers and their hashes remain unchanged.

The general builder retains a 76-byte stack containing a 12-byte row, 20-byte
payload and 44-byte packet. Capturing the row offset across lookup recovers its
saved register. Unsigned-short value and sentinel temporaries recover the exact
extension sequence and reduce the full range to356 bytes. The small-record path
uses the corresponding four-byte row, a68-byte stack and shifted offset; the
same source-level findings recover its entire332-byte range. Both preserve
validation, payload finalization, conditional row writeback, duplicate packet
header writes, distinct notice tags and original submission order. No game or
network execution is part of this verification.

The standalone notice initializer matches44 bytes with the previously established
zero-first field order and a tail call to payload initialization. New checked
views cover both record sizes, the packet's nested notice, and its four trailing
bytes. Transitive header dependencies are declared for every affected module.

The adjacent dispatcher **0x8c194f14** remains unadmitted at **144/3**, first
difference **0x8c194f2d**. Promoted byte-derived arguments and external callee
declarations recover the length and most scheduling; owner aliases, byte cursors
and payload pointers do not recover the remaining shared-address instruction
order. Separate record getter/setter helpers and index reloads were also tested
for cleanup; those failed forms remain in scratch.

All **54 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact builds, integrated image comparison, five-function
proof and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,121,248 retained bytes without changing artifacts. Focused
exports are regenerated on a disposable copy and validated against current
inputs; the original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace those acceptance criteria. Compiler, base flags and
complete-range rules are unchanged. Publication retains default scanner rules
and the single verified source-hash exception with its stage-75 detection control.


## Compact packets and counter helpers, stage 93

Seven complete functions add **676 bytes**: compact packet builder **0x8c19531c**
(416), counter helper **0x8c19528c** (48), forwarding **0x8c195280/0x8c195310**
(12 each), state setter **0x8c195508** (12), mode-dependent identifier
**0x8c195514** (92), and confirmation packet **0x8c1952bc** (84). Totals are
**438 functions / 390 modules / 42,340 compiled full-range bytes /
4,120,572 retained reference bytes**, or **1.0171% whole-image coverage**.
All 431 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 404 functions replace 38,696 bytes.
Code-only completion remains unknown; standalone reconstructed static data is zero.

The compact builder follows the proven four-byte record and 68-byte stack layout.
It preserves signed index checks, unsigned-short sentinels, captured row offset,
and unconditional payload loading before the actor-null check. When the actor's
float field is zero, it saves two unsigned bytes, reinitializes the payload,
restores those bytes and runs the alternate configuration call. Validation,
finalization and packet construction retain their order. The checked actor view
covers its halfword at8 and float fields at12,20,44; the packet retains actor
coordinates and argument fields without speculative behavior changes.

The counter helper retains its unsigned-short sentinel branch and old-counter
result. Postincrement, signedness changes, separate old/new variables and external
storage all leave three bytes different. Computing the return value before
storing the increment recovers the complete48-byte range. Forwarding preserves
both input registers; the callee's raw instructions confirm use of both arguments
and integer status returns. Mode-dependent identifier construction retains all
three bit patterns and its two independent global flag checks.

Confirmation preserves its initial check, 12-byte local packet, default sentinels,
repeated input halfword load and final send call. Checked views cover every used
field and complete prefix size. No runtime, gameplay or network execution is
claimed by source comparison.

All **31 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact builds, integrated image comparison, five-function
proof and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,120,572 retained bytes without changing artifacts. Focused
exports use a disposable copy and are validated against current inputs; the
original database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. The nearby
dispatcher remains **144/3** and earlier text setup remains **264/54** and
**272/25**. Supporting matches do not replace primary acceptance. Compiler,
base flags and complete-range rules are unchanged. Publication retains default
scanner rules and the single verified source-hash exception with its stage-75
detection control.


## Panel updates and selection, stage 94

Six complete functions add **492 bytes**: panel update **0x8c1955b4** (284),
root destructor **0x8c195570** (68), index remapping **0x8c1957c0** (32), selection
**0x8c1957e0** (60), mark **0x8c19581c** (20), and reset **0x8c195830** (28).
Totals are **444 functions / 396 modules / 42,832 compiled full-range bytes /
4,120,080 retained reference bytes**, or **1.0289% whole-image coverage**.
All 438 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 410 functions replace 39,188 bytes.
Code-only completion remains unknown; standalone reconstructed static data is zero.

The update preserves both nine-entry traversals, distinct mode-zero/mode-one
conditions, repeated float stores and exact negative-addition constants. Capturing
the computed opacity/position before storing and clamping removes redundant loads;
separate first-pass scope, captured code-column base, and declaration lifetimes
recover the saved-register order. Declaring the second group pointer, both loop
indices, then the state pointer completes the 284-byte match. Accumulation uses
the signed metric halfword plus one and includes each four-unit group gap before
the final smoothing operation. No inferred bounds or floating-point fixes are added.

The checked header covers 12-byte states, 20-byte groups, 20-byte metric stride
and the destructor's dispatch field at24. Remapping preserves the mode-one and
inclusive122..124 checks. Selection resets all states before indexed marking;
marking retains its unchecked multiply-by12 address. Destruction preserves the
nullable owner, root callback and positive signed-short pool-release condition.

The nearby drawing candidate remains **244 generated / 240 expected, 119 differing
bytes**, first difference **0x8c1956e8**, mostly following the size shift. External
call declarations, array views, C++ references, float/integer parameter ordering
and explicit local loads do not resolve it. A pointer-based coordinate update
shrinks it to236 bytes but still differs101; copying the position grows it to268.
The remaining raw differences include call argument scheduling and stack-indexed
float reload/store. These trials remain scratch-only.

All **46 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact builds, integrated image comparison, five-function
proof and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,120,080 retained bytes without changing artifacts. Focused
exports use a disposable copy and are checked against current inputs; the original
database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace primary acceptance. Compiler, base flags and complete-range
rules are unchanged. Publication retains default scanner rules and the single
verified source-hash exception with its stage-75 detection control.


## Panel initialization and render wrappers, stage 95

Five complete functions add **356 bytes**: initialization **0x8c19584c** (268),
release **0x8c195958** (32), default-alpha wrappers **0x8c195978/0x8c195984**
(12 each), and default-scale wrapper **0x8c195990** (32). Totals are **449 functions /
401 modules / 43,188 compiled full-range bytes / 4,119,724 retained reference
bytes**, or **1.0374% whole-image coverage**. All 444 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 415 functions replace 39,544 bytes. Code-only completion remains
unknown; standalone reconstructed static data is zero.

Initialization preserves both 4,096-word memory sweeps and their infinite-loop
failure paths, nine copies of the default state, global mode and scale setup,
nullable 32-byte allocation, root construction, dispatch assignment and resource
load. The signed-short counter is extended for the unsigned bound comparison.
An external resource-name array recovers base-plus185 address construction;
external globals and independent store ordering recover call/branch scheduling.
The final 20 differing bytes were loop-register choices: explicitly naming the
bound after the pointer and counter declarations recovers the complete range.
No checks, failure paths or allocation behavior are removed.

The checked instance view covers word0, flags4, dispatch24 and halfwords28/30.
Release sets flag1, clears the global owner and tail-calls resource release; an
external call declaration recovers its literal scheduling. The render wrappers
preserve depth, position and optional scale arguments, supply alpha1, or construct
the two-float unit scale in the original stack order. Both transitive headers
are declared as compiler inputs and all prior header hashes remain unchanged.

Drawing **0x8c1956d0** remains unmatched: by-value position grows to256 bytes;
union views and a function-scope coordinate remain244; an explicit group bound
produces248. The callee confirms two float coordinates accessed through the
position argument. The renderer **0x8c1959b0** reaches **212 bytes / 26 differing
bytes**, first **0x8c1959bc**, by capturing coordinates and the global vertical
scale. It preserves opacity branches, color save/restore and the observed record
fields. Captured scale alone, flat fields and alternate assignment scopes fail;
float operand order and input lifetimes explain the remaining early scheduling.
Neither drawing function is admitted. Previously tried primary loop-bound
hypotheses were reviewed rather than silently repeated.

All **56 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact builds, integrated image comparison, five-function
proof and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects 4,119,724 retained bytes without changing artifacts. Focused
exports use a disposable copy and are checked against current inputs; the original
database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. Supporting
matches do not replace primary acceptance. Compiler, base flags and complete-range
rules are unchanged. Publication retains default scanner rules and the single
verified source-hash exception with its stage-75 detection control.


## Panel renderer, background and bit grid, stage 96

Three complete functions add **724 bytes**: renderer **0x8c1959b0** (212),
background **0x8c195a84** (192), and bit-grid drawing **0x8c195b44** (320).
Totals are **452 functions / 404 modules / 43,912 compiled full-range bytes /
4,119,000 retained reference bytes**, or **1.0548% whole-image coverage**.
All 449 previous matches, module definitions and source/header hashes remain
unchanged. Since the initial checkpoint, 418 functions replace 40,268 bytes.
Code-only completion remains unknown; standalone reconstructed static data is zero.

The renderer preserves all used fields in its 32-byte draw record, leaving the
observed gaps untouched. Its external vertical-scale declaration resolves the
remaining float aliasing/scheduling differences. The opacity branches preserve
mode32 versus mode34 drawing and the color save, override and restore sequence.
The checked header covers the position pair, 16-byte color, draw record and
16-byte list descriptor. No hardware rendering execution is claimed.

The background retains 24 local packed colors, both unsigned float-to-integer
conversions and the two descending global color stores. External color storage
and the final draw declaration resolve the address/call scheduling. The final
one-byte mismatch exposed an incorrect provisional constant: raw decoding proves
the second multiplier is64.0, distinct from the final integer draw flags96.
The corrected source matches the whole192-byte range, including conversion
constants and padding; the failed96.0 hypothesis remains in scratch.

The bit grid preserves signed halfword inputs, initialization guard, frame
counter and three rows of eight bits. Every eighth frame changes only the first
mismatching bit, scanning the signed mask from128 downward. The draw loop uses
an increasing mask and preserves both negative coordinate adjustments and exact
float literals. Separate scaled opacity, external guard/counter, mask-first
expressions and local declaration order recover the remaining register choices.
One experiment failed C89 parsing because declarations followed assignments;
its corrected successor and all other evidence are retained.

All **34 trials** retain source snapshots, hypotheses and comparisons, with
compiler receipts for successful compilations; **one compiler rejection** is
recorded. Final checked sources match twice independently. Two fresh exact
builds, integrated image comparison, five-function proof and all **53 research
tests** pass; the public suite remains **58 tests**. Source-only rejects
4,119,000 retained bytes without changing artifacts. Focused exports use a
disposable copy and are checked against current inputs; the original database
remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. The earlier
panel draw remains244 bytes versus240 expected: separate external global/table
declarations, their combination and reversed addition operands did not help.
Supporting matches do not replace primary acceptance. Compiler, base flags and
complete-range rules are unchanged. Publication retains default scanner rules
and the single verified source-hash exception with its stage-75 detection control.


## Weighted grid and panel owner lifecycle, stage 97

Five complete functions add **1,144 bytes**: weighted grid **0x8c195c84** (416),
factory **0x8c195e68** (172), destructor **0x8c195e24** (68), draw coordinator
**0x8c1960a0** (92), and owner update **0x8c195f14** (396). Totals are **457 functions /
409 modules / 45,056 compiled full-range bytes / 4,117,856 retained reference
bytes**, or **1.0823% whole-image coverage**. All 452 previous matches, module
definitions and source/header hashes remain unchanged. Since the initial
checkpoint, 423 functions replace 41,412 bytes. Code-only completion remains
unknown; standalone reconstructed static data is zero.

The weighted grid retains three queried indices, three local weights and seven
rows of eight drawn bits. It preserves first-match lookup, unsigned-byte truncation
of prior state, weight times255 conversion and one-bit convergence every eighth
frame. A separate search index recovers the last four differing bytes without
changing the draw loop. Checked views cover the global actor/weight input and all
shared position/state fields; transitive header dependencies are explicit.

The factory preserves nullable60-byte allocation, inline root construction,
dispatch/tag/size assignments, setup, signed nine-item wrap and three independent
float stores. Separating the allocated pointer parameter from an address-exposed
local owner reproduces the observed stack loads. Reusing the tag owner for setup
recovers the original R4 lifetime through the size-store delay slot. The destructor
retains nullable cleanup and positive signed-short pool release. The draw
coordinator preserves all three color arguments and six callbacks in order.

The owner update retains asymmetric opacity changes, both mode-indexed float
deltas, copied two-item selection lists, nine-state resets and its final counter
increment. A nested inline reset initially remained an out-of-line call under
the pinned compiler. Writing that loop within the selection helper recovers the
call-free reference. A compound subtraction in the wrap condition resolves the
last eight differing bytes and places the store in the observed branch delay
slot. Captured-index, plain assignment and pointer variants fail and remain in
scratch. The new checked60-byte owner view leaves every old header unchanged.

All **30 trials** retain source snapshots, hypotheses, compiler receipts and
comparisons; none were compiler-rejected. Final checked sources match twice
independently. Two fresh exact builds, integrated image comparison, five-function
proof and all **53 research tests** pass; the public suite remains **58 tests**.
Source-only rejects4,117,856 retained bytes without changing artifacts. Focused
exports use a disposable copy and are checked against current inputs; the original
database remains unchanged.

The primary batch remains incomplete: **512/30 and 388/8**, related reuse **448/4**,
manager initialization **280/8**, and signed remainder unresolved. The earlier
panel draw remains244 bytes versus240 expected. Supporting matches do not replace
primary acceptance. Compiler, base flags and complete-range rules are unchanged.
Publication retains default scanner rules and the single verified source-hash
exception with its stage-75 detection control.


## Primary scheduling investigation, stage 98

No function is admitted in this stage. Both primary acceptance conditions remain
unfulfilled: operation_45f04 is 512 bytes with 30 differing bytes, first 0x8c045fdd;
emit_5fbf8 is 388 with 8 differing bytes, first 0x8c05fc56. The 457 admitted functions,
409 modules, 45,056 compiled full-range bytes and 4,117,856 retained reference bytes
are unchanged. The reactivated goal stays active; no commits or pushes occur.

The current source-validation receipt, integrated image, five-function proof and
saved focused export all pass freshness checks. All admitted source/header hashes
and prior recorded reconstruction inputs are unchanged. Stage97 retains the most
recent two-fresh-build, 53-test and source-only-rejection evidence; this scratch-only
stage does not claim another integration or fresh full test run.

New primary experiments retain full source snapshots, headers, hypotheses,
compiler/linker artifacts and comparisons. Conversion helper boundaries, observed
orientation qualifiers, 32-bit double declarations, divisor operand order and
function-wide scalar lifetimes do not improve 512/30. The divisor-target form
preserves the desired callee-load-before-FTRC ordering but reverses literal order
and remains 512/32. Address-exposing inline owner locals produces 520/524-byte code;
address-exposing float outputs produces further stack traffic. Ordinary C++ scalar
cleanup trials either add stack traffic or emit an out-of-line destructor requiring
operator delete; none qualify.

The raw handle-start callee sign-extends the three scalar arguments as bytes and
packs them into a command. Narrow byte formals and unspecified prototypes leave
388/8 unchanged. Variadic declarations are diagnostic only and expand the range;
they supply no evidence of a variadic original prototype. Packed bitfield locals,
scan bitfields, late merged scan blocks and dead parameter reuse also fail.
Full-width flag bitfields and simple scalar lifetime changes reproduce the baseline.

The historical audit found no hidden complete primary match. Register-normalized
instruction-region searches find the desired scan shift/move order in a few older
late-merge variants, but those retain unwanted branches or other differences.
Retesting those forms with the corrected field scopes still fails. Neither the
actual-register region search nor the complete final-call sequence search finds a
matching primary candidate. Audits and exact differing offsets remain in scratch.

Two pre-reactivation supporting panel draw trials (376 and 176 bytes) match in
scratch only; neither is admitted or counted toward progress. Signed remainder
keeps its previously recorded 180-byte exceptional ABI blocker. No compiler flag,
assembly substitution, copied runtime object or inserted padding is used.

Receipt: config/primary-iteration-validation.json. Scratch experiment-index.json
records all trial hashes; primary-region-audit.json and
primary-register-region-audit.json locate historical partial instruction patterns.
Reproduce the active baseline with tools/candidates.py operation_45f04 emit_5fbf8.
Continue new source-level hypotheses under the unchanged complete-range gate.


## Primary address and lifetime follow-up, stage 99

No admission or coverage change: both primary targets remain **512/30** and
**388/8**, with first differences at **0x8c045fdd** and **0x8c05fc56**. Fresh
compiles after all experiments reproduce those complete-range results. The 457
admitted matches, 409 modules, 45,056 compiled bytes and 4,117,856 retained reference
bytes remain unchanged. The goal remains active and no commits or pushes occur.

The stage contains 73 primary experiments, including the two baseline repeats;
two are rejected for compiler-emitted data outside the allowed code/literal range.
Each trial has a source snapshot, hypothesis and comparison; successful builds
also retain the compiler receipt and full output. Declared project source/header
hashes, the current exact integrated-image/build proof and the saved focused
Ghidra export all pass freshness checks. Stage97 remains the most recent full
integration verification with two builds, 53 tests and source-only rejection.

C++ scalar references, explicit callee-pointer lifetimes and post-call volatile
factor diagnostics do not improve the angle sequence. Referencing literal
constants creates allocated data and is rejected; observed local variables spill.
Reusing the divisor as output fixes callee-load-before-FTRC only when its literal
is emitted before the scale, leaving 512/32. The 12 explicit scale/divisor/orientation
initializer order trials establish this coupling without improving the baseline.
Standard/SDK callee-name diagnostics also leave the bytes unchanged and establish
no new symbol identity.

A provisional nonvirtual angle base at offset 0x64 preserves all original offset
checks and adds prefix/subobject size checks. Implicit field and member access
still produce 512/30; explicit base conversion increases output to 528. A checked
four-byte aggregate copy of the angle spills, while scalar/reference access again
normalizes to baseline. Data-member pointers either normalize or add address
instructions. These alternate layouts remain confined to scratch snapshots.

Whole-function inlining compiles to the correct total sizes but changes other
registers and control flow: operation 512/48, emission 388/45. The actual problematic
angle, scan and final-call sequences remain unchanged. Rechecking implicit stride
expressions under the current corrected field scopes produces 388/21 or 392 bytes;
partial stride recomputation returns to 388/8. Moving loop invariants across the
entry guards changes broader allocation. Late-selected zero call arguments keep
unwanted branches, while constant single-block forms return to 388/8.

Receipt: config/primary-iteration-validation.json, with a hash-linked stage98
receipt retained in stage99 scratch. The matching manifest and unresolved queue
are unchanged; neither primary is marked matched. No compiler setting, manual
padding, assembly substitution or runtime object is introduced. Reproduce with
`python3 -B tools/candidates.py operation_45f04 emit_5fbf8`; inspect the stage99
experiment-index.json before selecting another source hypothesis.


## Primary ABI and scheduling evidence, stage 100

The batch remains incomplete: operation_45f04 is **512 bytes / 30 differing**,
first **0x8c045fdd**; emit_5fbf8 is **388 / 8**, first **0x8c05fc56**. Both active
sources were freshly recompiled after all trials. No ranges were admitted: totals
remain **457 functions / 409 modules / 45,056 compiled full-range bytes /
4,117,856 retained reference bytes**. The goal remains active. No commits or
pushes occur in this stage.

The 82 trial snapshots retain hypotheses, comparisons and successful compiler
receipts. One file-scope constant function pointer is rejected for extra allocated
data. All admitted source/header hashes and recorded reconstruction inputs are
unchanged. Current exact build/image proof and the focused export pass freshness
checks; the stage97 two-build, 53-test and source-only evidence remains the most
recent full integration verification.

Named stride values retain variable SHLD or MUL instructions instead of the
reference's immediate shifts. Equivalent zero expressions based on narrow/masked
halves retain extra integer operations. Twenty-four inline factor-parameter orders
all reproduce 512/30. Source control blocks, coherent signed-long angle fields and
formals, and most integer forwarding variants also reproduce that result. Feeding
the final predicate directly changes comparison materialization and grows the
range. Reversing integer forwarding around the entire atan expression captures
the orientation before atan and grows to 516; capturing atan separately returns to
baseline. No compiler settings or acceptance rules change.

An aligned absolute-literal/PC-relative-load scan finds two actual literal-based
callers of 0x8c3452e0: the primary and its known related emission function. A third
use passes the routine's address to an error reporter. This is a bounded literal
xref audit, not proof that computed indirect references cannot exist.

The archived R10.1 sound header supports identifying that callee as sdShotPlay:
its three signed-byte parameters and enum result fit the raw accesses and error
values. Its handle is a pointer to a port-reference pointer. The companion header
defines Sint8 as signed char and Sint32 as signed long. A raw EXTS.B at 0x8c345886
also supports the volume setter's byte argument. Cumulative checked API-type
trials, enum results, external declarations and byte-indexed typed handle tables
still give 388/8. Direct typed indexing instead emits repeated multiplies and
produces 416 bytes. This evidence remains a supported identification hypothesis;
no provisional symbol is renamed solely from the header. See the pinned SDK
header URL and hashes in the scratch sdk-sound-header/receipt.json. The downloaded
headers remain research-only and are not copied into the project or published.

A separate literal-xref audit saves 48 angle-difference uses and their raw windows.
Classification finds both the reference's FR1/reused-factor schedule and the
candidate's FR2/FR1 schedule in the original image. The first family includes
0x8c0bee98 and 0x8c15463c/66a; the second includes 0x8c05378c. These are useful
comparison contexts, not admitted functions. The full callsite table and
primary-angle-use-classification.json are retained for the next source hypothesis.

Correction to earlier shorthand: stage12/caller-unit.json targets the 136-byte
neighbor at 0x8c044018. It is not the independently admitted 100-byte caller at
0x8c043fb4. All actual comparisons used their recorded correct unit ranges; only
the prose shorthand was wrong. Current block-trial hypotheses retain an explicit
correction rather than erasing the original note.

Receipt: config/primary-iteration-validation.json, with the stage99 receipt saved
and hash-linked in scratch. The manifest and unresolved queue remain unchanged.
Reproduce the primaries with `python3 -B tools/candidates.py operation_45f04
emit_5fbf8`; inspect the new callsite evidence and failed trials before another
experiment. Signed remainder retains its 180-byte exceptional ABI blocker; no
assembly, copied runtime object or manual padding substitutes for exact source.


## Primary lifetime experiments, stage 101

The batch remains incomplete: operation_45f04 is **512 bytes / 30 differing**,
first **0x8c045fdd**; emit_5fbf8 is **388 / 8**, first **0x8c05fc56**. Fresh
baseline compiles reproduce both complete ranges. No functions are admitted;
verified totals remain **457 functions / 409 modules / 45,056 compiled bytes /
4,117,856 retained reference bytes**. The goal remains active. No commits or
pushes occur in this stage.

The 76 snapshots include 74 diagnostic trials and two baseline revalidations;
none are compiler/linker rejections. Hypotheses, source/header snapshots,
compiler receipts and comparisons are preserved in reconstruction-stage101.
All admitted source/header hashes and recorded reconstruction inputs are
unchanged. Source proof and focused-export freshness checks pass. The most recent
full integration checks remain stage97's two exact builds, integrated-image
comparison, five-function proof, 53 tests and source-only rejection; this stage
does not claim a new full test run.

Re-reading stage12 translation_context.py and stage7 identity_probe.py rules out
repeating adjacent translation-unit and symbol-identity probes. Narrowing the
54-entry induction variable adds extension instructions; signed long retains the
baseline and unsigned int changes the loop comparison. Some offset-type controls
repeat stage16; scratch historical-overlap-note.txt records that overlap explicitly.

A reused scale/divisor storage with the quotient assigned back into that storage
still gives 512/30 for ordinary scalars. Arrays/unions grow to 592 bytes and a
reference alias grows to 560. Checked rotation-record/array layouts with the
observed angle at offset 0x64 all retain 512/30, for int and long words. These
alternative layouts remain hypotheses and are not adopted in project headers.

Changing the final sound call's successor to switch/loop/conditional-return
blocks grows the function; a one-shot block keeps 388/8. A new mutable priority
variable initialized inside the successful preparation branch changes the final
call to MOV R11,R7 before the callee load and MOV R10,R5 in the delay slot. This
matches the desired high-half move placement but propagates zero through saved
R11 in earlier setup calls: the full range is 388/12, not an improvement. Its exact
difference offsets are 94,95,96,97,224,225,230,231,248,249,272,273. The reference
requires MOV #0,R7 and no earlier saved-zero propagation. Narrowing that variable's
live range after reset or volume grows to 392; const qualification, initialization
after pan, or explicit final zero reassignment restores 388/8. Zero algebra retains
extra operations or branches. Raw candidate disassemblies preserve this distinction
so the scheduling change is not mistaken for a match.

Receipt: config/primary-iteration-validation.json, hash-linked to the prior
stage100 receipt saved in scratch. Manifests and queue remain unchanged.
Reproduce with `python3 -B tools/candidates.py operation_45f04 emit_5fbf8`.
The next source investigation should distinguish early constant propagation from
late register-value copying, using this shared-zero result and the saved angle
callsite families; do not repeat the const/scope/reassignment matrix above.
Signed remainder retains its complete 180-byte exceptional ABI blocker. No assembly,
manual padding, runtime object or modified compiler settings substitute for source.


## Primary substitution and address experiments, stage 102

The batch remains incomplete: operation_45f04 is **512 bytes / 30 differing**,
first **0x8c045fdd**; emit_5fbf8 is **388 / 8**, first **0x8c05fc56**. Both
active source baselines are freshly recompiled. No functions are admitted;
totals remain **457 functions / 409 modules / 45,056 compiled full-range bytes /
4,117,856 retained reference bytes**. The goal remains active. No commits or
pushes occur in this stage.

The 99 snapshots comprise 97 diagnostic trials and two baseline revalidations.
Six rejected trials remain preserved: three C89 copy-chain generators interleaved
statements and declarations, and three predicates used the compiler's disabled
built-in bool type. Follow-ups move C89 declarations first and explicitly return
unsigned char 0/1. The local pinned C Compilers Reference, Using the bool Type,
documents that bool support defaults off. No compiler flag or pragma changes.
The 91 successful diagnostics yield 21 distinct binary hashes; the equivalence
groups are saved to avoid mistaking source variety for different generated code.

All admitted source/header hashes and recorded reconstruction inputs remain
unchanged. Source-proof and focused-export freshness checks pass. The most recent
full integration evidence is still stage97: two exact builds, integrated-image
comparison, five-function proof, 53 tests and source-only rejection. This stage
does not claim new full integration checks.

Inlining a priority output parameter, via pointer or reference, returns to 388/8.
Scalar copy/forward/output chains of length 2/4/8 produce 512/30 for the angle
conversion and 388/13 for explicit high-half capture in emission. The historical
saved-zero result therefore does not transfer through these copy forms. Inlined
read/write divisor-output helpers reproduce 512/30 or 512/32 depending on constant
materialization order, without resolving the reused-FR1 schedule.

The copy-chain hypothesis was informed by the author-maintained MWCC debugger
notes at https://github.com/cadmic/mwcc-debugger/blob/main/README.md. Those notes
cover GC/PPC, and their coalescing behavior is not established for this SH4 build.
No debugger or replacement compiler is installed; only ordinary source probes
were compiled. The external-research-note.txt records this applicability limit.

Splitting the 32-byte scan stride between an explicit shift and typed-pointer
scaling grows the function to 392–400 bytes. Initial flag predicates returning
raw bits or int 0/1 retain 388/8 when passed the loaded value; including the address
calculation in the helper grows to 392. A narrow byte result grows to 396. Constant
pointer bindings do not alter the 8-byte baseline; making the mask const changes
register allocation and produces 388/32, or 388/27 with a const threshold.

A useful angle distinction is established: with both factors mutable and scale
initialized first, scale/divisor literals occupy offsets 488/492. Making only
scale const swaps them to 492/488 even with the same declaration order, producing
512/32. Making divisor const restores 488/492 even if its declaration comes first.
Qualifying the nonliteral product/orientation/quotient temporaries does not improve
512/30. Thus declaration order alone is insufficient to classify these variants;
record factor qualification and emitted literal positions together. The candidate
disassemblies preserve this evidence and the earlier stage50/stage99 families.

Receipt: config/primary-iteration-validation.json, hash-linked to the stage101
receipt preserved in scratch. Manifests and queue remain unchanged. Reproduce
with `python3 -B tools/candidates.py operation_45f04 emit_5fbf8`.
Further source work should use the literal/substitution distinction and reference
callsite families, avoiding another plain copy, const, inline-output or typed-stride
matrix. The full 180-byte signed-remainder exceptional ABI remains unresolved;
no assembly, manual padding or copied runtime object is admitted.


## Primary conversion-context audit, stage 103

The primary batch remains incomplete: operation_45f04 is **512 bytes / 30
differing**, first **0x8c045fdd**; emit_5fbf8 is **388 / 8**, first
**0x8c05fc56**. Both active sources are freshly recompiled. No ranges are
admitted: **457 functions / 409 modules / 45,056 compiled full-range bytes /
4,117,856 retained reference bytes** remain verified. The goal remains active.
No commits or pushes occur in this stage.

The 58 snapshots comprise 55 primary diagnostics, one smaller diagnostic control,
and two primary baseline revalidations. Twelve rejected trials remain preserved:
six incorrectly assumed a four-byte enum for 0..32768; six plain fabsf calls remain
external under the pinned configuration and fail linking. Follow-ups explicitly
check the natural two-byte result enum or add a numeric sentinel to require four
bytes. Signed-word conversion enums leave 512/30; the two-byte callee result gives
512/32. This confirms the value of width assertions and establishes no new ABI.

Changing surrounding distance/radius/value types to the compiler's checked
32-bit double, or adding register/const hints, leaves 512/30. Inlining only radial
predicates also leaves 512/30. Materializing the radial predicate afterward grows
to 520; computing it before the angle calls produces 512/342 with different saved
registers and comparisons. Raw disassembly still shows the same undesired
FR2/FR1 factor schedule despite removing the radius values from the live FPR set.
Qualifiers on literal rvalues, the atan result, quotient and call return types
all leave 512/30; unlike volatile objects they do not introduce extra storage.

An audit of all admitted unit ranges looks for two literal loads into the same
factor register separated by multiply then divide of the same output register.
The sole linear scan hit, controller_child_parameters, crosses mutually exclusive
branches. A control-transfer filter removes it: there are no hits in a single
basic block. Both the initial candidates and corrected result remain in scratch.
This bounded scan does not prove absence of every equivalent instruction shape.

The existing 120-byte angles_from_xy control is freshly compiled and still has
seven differences at offsets 77–83, first 0x8c0c50e1. Its first conversion matches;
its second needs the same serialized factor-load pattern as the primary, despite
having neither an orientation load nor an angle_difference call. It is a smaller
experiment for the floating mismatch, not an admission or replacement acceptance
criterion. Source, unit, comparison and raw reference/candidate assembly are saved.
Further work should exploit that isolation rather than retesting orientation
layouts or live radius-register types.

The archived Ninja macro receipts from stage15 are hash-validated and reused.
They already cover the ordinary atan2f/radians-to-angle expression and signed-long
Angle type; no SDK header download or repeated macro sweep occurs. The local
compiler intrinsic list motivates a plain standard-math absolute-value probe,
but its six calls remain external. No flags, pragmas, instruction substitutions
or extra symbol bindings are introduced to force those probes to link.

All admitted source/header hashes and recorded reconstruction inputs remain
unchanged. Source-proof and focused-export freshness checks pass. The most recent
full integration verification remains stage97's two exact builds, image comparison,
five-function proof, 53 tests and source-only rejection. This stage does not claim
a new full test run. The signed-remainder 180-byte exceptional ABI blocker remains;
no assembly, manual padding or copied runtime object is admitted.

Receipt: config/primary-iteration-validation.json, hash-linked to the stage102
receipt preserved in scratch. Manifests and unresolved queue remain unchanged.
Reproduce primaries with `python3 -B tools/candidates.py operation_45f04 emit_5fbf8`;
inspect reconstruction-stage103/angle-pair-control before new FP source hypotheses.


## Result ownership and loop boundaries, stage 104

The batch remains incomplete: operation_45f04 is **512 bytes / 30 differing**,
first **0x8c045fdd**; emit_5fbf8 is **388 / 8**, first **0x8c05fc56**. Fresh
compiles reproduce both active sources. No functions are admitted. Verified totals
remain **457 functions / 409 modules / 45,056 compiled full-range bytes /
4,117,856 retained reference bytes**. The goal remains active; no commits or
pushes occur in this stage.

The 37 snapshots contain 19 emission diagnostics, 16 smaller angle-control
diagnostics and two primary baseline revalidations. None are compiler/linker
rejections. Sources, declared headers, hypotheses, compiler receipts and whole
range comparisons are retained. Binary equivalence groups distinguish source
variants from distinct generated outputs.

In the 120-byte paired converter, alternating the input and factor variables as
product/quotient destinations, inserting scalar copies, and an inline two-value
swap all retain 120/7. Free C++ functions and reference parameter forms also retain
120/7. An actual nonvirtual member changes general-register allocation and gives
120/24; inspection confirms that the same undesired FR2/FR1 conversion remains.
No variant supplies the reference's serialized floating-factor schedule, and none
is admitted or used as a substitute for the primary 512-byte target.

Moving the emission index increment into offset formation gives 388/40; a
preincrement formulation gives 388/37. Incrementing after the saved offset or flag
read gives 388/30. A body-tail increment retains 388/8. All forms still visit the
same 54 entries, but their source-level equivalence does not satisfy the byte gate.
Putting either loop scalar into a checked four-byte record, union, one-element
array or full-width bitfield adds stack traffic and grows to 396. These carrier
forms should not be confused with the earlier table-field representation trials.

Combining the pan/start calls in a comma expression retains 388/8. Inlining the
whole reset/volume/pan/start sequence with three parameter orders also retains
388/8. Each table reload remains after the preceding call; no alias-sensitive
load is moved or cached to invent a match. This rules out those specific larger
inline boundaries as a remedy for the final argument-copy schedule.

All admitted source/header hashes and recorded reconstruction inputs remain
unchanged. Source-proof and focused-export freshness checks pass. The latest full
integration verification remains stage97: two exact builds, integrated-image
comparison, five-function proof, 53 tests and source-only rejection. No new full
test run is claimed. Signed remainder retains its 180-byte exceptional ABI blocker.
No manual instructions, padding, compiler changes or runtime objects are used.

Receipt: config/primary-iteration-validation.json, hash-linked to the prior
stage103 receipt saved in scratch. Manifests and unresolved queue remain unchanged.
Reproduce both primaries with `python3 -B tools/candidates.py operation_45f04
emit_5fbf8`. Future trials should seek a genuinely different arithmetic dependency
or compiler-visible value lifetime; simple copies, two-scalar role swaps, reference
parameters and sequence inlining now have explicit negative evidence.


## Bounded investigation and target rotation, stage 106

This batch adds **two exact functions and 176 compiled bytes**. Totals are
**459 functions / 410 modules / 45,232 compiled full-range bytes / 4,117,680
retained reference bytes**, or **1.0865% of the 4,162,912-byte decoded image**.
Separately reconstructed static data remains zero. This is still a hybrid build.

The new matches are vector subtraction at **0x8c0c4f68** (40 bytes, including
natural next-entry alignment) and an effect motion-completion check at
**0x8c0aa6a8** (136 bytes, including both literals). The subtraction reads and
writes one component at a time, preserving alias behavior. Its isolated body is
38 bytes; compiling it beside its genuine adjacent angle_step produces the exact
96-byte combined module. The previous 56-byte angle_step source is retained
verbatim and still matches; it earns no new coverage. Every one of the 457 prior
function ranges and every previous source/header file is preserved. This is
natural compiler alignment, with no inserted padding or instruction substitutes.

The effect check preserves the unchecked resource pointer, byte136 flag bit3,
ordered target-minus-position vector, zero-length early termination and the
unordered-sensitive `!(phase < 1.0f)` termination condition. Its first complete
C candidate matches. Provisional accessed prefixes have explicit offset and size
checks; their extents are not claimed to establish complete allocation sizes.

Investigation-only work adds **zero matching primary functions or bytes**.
Fresh baseline compiles confirm operation_45f04 at **512/30**, first
**0x8c045fdd**, and emit_5fbf8 at **388/8**, first **0x8c05fc56**. One genuinely
distinct new hypothesis tests the interaction of external callee declarations
with the previously different late-quotient lifetime. The predicted FR1 reuse
fails: all three outputs are identical at 512/32. Existing SDK signed-byte
sound ABI evidence, raw extension instructions and C++ member/default-argument
experiments provide no supported new ABI correction. Compiler settings remain
unchanged. The maximum is 20 hypotheses across both targets, not a quota to fill
with equivalent variants. Both are now explicitly **parked and incomplete**.

Revisit operation_45f04 only when an independent exact function demonstrates its
single-block sequential FR1 factor reuse, or verified source context supports a
materially different lowering assumption. Revisit emit_5fbf8 when an independent
exact table scan or SDK-style call demonstrates its SHLL/MOV or final argument
move scheduling, or verified ABI evidence contradicts the tested types. Precise
byte offsets, predictions, prior-trial references and output equivalence groups
are in `config/primary-iteration-validation.json` and stage106 scratch. The
interrupted stage105's 51 historical trials are indexed separately; none added a
match, and they are not presented as new stage106 hypotheses.

Other unadmitted trials are retained without credit. The vector nonfinite check
at 0x8c0c4f08 has 92/83 with direct short-circuit C and 96/70 with an explicit
outer default; three XY-local variants produce the same104-byte output. The
spawn initializer at0x8c0ab558 remains424/79 after replacing raw field accesses
with existing checked types; externally declaring random worsens it to424/85.
These targets are deferred rather than given another equivalent spelling sweep.
Referenced resource/dispatch tables remain reference-backed. Their source types
and allocation extents need independent evidence before static-data admission.

Both new checked sources match independently twice. Two fresh exact project
builds, integrated-image comparison, the five-function compiler proof and all
**53 current research tests** pass. Source-only rejects **4,117,680 bytes** and
preserves existing build artifacts. Focused evidence is regenerated because the
manifest/queue changed, using a disposable database copy; its receipt validates.
The image SHA-256 remains
`11e3ad63a73c6d0ff4b5c883ae3df194d873925f8b9925af6435c7b97f6b73b0`.
No gameplay, repacking, compiler change, assembly substitute, commit or push occurs.
Original data, private saves, serial/access keys and unrelated changes are untouched.

Continue across effect initialization and matrix/vector dependencies; rotate away
from stalled targets and use new exact matches as compiler evidence. Do not resume
the parked two merely because another batch starts. Reproduce the integrated
state with `python3 -B tools/verify_source.py --check`; rebuild with
`python3 -B tools/verify_source.py`; run tests with
`python3 -B -m unittest discover -s tests -v`. The full integration receipt is
`config/candidate-batch-validation.json`; stage106 scratch holds experiments,
source-only preservation evidence, the previous receipts and raw disassembly.


## Signed angle helper and continued target rotation, stage 107

This batch adds **one exact function / 56 bytes**: angle_fraction_step at
**0x8c0c4fe0–0x8c0c5018**, including its three literals. Totals are **460 functions /
411 modules / 45,288 compiled full-range bytes / 4,117,624 retained reference
bytes**, or **1.0879% of the decoded image**. Across the user's new bounded-and-rotate
workflow, stages106–107 add **3 functions / 232 bytes**. All459 prior matches from
stage106 and all existing source/header files remain preserved.

The helper masks both inputs to16 bits and computes a signed wrapped delta.
Strict bounds -0x3000 and +0x3000 select `(delta >> 1) - (delta >> 2)`; otherwise
it uses `delta >> 1`. The final sum wraps to16 bits. Negative odd values must
retain the observed arithmetic-shift rounding; substitution with ordinary
signed division by4 would change behavior. The first candidate matches56 bytes,
and the final readable source matches independently twice.

Investigation-only work produces no classifier improvement: compiling the prior
vector nonfinite candidates as C++ leaves identical92/83 and96/70 outputs.
Unsigned-byte XY intermediate forms add instructions and produce identical104/91
outputs; a byte result leaves92/83. These specific hypotheses are now recorded
and grouped by binary hash. The classifier is deferred. The two original targets
remain **parked/incomplete at512/30 and388/8**; neither is reopened or retested.
No compiler setting changes are made beyond the existing authorized C++ language
selector in the scratch-only language diagnostic.

Two fresh exact builds, integrated-image comparison, the five-function proof,
all **53 current research tests** and source-only rejection pass after integration.
Source-only rejects **4,117,624 bytes** without changing existing build artifacts.
Focused exports are refreshed for the changed manifest/queue using a disposable
copy of the original database and then validated. Standalone static data remains
unreconstructed. No commits, pushes, gameplay or disc repacking occur.

Continue with a different effect initializer or matrix/vector dependency after
checking prior failed hypotheses. The two parked targets have explicit evidence
conditions in `config/primary-iteration-validation.json`; simply starting another
batch is not a revisit condition. Use `python3 -B tools/verify_source.py --check`
to verify the current receipt, or `python3 -B tools/verify_source.py` for two fresh
builds. Current integration evidence is `config/candidate-batch-validation.json`;
stage107 scratch retains all eight trials, predictions, raw instructions and
compiler/output hashes, with equivalent outputs grouped.


## Effect controls, vector distance and resource initialization, stage 108

This batch adds **6 exact functions / 748 compiled full-range bytes**. Totals
are **466 functions / 416 modules / 46,036 compiled bytes / 4,116,876 retained
reference bytes**, or **1.1059% of the decoded image**. All 460 preceding matches
and every prior source/header file are preserved. Standalone static data remains
zero; the executable is still a hybrid reconstruction.

| New function | Address | New full-range bytes |
| --- | --- | ---: |
| create_effect_785c | 0x8c0a785c | 116 |
| update_effect_control_input | 0x8c0a6d90 | 384 |
| effect_control_button | 0x8c0a6f10 | 40 |
| update_effect_rotation_record | 0x8c0a6d10 | 128 |
| squared_distance_xyz | 0x8c03f074 | 44 |
| initialize_resource_entry_pointers | 0x8c03f128 | 36 |

The factory transfers the checked types and external initializer declaration of
its exact adjacent sibling, supplying four zero stack arguments. The signed
upper-bound-only resource check and nullable allocation are preserved. The input
update retains signed short axes, the asymmetric deadzone `(-12, 12]`, magnitude
root/divide/clamp, post-call input reloads, short step conversion, ordered float
stores and separate elevation clamps. Names describe observed operations; wider
device and gameplay identities remain provisional. The button query's register
result reproduces its saved-register boolean lowering. The global-record update
preserves the observed base-plus32 null test and the two direction branches.

XYZ squared distance emits the exact42-byte instruction body in isolation. Its
genuine adjacent24-byte XZ sample naturally supplies the missing2-byte alignment,
and the resulting68-byte module matches completely. The original XZ proof source
is included verbatim and remains unchanged on disk; the five-function proof still
builds it independently. This regrouping adds only44 bytes and one function, with
no duplicate credit or artificial padding. Floating subtraction, multiplication
and left-associated addition order are preserved.

The resource initializer uses checked12-byte entries and an8-byte list. Both list
pointer and unsigned count reload each iteration; no alias-sensitive load is
cached. The raw loop and runtime-address literal match the complete36 bytes.
The data audit separately records that0x8c466d98,0x8c46f100 and0x8c41cba0 lie
outside the decoded image `[0x8c010000,0x8c408560)`. Their contents and zero-fill
extents are not established by these references. No standalone-data bytes are
claimed. The existing comparison tool rejects allocated non-text sections and
continues reporting zero standalone-data reconstruction; its gates are unchanged.

All18 experiment snapshots retain hypotheses, predicted instruction changes,
sources and compiler/output receipts. They form7 distinct binary groups. Every
final new source matches independently twice. The isolated42-byte XYZ output is
retained as incomplete evidence; it was never admitted on its own. No new primary
hypotheses are tested: both original targets remain **parked and incomplete at
512/30 and388/8**. Their existing revisit conditions are unchanged. Investigation
of runtime-address references adds no matching-data credit.

After final integration, two fresh exact project builds, integrated-image
comparison, five-function proof and all **53 current research tests** pass.
Source-only rejects **4,116,876 bytes** without altering build artifacts. Focused
exports are refreshed against the final manifest/queue on a disposable database
copy and validated. Intermediate four-function verification logs are preserved
separately from the final six-function checks. Compiler flags, original database,
private data, serial/access keys, saves and unrelated changes remain untouched.
No commits, pushes, gameplay or disc repacking occur.

Reproduce with `python3 -B tools/verify_source.py --check`, or use
`python3 -B tools/verify_source.py` for two fresh builds and the five-function proof.
Run `python3 -B -m unittest discover -s tests -v` for current tests. Full evidence
is in `config/candidate-batch-validation.json` and reconstruction-stage108 scratch.
Continue across further effect lifecycle and vector/matrix dependencies after
checking earlier failed records. Do not reopen the two parked targets merely
because a new batch begins. The unfinished RGB565 filter and frame setup already
have prior trials; the current new matches do not yet supply their missing patterns.


## Publication cycle resumed

The current user authorization includes reviewed commits and pushes. The current
per-target limit is ten distinct unsuccessful hypotheses, with earlier parking
when no useful evidence remains. Historical counts and parked blockers persist.
Research receipts remain private; public progress binds the exact source inputs.


## Channel tables and panel geometry, stage 110

Four newly admitted exact functions replace **660 bytes**: initialize_channel_handles
at0x8c03f414 (48), select_available_channel at0x8c03f444 (60), operation_1960fc
at0x8c1960fc (376), and operation_196274 at0x8c196274 (176). Totals are **470
functions /420 modules /46,696 compiled full-range bytes /4,116,216 retained bytes**,
or **1.1217% whole-image coverage**. All466 prior matches and source/header files
remain unchanged. Standalone reconstructed static data remains zero.

The two channel routines use eight-entry scans with unsigned-byte induction.
Selection calls zero for each empty entry before breaking at the first nonnull
handle. Direct pointer indexing and an external array declaration produce the
same52/64-byte outputs; explicit shifted byte offsets recover the complete48/60
bytes, including the call argument delay slots and literals. Three distinct
hypotheses per channel target are recorded; identical outputs are grouped.

The two rendering functions revalidate earlier stage98 scratch matches, which
were never counted or published. Existing checked rendering records and a new
checked52-byte owner prefix preserve the exact output. The frame renderer updates
scaled global strips then draws four static and eight translated local quads.
The sliding renderer preserves descending alpha-byte stores, repeated owner-field
reads, paired vertex assignments and both draw calls. Their writable referenced
tables remain reference-backed; these function matches earn no separate data credit.

Each final source matches independently twice. Two fresh builds in each checkout,
exact integrated-image comparison, the independent five-function proof, all53
research tests and58 public tests pass. Source-only rejects4,116,216 bytes without
changing build artifacts. Focused exports are refreshed on a disposable database
copy and validated. The compiler and base flags are unchanged; no assembly,
copied runtime objects, artificial padding or gameplay changes are used.

Investigation-only work adds no primary progress. Both primary targets stay parked
at512/30 and388/8 with the existing evidence-based revisit conditions. Current
policy parks a target after ten unsuccessful distinct hypotheses, or sooner when
no productive evidence remains; counts persist across sessions. Continue to the
next useful target after verification and publication.

The preceding publication checkpoint04f81cd includes the nine stage106–108
matches (980bytes); remote commit and GitHub checks passed. Its first public test
run exposed an obsolete hard-coded angle_step source path after module regrouping.
The mutation test now selects an admitted source from the manifest, and progress
also hashes independent proof sources. All58 public tests pass after the correction.
No private research receipts or settings are published.

Reproduce with `python3 -B tools/verify_source.py`, run tests with
`python3 -B -m unittest discover -s tests -v`, and expect rejection from
`python3 -B tools/project.py build --source-only`. Public progress is refreshed
with `python3 -B tools/progress.py --record`; check it using `--check`.


## Effect view table and virtual dispatch, stage 111

Three new exact functions replace **264 bytes**: mark_effect_table_pending at
0x8c0a6c08 (44), set_effect_view at0x8c0a6c34 (156), and forward_effect_view at
0x8c0a6cd0 (64). Totals are **473 functions /423 modules /46,960 compiled bytes /
4,115,952 retained reference bytes**, or **1.1281% whole-image coverage**. All470
previous matches and source/header files are preserved. Standalone data remains zero.

The pending marker preserves its zero-index-only guard, nullable table entry and
write at offset152. The forwarder preserves nullable actor lookup and addition of
0x8000 to the angle at offset100 before passing both vector pointers. Each first
ordinary-C candidate matches its full range.

The middle routine accepts table modes0 or8, checks the selected pointer, ORs8
into flags144, dispatches orientation through vptr24/slot60, then writes position124
and target112 component by component. C++ naturally reproduces the call context.
The initial twelve preceding method declarations generate slot56 and156/1.
A mistaken slot calculation tested fourteen declarations, yielding slot64 and
160/109; the corrected thirteen declarations match156/0. Both variants and the
incorrect prediction are retained as evidence. This is a slot-layout correction,
not a compiler setting change or a reason to revisit unrelated parked targets.

New provisional C/C++ prefixes assert every accessed offset and prefix size.
All final checked sources compile independently twice to exact complete ranges,
including return delay slots and literals. Two fresh builds in each checkout,
exact integrated image, five-function proof,53 research tests and58 public tests
pass. Source-only rejects4,115,952 bytes without altering build artifacts. Focused
exports are regenerated on a disposable database copy and validated.

There is no primary-target or standalone-data improvement. Parked results remain
512/30 and388/8 with unchanged evidence-based revisit conditions. The ten-hypothesis
per-target limit and earlier parking rule persist across sessions. The preceding
stage110 commit e674285 is published and its remote checks passed. No gameplay,
disc repacking, private data changes or research-workspace commit occurs.

Reproduce with `python3 -B tools/verify_source.py`, then run the current tests and
`python3 -B tools/project.py build --source-only` (expected rejection). Public
progress uses `python3 -B tools/progress.py --record` after exact verification.


## Effect phase and nullable factory, stage 112

Two new exact functions replace **100 bytes**: check_effect_phase at0x8c0ab2fc
(24 bytes) and create_effect_b314 at0x8c0ab314 (76 bytes). Totals are **475 functions /
424 modules /47,060 compiled bytes /4,115,852 retained reference bytes**, or
**1.1305% whole-image coverage**. All473 prior matches and source/header files remain
unchanged. Static data reconstruction remains zero.

The phase comparison uses `!(phase < 1.0f)`, preserving the unordered/NaN flag
write at offset4. The adjacent factory allocates180 bytes from the observed pool,
conditionally calls its initializer with three preserved inputs, and returns the
allocation. Their genuine adjacency supplies natural two-byte entry alignment;
no artificial padding is used. The checked module matches independently twice.

Investigation-only: create_effect_bf80 improves from280/42 to280/24 but remains
incomplete. Nine distinct hypotheses are retained, with identical compiler outputs
grouped. Separating the tested allocation from its branch-local homed alias fixes
the entry schedule when the original allocation is passed to the initializer.
An external emission declaration fixes the final call and literal order. Named
count fields, raw count offsets and external tag declarations yield identical
outputs. A scoped tag value worsens to25differences; inlining a constructor yields
32. Remaining24differences start at0x8c0abfce in zero/tag-store scheduling before
the64-byte template copy. Allocation, calls and64/92-byte copy loops match.

This target is parked after nine unsuccessful distinct hypotheses because useful
new evidence has run out. Its checked provisional source, exact offsets and
persistent count are recorded in the unresolved queue. Revisit only with an
independent exact constructor demonstrating the same stack-home/store schedule,
or verified different original constructor context. No completed bytes are credited.
The original primary targets remain parked at512/30 and388/8.

Two fresh exact builds in each checkout, integrated-image comparison, five-function
proof,53 research tests and58 public tests pass. Source-only rejects4,115,852 bytes
without changing build artifacts. Focused evidence is refreshed on a disposable
analysis database and validated. Compiler settings, observed behavior and private
data are preserved. Stage111 commit6b6d6c4 is published with remote checks passing.

Reproduce using `python3 -B tools/verify_source.py` and the current unittest suite.
`python3 -B tools/project.py build --source-only` must reject the remaining gaps.
Public progress recording follows fresh exact verification. Continue target rotation
and reviewed publication without resetting parked-target experiment counts.


## Fade lifecycle and state updates, stage 113

Six new exact functions replace **424 bytes**: initialization0x8c0c4c88 (44),
destruction0x8c0c4cb4 (76), active query0x8c0c4d00 (24), start0x8c0c4d18 (60),
reverse start0x8c0c4d54 (52), and update0x8c0c4d88 (168). Totals are **481 functions /
430 modules /47,484 compiled bytes /4,115,428 reference bytes**, or **1.1406% image
coverage**. All475 previous matches and prior source/header files remain unchanged.

The checked48-byte provisional state preserves dispatch24, amount32, three color
bytes36–38, state40 and callback44. The update's indirect call establishes that44
is a callback, correcting an initial scratch-only duration interpretation. No
published prior layout is modified. Start operations preserve every global reload
and descending color write. The reverse setter's chained assignments recover the
MOV-zero/offset ordering; separate clears produce52/4. An explicit local-result
if/else makes the query24/0; direct returns produce20/13 and are rejected.

Update retains its four-case switch and three endpoint paths: subtract8 to0,
add8 to255, and add1 to128. Unordered comparisons take the observed clamp/callback
path. The callback executes before the final state clear. Destruction preserves
the nullable pointer, dispatch/global writes, detach call and positive signed-short
release condition. Complete checked sources match independently twice.

Two fresh exact builds in each checkout, integrated-image comparison, five-function
proof,53 research tests and58 public tests pass. Source-only rejects4,115,428 bytes
without changing existing artifacts. Focused exports use a disposable database
copy and validate against the current manifest/queue. Compiler flags and full-range
rules remain unchanged. Stage112 commitcfe7739 is published with remote checks passed.

No primary-target or standalone-data improvement is claimed. The primary pair
remains parked at512/30 and388/8; create_effect_bf80 remains parked at280/24 after
nine distinct unsuccessful hypotheses. Their evidence-based revisit conditions
and persistent counts are unchanged. Continue with further effect/render helpers.

Reproduce with `python3 -B tools/verify_source.py`, the current unittest suite and
`python3 -B tools/project.py build --source-only` (expected rejection). Refresh
public progress only after exact verification; review and scan intended public
changes before commit/push. Research data and original inputs remain private.


## Transform setup and bounded target rotation, stage 114

Three new exact functions replace **324 bytes**: prepare_transform_state at
0x8c0c44c8 (40), configure_transform_callbacks at0x8c0c44f0 (160), and
apply_transform_state at0x8c0c4590 (124). Totals are **484 functions /433 modules /
47,808 compiled bytes /4,115,104 retained reference bytes**, or **1.1484% image
coverage**. All481 previous matches and source/header files are preserved.

Preparation preserves its pointer and float across reset. Configuration reads
flags once and keeps the observed callback-field stores at48/52/56/60, including
the bit0x2000 branch and repeated global reloads. The checked prefix is64 bytes.
Application uses a52-byte local frame for translation, scale, angles and quaternion
outputs, then follows the returned kind to the observed rotation call. An external
decomposition declaration recovers the callee load after the stack-argument push;
the literal-pointer form yields124/7. All final sources match independently twice.

Investigation-only work adds no bytes. Three targets are explicitly parked:

- draw_fade_state:216/27, first0x8c0c4e54; three distinct hypotheses all emit the
  same binary. List/alpha setup and third-vertex Y scheduling remain different.
- select_model_node:56/5, first0x8c03ef95; five hypotheses fail to recover zero/base
  register allocation. Literal callee, chained zeros and unsigned counters match
  the baseline output; literal globals worsen it.
- visit_model_selection:184bytes versus180,136differences including extra length;
  five hypotheses leave the target-index reload inside the first inlined child.
  Equality order, target local and address-based globals do not recover it.

Each parked queue entry retains checked source, full differing offsets, persistent
count and an evidence-based revisit condition. The prior primary pair and large
factory remain parked. Do not reset counts or repeat the failed equivalent outputs.

Two fresh exact builds in each checkout, integrated-image comparison, five-function
proof,53 research tests and58 public tests pass. Source-only rejects4,115,104 bytes
without changing artifacts. Focused exports are regenerated on a disposable database
and validated. Stage113 commit6b068a4 is published and remote checks passed. No
standalone static data is credited; original/private data and compiler flags remain
unchanged. Research sources are not committed.

Reproduce with `python3 -B tools/verify_source.py`, run the current tests and expect
`python3 -B tools/project.py build --source-only` to reject the gaps. Refresh public
progress only after exact verification. Continue into the newly referenced transform
callbacks and decomposition helper while respecting all parked-target blockers.


## Transform decomposition and tree traversal, stage 115

Eight new exact functions replace **728 bytes** in seven modules. Totals are
**492 functions /440 modules /48,536 compiled bytes /4,114,376 retained reference
bytes**, or **1.1659% whole-image coverage**. All484 preceding matches and prior
source/header files remain unchanged. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| decompose_transform_state | 0x8c0c460c | 320 |
| transform_vector_fallback | 0x8c0c474c | 4 |
| transform_angle_fallback | 0x8c0c4750 | 4 |
| set_transform_node_callback | 0x8c0c4754 | 12 |
| draw_transform_tree | 0x8c0c4760 | 48 |
| visit_transform_tree | 0x8c0c4790 | 180 |
| prepare_transform_tree | 0x8c0c4844 | 32 |
| walk_transform_tree | 0x8c0c4864 | 128 |

The checked52-byte node includes flags0, resource4, position8, angles20, scale32,
child44 and next48. The16-byte draw-dispatch prefix checks its callback at12.
Decomposition preserves flag64's bypass path, optional callback outputs, ordered
component copies, integer-angle fallback, flag32 result and final state call.
The zero-return callbacks leave outputs untouched and request copying node fields.

Both tree traversals are ordinary recursive C with a do/while sibling walk.
The pinned compiler inlines one recursive level, reproducing both complete ranges.
Each node pushes/applies the transform, invokes the optional node callback, optionally
draws its resource when flag8 permits, visits children and pops before advancing.
The nondrawing walk retains the same callback and matrix-stack behavior. The initial
node remains assumed nonnull, matching the reference. Wrappers preserve float/input
forwarding and install the draw callback in the observed call delay slot.

Every first candidate matches; all final checked sources match independently twice.
The two genuine adjacent zero-return callbacks occupy eight total bytes without
padding or duplicate credit. Twenty-one snapshots form seven binary groups.
Two fresh exact builds in each checkout, exact integrated image, five-function proof,
53 research tests and58 public tests pass. Source-only rejects4,114,376 bytes without
changing artifacts. Refreshed focused exports validate on a disposable database copy.

No parked target is reopened and no investigation-only work is counted as coverage.
Prior blockers and persistent hypothesis counts remain in the queue. Stage114
commitddef31f is published and remote checks passed. Compiler settings, original data,
private saves and unrelated workspace changes remain preserved; research is uncommitted.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Public progress is recorded after exact verification, then
reviewed/scanned public changes are committed and pushed. Continue into useful
remaining effect and transform dependencies; successful checkpoints do not end work.


## Color-effect lifecycles, stage 116

Ten new exact functions replace **716 bytes** in ten modules. Totals are
**502 functions /450 modules /49,252 compiled bytes /4,113,660 retained reference
bytes**, or **1.1831% whole-image coverage**. All492 preceding matches and prior
source/header files remain unchanged. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| initialize_color_rise | 0x8c0c49bc | 72 |
| destroy_color_base | 0x8c0c4a04 | 68 |
| destroy_color_rise | 0x8c0c4a48 | 80 |
| update_color_rise | 0x8c0c4a98 | 64 |
| initialize_color_fall | 0x8c0c4ad8 | 76 |
| destroy_color_fall | 0x8c0c4b24 | 80 |
| update_color_fall | 0x8c0c4b74 | 56 |
| initialize_color_blue | 0x8c0c4bac | 76 |
| destroy_color_blue | 0x8c0c4bf8 | 80 |
| update_color_blue | 0x8c0c4c48 | 64 |

The checked44-byte provisional prefix places flags at4, dispatch at24, amount at32,
color bytes at36–39 and callback at40. This callback differs from FadeState's44.
Constructors preserve both base/derived dispatch stores and observed color order.
Destructors preserve nested null tests and signed-short release flags. Updates retain
NaN-inclusive endpoint tests, clamps and callback-before-flag behavior: rise8 toward255,
fall8 toward0, and blue rise2 toward128. No speculative behavior changes are made.

All ten first candidates match; the checked versions each match twice independently.
Thirty snapshots form ten binary groups. Two fresh exact builds in each checkout,
exact integrated image, five-function proof,53 research tests and58 public tests pass.
Source-only rejects4,113,660 retained bytes without changing existing artifacts.
Focused exports validate on a disposable database copy. The adjacent renderer duplicates
the parked fade renderer's raw range; this gives no new compiler evidence and no credit.

No parked target is reopened. Prior blockers and persistent hypothesis counts remain.
Stage115 commita55b86c is published and remote checks passed. Compiler settings,
original data, private saves and unrelated workspace changes remain preserved.
Research is uncommitted; only reviewed public sources, manifests and docs are published.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into transform state and interpolation dependencies.


## Transform track helpers, stage 117

Six new exact functions replace **320 bytes** in six modules. Totals are
**508 functions / 456 modules / 49,572 compiled bytes / 4,113,340 retained reference
bytes**, or **1.1908% whole-image coverage**. All 502 preceding matches and prior
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| advance_transform_tracks | 0x8c0c3974 | 36 |
| select_transform_state | 0x8c0c3a40 | 24 |
| find_track_key | 0x8c0c3a58 | 52 |
| sample_transform_vector | 0x8c0c3b44 | 68 |
| sample_transform_angles | 0x8c0c3b88 | 68 |
| sample_transform_quaternion | 0x8c0c3bcc | 72 |

The checked detailed 64-byte state view agrees with the previously admitted
TransformState prefix. Track advancement retains the cursor across aliased global
loads. State selection uses a shifted byte offset; implicit structure scaling emits
MUL.L. The unsigned binary search preserves unchecked input/count behavior.

Vector and angle callbacks need both explicit shifted offsets and a captured local
index. Implicit indexing produces 72 bytes / 69 differences; shifted offsets give
68 / 6; changing index signedness reproduces the first binary. The local index gives
both complete 68-byte matches. Quaternion sampling matches after declaring its
external callee: the literal call produces 72 / 4 with swapped registers. Index
increments and global pointer reloads after callbacks preserve observed behavior.

Investigation-only work adds no completed bytes. Two targets are explicitly parked:

- initialize_transform_tracks, 0x8c0c3998: **168 / 8**, first difference 0x8c0c3a08.
  Four hypotheses tested. Baseline is 176 / 159; doubled stride by addition gives
  168 / 41; retaining the cursor gives 168 / 8. External table symbols reproduce
  that binary. The first callback fetch/global-state reload still has the wrong
  scheduling and registers. Revisit only with independent exact alias/table-fetch
  scheduling evidence or verified different source context.
- find_track_interval, 0x8c0c3a8c: **184 / 35**, first difference 0x8c0c3a95.
  Three hypotheses tested. Baseline is 180 / 149; a register output parameter fixes
  the complete size but differs in output/high/low lifetimes and key-load order.
  An inline search reproduces the baseline. Revisit only with an independent exact
  output-pointer lifetime pattern or verified inline/calling context.

Thirty-five source snapshots form eighteen binary groups. Final admitted sources
match independently twice. Two fresh exact builds per checkout, exact integrated
image, five-function proof, 53 research tests and 58 public tests pass. Source-only
rejects 4,113,340 bytes without altering existing artifacts. Refreshed focused exports
validate on a disposable database copy. Original primary targets remain parked.

Stage 116 commit e1fdafa is published and remote checks passed. Public changes receive
staged review and privacy scans; research remains uncommitted. Compiler settings,
original data, private saves and unrelated work are preserved.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into remaining interpolation and matrix helpers.

Stage 117 privacy review: the generic-key heuristic also flags the progress-proof
SHA-256 for find_track_key.c. The value was verified against that source file.
The scanner now has two exact source-hash exceptions and retains every default
rule, with no path exclusions. A fresh synthetic credential control is detected.


## Angular track interpolation, stage 118

Two new exact functions replace **240 bytes** in two modules. Totals are
**510 functions / 458 modules / 49,812 compiled bytes / 4,113,100 retained reference
bytes**, or **1.1966% whole-image coverage**. All 508 preceding matches and prior
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| interpolate_track_angle | 0x8c0c3e38 | 84 |
| interpolate_track_angles | 0x8c0c3e8c | 156 |

The checked scalar key is eight bytes; the three-component angular key is sixteen.
Both preserve the interval helper, signed-short delta wraparound, floating multiply
and addition, and final integer truncation. Fraction-first local declaration gives
the observed stack homes. Captured integer base and short delta recover the complete
sizes; delta*fraction then corrects two floating-register operands per component.
The unchanged compiler produces every instruction, literal and alignment byte.

Investigation-only float variants add no completed bytes:

- interpolate_track_vector, 0x8c0c3d54: **124 / 42**, first difference 0x8c0c3d76.
- interpolate_track_xy, 0x8c0c3dd0: **104 / 27**, first difference 0x8c0c3df2.

Each is parked after six hypotheses. Local ordering improved their first results
of 124 / 103 and 104 / 88. Addition/multiplication operand-order variants reproduce
the same binaries. Explicit delta and captured operand variants produce identical
longer 132 / 92 and 108 / 69 ranges. Remaining blockers are end/base floating-load
order and fraction-addressing lifetimes. Revisit only with independent exact float
interpolation evidence or verified different source context; do not repeat these
expression variants. Earlier track and primary blockers remain parked.

Thirty snapshots form fourteen binary groups. Admitted checked sources match twice
independently. Two fresh exact builds per checkout, exact integrated image,
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,113,100 bytes without altering artifacts. Refreshed focused exports validate on
a disposable database copy. Original data and private saves remain preserved.

Stage 117 commit 0470a85 is published and remote checks passed. The scanner retains
all default rules with three exact verified source-hash exceptions and a successful
synthetic credential detection control. Only reviewed public changes are published;
research remains uncommitted.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into remaining transform wrappers and helpers.

Stage 118 scanner review: track_keys.h adds a third verified source-hash false
positive in progress-proof.json. Only that exact digest is excepted; default rules
and the fresh synthetic credential detection control remain effective.


## Draw wrappers and blended tree traversal, stage 119

Eight new exact functions replace **320 bytes** in eight modules. Totals are
**518 functions / 466 modules / 50,132 compiled bytes / 4,112,780 retained reference
bytes**, or **1.2043% whole-image coverage**. All 510 preceding matches and prior
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| draw_tree_9436 | 0x8c0c3924 | 16 |
| draw_blended_tree_9436 | 0x8c0c3934 | 16 |
| draw_blended_tree_a702 | 0x8c0c3944 | 16 |
| draw_blended_tree_b44a | 0x8c0c3954 | 16 |
| draw_tree_a702 | 0x8c0c3964 | 16 |
| draw_blended_transform_tree | 0x8c0c43d8 | 48 |
| visit_blended_transform_tree | 0x8c0c4408 | 180 |
| forward_prepare_transform_tree | 0x8c0c44bc | 12 |

The existing checked node/dispatch layout supports the second traversal without
changes. Its ordinary recursive C preserves matrix push/apply/pop, optional node
callbacks, resource/flag checks and child/sibling order, including one inlined level.
The draw entry selects its prepare/apply path and installs the requested callback.
Small wrappers retain original input/float forwarding and fixed callback addresses.
Names remain provisional; callback identity follows the referenced entry address.

The five 16-byte draw wrappers initially differ by eight bytes: a literal callee
expression reverses argument/callee load order and their literals. Declared external
callees recover each complete range. The other three first candidates are exact.
Twenty-nine snapshots form thirteen binary groups. Each final source matches twice.

Two fresh exact builds per checkout, exact integrated image, five-function proof,
53 research tests and 58 public tests pass. Source-only rejects 4,112,780 bytes
without altering artifacts. Focused exports validate on a disposable database copy.
No parked target is reopened and no investigation-only bytes are credited.

Stage 118 commit 3152dde is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work are preserved. Reviewed public
changes receive privacy scans before publication; research remains uncommitted.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into the blended transform preparation dependencies.


## Blended transform preparation and decomposition, stage 120

Three new exact functions replace **556 bytes** in three modules. Totals are
**521 functions / 469 modules / 50,688 compiled bytes / 4,112,224 retained reference
bytes**, or **1.2176% whole-image coverage**. All 518 preceding matches and prior
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| prepare_blended_transform | 0x8c0c40f8 | 72 |
| decompose_blended_transform | 0x8c0c4140 | 360 |
| apply_blended_transform | 0x8c0c42a8 | 124 |

The checked 16-byte input contains two animation pointers and their frame values.
Preparation selects state1 then state0, configures each input/frame and stores the
blend amount. Decomposition preserves two 52-byte local transform groups, optional
Euler conversion for each rotation kind, weighted position/scale components and the
quaternion blend call. Application preserves the existing translation, rotation-kind
switch and scale sequence with the alternate decomposition dependency.

Preparation and application match on their first candidates. Decomposition initially
has 360 bytes / 17 differences, all FR14/FR15 operands. Declaring inverse before amount,
without changing evaluation order, assigns the observed saved floating registers and
matches all 360 bytes. This does not establish the parked primary operation's separate
FR1 reuse pattern; that target remains incomplete and is not reopened.

Ten snapshots form four binary groups. Final checked sources match twice independently.
Two fresh exact builds per checkout, exact integrated image, five-function proof,
53 research tests and 58 public tests pass. Source-only rejects 4,112,224 bytes without
altering artifacts. Refreshed focused exports validate on a disposable database copy.
No investigation-only work is credited as additional completion.

Stage 119 commit f701e39 is published and remote checks passed. Original data,
private saves, compiler settings and unrelated work remain preserved. Only reviewed,
privacy-scanned public changes are committed; research remains uncommitted.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into quaternion and matrix dependencies.


## Quaternion blend with compiler intrinsic, stage 121

One new exact function replaces **180 bytes**. Totals are **522 functions /
469 modules / 50,868 compiled bytes / 4,112,044 retained reference bytes**, or
**1.2219% whole-image coverage**. All 521 preceding functions and their source/header
files are preserved. Standalone reconstructed data remains zero.

The quaternion blend at **0x8c0c4324** captures both four-float inputs, selects addition
or subtraction from the dot-product sign, and normalizes using the observed reciprocal
square-root instruction. Zero and unordered dot products retain the subtraction path.
No runtime object or assembly source is substituted.

The local CodeWarrior manual lists reciprocal-square-root support, but its public
fsrra spelling produces an unresolved external call. Inspection of the pinned compiler
identifies __fsrra; this intrinsic emits every one of the 178 instruction bytes under
the unchanged compiler and flags. The standalone unit omits two natural alignment
bytes. Compiling with the actual adjacent, already-matched draw function produces
**228 exact bytes**, including the complete 180-byte blend and existing 48-byte draw.
No artificial padding is added. The manifest replaces the old draw module with this
combined source; its original source and declared dependencies remain preserved.
The draw function is not credited again, and module count remains unchanged.

Five source snapshots include one link failure and two distinct successful binaries.
Final combined source matches twice independently. Two fresh exact builds per checkout,
exact integrated image, five-function proof, 53 research tests and 58 public tests pass.
Source-only rejects 4,112,044 bytes without altering artifacts. Refreshed focused exports
validate on a disposable database copy. All parked blockers retain their counts.

Stage 120 commit 807099e is published and remote checks passed. Public changes receive
staged review and privacy scans; private data and original saves are preserved.
Research remains uncommitted. Reproduce with `python3 -B tools/verify_source.py`,
the test suite and expected source-only rejection. Continue into related sine/cosine
and Euler conversion routines using compiler evidence, without changing flags.


## Bounded Euler and quaternion investigation, stage 122

**No new matching functions and no new compiled bytes.** Coverage remains
522 functions / 469 modules / 50,868 compiled bytes / 4,112,044 retained reference
bytes (1.2219% whole-image coverage). The matching manifest and every existing
source/header remain unchanged. Three incomplete targets are explicitly parked.

| Target | Complete-range result | First difference | Persistent hypotheses |
| --- | --- | --- | ---: |
| euler_to_quaternion_0, 0x8c0c3704 | 270 generated /272 expected;36 differing including missing bytes | 0x8c0c37b7 | 4 |
| euler_to_quaternion_1, 0x8c0c3814 | 270 generated /272 expected;36 differing including missing bytes | 0x8c0c38c5 | 4 |
| interpolate_quaternion, 0x8c0c3c14 | 324 generated /320 expected;252 differing including length | 0x8c0c3c2a | 3 |

Compiler diagnostics establish the built-in __fsca signature as long/void*/void*,
rather than the manual's float-pointer form. Correcting the declaration reproduces
the paired sine/cosine and first two Euler components. The last two components still
have 34 instruction-byte differences; two alignment bytes are also absent. Splitting
the first product gives40 differences; right-grouping the second gives38. Park both
until independent exact sequential triple-product/FR reuse evidence appears. Genuine
adjacent grouping is appropriate only after the instruction differences are resolved.

Quaternion interpolation preserves twenty-byte keys, signed-dot fraction adjustment,
weighted components and external square-root normalization. Baseline324/254 improves
to324/252 by reversing commutative dot operands. A direct condition instead of a named
dot temporary reproduces the baseline. Dot/fraction lifetimes and first-component
pointer retention still differ. Revisit only with independent exact escaped-fraction
lifetime evidence or verified different call/source context.

Fourteen snapshots include two compile failures and eight distinct successful binaries.
Checked provisional sources reproduce the best incomplete results without admission.
All complete mismatch offsets and persistent counts are in the unresolved queue.
Two fresh exact builds per checkout, exact integrated image, five-function proof,
53 research tests and58 public tests pass. Source-only rejection preserves existing
artifacts. Refreshed focused exports validate on a disposable database copy.

Stage121 commit e581b1b is published and remote checks passed. This checkpoint records
failed hypotheses, not increased completion. Compiler flags, private data, original
saves and unrelated work remain preserved. Continue immediately to other credible
functions; do not repeat equivalent source variations on these parked targets.


## Effect lifecycle and target helpers, stage 123

Seven new exact functions replace **456 bytes** in seven modules. Totals are
**529 functions / 476 modules / 51,324 compiled bytes / 4,111,588 retained reference
bytes**, or **1.2329% whole-image coverage**. All 522 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| clear_inactive_target | 0x8c0c36d4 | 48 |
| reset_effect_table_state | 0x8c0a6bdc | 44 |
| create_effect_c674 | 0x8c0ac674 | 80 |
| create_effect_d2a8 | 0x8c0ad2a8 | 80 |
| create_effect_d2f8 | 0x8c0ad2f8 | 80 |
| destroy_effect_d870 | 0x8c0ad870 | 92 |
| bind_effect_coordinates | 0x8c0ada34 | 32 |

Checked provisional views cover only accessed prefixes. Target cleanup preserves
the flag test and unsigned-short sentinel. The table helper preserves its zero-index
guard and nullable entry. Factories preserve allocation failure and their declared
five-argument initializer dependencies. Resource destruction releases its resource,
invokes base destruction, then conditionally returns storage to the pool according
to a signed-short flag. Coordinate binding preserves the observed mutation of the
input vector's first component before copying the other two coordinates.

The two 404-byte allocation factories initially compile to 80 bytes with 13 differences.
Replacing literal initializer pointers with declared callees produces the observed
argument preservation and call scheduling. The 348-byte factory uses that established
pattern. All other candidates match on their first hypothesis. The coordinate helper's
match does not resolve its parked caller's zero/tag store scheduling; no parked target
is reopened without relevant new evidence.

Twenty-three snapshots form nine binary groups. Final checked sources match twice
independently. Two fresh exact builds per checkout, exact integrated image, the
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,111,588 retained bytes without altering existing artifacts. Focused exports validate
on a disposable database copy. The original primary targets remain incomplete.

Stage 122 commit c8b1a05 is published and remote checks passed; it added no matching
functions or bytes. Original data, private saves, compiler settings and unrelated work
remain preserved. Only reviewed, privacy-scanned public changes are committed.

Reproduce with `python3 -B tools/verify_source.py`, the current test suite and expected
source-only rejection. Continue into effect base destruction and neighboring factories.


## Effect base destruction and resource helpers, stage 124

Five new exact functions replace **332 bytes** in five modules. Totals are
**534 functions / 481 modules / 51,656 compiled bytes / 4,111,256 retained reference
bytes**, or **1.2409% whole-image coverage**. All 529 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| destroy_effect_base | 0x8c0a0104 | 72 |
| release_effect_resources | 0x8c0a01cc | 72 |
| create_effect_b03c8 | 0x8c0b03c8 | 68 |
| create_effect_b040c | 0x8c0b040c | 80 |
| find_effect_resource | 0x8c0a02cc | 40 |

Base destruction preserves dispatch replacement, state at offset 32 clearing, parent destruction
and signed-short conditional pool release. Resource release preserves the one-entry
counted loop and global pointer reset. Factories preserve three/four arguments and
allocation failure. Resource lookup retains its zero default and first equality in
55 entries. Explicit shifted byte addressing replaces the baseline MUL.L/STS stride,
reducing the lookup from 44/40 bytes with 40 differences to the complete exact range.
The other four admissions match on their first candidates.

Investigation-only: forward/back resource copying at 0x8c0a0214/0x8c0a0270 remains
90/92 bytes with 21 differences each: 19 instruction bytes plus 2 missing alignment
bytes. First differences are 0x8c0a0254/0x8c0a02b0. Four distinct hypotheses per target
are recorded. Struct indexing gives 86/92 with 75 differences. Forming each field's
base before byte indexing makes the first two transfers exact. Capturing the final
complete destination changes its addressing and worsens the result to 23 differences;
capturing only its base produces the same binary as field-base indexing. Both targets
are parked. Revisit only with an independent exact final destination-base/source-index
lifetime pattern, then consider genuine adjacent grouping once instructions match.
No copy-function bytes receive completion credit.

Twenty-six snapshots form twelve binary groups. Checked admissions match twice.
Two fresh exact builds per checkout, exact integrated image, five-function proof,
53 research tests and 58 public tests pass. Source-only rejects 4,111,256 bytes without
altering existing artifacts. Refreshed focused exports validate on a disposable copy.
The two original primary targets remain incomplete and were not reopened.

Stage 123 commit 6608052 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into neighboring effect factories and their initializer dependencies.


## Effect factories and timed lifecycle, stage 125

Eight new exact functions replace **612 bytes** in eight modules. Totals are
**542 functions / 489 modules / 52,268 compiled bytes / 4,110,644 retained reference
bytes**, or **1.2556% whole-image coverage**. All 534 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| create_effect_b0fac | 0x8c0b0fac | 80 |
| create_effect_b0ffc | 0x8c0b0ffc | 80 |
| create_effect_b1aa0 | 0x8c0b1aa0 | 80 |
| create_effect_b1af0 | 0x8c0b1af0 | 80 |
| create_effect_b3b80 | 0x8c0b3b80 | 80 |
| initialize_delayed_effect | 0x8c0b3cc4 | 68 |
| destroy_delayed_effect | 0x8c0b3d08 | 68 |
| update_delayed_effect | 0x8c0b3d4c | 76 |

The five factories use the established declared initializer pattern with observed
336-, 404- and 264-byte allocations. Each preserves four forwarded arguments and
allocation failure. The checked 52-byte timed-effect layout contains a dispatch
pointer at 24, signed identity at 32, ticks at 36 and position at 40. Initialization
preserves parent attachment, aggregate vector copying and field-store order.
Destruction preserves the signed-short deletion flag and pool release.

Update increments the stored tick counter and spawns on multiples of 15 while the
counter is at most 45, binding its signed identity only after successful allocation.
Ordinary signed remainder emits the existing runtime dependency. Two initial link
attempts used incorrect symbol spellings; the established project binding
`__l_mods` resolves it without changing source or compiler settings. The helper's
180-byte implementation remains unreconstructed and earns no additional credit.

All eight functions match with their first source hypotheses. Twenty-six snapshots
include two link failures; successful outputs form eight binary groups. Checked
sources match independently twice. Two fresh exact builds per checkout, integrated
image comparison, five-function proof, 53 research tests and 58 public tests pass.
Source-only rejects 4,110,644 bytes without altering artifacts. Focused exports
validate on a disposable database copy. All parked targets retain their counts.

Stage 124 commit d57ff81 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into the template-effect family and initializer dependencies.


## Template effect refresh and lifecycle, stage 126

Three new exact functions replace **168 bytes** in three modules. Totals are
**545 functions / 492 modules / 52,436 compiled bytes / 4,110,476 retained reference
bytes**, or **1.2596% whole-image coverage**. All 542 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| destroy_template_effect | 0x8c0b3af8 | 68 |
| template_effect_noop | 0x8c0b3b7c | 4 |
| refresh_effect_template | 0x8c0b3d98 | 96 |

Refresh copies an entire 64-byte template, converts its signed variant to float,
stores that value, then stores the conversion dependency's return value. The first
candidate's narrow indirect lookup argument omits caller sign extension. Widening
the argument restores the instruction but leaves four register differences; declaring
the direct lookup recovers the complete range. Destruction and the independently
listed empty callback match on their first candidates. Checked provisional types
preserve every accessed offset; the byte/short owner prefix is 34 bytes, corrected
from an initially rejected 36-byte size assertion without changing its offset 32.

Investigation-only: update_template_effect at 0x8c0b3b3c remains 64 bytes with two
differences, first 0x8c0b3b4a. Five hypotheses cover narrow/wide indirect calls,
wide direct calls, the verified unsigned-short direct signature and an explicit
register-qualified id. Narrow calls leave NOP where EXTU.W R4,R4 is observed;
wide direct calls normalize through R1. The register local repeats that output.
It is parked pending an independent exact argument-coalescing pattern or verified
original caller context. No update bytes receive credit.

The initializer at 0x8c0b39cc remains 288/300 bytes with 279 differences, first
0x8c0b39d0. Ordinary C retains the effect in R14 instead of the observed stack home;
actual C++ placement construction produces 320 bytes with 300 differences. It is
parked after two hypotheses, pending an independently exact constructor stack-home
and base-call pattern or verified original context. No initializer bytes receive credit.

Twenty-one snapshots include one failed layout assertion; ten successful binary
groups are recorded. Admissions match twice independently. Two fresh exact builds
per checkout, exact integrated image, five-function proof, 53 research tests and
58 public tests pass. Source-only rejects 4,110,476 bytes without altering artifacts.
Focused exports validate on a disposable copy. Primary targets remain incomplete.

Stage 125 commit 29eb8fb is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into effect-event records and their referenced helpers.


## Effect event records and factories, stage 127

Seven new exact functions replace **488 bytes** in six modules. Totals are
**552 functions / 498 modules / 52,924 compiled bytes / 4,109,988 retained reference
bytes**, or **1.2713% whole-image coverage**. All 545 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| create_effect_b44f4 | 0x8c0b44f4 | 80 |
| initialize_effect_event | 0x8c0b48c4 | 68 |
| send_effect_event | 0x8c0b4908 | 68 |
| reset_effect_event | 0x8c0b494c | 12 |
| effect_event_is_distant | 0x8c0b4958 | 88 |
| create_effect_for_owner | 0x8c0b4b00 | 88 |
| create_effect_at_position | 0x8c0b4b58 | 84 |

Checked event and packet layouts preserve unsigned owner ids, signed indices,
vector positions and tokens. Initialization updates the token only for an owner id
at most four with a nonnull lookup. Packet construction preserves the two untouched
bytes at offset two; no speculative initialization is added. Reset changes only
the first eight bytes. Distance checking retains signed index equality, zero Y,
and the strict 0.2f threshold. An initial transcription used 100.0f; correcting the
independently read 0x3e4ccccd literal changes only its four bytes. Reset's ten-byte
body and the genuine adjacent distance function compile together into the exact
100-byte range, including natural alignment without inserted padding.

The factories preserve 300-byte allocation, nullable owner/allocation paths and
caller-specific position arguments. The fifth initializer argument is provisionally
an integer, as supported by the observed zero/ten call sites; independently checked
sources preserve the same output after declaring that scalar type.

Twenty-one snapshots form nine binary groups. Final checked modules match twice.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,109,988 bytes
without altering artifacts. Focused exports validate on a disposable database copy.
No parked target is reopened or credited as complete.

Stage 126 commit 4d89db5 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into vector-array allocation and transform helpers.


## Vector lookup and array lifecycle, stage 128

Four new exact functions replace **288 bytes** in four modules. Totals are
**556 functions / 502 modules / 53,212 compiled bytes / 4,109,700 retained reference
bytes**, or **1.2782% whole-image coverage**. All 552 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| resolve_vector_reference | 0x8c0c6e64 | 52 |
| initialize_vector_array | 0x8c0c6f8c | 76 |
| allocate_vector_entries | 0x8c0c703c | 96 |
| destroy_vector_array | 0x8c0c709c | 64 |

Checked layouts cover the lookup result, 28-byte entry and 12-byte array prefix.
Lookup copies the vector only after a successful tagged lookup. Initialization
preserves dispatch, allocation, matrix-context setup and fill/end order. Allocation
initializes only the first 16 bytes of each entry; the 12-byte tail is untouched.
Destruction releases the entries, clears their pointer and conditionally releases
the object according to its signed-short deletion flag.

Direct callee declarations fix literal ordering in lookup and initialization.
The allocator additionally requires field-base addressing before the scaled byte
index, recovering three observed ADD orders while preserving alias reloads. The
destructor matches first try. Newly reconstructed recursive fillers confirm an
integer return count; correcting the callers' ignored return declarations leaves
all bytes unchanged. Builds and focused evidence were refreshed after this correction.

Investigation-only: scaled initialization at 0x8c0c6fd8 remains 100 bytes with four
differences, first 0x8c0c7006. Its zero/R6 and this/R4 moves trade places around the
fill call. Declared fill calls, a nonvirtual C++ member context and the verified
integer return type produce the same output. Five persistent hypotheses are recorded.
It is parked pending an independently exact equivalent call schedule or verified
different call context. No scaled-initializer bytes receive completion credit.

Twenty-six snapshots form ten binary groups. Admissions match twice independently.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,109,700 bytes
without altering artifacts. Focused exports validate on a disposable database copy.
The two original primary targets remain incomplete and were not reopened.

Stage 127 commit 5538f64 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into the exact recursive fillers and render-state helpers in the next batch.


## Recursive vector filling and alternate rendering, stage 129

Eight new exact functions replace **636 bytes** in eight modules. Totals are
**564 functions / 510 modules / 53,848 compiled bytes / 4,109,064 retained reference
bytes**, or **1.2935% whole-image coverage**. All 556 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| fill_vector_array | 0x8c0c70dc | 196 |
| fill_scaled_vector_array | 0x8c0c71a0 | 172 |
| draw_with_alternate_dispatch | 0x8c0c76d0 | 88 |
| select_alternate_render_dispatch | 0x8c0c7728 | 20 |
| enable_alternate_render_state | 0x8c0c773c | 36 |
| disable_alternate_render_state | 0x8c0c7760 | 36 |
| configure_alternate_render_state | 0x8c0c7784 | 48 |
| restore_current_render_state | 0x8c0c77b4 | 40 |

The recursive fillers preserve do/while sibling traversal, captured flag bits,
child recursion and the updated entry count. Each 28-byte filled entry contains
its resource and two vectors. Matrix operations, aggregate copies and dependency
calls remain in the observed order; no starting-node null guard is introduced.
Both functions match on their first candidates using the existing checked tree
and array layouts plus a separately checked filled-entry view.

Render helpers preserve flag masks, scalar constants, repeated global loads and
temporary replacement/restoration of the object's dispatch. Five match first try.
The dispatch selector initially folds field addresses into three literals and
produces 28/20 bytes with 22 differences. Named external aggregate globals preserve
base-plus-field relocations, yielding the exact 20 bytes. Their runtime contents
remain unresolved; declarations do not add standalone reconstructed data credit.

Twenty-five snapshots form nine binary groups. Checked admissions match twice.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,109,064 bytes
without altering artifacts. Focused exports validate on a disposable database copy.
All parked targets retain their persistent counts and revisit conditions.

Stage 128 commit 8b46da2 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into neighboring actor-state and position helpers.


## Actor-state access and updates, stage 130

Seven new exact functions replace **184 bytes** in seven modules. Totals are
**571 functions / 517 modules / 54,032 compiled bytes / 4,108,880 retained reference
bytes**, or **1.2979% whole-image coverage**. All 564 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| cache_actor_position | 0x8c0c7d14 | 28 |
| actor_mode_allows_action | 0x8c0c7d50 | 28 |
| get_actor_state_value | 0x8c0c7d6c | 12 |
| get_actor_position | 0x8c0c7d78 | 12 |
| set_actor_action_kind | 0x8c0c7d84 | 64 |
| mark_actor_flag_2 | 0x8c0c7dc4 | 20 |
| mark_actor_flag_2000 | 0x8c0c7f0c | 20 |

The checked provisional actor prefix preserves vector offsets 120/804, signed
mode at 778, flags at 1000, action at 1008 and the returned pointer at 1056.
Position caching is an aggregate copy. The action helper sets flag 1 and maps
0/1/2 to 4/5/6, preserving the previous action for other inputs. Other helpers
preserve flag bits and pointer identity.

Six baseline candidates match. The mode predicate initially produces 28 bytes
with 13 differences: two return paths replace the observed common return. A
zero-initialized result assigned only when mode is neither 5 nor 6 reproduces
the common return and branch-delay initialization exactly. Twenty-two snapshots
form eight binary groups; all seven checked admissions match independently twice.

Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,108,880
bytes without changing existing build artifacts. Focused exports validate on a
disposable database copy. All parked targets retain their counts and conditions.

Stage 129 commit a1b6643 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into neighboring state-transition and virtual-call helpers.


## Actor virtual callbacks and action dispatch, stage 131

Five new exact functions replace **404 bytes** in five modules. Totals are
**576 functions / 522 modules / 54,436 compiled bytes / 4,108,476 retained reference
bytes**, or **1.3076% whole-image coverage**. All 571 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| run_actor_activation_callbacks | 0x8c0c7eac | 48 |
| run_actor_release_callbacks | 0x8c0c7edc | 48 |
| update_actor_transition | 0x8c0c7fc4 | 128 |
| dispatch_actor_action | 0x8c0c8044 | 140 |
| handle_actor_idle_event | 0x8c0c80d0 | 40 |

The callback wrappers use observed actor vptr offset 24 and virtual-table offsets
396/408 and 400/404. The transition updater uses the embedded interface at 1016,
its vptr at 20 and callbacks 24/28. Checked C++ views reproduce implicit this
adjustment and virtual dispatch. Separate flag clears and mutually exclusive
activation/release branches remain intact. These three functions match first try.
The idle-event switch also matches first try, including its explicit empty cases.

The action dispatcher initially matches all instructions and literals except
seven jump-table addresses. GNU drops the compiler's explicit RELA addends;
the already-established pinned native linker resolves them exactly. The C source
and compiler flags are unchanged. Both linker comparisons remain in scratch.

Investigation-only work adds no completion credit: request_actor_activation
is 44/12 differing (first 0x8c0c7df0), release_actor_activation is 48/52 bytes with
42 differences (first 0x8c0c7e4a), activate_actor_state is 48/38 differing and
deactivate_actor_state is 48/36 differing (both first differ at entry). Their
persistent unsuccessful hypothesis counts are 3, 3, 4 and 4. Inline C pointer
helpers and C++ flag-subobject methods repeat prior outputs. Genuine embedded
virtual calls correctly reproduce the tail-call context but leave the first
flag-address materialization unresolved (44/48 bytes). All four are parked early:
revisit only with an independent exact field-address update pattern or verified
source/ABI evidence. Precise offsets and checked comparisons are in the queue.

Thirty-four snapshots form twelve binary groups. Five admissions independently
match twice; four parked checked sources reproduce their best comparisons.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,108,476
bytes without changing build artifacts. Focused exports validate on a disposable
copy. Prior parked targets retain their counts and revisit conditions.

Stage 130 commit ca6706c is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into actor position reset and neighboring effects/helpers.


## Actor motion and offset-effect controls, stage 132

Seven new exact functions replace **400 bytes** in five modules. Totals are
**583 functions / 527 modules / 54,836 compiled bytes / 4,108,076 retained reference
bytes**, or **1.3173% whole-image coverage**. All 576 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| reset_actor_motion | 0x8c0c7f20 | 164 |
| enter_actor_mode_9 | 0x8c0c9114 | 32 |
| set_actor_raised_position | 0x8c0c9174 | 80 |
| initialize_offset_effect | 0x8c0ccdc0 | 80 |
| activate_offset_effect | 0x8c0cce10 | 8 |
| activate_offset_effect_immediately | 0x8c0cce18 | 12 |
| offset_effect_threshold_reached | 0x8c0cce24 | 24 |

All first candidates match. Motion reset copies origin into position, clears
three velocity floats, passes a stack copy to virtual slot 436, updates flag
0x800 from the result and calls the observed finalizer. It extends the independently
matched actor virtual layout; accessed offsets and total prefix size are checked.
The signed mode helper requests mode 9 only when needed. Raised-position copying
adds 22 to the base Y component and then copies the complete position to its cache.

Offset-effect initialization preserves the chained negative-30 assignments,
conditional allocation/initialization of an 84-byte child and final zero store.
Three genuine adjacent control functions share a module, supplying their natural
alignment. The threshold test is the negation of less-than negative 10, preserving
its unordered floating-point behavior. No bytes or stores were added for padding.

Fifteen snapshots form five binary groups. All checked admissions independently
match twice. Two fresh exact builds per checkout, integrated-image comparison,
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,108,076 bytes without changing build artifacts. Focused exports validate on a
disposable copy. All parked targets retain their counts and revisit conditions.

Stage 131 commit 406d2a9 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into node-array lifecycle and its counting/filling helpers.


## Node-array destruction and recursive walks, stage 133

Three new exact functions replace **280 bytes** in three modules. Totals are
**586 functions / 530 modules / 55,116 compiled bytes / 4,107,796 retained reference
bytes**, or **1.3240% whole-image coverage**. All 583 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| destroy_node_array | 0x8c0cd5fc | 64 |
| count_node_array_tree | 0x8c0cd7b4 | 108 |
| fill_node_array_tree | 0x8c0cd920 | 108 |

All three match on their first candidates. The destructor preserves reverse
release order, pointer clearing, null guard and signed short deletion flag.
The two walks use the existing checked transform tree layout, guard resource/data
pointers, visit siblings and recurse into children. Ordinary recursive C generates
the observed two-level inline expansion under the unchanged compiler settings.
The array prefix and resource data pointer have checked sizes and offsets.

Investigation-only: initialize_node_array remains parked after five distinct
unsuccessful hypotheses. Its best complete result is 116 bytes with 47 differences,
first at 0x8c0cd5b4. Explicit unsigned byte-count shifts remove multiplication,
but the second allocation emits one SHLL2 where two SHLLs are observed. Final
global cursor stores and argument lifetimes also differ. sizeof products repeat
the baseline; a paired-16-bit sizing expression is worse; declaring the independently
matched void fill callee repeats the best binary. Revisit only with new evidence
for two-stage allocation scaling and cursor-store scheduling or verified element
context. Precise offsets and persistent count are recorded in the queue.

Fifteen snapshots form six binary groups. All checked admissions independently
match twice; the checked initializer retains its exact mismatch without credit.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,107,796
bytes without changing build artifacts. Focused exports validate on a disposable
copy. All prior parked targets retain their counts and revisit conditions.

Stage 132 commit 197d0b4 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into the count/fill walkers' command-stream helpers.


## Actor wait event and position ring, stage 134

Three new exact functions replace **228 bytes** in three modules. Totals are
**589 functions / 533 modules / 55,344 compiled bytes / 4,107,568 retained reference
bytes**, or **1.3295% whole-image coverage**. All 586 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| handle_actor_wait_event | 0x8c0c9910 | 76 |
| destroy_position_ring | 0x8c0cbae8 | 92 |
| append_position_ring | 0x8c0cbb44 | 60 |

All three match on their first candidates. The event helper preserves counter
1196, event-specific increment/reset, signed threshold 2 and state request 1.
The ring writer stores a scalar, kind and vector in the current 20-byte entry,
reloads the entry pointer between writes, then advances and wraps the signed
index. Field-base byte addressing reproduces the observed order. The destructor
resets dispatch, releases/clears entries and auxiliary buffer, destroys the base
and conditionally frees through the allocator on a positive signed short flag.
Accessed prefixes, fields and entry sizes are checked.

Investigation-only: count_node_array_chunks remains incomplete at 204 bytes with
131 differences, first 0x8c0cd6f7. Four distinct hypotheses establish that byte-span
arithmetic removes extra MUL2 operations and a widened shared span/counter improves
lifetimes. Named external selection state repeats the best binary. Hoisted masks,
global-address registers and signed-length store scheduling still differ. The
candidate preserves command categories, selection, short negation/truncation and
stream advancement; no match credit is given. It is parked pending independent
exact parser lifetime evidence or verified different source context. The queue
records the persistent count, exact offsets and explicit revisit condition.

Fourteen snapshots form six binary groups. All checked admissions independently
match twice; the checked parser retains its exact mismatch. Two fresh exact builds
per checkout, integrated-image comparison, five-function proof, 53 research tests
and 58 public tests pass. Source-only rejects 4,107,568 bytes without changing
artifacts. Focused exports validate on a disposable copy. Prior parked targets
retain their counts and revisit conditions.

Stage 133 commit 97ed799 is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into additional effect factories and their initialization dependencies.


## Effect factories and operation wrappers, stage 135

Nine new exact functions replace **528 bytes** in nine modules. Totals are
**598 functions / 542 modules / 55,872 compiled bytes / 4,107,040 retained reference
bytes**, or **1.3421% whole-image coverage**. All 589 preceding matches and their
sources/headers are preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| create_effect_b55a0 | 0x8c0b55a0 | 80 |
| create_effect_b55f0 | 0x8c0b55f0 | 80 |
| run_effect_operation_609c | 0x8c0b5d3c | 32 |
| run_effect_operation_6174 | 0x8c0b5d5c | 32 |
| run_effect_operation_5dbc | 0x8c0b5d7c | 32 |
| run_effect_operation_5f6c | 0x8c0b5d9c | 32 |
| create_effect_b7684 | 0x8c0b7684 | 80 |
| create_effect_b7ca0 | 0x8c0b7ca0 | 80 |
| create_effect_b7cf0 | 0x8c0b7cf0 | 80 |

All first candidates match. The factories preserve four opaque arguments, the
stack-passed fifth initializer argument, null allocation return and initializer
result. Observed allocation sizes are 404, 404, 344, 360 and 360 bytes. Their
initializers remain reference-dependent; factory matches do not reconstruct them.

Operation wrappers forward resource fields 248/260, vector addresses 204/216 and
the original argument through exact tail calls. Accessed offsets and prefix size
are checked. Following all four callees establishes that they return the shared
result-buffer address. The provisional wrapper/callee return types were corrected
to pointer and recompiled twice, preserving every byte. Both full-build/proof/test
sequences and the focused export were then refreshed; earlier receipts remain in
scratch. Unused forwarded parameters are not repurposed or removed.

Thirty-five snapshots form nine binary groups. All final admissions independently
match twice. Two fresh exact builds per checkout, integrated-image comparison,
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,107,040 bytes without changing artifacts. Focused exports validate on a disposable
copy. All parked targets retain their counts and revisit conditions.

Stage 134 commit 4a58f8f is published and remote checks passed. Compiler settings,
original data, private saves and unrelated work remain preserved. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into the operation wrappers' target scans and their vector dependencies.


## Effect target scan and query predicate, stage 136

Two complete matches replace **252 bytes**: `scan_four_effect_targets` at
0x8c0b609c (216 bytes) and `effect_query_is_true` at 0x8c0b62b0 (36 bytes).
Totals: **600 functions / 544 modules / 56,124 compiled bytes / 4,106,788 retained
reference bytes / 1.3482% whole-image coverage**. All 598 previous matches and
source/header hashes are preserved. Standalone reconstructed data remains zero.

The scanner clears the shared 16-entry result buffer, copies the observed vector,
checks four targets with squared radius 10000, records nonzero results and retains
the signed count clamp to 15. Field-base addressing with explicit unsigned byte
offsets removes compiler-generated MUL4 indexing and exactly matches the complete
range. Accessed fields and sizes are checked. The shared result address lies
outside the decoded image; its declaration does not reconstruct static data.

The query predicate preserves its null return and normalizes the callee result to
integer zero or one. The pinned compiler disables the C++ bool keyword; no flag
was changed. Integer conditional normalization matches the observed SUBC/add-one
sequence and complete 36-byte range.

Investigation-only work adds no credit:

- `scan_active_effect_targets`, 0x8c0b6174: **276/280 bytes, 260 differing**, first
  0x8c0b617c. Three distinct unsuccessful hypotheses. Explicit byte offsets remove
  MUL4; separate clear/scan indices still save three GPRs instead of four and leave
  the flag mask loaded within the loop. Revisit only with independently exact
  scan/index/resource/mask lifetimes or verified source context.
- `effect_kind_is_one`, 0x8c0b628c: **32/36 bytes, 21 differing**, first 0x8c0b6294.
  Four hypotheses, including the unsupported bool declaration. A single inline
  comparison preserves outer truth normalization but emits one EXTUW where the
  reference emits two. A nested getter exceeds the existing inline depth and
  produces an out-of-line call. Revisit only with independent exact redundant
  unsigned-word promotion evidence or verified source context.

Seventeen snapshots form nine binary groups. Final admitted sources match twice.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,106,788
bytes without altering existing artifacts. Focused exports use a disposable copy;
the original database is preserved. All earlier parked counts remain unchanged.

Stage 135 commit 7c34120 is published with successful remote checks. Reproduce
with `python3 -B tools/verify_source.py`, the current tests and expected source-only
rejection. Continue through other effect factories and scalar/vector dependencies.


## Effect factories and scalar value update, stage 137

Five complete matches replace **400 bytes** in five modules. Totals are
**605 functions / 549 modules / 56,524 compiled bytes / 4,106,388 retained reference
bytes / 1.3578% whole-image coverage**. All 600 preceding matches and source/header
hashes remain unchanged. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| create_effect_b29c8 | 0x8c0b29c8 | 80 |
| create_effect_b9488 | 0x8c0b9488 | 80 |
| apply_effect_15_value | 0x8c0b96e0 | 80 |
| create_effect_ba96c | 0x8c0ba96c | 80 |
| create_effect_bada4 | 0x8c0bada4 | 80 |

The four factories match on their first candidate, preserving allocations of 424,
348, 348 and 264 bytes, null returns, stack-passed arguments and initializer results.
Their initializer bodies remain reference-dependent.

The scalar helper obtains category 15's value, adds signed index times five
converted to float, conditionally multiplies by data field 120 and applies the
result. The first candidate differed in two bytes: the loaded value and converted
integer occupied opposite floating registers. Separate loading and compound
accumulation establishes the observed FR15 lifetime and matches all 80 bytes.
The accessed data prefix has checked offset/size; its contents remain unreconstructed.

Sixteen snapshots form six binary groups. Each final admission matches twice.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,106,388
bytes while preserving existing artifacts. Focused exports validate on a disposable
copy. No parked target was reopened and no failed experiment earns byte credit.

Stage 136 commit ee1d591 is published with successful remote checks. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue effect initialization, adjacent color/vector helpers and referenced data.


## Adjacent color helpers and short-effect lifecycle, stage 138

Nine complete functions in seven modules replace **768 bytes**. Totals are
**614 functions / 556 modules / 57,292 compiled bytes / 4,105,620 retained reference
bytes / 1.3762% whole-image coverage**. All 605 earlier matches and source/header
hashes remain unchanged. Standalone reconstructed data remains zero.

| Function | Address | Full range bytes |
| --- | --- | ---: |
| step_effect_color_components | 0x8c0a030c | 232 |
| step_effect_color_alpha | 0x8c0a03f4 | 76 |
| interpolate_effect_vector | 0x8c0a0440 | 56 |
| create_and_emit_effect_a04e8 | 0x8c0a04e8 | 68 |
| initialize_effect_a052c | 0x8c0a052c | 76 |
| destroy_effect_a0578 | 0x8c0a0578 | 68 |
| create_effect_a061c | 0x8c0a061c | 48 |
| initialize_effect_a064c | 0x8c0a064c | 76 |
| destroy_effect_a0698 | 0x8c0a0698 | 68 |

Color helpers preserve the observed nested comparisons, including unordered float
behavior, rising zero/target clamp and falling target/one clamp. Alpha returns one
only on initial equality. Their first candidates match all instructions but lack
two trailing alignment bytes each. Compiling the actual adjacent color helpers and
already exact vector wrapper together produces the full 364-byte range naturally.
No padding directives or assembly are used. The vector wrapper preserves its stack
temporary and scalar floating copies.

The short-effect constructors install observed resource/dispatch pointers, short
size 120, vector field 36 and zero state 116. Destructors preserve null guards,
base calls and signed-short positive release tests. The first factory always calls
emission after conditional initialization, even if allocation failed. Declaring
the emission callee resolves its literal and argument-load ordering. Checked
provisional headers preserve all accessed offsets and sizes.

Investigation-only: `lookup_effect_index` at 0x8c0a02f4 remains **24 bytes /3
differing**, first 0x8c0a0302. Its load occupies the return delay slot; the reference
loads before RTS and has a NOP delay. Named external array and absolute byte-offset
forms produce identical binaries. Parked after two distinct hypotheses; revisit
only with exact equivalent return-load scheduling or verified source/type/volatile
evidence. No volatile declaration was invented to alter scheduling.

Twenty-eight snapshots form twelve binary groups. Every final admission matches
twice. Two fresh builds per checkout, exact integrated image, five-function proof,
53 research tests and 58 public tests pass. Source-only rejects 4,105,620 bytes and
preserves prior artifacts. Focused evidence validates using a disposable database
copy. Earlier parked counts remain unchanged.

Stage 137 commit cc45fef is published with successful remote checks. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue the matched initializers into their state updates and follow effects.


## Short-effect updates and follow lifecycle, stage 139

Five new complete matches replace **428 bytes**. Totals are **619 functions /
561 modules / 57,720 compiled bytes / 4,105,192 retained reference bytes / 1.3865%
whole-image coverage**. All 614 prior matches and source/header hashes are
preserved. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| update_short_effect_a05bc | 0x8c0a05bc | 96 |
| update_short_effect_a06dc | 0x8c0a06dc | 180 |
| destroy_follow_effect | 0x8c0a0790 | 68 |
| refresh_follow_effect | 0x8c0a07d4 | 32 |
| reset_follow_effect | 0x8c0a07f4 | 52 |

All five first candidates match. The state updates emit four effects on state zero,
then on state one increment signed ticks and set flag one after 60. The extended
variant retains its third-emission Y offset of minus 15 and fourth type 13. The
follow destructor preserves its signed-short release check. Refresh calls capture
then update; reset stores distance 25, zeros fields 48/56 and calls capture then
initialization. Accessed provisional prefixes and offsets are checked.

Investigation-only: `capture_follow_position` at 0x8c0a0828 remains **92 bytes /16
differing**, first 0x8c0a0841. Explicit scalar loads assign height and Y to opposite
floating registers from the reference and alter address/add scheduling. Direct
field expressions worsen to 54 differences. Applying stage137's compound
accumulator pattern reproduces the baseline binary. Parked after three distinct
hypotheses; revisit with independently exact vector construction/capture lifetimes
or verified inline/source context. No matching credit is assigned.

Nineteen snapshots form seven binary groups. Final admissions independently match
twice. Two fresh exact builds per checkout, integrated-image comparison,
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,105,192 bytes without changing existing artifacts. Focused evidence validates
on a disposable database copy. Earlier parked counts remain unchanged.

Stage 138 commit cda8084 is published with successful remote checks. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue through follow-effect base initialization and matrix/vector dependencies.


## Follow-base initialization and destruction, stage 140

Two complete matches replace **216 bytes**: `initialize_follow_base` at 0x8c0a0a94
(148 bytes) and `destroy_follow_base` at 0x8c0a0b28 (68 bytes). Totals are **621
functions / 563 modules / 57,936 compiled bytes / 4,104,976 retained reference bytes
/ 1.3917% whole-image coverage**. All 619 previous matches and source/header hashes
remain unchanged. Standalone reconstructed data remains zero.

Both first candidates match. Initialization preserves its base call, dispatch,
ordered scalar fields, float zero/one and observed fixed float constant, resource
table field 28 and unsigned-short identifier 0xffff. Unknown fields remain untouched.
The destructor preserves its null guard, dispatch reset, base call and signed-short
positive release test. All accessed provisional offsets and sizes are checked.

Investigation-only: `initialize_follow_offset` at 0x8c0a0884 remains **176 bytes /90
differing**, first 0x8c0a089e. Stack-vector zero/distance initialization, matrix/callee
literal order and final scalar-add address lifetimes differ. Declaring the push
callee yields 172/176 bytes with 90 differences. A genuine three-float C++ vector
constructor yields 176/115. No hypothesis improves the starting mismatch. Parked
after three distinct hypotheses; revisit only with an independently exact
stack-vector/matrix-push/output-add context or verified source/inline evidence.
Compiler settings were not changed.

Ten snapshots form five binary groups. Final admissions independently match twice.
Two fresh exact builds per checkout, integrated-image comparison, five-function
proof, 53 research tests and 58 public tests pass. Source-only rejects 4,104,976 bytes
without altering existing artifacts. Focused evidence validates on a disposable
copy. Earlier parked targets retain their counts and conditions.

Stage 139 commit bc6872d is published with successful remote checks. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue other effect/resource initialization and vector/render helpers.


## Call sequences and render-resource lookup, stage 141

Six complete matches replace **624 bytes**. Totals are **627 functions / 569
modules / 58,560 compiled bytes / 4,104,352 retained reference bytes / 1.4067%
whole-image coverage**. All 621 prior matches and source/header hashes remain
unchanged. Standalone reconstructed data remains zero.

| Function | Address | Bytes |
| --- | --- | ---: |
| run_sequence_c5d28 | 0x8c0c5d28 | 160 |
| run_sequence_c6010 | 0x8c0c6010 | 160 |
| run_sequence_c6204 | 0x8c0c6204 | 108 |
| set_particle_duration | 0x8c0c7460 | 16 |
| initialize_render_resource_lookups | 0x8c0c77dc | 176 |
| resource_lookup_noop | 0x8c0c788c | 4 |

All first candidates match. The three sequences preserve all callee order and the
only explicit immediate-one arguments; their provisional names do not assert a
higher-level subsystem identity. The duration setter converts a signed count,
multiplies by the incoming float, adds one and writes field 44.

Resource initialization captures owner.table1068 fields 24 and 12, then performs
two iterations of four distinct lookups from referenced static pointer tables.
Explicit unsigned byte offsets reproduce the shared SHLL2 index and call/result
store order. Source table contents remain reference-dependent; output globals lie
outside the decoded image. Neither declarations nor pointer addresses earn static
data credit. Checked provisional prefixes cover all accessed fields. The adjacent
four-byte no-op is ordinary empty C with exact RTS/NOP output.

Eighteen snapshots form six binary groups. Every final admission independently
matches twice. Two fresh exact builds per checkout, integrated-image comparison,
five-function proof, 53 research tests and 58 public tests pass. Source-only rejects
4,104,352 bytes without modifying existing artifacts. Focused exports validate
using a disposable database copy. No parked target was reopened.

Stage 140 commit 2f573f2 is published with successful remote checks. Reproduce with
`python3 -B tools/verify_source.py`, tests and expected source-only rejection.
Continue into particle updates, their lifecycle and vector/resource dependencies.
