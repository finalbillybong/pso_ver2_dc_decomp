# Reconstruction batch: 196: call forms, predicates and restructured guards

63 new matching functions / 5,280 bytes. All 2887 prior functions preserved.

2950 exact functions in 2866 modules; 232,100 compiled function-range bytes; 0 reconstructed data bytes; 3,930,812 retained reference bytes. Whole-image coverage 5.5754% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c020f28 | 0x8c020f28 | 296 |
| operation_8c0220dc | 0x8c0220dc | 208 |
| classify_overflow_8c027844 | 0x8c027844 | 76 |
| operation_8c0298b0 | 0x8c0298b0 | 20 |
| operation_8c02a930 | 0x8c02a930 | 28 |
| operation_8c02b1c4 | 0x8c02b1c4 | 28 |
| operation_8c02c0c4 | 0x8c02c0c4 | 60 |
| operation_8c02c100 | 0x8c02c100 | 72 |
| operation_8c0351c8 | 0x8c0351c8 | 28 |
| operation_8c03c098 | 0x8c03c098 | 20 |
| operation_8c03d338 | 0x8c03d338 | 40 |
| operation_8c0514f4 | 0x8c0514f4 | 136 |
| operation_8c051cf0 | 0x8c051cf0 | 20 |
| operation_8c051d04 | 0x8c051d04 | 20 |
| operation_8c074d44 | 0x8c074d44 | 120 |
| operation_8c0771a0 | 0x8c0771a0 | 36 |
| operation_8c079784 | 0x8c079784 | 88 |
| operation_8c07f950 | 0x8c07f950 | 52 |
| count_mismatch_8c09c920 | 0x8c09c920 | 68 |
| operation_8c0ad90c | 0x8c0ad90c | 32 |
| find_entry_8c0d9e2c | 0x8c0d9e2c | 68 |
| operation_8c0dc780 | 0x8c0dc780 | 28 |
| classify_range_8c0e76d4 | 0x8c0e76d4 | 76 |
| operation_8c0fca30 | 0x8c0fca30 | 124 |
| operation_8c10ce6c | 0x8c10ce6c | 336 |
| operation_8c110278 | 0x8c110278 | 64 |
| operation_8c112f78 | 0x8c112f78 | 56 |
| operation_8c142230 | 0x8c142230 | 56 |
| operation_8c150e84 | 0x8c150e84 | 24 |
| operation_8c163738 | 0x8c163738 | 336 |
| operation_8c163958 | 0x8c163958 | 64 |
| operation_8c17478c | 0x8c17478c | 36 |
| operation_8c1a026c | 0x8c1a026c | 224 |
| update_state_8c1a3944 | 0x8c1a3944 | 460 |
| operation_8c1a7e14 | 0x8c1a7e14 | 228 |
| operation_8c1adf74 | 0x8c1adf74 | 68 |
| operation_8c1afac8 | 0x8c1afac8 | 100 |
| operation_8c1bee00 | 0x8c1bee00 | 32 |
| operation_8c1c9a38 | 0x8c1c9a38 | 44 |
| operation_8c1e2330 | 0x8c1e2330 | 36 |
| operation_8c1e9dc0 | 0x8c1e9dc0 | 72 |
| operation_8c1eed14 | 0x8c1eed14 | 220 |
| operation_8c1ef548 | 0x8c1ef548 | 252 |
| operation_8c2097a8 | 0x8c2097a8 | 28 |
| operation_8c219e2c | 0x8c219e2c | 20 |
| operation_8c219e40 | 0x8c219e40 | 20 |
| operation_8c21da18 | 0x8c21da18 | 28 |
| operation_8c21da5c | 0x8c21da5c | 28 |
| operation_8c21da78 | 0x8c21da78 | 32 |
| operation_8c21da98 | 0x8c21da98 | 28 |
| operation_8c21f354 | 0x8c21f354 | 28 |
| operation_8c22d42c | 0x8c22d42c | 196 |
| operation_8c22ed70 | 0x8c22ed70 | 44 |
| operation_8c238290 | 0x8c238290 | 32 |
| operation_8c238f80 | 0x8c238f80 | 36 |
| operation_8c24522c | 0x8c24522c | 52 |
| operation_8c24564c | 0x8c24564c | 36 |
| operation_8c245670 | 0x8c245670 | 36 |
| operation_8c24770c | 0x8c24770c | 20 |
| operation_8c247f08 | 0x8c247f08 | 36 |
| operation_8c248554 | 0x8c248554 | 48 |
| operation_8c248584 | 0x8c248584 | 48 |
| operation_8c2485f4 | 0x8c2485f4 | 32 |

## Method

Batch 196 is the third autonomous cycle. The draft generator gained:
- **Calls:** `jmp` tail calls, `bsr` calls, and indirect calls through function-pointer casts.
- **Predicates:** a named predicate for the `tst; subc rN,rN; add #1` idiom, which computes `(x != 0)` (CW07).
- **Float results:** float return values when a call's result is read from `fr0`.
- **Restructuring:**
  - nested guards are merged into `&&`/`||` conditions;
  - a guarded forward goto over a block becomes an `if`/`else`;
  - it runs after a first render pass so that dead merge assignments are known.
- **Frame and globals:**
  - indexed frame accesses (`@(r0,r15)`) are now correct;
  - one extern struct is used when a global is accessed both at offset 0 and at a displacement.
- **Narrow arguments:** the rule now applies only to sign-extended loads. A zero extension at the call means an `int` parameter.
- **Two optional variants:**
  - backward gotos with loop-carried variables at the label;
  - calls through function-pointer casts.

Calibration rose from 23/55 to 26/55 on batch 190, with 20/37 unchanged on batch 191.

## Measured attempts

63 recorded attempts on 63 targets, all hypotheses and all exact. 63 units / 63 functions / 5,280 bytes were admitted after two independent reproductions each.

Five were finished by hand: `0x8c1a3944`, `0x8c027844`, `0x8c0d9e2c`, `0x8c09c920` and `0x8c0e76d4`. The edits were:
- dropping a mask;
- swapping comparison operands;
- loop update order;
- initialisation order;
- a `switch` with a ternary tail.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, logged under `drafttest/`.
- The hand-finished five took one or two scratch edits each.
- No declaration orders were searched.
- Two more targets were refused by the history guard as having an uncertain historical count (`0x8c0b628c`, `0x8c21c718`). They are not forced; eight such targets are now listed.

## Observed techniques

- `tst x,x; subc rN,rN; add #1,rN` is `(x != 0)` stored in an int. A following `tst; movt` tests that int, as in `int t = x != 0; return !t;`.
- The `bt; bt; bt; bra` chain before a shared `return 0` comes from a `switch` with grouped cases.
- Comparison operand order fixes the compare's register order: `b < a` and `a > b` both compile to `cmp/gt` but load the operands in a different order.

## Parked and unresolved

Of the 2,085 remaining pool candidates:
- about 1,500 drafts compile;
- 21 of those are within two instructions;
- the rest are mostly register-allocation residues, which are not pursued.

`0x8c13c81c` and `0x8c05be98` differ only in the register holding a zero-extended call argument. Code-only completion and total function count remain unknown.
