# Reconstruction batch: 202: expanded candidate pool, part 6

67 new matching functions / 5,940 bytes. All 3653 prior functions preserved.

3720 exact functions in 3636 modules; 290,844 compiled function-range bytes; 0 reconstructed data bytes; 3,872,068 retained reference bytes. Whole-image coverage 6.9866% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c015ab4 | 0x8c015ab4 | 32 |
| operation_8c01b9c0 | 0x8c01b9c0 | 32 |
| operation_8c01b9e0 | 0x8c01b9e0 | 32 |
| operation_8c025fe8 | 0x8c025fe8 | 112 |
| operation_8c02f7c4 | 0x8c02f7c4 | 84 |
| operation_8c030cc8 | 0x8c030cc8 | 116 |
| operation_8c030d3c | 0x8c030d3c | 136 |
| operation_8c030ff0 | 0x8c030ff0 | 180 |
| operation_8c03be3c | 0x8c03be3c | 56 |
| operation_8c03e264 | 0x8c03e264 | 92 |
| operation_8c04bc10 | 0x8c04bc10 | 56 |
| operation_8c04c604 | 0x8c04c604 | 44 |
| operation_8c051e18 | 0x8c051e18 | 72 |
| operation_8c051e60 | 0x8c051e60 | 64 |
| operation_8c052124 | 0x8c052124 | 40 |
| operation_8c065554 | 0x8c065554 | 36 |
| operation_8c07484c | 0x8c07484c | 88 |
| operation_8c0788ec | 0x8c0788ec | 128 |
| operation_8c097018 | 0x8c097018 | 36 |
| operation_8c09ccfc | 0x8c09ccfc | 64 |
| operation_8c09d64c | 0x8c09d64c | 76 |
| operation_8c0dfb48 | 0x8c0dfb48 | 116 |
| operation_8c0f3918 | 0x8c0f3918 | 60 |
| operation_8c10ecd0 | 0x8c10ecd0 | 80 |
| operation_8c1115d8 | 0x8c1115d8 | 52 |
| operation_8c123d48 | 0x8c123d48 | 68 |
| operation_8c15842c | 0x8c15842c | 36 |
| operation_8c158aa0 | 0x8c158aa0 | 56 |
| operation_8c15b6bc | 0x8c15b6bc | 140 |
| operation_8c172594 | 0x8c172594 | 124 |
| operation_8c17e3bc | 0x8c17e3bc | 44 |
| operation_8c17e42c | 0x8c17e42c | 44 |
| operation_8c186080 | 0x8c186080 | 44 |
| operation_8c18cbb0 | 0x8c18cbb0 | 52 |
| operation_8c19f91c | 0x8c19f91c | 100 |
| operation_8c1a81a0 | 0x8c1a81a0 | 132 |
| operation_8c1c74a8 | 0x8c1c74a8 | 52 |
| operation_8c1c9300 | 0x8c1c9300 | 52 |
| operation_8c1d78a8 | 0x8c1d78a8 | 84 |
| operation_8c1deb8c | 0x8c1deb8c | 44 |
| operation_8c1dfac0 | 0x8c1dfac0 | 88 |
| operation_8c1e2770 | 0x8c1e2770 | 204 |
| operation_8c1e67d0 | 0x8c1e67d0 | 308 |
| operation_8c1e76c8 | 0x8c1e76c8 | 84 |
| operation_8c1e771c | 0x8c1e771c | 128 |
| operation_8c20a7d0 | 0x8c20a7d0 | 60 |
| operation_8c215f7c | 0x8c215f7c | 68 |
| operation_8c2187e8 | 0x8c2187e8 | 100 |
| operation_8c21884c | 0x8c21884c | 96 |
| operation_8c218fa8 | 0x8c218fa8 | 76 |
| operation_8c219100 | 0x8c219100 | 88 |
| operation_8c2191ec | 0x8c2191ec | 152 |
| operation_8c219284 | 0x8c219284 | 52 |
| operation_8c2192b8 | 0x8c2192b8 | 32 |
| operation_8c22752c | 0x8c22752c | 40 |
| operation_8c22e27c | 0x8c22e27c | 80 |
| operation_8c22f180 | 0x8c22f180 | 40 |
| operation_8c2308b0 | 0x8c2308b0 | 36 |
| operation_8c2320e0 | 0x8c2320e0 | 168 |
| operation_8c244258 | 0x8c244258 | 396 |
| operation_8c248474 | 0x8c248474 | 60 |
| operation_8c2484b0 | 0x8c2484b0 | 60 |
| operation_8c258088 | 0x8c258088 | 68 |
| operation_8c25c308 | 0x8c25c308 | 84 |
| operation_8c25c35c | 0x8c25c35c | 128 |
| operation_8c25cc88 | 0x8c25cc88 | 156 |
| operation_8c25ec50 | 0x8c25ec50 | 132 |

## Method

Batch 202 is a generator cycle over the expanded candidate pool. The draft generator gained:
- **Argument registers:** a value written to r4 and still there at a call is that call's argument.
- **Double byte extension:** the compiler extends an `unsigned char` operand twice by itself. A double `extu.b` before a test, compare or `&` is now written as the bare field or load. The explicit `& 0xff` is kept only for a returned value, which then gets an `unsigned char` return type.
- **Literal base plus displacement:** a pool address followed by `add #k` (often in a call's delay slot) is `extern char g_base[]` with `g_base + k`. A folded constant address does not reproduce it.
- **Argument casts:** a 4-byte non-float argument is cast to its prototype's parameter type. This costs no code on SH-4 and lets more drafts compile.
- **Two optional variants (`ucast`, `uctern`):** a single `mov.b; extu.b` is written `(unsigned char)*(char *)p`. Writing `*(unsigned char *)p` can extend twice, for example in a ternary return.

Calibration: 20/37 on batch 191 is unchanged, and batch 190 rose from 29/55 to 31/55. No previously exact calibration draft was lost.

## Measured attempts

67 recorded attempts on 67 targets, all hypotheses and all exact. 67 units / 67 functions / 5,940 bytes were admitted after two independent reproductions each:
- 28 came from the first re-pass over 4,254 candidates;
- 39 came from a second pass over the 3,013 drafts that compiled but differed.

Six of them are exact only under the optional variants.

Disclosure:
- Every admitted function was first found exact in a scratch comparison of a generated draft, logged under `drafttest/`.
- Before each rule was added, a few scratch edits on motivating examples established the idiom. The examples were `0x8c025fe8`, `0x8c0dfb48`, `0x8c15842c` and `0x8c097018`, with one to four edits each.
- The admitted sources are the regenerated drafts, not the hand edits.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- `mov.b; extu.b; extu.b` before `and #k`, `tst` or `cmp/eq` comes from a plain `unsigned char` field used in an expression.
- `mov.l base,rN` with `add #k,rN` in a `jsr` delay slot is an argument of the form `array + k`. A constant address is loaded already folded instead.
- `(unsigned char)*(char *)p` and `*(unsigned char *)p` both load with `mov.b`, but only the first gives one `extu.b` in a ternary return.

## Parked and unresolved

- About 1,100 candidates still fail to compile. In a sample, about 40% are type errors: pointer arithmetic on `void *`, and pointer/int mismatches. The argument cast rule fixed only 18 of 300.
- Fifty drafts that matched only a prefix fail the batch-193 boundary rule, because the following bytes are not decoded code. They are not admitted.
- `0x8c21d3a8` differs only in literal-pool order and is parked.
- Register-allocation residues are not pursued.

Code-only completion and total function count remain unknown.
