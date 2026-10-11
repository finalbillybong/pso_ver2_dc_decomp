# Reconstruction batch: 195: forward gotos and extension idioms

31 new matching functions / 5,252 bytes. All 2856 prior functions preserved.

2887 exact functions in 2803 modules; 226,820 compiled function-range bytes; 0 reconstructed data bytes; 3,936,092 retained reference bytes. Whole-image coverage 5.4486% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01d728 | 0x8c01d728 | 80 |
| operation_8c0248bc | 0x8c0248bc | 320 |
| operation_8c03c0ac | 0x8c03c0ac | 28 |
| operation_8c052d50 | 0x8c052d50 | 264 |
| operation_8c052e58 | 0x8c052e58 | 260 |
| operation_8c0669ec | 0x8c0669ec | 276 |
| operation_8c0772f8 | 0x8c0772f8 | 120 |
| operation_8c0ad45c | 0x8c0ad45c | 516 |
| operation_8c0ad660 | 0x8c0ad660 | 528 |
| operation_8c1117c8 | 0x8c1117c8 | 36 |
| operation_8c1407e4 | 0x8c1407e4 | 56 |
| operation_8c150c8c | 0x8c150c8c | 84 |
| operation_8c153ef8 | 0x8c153ef8 | 260 |
| operation_8c15b130 | 0x8c15b130 | 96 |
| operation_8c15b190 | 0x8c15b190 | 84 |
| operation_8c18746c | 0x8c18746c | 180 |
| operation_8c1931b0 | 0x8c1931b0 | 36 |
| operation_8c1a169c | 0x8c1a169c | 76 |
| operation_8c1a99c0 | 0x8c1a99c0 | 64 |
| operation_8c1d1840 | 0x8c1d1840 | 216 |
| operation_8c1d1a1c | 0x8c1d1a1c | 280 |
| operation_8c1d1b78 | 0x8c1d1b78 | 188 |
| operation_8c1e58e8 | 0x8c1e58e8 | 24 |
| operation_8c1e5900 | 0x8c1e5900 | 24 |
| operation_8c1ee5e8 | 0x8c1ee5e8 | 220 |
| operation_8c1eeaa4 | 0x8c1eeaa4 | 200 |
| operation_8c217328 | 0x8c217328 | 200 |
| operation_8c22db2c | 0x8c22db2c | 324 |
| operation_8c25358c | 0x8c25358c | 32 |
| operation_8c2535bc | 0x8c2535bc | 32 |
| operation_8c25e194 | 0x8c25e194 | 148 |

## Method

Batch 195 is the second autonomous cycle. The draft generator gained forward `goto` support:
- a branch that leaves its enclosing block becomes `if (cond) goto L;`, or a trailing `goto L;`;
- register values from the incoming paths are merged through variables at each label;
- the walker now continues past a mid-function `rts` while labels remain to be placed;
- gotos whose label is never reached become TODO comments.

The most common blocking shape was a branch leaving its block (530 drafts).

Other generator changes:
- **Arithmetic:** raw addresses are integers and struct pointers step in bytes.
- **Virtual calls** through a dereferenced pointer are parenthesised.
- **Call-result locals** keep stable names across render passes.
- **Ternary returns:**
  - they accept implicit `r0` results and skip dead merge assignments;
  - their return type comes from both branches.
- **Updates through a zero-extended halfword** are written as `x = (x & 0xffff) | k` (CW20).
- **Narrow arguments:** a halfword or byte load passed directly to an unknown callee gives that parameter a narrow type.

Calibration rose from 18/37 to 20/37 for batch 191 and from 21/55 to 23/55 for batch 190, with no exact draft lost.

## Measured attempts

31 recorded attempts on 31 targets, all hypotheses and all exact. 31 units / 31 functions / 5,252 bytes were admitted after two independent reproductions each. The functions are larger than in earlier generator batches (169 bytes on average), because gotos let multi-exit routines through.

Disclosure:
- As before, every admitted function was first found exact in a scratch comparison, logged under `drafttest/`.
- For the masking and narrow-argument rules, one or two scratch edits on the motivating examples established the idiom before it was added to the generator.
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

## Observed techniques

- `mov.w @(r0,rN),rM` straight into an argument register means the callee's parameter is `short`. An `int` parameter makes the compiler load into r0 and add `exts.w`.
- A zero extension kept before an `or` and a halfword store is `x = (x & 0xffff) | k`. Neither `|=` nor an `unsigned short` cast reproduces it.
- Forward gotos reproduce the reference block order for shared tails and `else if` chains.

## Parked and unresolved

Of the 2,141 remaining pool candidates:
- 1,568 drafts compile;
- 12 of those are within two instructions;
- the main remaining blockers are backward branches outside recognised loops, indirect calls through tables, `jmp`/`bsr`, and float conversions.

Code-only completion and total function count remain unknown.
