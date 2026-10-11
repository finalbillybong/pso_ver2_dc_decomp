# PSO CodeWarrior matching cookbook

Use this index before proposing a new source hypothesis. It collects successful
PSO experiments under the pinned Dreamcast CodeWarrior 2.4 compiler and existing
base flags. Each entry links to admitted source and the investigation that
recorded its complete byte match. These are observed source-to-output effects;
they do not establish the compiler's internal pass implementation or the original
source spelling. A technique remains a hypothesis on every new target.

Historical results below are records, not fresh verification receipts. Check the
current [target queue](../config/reconstruction-targets.json), private hypothesis
history and [checkpoint](START_HERE.md) before experimenting. Older notes contain
superseded counts, policies and blocker results; the current
[reconstruction workflow](RECONSTRUCTION_WORKFLOW.md) governs trials and admission.
Reading an old success does not itself justify reopening a parked target.

## Find a mismatch

| Observed symptom | Entry | First distinction to check |
| --- | --- | --- |
| Object stays in a register; reference saves it on the stack | [CW01 Parameter stack homes](#cw01-parameter-stack-homes) | Address-taken parameter versus a volatile object |
| Indexed loads, registers or loop delay slots differ | [CW02 Field scopes and stride lifetimes](#cw02-field-scopes-and-stride-lifetimes) | Which base is loaded before each store |
| Constant uses the wrong register or is hoisted too early | [CW03 Local constant lifetimes](#cw03-local-constant-lifetimes) | Where the constant becomes live |
| Call target literals or call preparation differ | [CW04 External call declarations](#cw04-external-call-declarations) | Declaration, binding and reviewed ABI |
| Correct instructions but switch-table destinations are wrong | [CW05 Explicit relocation addends](#cw05-explicit-relocation-addends) | Compiler object versus linked image |
| Instructions match but two trailing bytes are missing | [CW06 Natural adjacent alignment](#cw06-natural-adjacent-alignment) | Actual neighboring function and complete section |
| A nonfinite test is short or has an extra extension | [CW07 Materialized predicate results](#cw07-materialized-predicate-results) | Integer result, mask and explicit comparison |
| Halfword loads or stores have the wrong extensions | [CW08 Integer widths and narrowing](#cw08-integer-widths-and-narrowing) | Full-width intermediate versus narrow temporary |
| Table access uses the wrong base or address addition | [CW09 Integer offset lifetimes](#cw09-integer-offset-lifetimes) | Address computation order and checked width |
| Multiply appears where the reference shifts | [CW10 Signed values and unsigned shifts](#cw10-signed-values-and-unsigned-shifts) | Negative-input behavior before changing arithmetic |
| Hardware operation becomes an unresolved external call | [CW11 Compiler intrinsic spelling](#cw11-compiler-intrinsic-spelling) | Actual compiler recognition and declaration |
| Integer-zero and float-zero call setup exchange positions | [CW12 Mixed argument scheduling](#cw12-mixed-argument-scheduling) | Logical argument order and physical register banks |
| One representative matches and related functions remain | [CW13 Family propagation](#cw13-family-propagation) | Independent boundaries and full comparison per sibling |
| Two global stores load their addresses in the wrong order | [CW14 External data symbols](#cw14-external-data-symbols) | Address-cast global versus externally bound object |
| Large-offset access uses `add` instead of `@(r0,rN)` | [CW15 Struct fields for indexed offsets](#cw15-struct-fields-for-indexed-offsets) | Field declaration versus byte-pointer arithmetic |
| `mov #off,r2; add r0,r2` after loading `@(0x18,rN)` | [CW16 C++ virtual calls](#cw16-c-virtual-calls) | Vtable at 0x18; slot (off-8)/4 |
| Field RMW goes through `add` into a separate pointer register | [CW17 Scoped field pointers](#cw17-scoped-field-pointers) | Pointer used only for the read-modify-write |
| Offset constant held in a saved register; registers permuted | [CW18 Hoisted offsets and declaration order](#cw18-hoisted-offsets-and-declaration-order) | Scope start of a named offset; r14, r13, r12 order |
| `base+imm` formed before a scaled index is added | [CW19 Cast barriers against reassociation](#cw19-cast-barriers-against-reassociation) | Intermediate pointer cast |
| Byte value extended twice; variadic arguments on the stack | [CW20 Extension and argument details](#cw20-extension-and-argument-details) | Explicit unsigned cast; last named parameter |
| Allocation result stored to the stack before inlined initialization; base and derived vtable stores | [CW21 Factory and inlined-constructor homes](#cw21-factory-and-inlined-constructor-homes) | Raw first call, scoped home, data externs |
| Failure return last; self-branch traps; `cmp/eq` loop exit | [CW22 Guard layout, traps and loop tests](#cw22-guard-layout-traps-and-loop-tests) | Wrapped valid path, `for (;;)`, `!=` test |

First locate the residual: instructions, literals, jump table or missing bytes.
Inspect the object before blaming source for a linked-address mismatch. A matching
prefix, plausible pseudocode or lower difference count is insufficient. Preserve
alias-sensitive reloads, repeated operations, null behavior and floating-point
edge cases shown by the reference. Keep canonical checked headers and declare
dependencies in the manifest.

## CW01 Parameter stack homes

**Observed fix.** In `initialize_spawn_base` at `0x8c0ab3bc`, the first candidate
was 344 bytes against 340 expected. Taking the incoming object's address retained
its observed stack home. Scoped object snapshots around reciprocal branches then
removed redundant reloads; separating a resource-ID argument resolved the final
six register-selection bytes. The complete 340-byte range matched.

The constructor at `0x8c1abe00` independently illustrates the distinction: direct
C emitted 168 bytes against 184 expected. A scoped address-taken parameter restored
stack residence, and an external angle declaration resolved the remaining ten
scheduling bytes. Its unused address alias is consumed with a void cast.

**Use and limit.** Look for an actual parameter home in the reference before trying
this form. Do not add volatile accesses to manufacture storage: that constructor's
volatile-pointer diagnostic emitted 196 bytes. Address-taking also produced the
right size but an incomplete result on the larger spawn constructor.

**Evidence:** [stage 21](RECONSTRUCTION.md#shared-spawned-effect-initializer-and-lifecycle-stage-21),
[spawn source](../src/effects/initialize_spawn_base.c);
[stage 78](RECONSTRUCTION.md#base-child-construction-and-callbacks-stage-78),
[child source](../src/objects/operation_1abe00.c).

## CW02 Field scopes and stride lifetimes

**Observed fix.** `copy_resource_fields` at `0x8c033c84` matched all 148 bytes using
separate source-field scopes, destination-column declaration order, and an explicit
twelve-byte stride initialized after the loop index. These changes respectively
resolved indexed addressing, register choices and the final delay-slot pair.

**Use and limit.** Follow the reference's source reloads and destination columns.
This function reloads the shared buffer between stores; caching it across both
stores would change possible alias behavior. Predict a particular register or
instruction-order change rather than trying arbitrary declaration permutations.

**Evidence:** [stage 32](RECONSTRUCTION.md#resource-copy-and-load-wrappers-stage-32),
[source](../src/objects/copy_resource_fields.c).

## CW03 Local constant lifetimes

**Observed fix.** `load_resource_sized` at `0x8c033d18` uses a named failure
sentinel scoped after the length query. That lifetime reproduced the separate
comparison register in the complete 176-byte match. An early sentinel, a const
sentinel, reversed comparison and unsigned/pointer alternatives did not match.

**Use and limit.** Compare the constant's load and last use with neighboring call
results. A named temporary is useful only when its lifetime explains the residual.
In the text-buffer update, a local six-entry bound initialized after index zero
resolved the final eleven register/scheduling differences; this is a second
concrete example, not a universal declaration-order rule.

**Evidence:** [stage 32](RECONSTRUCTION.md#resource-copy-and-load-wrappers-stage-32),
[loader source](../src/objects/load_resource_sized.c);
[stage 37](RECONSTRUCTION.md#text-buffer-initialization-and-update-stage-37),
[text-buffer source](../src/ui/text_buffer.c).

## CW04 External call declarations

**Observed fix.** The two position-query wrappers at `0x8c0421f4` and `0x8c042258`
had ten differing call/literal bytes each. External query declarations resolved
them; the complete 100- and 124-byte ranges matched. The child constructor in CW01
also needed an external angle declaration after its stack-home correction.

**Use and limit.** Check the callee's parameter classes, return type and address
binding before comparing an external declaration with a literal function pointer.
Retain the manifest binding and checked shared types. A changed declaration must
describe a supported ABI; fewer differing bytes do not establish a signature.
The query wrappers' failure path recopies the original input, including when the
input and output alias; preserve that path while changing call representation.

**Evidence:** [stage 45](RECONSTRUCTION.md#adjacent-model-angle-and-query-helpers-stage-45),
[position source](../src/math/query_vector_position.c),
[position and normal source](../src/math/query_vector_position_normal.c).

## CW05 Explicit relocation addends

**Observed fix.** `keyboard_character` at `0x8c01e1f4` had matching instructions
but 34 differing switch-table bytes. All 17 linked entries pointed to the function
entry. The untouched compiler object contained the correct target offsets as
explicit nonzero `R_SH_DIR32` RELA addends, which the default GNU path did not apply.
The pinned native CodeWarrior linker produced the exact 264-byte range.

**Use and limit.** Inspect object relocations and linked table entries first.
For this diagnosed case the existing manifest supports `"linker": "codewarrior"`;
GNU remains the default. Preserve the compiler and flags, and use the driver's
existing allocated-section, metadata-stripping and complete-range checks. Do not
copy a reference table or patch output. An objcopy round trip alone did not fix
this case.

**Evidence:** [stage 38](RECONSTRUCTION.md#keyboard-translation-and-explicit-native-linking-stage-38),
[source](../src/ui/keyboard_character.c), [driver](../tools/matching.py).

## CW06 Natural adjacent alignment

**Observed fix.** The text-buffer initializer generated its 46 instruction bytes
but lacked two alignment bytes. Compiling it with the fully reconstructed actual
neighbor, the 660-byte update, produced the complete 708-byte section. Likewise,
quaternion blending generated 178 matching instruction bytes; grouping it with
the actual adjacent 48-byte draw function produced 228 exact bytes, including the
blend's full 180-byte range.

**Use and limit.** Review real adjacency and compile the functions in the observed
order. Require the entire combined section to match and preserve the old function's
coverage without counting it twice. Never shorten the expected range or insert
artificial padding. The Euler candidates in stage 122 still had instruction
differences as well as missing alignment; grouping was not a solution to those
instruction mismatches.

**Evidence:** [stage 37](RECONSTRUCTION.md#text-buffer-initialization-and-update-stage-37),
[text-buffer source](../src/ui/text_buffer.c);
[stage 121](RECONSTRUCTION.md#quaternion-blend-with-compiler-intrinsic-stage-121),
[blend and draw source](../src/math/quaternion_blend_and_draw.c);
[stage 122 limits](RECONSTRUCTION.md#bounded-euler-and-quaternion-investigation-stage-122).

## CW07 Materialized predicate results

**Observed fix.** The checked normalization wrappers at `0x8c041d40` and
`0x8c041d80` were initially four bytes short. An explicit `!= 0` test retained the
materialized integer classifier result. A local mask with mask-first operand order
resolved the remaining copy/comparison. The final 64- and 104-byte ranges matched.

**Use and limit.** Preserve the observed exponent-mask test for both infinity and
NaN. The admitted helper uses a checked float/word union. Narrow predicate return
types reached the right size but introduced an unwanted extension and still
differed by nine bytes. Applying the local-mask idea to the emission loop did not
improve its result.

**Evidence:** [stage 47](RECONSTRUCTION.md#checked-vector-normalization-stage-47),
[classifier](../src/include/float_classify.h),
[vector source](../src/math/normalize_vector_checked.c),
[XZ source](../src/math/normalize_xz_checked.c).

## CW08 Integer widths and narrowing

**Observed fix.** The object ID setter stores and reloads an unsigned halfword at
offset `0x1b6`, then conditionally copies it. A full-width temporary followed by
a halfword cast reproduced both observed zero extensions. Short temporaries and
inline accessors did not. Its wrapper preserves a signed source halfword at
offset `0x20` and the null-source guard.

**Use and limit.** Establish memory width and signedness from loads, extensions,
comparisons and callers before changing temporaries. A short field does not imply
that every intermediate expression should have short type. Keep the ignored
65535 value and the actual store/reload sequence.

**Evidence:** [stage 57](RECONSTRUCTION.md#random-state-and-id-operations-stage-57),
[setter](../src/objects/set_object_id_1b6.c),
[wrapper](../src/objects/copy_object_id_1b6.c),
[checked layout](../src/include/object_id_fields.h).

## CW09 Integer offset lifetimes

**Observed fix.** Random-table refresh at `0x8c037e04` captures the current word
before computing the source base. Its second loop uses an explicit integer offset
of -92 to reproduce register-mediated address addition. The adjusted base stays
a checked 32-bit integer until the final in-state address is formed. Refresh and
next-word generation matched their complete 76- and 104-byte ranges.

**Use and limit.** Compare address computation order, not only the final address.
Do not create an intermediate C pointer before the object to mimic integer address
arithmetic. The seeding routine separately matched with an explicit byte offset
for its remainder-based index; its `%` dependency binds `__l_mods`, not the initially
tried single-underscore name. That binding does not reconstruct the runtime helper.
The integer-offset technique did not resolve neighboring velocity-store mismatches.

**Evidence:** [stage 58](RECONSTRUCTION.md#subtractive-random-table-generation-stage-58),
[shared refresh implementation](../src/include/random_refresh_impl.h),
[refresh](../src/random/refresh_random_state.c),
[next word](../src/random/next_random_state.c);
[stage 57](RECONSTRUCTION.md#random-state-and-id-operations-stage-57),
[seeding](../src/random/seed_random_state.c).

## CW10 Signed values and unsigned shifts

**Observed fix.** `initialize_effect1_template` at `0x8c0b2558` needed the observed
left shift instead of multiplication by eight. The admitted expression shifts
the unsigned representation and converts back to the pinned 32-bit signed type:
`(int)((unsigned int)(int)effect->index << 3)`. The complete 208-byte range matched,
including behavior for negative short inputs.

**Use and limit.** Check the input's width and range, shift count and target integer
width. Do not replace this with a left shift of a negative signed value. This is
a target-specific observed expression, not a claim of portable equivalence for
arbitrary types or ranges. Preserve the repeated predicate and static scale reads.

**Evidence:** [stage 156](RECONSTRUCTION.md#indexed-effect-templates-stage-156),
[source](../src/effects/initialize_effect1_template.c),
[checked layout](../src/include/indexed_effect_template.h).

## CW11 Compiler intrinsic spelling

**Observed fix.** The manual's `fsrra` spelling generated an unresolved external
call. Inspection of the pinned compiler identified `__fsrra`; declared as
`extern float __fsrra(float);`, it emitted the observed reciprocal-square-root
instruction and the blend's 178 instruction bytes. CW06 describes the natural
alignment needed for the complete admitted range.

**Use and limit.** Confirm recognition and the declaration in the actual compiler,
then check all surrounding arithmetic and registers. The blend retains its
subtraction branch for zero and unordered dot products. A neighboring investigation
found a `__fsca` signature of `long, void *, void *`, but correcting that declaration
did not complete either Euler conversion. An intrinsic discovery is not a complete
function match, and does not authorize assembly substitutions or flag changes.

**Evidence:** [stage 121](RECONSTRUCTION.md#quaternion-blend-with-compiler-intrinsic-stage-121),
[source](../src/math/quaternion_blend_and_draw.c),
[stage 122 unresolved conversions](RECONSTRUCTION.md#bounded-euler-and-quaternion-investigation-stage-122).

## CW12 Mixed argument scheduling

**Observed fix.** `update_actor_mode_zero` at `0x8c0c25c4` had four differences in
integer-zero and float-zero call preparation. Placing float before integer in the
logical prototype kept actor in R4, integer in R5 and float in FR4, while producing
the observed FLDI0 delay slot. The complete 108-byte range matched.

**Use and limit.** Trace each physical argument bank and the callee's accesses.
This example supports that specific mixed scalar call; it does not justify
reordering same-bank parameters or guessing aggregate ABIs. Swapping aggregate
and float arguments on the neighboring mode-one update produced identical output
and did not resolve its six-byte residual. Earlier emission/reuse delay-slot
blockers also remain unresolved in the current checkpoint.

**Evidence:** [stage 159](RECONSTRUCTION.md#actor-mode-requests-and-update-stage-159),
[source](../src/effects/update_actor_mode_zero.c), [current blockers](START_HERE.md).

## CW13 Family propagation

**Observed result.** The contact/vector continuation obtained four exact
representatives totaling 724 bytes, then ten exact siblings totaling 2,636 bytes.
Those 3,360 new bytes were admitted with previously collected candidates. Failed
representatives and their hypotheses remained in the accounting.

**Use and limit.** Expand only after an exact representative explains the complete
related implementation. Review each sibling's boundaries, literal bindings,
calling convention and existing coverage before compiling; compare every member's
whole range. The existing destructor generator is another reusable example, not a
generic detector for arbitrary destructor layouts. Reuse unchanged negative screens
and hypothesis history instead of rediscovering them. Preserve current batch and
parking limits from the workflow.

**Evidence:** [verified continuation](THROUGHPUT.md#verified-parallel-continuation--2026-10-09),
[pattern generator workflow](RECONSTRUCTION_WORKFLOW.md#proven-patterns),
[trial and integration driver](../tools/reconstruct.py).

## CW14 External data symbols

**Observed fix.** `set_value_reset_8c1dbcbc` stores a parameter to `0x8c4e2f88`
and zero to `0x8c4e2f80`. Address-cast globals loaded and stored each address in
turn (5 of 20 bytes differed). Declaring both as `extern int` objects bound in the
unit's `symbols` loaded both addresses and the zero before the stores, matching the
complete 20-byte range. The same evidence reopened `enable_pair_8c1cc4b4`, whose
chained-assignment attempt had failed, and generated the 20-member mode-select family
(`select_mode0_8c1cc49c` and siblings). `copy_scale_8c07afd8`, `shift_state_8c0eccac`
and `store_pair_8c1876c0` also matched first time with this form.

**Use and limit.** Use it when two or more global addresses are live before the
first store, or when a literal base plus a runtime field offset is not folded
(`check_and_load_8c0ea6d8` reproduced `add #0xe` this way but still differs by loop
registers). Single-global accessors matched with ordinary address casts. Binding
names an address; it does not reconstruct the data.

**Evidence:** [set and reset](../src/objects/set_value_reset_8c1dbcbc.c),
[pair](../src/objects/enable_pair_8c1cc4b4.c),
[mode family](../src/objects/select_mode0_8c1cc49c.c), batch 189 in [BATCH.md](BATCH.md).

## CW15 Struct fields for indexed offsets

**Observed fix.** `clear_flag2_8c028828` clears bit 1 at offset `0x5c0`. Byte-pointer
arithmetic emitted `add r0,r4` and a 20-byte result against 16 expected; declaring
the word as a struct field reproduced `mov.l @(r0,r4)` and the complete 16 bytes.
`target_inactive_8c10ec8c` shows the limit: a struct form did not resolve its
double halfword extension, and that target is parked.

**Use and limit.** Prefer fields when the reference reads or writes through
`@(r0,rN)` with the offset in r0. Keep the observed width and signedness of each
field; padding arrays only position fields and claim no layout knowledge. When the
reference scales a runtime index with shifts, combine the field with an explicit
shifted byte offset (CW10), as in the table accessors at `0x8c1a6604`.

**Evidence:** [flag clear](../src/objects/clear_flag2_8c028828.c),
[table accessor](../src/objects/table_first_8c1a6604.c), batch 189 in [BATCH.md](BATCH.md).

## CW16 C++ virtual calls

**Observed fix.** The dispatch pair `0x8c112fb0`/`0x8c15e91c` was parked because C
function-pointer forms never materialized the slot offset in r2. A scratch C++ probe
calling a virtual method through a vtable pointer at `0x18` emitted exactly
`mov.l @(0x18,r4),r0; mov #0x64,r2; add r0,r2; mov.l @r2,r0; jmp @r0`. Both targets
matched as `"language": "c++"` units, and 40 of batch 190's 55 admissions are C++.

**Use and limit.** Declare a class with `char unknown0[0x18]` followed by virtual
methods; slot N sits at vtable offset `8 + 4N`. Large offsets use a literal instead of
`mov #imm`. Use `extern "C"` names to keep the manifest entry unmangled, and access
other fields through a separate data struct. `this` placement can still differ
(`0x8c05c0dc` remains parked).

**Evidence:** [dispatch](../src/objects/dispatch64_8c112fb0.cpp),
[state reader](../src/objects/forward_state_8c0749dc.cpp), batch 190 in [BATCH.md](BATCH.md).

## CW17 Scoped field pointers

**Observed fix.** `begin_action_8c13b5d0` sets bit 17 of a status word through
`mov r14,r13; add r0,r13; mov.l @r13`, while later accesses are indexed. A member
function, an inline flags helper and a struct field all compiled indexed. A block-scoped
local pointer to the field reproduced the add-based address and the register reuse that
follows; `hold_state_8c1289a8` matched the same way.

**Use and limit.** Use it only when the pointer form appears for one read-modify-write
and the field is then addressed normally again.

**Evidence:** [begin action](../src/objects/begin_action_8c13b5d0.cpp),
[hold state](../src/objects/hold_state_8c1289a8.cpp).

## CW18 Hoisted offsets and declaration order

**Observed fix.** `notify_children_8c021c4c` keeps `0xbcc` in r13 from just after its mode
test. A named offset local scoped inside that test reproduced the load point and the
fourth saved register; declaring it earlier loaded it too early. In
`no_owned_target_near_8c25aa04` the named offset matched once declarations were ordered
result, counter, offset, giving r14, r13 and r12 as in the reference.

**Use and limit.** This extends CW03. Place the named constant where the reference first
loads it and order declarations by the observed callee-saved registers.
`teams_incomplete_8c2436e4` did not improve with this form and is parked.

**Evidence:** [notify children](../src/objects/notify_children_8c021c4c.cpp),
[owned target](../src/objects/no_owned_target_near_8c25aa04.c).

## CW19 Cast barriers against reassociation

**Observed fix.** `release_child_slot_8c022624` forms `o + 0xbcc` and then adds a shifted
index. Plain arithmetic, subscripts and local base pointers either multiplied or
reassociated; `(char *)(int *)(o + 0xbcc) + (index << 2)` reproduced the order. The same
barrier with a named mask matched the parked `reset_segments_8c05a124` on reopening.

**Use and limit.** Use it when the reference visibly adds the constant before the scaled
index. Nested-loop variants (`0x8c198d30`) need further evidence.

**Evidence:** [slot release](../src/objects/release_child_slot_8c022624.cpp),
[segments](../src/objects/reset_segments_8c05a124.c).

## CW20 Extension and argument details

**Observed fixes.** An explicit `(unsigned char)` cast of an `unsigned char` load emits a
second `extu.b` (`find_selected_8c01e110`). The halfword equivalent with a field reload
needed a `volatile unsigned short` field masked with `& 0xffff` (batch 191,
`raise_marker_8c1cd2f4`, `update_link_8c159fac`). `unsigned short` fields store `0xffff` from a
literal rather than `mov #-1` (`reset_link_8c05bf28`). A variadic debug print keeps the
last named parameter on the stack with the variadic values (`show_key_8c112fbc`).
`0x8c18e8a0` binds as `__l_mods` for `%` in C++ as in C.

**Evidence:** [selection](../src/objects/find_selected_8c01e110.c),
[key display](../src/objects/show_key_8c112fbc.cpp).

## CW21 Factory and inlined-constructor homes

**Observed fix.** Factories that allocate and then run an inlined initializer pass the raw
allocation to the first base call and address every later store through the stack
(`mov.l r0,@r15` ... `mov.l @r15,rN`). A scoped copy whose address is taken,
`T *self = p; T **home = &self;`, reproduces this (`spawn_item_8c0fc440`,
`spawn_node_8c0a49c8`). Inlined base-class constructors keep `this` both in r14 and on the
stack: the base call and base vtable store use r14 and the derived vtable store uses the
home. A scoped `base` copy of the stack-homed parameter reproduces it for the manager
family `0x8c014694`..`0x8c014f74`. A constant stored to a global and still in r4 at the
next call is that call's argument (`initialize_manager_8c014a7c`).

**Use and limit.** Combine with CW14 data externs; cast-address globals scheduled the
address loads differently in both factories. Field-initialising constructors whose `this`
stays only in r14 (`0x8c0a0058`, `0x8c13fed4`) still differ in temporary-pointer
allocation.

**Evidence:** [item factory](../src/objects/spawn_item_8c0fc440.c),
[node factory](../src/objects/spawn_node_8c0a49c8.c),
[manager](../src/objects/initialize_manager_8c014a7c.c).

## CW22 Guard layout, traps and loop tests

**Observed fix.** When the failure return (`mov #0,r0`) or the bare epilogue comes last,
wrap the valid path in `if (valid) { ... }` instead of returning early
(`create_loader_8c1736ac`, `spawn_beam_8c1c5f48`). Self-branch traps (`bra .; nop`) are
`for (;;) { }` assertions, and repeated `tst` of the same pointer are separate `if (p)`
blocks. A loop ending `mov rN,r0; cmp/eq #k,r0; bf` uses a `!=` test; `<` emitted
`cmp/gt` (`0x8c1f1d38` probe).

**Evidence:** [loader factory](../src/objects/create_loader_8c1736ac.c),
[beam](../src/objects/spawn_beam_8c1c5f48.c).

## Batch 189 transfer notes

CW06 transferred to five more groups: four range lookups at `0x8c190148` with the
exact initializer `0x8c1902c8` (512 bytes), a span/lookup pair, a member selector
and its successor, two bounded byte stores, and a clamp/split pair. A group whose
closing neighbour is already a separate admitted unit cannot be admitted without
changing that unit (`0x8c18b994`). CW13 propagation from one exact representative
supplied most family members in this batch; one unverified template run across
eight members spent a hypothesis on each, so trial a representative first.

## Turn an entry into an experiment

1. Review the queue and persistent history for the entry address. Read both the
   entry's successful example and its limits. A failed application elsewhere is
   useful evidence, not a reason to reset a target's history.
2. Record the selected CW entry, the source difference and a predicted instruction,
   register, relocation or size change in the existing trial specification. Keep
   reference boundaries, base compiler settings and reviewed behavior fixed.
3. Use `tools/reconstruct.py trial` and inspect its complete comparison and compact
   diagnostics. Group identical outputs. A small reproducer can investigate a
   mechanism, but only the target's complete range can establish a match.
4. Follow the current workflow's stopping, reopening, reproduction and integration
   rules. Do not count an isolated experiment or a partial match as admitted bytes.

## Add a reusable finding

Append a stable CW number and add its symptom to the index. Record the precise
symptom, observed source change, target address, complete expected range and
recorded result. Link the admitted source and historical evidence; retain detailed
source/compiler/comparison receipts privately using the existing workflow. Include
failed alternatives and the conditions under which the technique did not transfer.

Label unresolved leads as unresolved and keep them separate from observed fixes.
Do not name an internal compiler pass without supporting evidence. Update current
status in the queue and checkpoint rather than rewriting historical results into
new claims. This cookbook changes no matching rules and earns no reconstructed
bytes by itself.

## Bounded contact pilot: transfer limits

The [2026-10-10 pilot](PILOT_REPORT.md) obtained one complete **44-byte**
`slide_and_dispatch_contact` candidate by composing the admitted slide helper
with the reviewed virtual slot `0x1b4` ABI (CW04/CW13). It remains private and
unintegrated: one exploratory comparison is not an admission receipt. Its
36 instruction bytes and eight literal bytes must stay distinguished.

CW12 did **not** transfer to the 180-byte heading/dispatch representative at
`0x8c05c69c`. Moving the destination pointer after three floats in the logical
prototype preserved the physical argument banks but produced the identical
176-byte output, with 109 differing bytes in the complete comparison. The
heading-store registers, first direction-call scheduling and helper-call delay
slot remain unresolved. Stop after those two unsuccessful hypotheses; this is
not new evidence for reopening the older parked heading/apply target.

Private evidence is retained under `pso-contact-pilot-20261010/trials` in
`slide_and_dispatch_contact_h1`, `turn_slide_dispatch_contact_h1` and
`turn_slide_dispatch_contact_h2`, including source snapshots, compiler identities,
full comparisons and duplicate-output hashes. No compiler probes or third
hypothesis were run. The census also found disputed catalog tails; catalog
adjacency and an exact neighbor alone do not establish a new function boundary.

**Status update (batch 189).** `slide_and_dispatch_contact` was later reproduced
twice and admitted with batch 189; the observations above are unchanged.
