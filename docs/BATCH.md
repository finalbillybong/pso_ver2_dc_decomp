# Reconstruction batch: 236: expanded candidate pool, part 40

55 new matching functions / 6,700 bytes. All 7549 prior functions preserved.

7604 exact functions in 7520 modules; 650,296 compiled function-range bytes; 0 reconstructed data bytes; 3,512,616 retained reference bytes. Whole-image coverage 15.6212% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01bc98 | 0x8c01bc98 | 956 |
| operation_8c04a970 | 0x8c04a970 | 44 |
| operation_8c0889f0 | 0x8c0889f0 | 312 |
| operation_8c0cbebc | 0x8c0cbebc | 140 |
| operation_8c107540 | 0x8c107540 | 136 |
| operation_8c11c880 | 0x8c11c880 | 236 |
| operation_8c11caec | 0x8c11caec | 236 |
| operation_8c122494 | 0x8c122494 | 36 |
| operation_8c15b25c | 0x8c15b25c | 132 |
| operation_8c163ee0 | 0x8c163ee0 | 84 |
| operation_8c165a38 | 0x8c165a38 | 52 |
| operation_8c16e5b0 | 0x8c16e5b0 | 76 |
| operation_8c16e624 | 0x8c16e624 | 40 |
| operation_8c16e64c | 0x8c16e64c | 40 |
| operation_8c16f5a0 | 0x8c16f5a0 | 200 |
| operation_8c16f668 | 0x8c16f668 | 212 |
| operation_8c16f73c | 0x8c16f73c | 52 |
| operation_8c16f88c | 0x8c16f88c | 48 |
| operation_8c16fb48 | 0x8c16fb48 | 148 |
| operation_8c16fbe8 | 0x8c16fbe8 | 40 |
| operation_8c16fc58 | 0x8c16fc58 | 96 |
| operation_8c170108 | 0x8c170108 | 56 |
| operation_8c170448 | 0x8c170448 | 148 |
| operation_8c1704dc | 0x8c1704dc | 148 |
| operation_8c1705cc | 0x8c1705cc | 56 |
| operation_8c170604 | 0x8c170604 | 56 |
| operation_8c17063c | 0x8c17063c | 56 |
| operation_8c170674 | 0x8c170674 | 56 |
| operation_8c1706ac | 0x8c1706ac | 56 |
| operation_8c1706e4 | 0x8c1706e4 | 56 |
| operation_8c17071c | 0x8c17071c | 56 |
| operation_8c170754 | 0x8c170754 | 56 |
| operation_8c17078c | 0x8c17078c | 56 |
| operation_8c170c30 | 0x8c170c30 | 84 |
| operation_8c1713a4 | 0x8c1713a4 | 60 |
| operation_8c171540 | 0x8c171540 | 56 |
| operation_8c171578 | 0x8c171578 | 52 |
| operation_8c171f20 | 0x8c171f20 | 140 |
| operation_8c175268 | 0x8c175268 | 52 |
| operation_8c17621c | 0x8c17621c | 124 |
| operation_8c1766d0 | 0x8c1766d0 | 124 |
| operation_8c179594 | 0x8c179594 | 84 |
| operation_8c184a38 | 0x8c184a38 | 80 |
| operation_8c184a88 | 0x8c184a88 | 144 |
| operation_8c185000 | 0x8c185000 | 48 |
| operation_8c187930 | 0x8c187930 | 84 |
| operation_8c18cb50 | 0x8c18cb50 | 44 |
| operation_8c191684 | 0x8c191684 | 84 |
| operation_8c1b67f4 | 0x8c1b67f4 | 80 |
| operation_8c1b841c | 0x8c1b841c | 72 |
| operation_8c1d21e0 | 0x8c1d21e0 | 68 |
| operation_8c1d7454 | 0x8c1d7454 | 60 |
| operation_8c21f524 | 0x8c21f524 | 32 |
| operation_8c2329b0 | 0x8c2329b0 | 648 |
| operation_8c242988 | 0x8c242988 | 308 |

## Method

Batch 236 comes from one generator cycle over every candidate still unmatched after batch 235 (4,508). The draft generator gained rules for drafts that differed from the reference in 21–40 lines.

**Script interpreter table reads.** Many handlers of one interpreter read operands with `t[(unsigned char)a0++]` from a table pointer loaded from a global:
- A parameter stepped in place between indexed uses keeps the earlier loads in locals, and the last index is written `a0++`. A copy stepped while the old value still indexes a load is also written `t[a0++]`. When the index is already extended or loaded, the step goes into that index.
- A local that is only converted to float becomes a float local.
- The pointer table indexed by the stepped parameter is a table local.
- A copy of a parameter stepped before each use is written `i = a0; i++; x = t[i];`.
- The table is recognised by its shape, not by its address.

**Values kept across a call, branch or loop:**
- An element address held in a callee-saved register and read after a call becomes a local, as does a pool offset added last to a base and index.
- A function pointer loaded once and called twice becomes a local.
- A word loaded in a conditional branch's delay slot and read at the branch target becomes a local.
- Same-block loads still held when the first stack argument is pushed become locals.
- A float computed from memory and read three or more times becomes a float local. A float-to-int result kept across a call becomes an `int` local.
- A value computed before a loop and stored unchanged inside it becomes a local, and a loop pointer keeps its variable in the next loop.
- A constant sign-extended into another register and also used whole becomes an `int` local, written on the left of its compare.

**Element pointers and block copies:**
- An element pointer used before and after a conditional branch is a local. A member beyond the displacement range is reached through a cast of the element address.
- A global block copy whose source sits in the higher scratch register goes through a block-local pointer.
- An indexed table entry read through one register is copied as a block. So is an unrolled copy into an indexed element, and a byte-wise copy of 8 or more bytes becomes a `char` block copy.
- A parameter stored between the other field stores of a frame block is a field of that block, not the parameter's home.

Each rule is guarded by a flag and was narrowed wherever an earlier version lost an exact draft (four functions while the rules were developed, all fixed before the final run).

Calibration: 31/37 on batch 191 and 43/55 on batch 190, both unchanged. The 13 admitted jump-table functions: 8 exact from the generator alone, unchanged. Across the functions admitted in batches 190, 191 and 211–235 and the targets of the previous cycles, no exact draft was lost in any mode.

All remaining candidates were redrafted in one pass. 55 drafts were accepted: exact over their full range, or exact-short with an end that meets the batch 193 boundary rule. Other exact-short drafts are rejected unchanged. No draft was refused by the history guard in this cycle. Previously blocked targets stay blocked, and the three drafts held back in batch 224 remain held back.

Before admission, the boundaries of every unit were checked:
- each entry follows a literal pool (53) or a function end (2);
- no unit overlaps an admitted function or another unit;
- no branch from outside a unit lands in it;
- every entry is 4-aligned.

## Measured attempts

55 recorded attempts on 55 targets, all hypotheses and all exact. 55 units / 55 functions / 6,700 bytes were admitted after two independent reproductions each. All are unedited generated drafts.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- **Hand probes in a separate scratch copy of the generator.** They were used to learn source forms; the rules above came from them. Probed functions admitted in this batch, as generated drafts:
  - `0x8c1705cc`: 18 forms of interpreter table reads (array subscripts, explicit offsets, `int` and `float` locals, post-increment placement, operand order); three were exact.
  - `0x8c1713a4`: four index-copy forms; the copy stepped before each use was exact.
  - `0x8c170c30`: seven forms of locals and a table local; the table local used before the call was exact, in two forms.
  - `0x8c16fc58`: the stepped reads with and without a table local; the table local was exact.
  - `0x8c171540`: four forms of a table entry block copy; with a table local and the frame field read as a member, it was exact.
  - `0x8c01bc98`: a global block copy through a direct assignment, an extern symbol (22 lines each) and a block-local pointer, which was exact.
  - `0x8c04a970`: six forms of a clamp constant (type, assignment position, compare order); one was exact.
  - `0x8c18cb50`: an element pointer as a struct (18 lines), as a byte pointer with a `short` index local (exact) and without the local (18 lines).
  - `0x8c17621c`: an element address computed once per iteration and passed to both calls, which was exact.
  - `0x8c1d7454` and `0x8c1d21e0`: pointer and `short` locals loaded before a call; the forms with both locals were exact.
  - `0x8c1b841c`: an offset local in an element address (exact) and the literal offset (18 lines).
  - `0x8c122494`: a 64-byte block assignment of a table element, which was exact.
  - `0x8c165a38`: four forms of loop-invariant locals; a separate local for each loop was exact, in two forms.
  - `0x8c184a38`: four element-member forms; a member of an element struct was exact.
  - `0x8c191684`: an 8-byte block assignment, exact over a truncated range.
  - `0x8c16f88c`: two store-order and local forms (2 and 6 lines).
  - `0x8c16e624`: table-read forms disclosed in batch 224.
- **Probes on targets not admitted:** `0x8c185378` (five return-type and range-test forms; a `short` return was exact but was not made a rule), `0x8c095870` (four loop-base forms, best 10 lines), `0x8c016f50` (three global-assignment forms, 22 lines), `0x8c1575dc` (four local forms, best 14 lines), `0x8c1869f4` (four element-pointer loop forms, best 20 lines), `0x8c2383a0` (three mask forms, best 18 lines), `0x8c12b084` (three copy-loop forms; library-style code), `0x8c05e6cc` (two mask-test forms, 8 lines), `0x8c060724` (two global-sum forms, best 18 lines), `0x8c08d7fc` (two element forms, best 22 lines), `0x8c043f28` (two angle forms, best 26 lines) and `0x8c02bc00` (nested and goto tails, 6 lines).
- No declaration orders were compared or searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- The interpreter's operand reads were written with the parameter post-incremented inside the index, `t[(unsigned char)a0++]`, and the table pointer kept in a local. Separate `a0++` statements, or the table read inline at each use, change register allocation.
- A block copy from a global was made through a block-local pointer; a direct assignment or an extern symbol swaps the source and destination registers.
- A member beyond the displacement range of an element was written as a member of an element struct, not as a byte offset.
- An element address used by two calls in one loop iteration was computed once into a local.

## Parked and unresolved

- **In-place `extu.w`** and **argument-register order around a call's delay slot** are still treated as not reproducible from source (see batch 215).
- **Register allocation and scheduling** remain the largest group of near misses at 21–40 lines (143 of 777 targets), including swapped loop counter and limit registers.
- **Branch shapes** with `bf` plus `bra` where the draft gets `bt`, and masks that CodeWarrior compiles as `extu.w` where the reference uses `and`, remain unmatched.
- Interpreter handlers that index with an `int` and no byte extension are outside the new rules.
- **Exact-short drafts** that do not meet the boundary rule remain rejected.

Code-only completion and total function count remain unknown.
