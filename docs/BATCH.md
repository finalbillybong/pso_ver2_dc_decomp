# Reconstruction batch: 212: expanded candidate pool, part 16

42 new matching functions / 5,204 bytes. All 5727 prior functions preserved.

5769 exact functions in 5685 modules; 424,776 compiled function-range bytes; 0 reconstructed data bytes; 3,738,136 retained reference bytes. Whole-image coverage 10.2038% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01fb7c | 0x8c01fb7c | 108 |
| operation_8c02d158 | 0x8c02d158 | 192 |
| operation_8c02db60 | 0x8c02db60 | 108 |
| operation_8c051df8 | 0x8c051df8 | 12 |
| operation_8c07cfbc | 0x8c07cfbc | 100 |
| operation_8c085f2c | 0x8c085f2c | 52 |
| operation_8c0d1190 | 0x8c0d1190 | 160 |
| operation_8c0e6c04 | 0x8c0e6c04 | 40 |
| operation_8c0e6c2c | 0x8c0e6c2c | 40 |
| operation_8c0e8ddc | 0x8c0e8ddc | 76 |
| operation_8c0e9de0 | 0x8c0e9de0 | 40 |
| operation_8c0eb694 | 0x8c0eb694 | 76 |
| operation_8c0ec328 | 0x8c0ec328 | 76 |
| operation_8c0f2764 | 0x8c0f2764 | 160 |
| operation_8c0f2ab4 | 0x8c0f2ab4 | 160 |
| operation_8c0f2e04 | 0x8c0f2e04 | 160 |
| operation_8c0f3190 | 0x8c0f3190 | 160 |
| operation_8c100c7c | 0x8c100c7c | 120 |
| operation_8c103c0c | 0x8c103c0c | 136 |
| operation_8c113f6c | 0x8c113f6c | 144 |
| operation_8c11450c | 0x8c11450c | 152 |
| operation_8c11e5c0 | 0x8c11e5c0 | 224 |
| operation_8c11eabc | 0x8c11eabc | 224 |
| operation_8c11efa4 | 0x8c11efa4 | 224 |
| operation_8c130af4 | 0x8c130af4 | 124 |
| operation_8c135728 | 0x8c135728 | 124 |
| operation_8c1a4d24 | 0x8c1a4d24 | 116 |
| operation_8c1b3af8 | 0x8c1b3af8 | 44 |
| operation_8c1c2a70 | 0x8c1c2a70 | 104 |
| operation_8c1c5650 | 0x8c1c5650 | 112 |
| operation_8c1c616c | 0x8c1c616c | 84 |
| operation_8c1dd6d0 | 0x8c1dd6d0 | 52 |
| operation_8c1e6050 | 0x8c1e6050 | 60 |
| operation_8c1e62b4 | 0x8c1e62b4 | 60 |
| operation_8c1e83fc | 0x8c1e83fc | 628 |
| operation_8c23bee0 | 0x8c23bee0 | 124 |
| operation_8c23c700 | 0x8c23c700 | 204 |
| operation_8c23cabc | 0x8c23cabc | 52 |
| operation_8c23da14 | 0x8c23da14 | 52 |
| operation_8c23fa00 | 0x8c23fa00 | 140 |
| operation_8c251a60 | 0x8c251a60 | 140 |
| operation_8c25f948 | 0x8c25f948 | 40 |

## Method

Batch 212 is a generator cycle over the survey candidates from batches 207 to 211 that did not draft exact. The draft generator gained:
- **Jump-table support, merged from the test copy described in batch 207:**
  - the instructions inside a table's bounds-check window are run, so the subject is known;
  - an unadmitted callee's argument count is read from the argument registers it uses before writing them;
  - float parameters do not count against the integer argument registers;
  - a prototype is upgraded when a later call uses the return value.
- **Check loop:** an inlined loop that scans the words at `0x8c004000` and hangs on a nonzero word is written as the admitted `operation_19584c` writes it:
  - a block with `short i`;
  - an `unsigned int *p`;
  - a named `unsigned int limit = 4096`;
  - the test `if (*p++) for (;;) {}`.

  A direct `0x1000` compare gives the same structure with different register choices; the named limit gives the exact allocation.
- **Global pointer stores:** a pointer stored into an extern global whose declared pointee type differs is cast to the global's type. Without the cast, the extern-symbol drafts did not compile, and they are exact once they do.
- **Positive if/else:** an `if`/`else` whose condition is an `||` of equality tests is written as the `&&` of the negated tests, with the blocks swapped so the fall-through block comes first.

Calibration: 22/37 on batch 191 (previously 20, because the check-loop rule makes two admitted functions exact from the generator alone) and 31/55 on batch 190, unchanged. The 13 admitted jump-table functions: 8 are exact from the generator alone, unchanged.

A rerun of the candidate miner against the updated coverage found only 2 literal references into uncovered code, so that survey is complete.

## Measured attempts

42 recorded attempts on 42 targets, all hypotheses and all exact. 42 units / 42 functions / 5,204 bytes were admitted after two independent reproductions each:
- 13 come from the merged jump-table and arity support (1,804 bytes);
- 16 are check loops (1,288 bytes);
- 9 come from the full leftover rerun with the global pointer cast (1,236 bytes);
- 3 come from the positive if/else rule (672 bytes);
- 1 is hand-edited (204 bytes): `0x8c23c700`.

`0x8c23c700` is admitted from a hand-edited draft. Its 0x18-byte stack frame is used only as two vectors passed by address, so it is written as `Vector3 v[2]`, with `&v[1]` and `v` in place of byte offsets from a frame block. An array has a fixed layout, so no declaration order was involved. The other 41 functions are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- **Hand-edit probes that led to a rule or an admission:**
  - `0x8c02d158` (check-loop forms: post-increment, indexed, inline helper, and the two admitted precedent forms; one probe also swapped two declarations, without effect);
  - `0x8c0f2764` (extern-global cast);
  - `0x8c11e5c0` (if/else orientation, and a float parameter position);
  - `0x8c23c700` (vector array, admitted as noted above).
- **Unsuccessful scratch probes, none admitted:**
  - `0x8c0846d0` (argument casts and the callee's admitted prototype);
  - `0x8c0778c8` (member-function and inline-wrapper forms for argument order);
  - `0x8c23b6c8` (three `unsigned short` argument forms for an in-place `extu.w`);
  - `0x8c10b814` (float parameter position: improves the draft, not exact).
- A block-copy cast variant was tried on a sample of compile failures and left off, because it did not help.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- A named `unsigned` limit variable changes register allocation, not code shape. The compiler gives a named loop bound its own register before the loaded value, which then takes `r0`.
- For `if`/`else` blocks, source order follows address order: the fall-through block is the `then` branch.
- A frame that is only passed by address keeps independent `r15` offsets for each argument when it is an array of vectors. A single block makes one address derive from the other.

## Parked and unresolved

- **Argument-register order around a call's delay slot:** about 26 functions, about 2.7 KB. The reference evaluates the arguments right to left, putting the `r4` copy in the delay slot. No cast, prototype, member-function or inline form tried reproduces this.
- **In-place `extu.w`** for an `unsigned short` argument: about 13 functions.
- **Two-byte-aligned candidates:** about 190 survey candidates start at addresses the matching tool rejects (`base % 4`). Most are probably not real function starts.
- **Float argument position:** placing a float among the integer parameters changes evaluation order. The draft always puts floats last.

Code-only completion and total function count remain unknown.
