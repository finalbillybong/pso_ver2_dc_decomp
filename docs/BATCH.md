# Reconstruction batch: 205: expanded candidate pool, part 9

39 new matching functions / 5,912 bytes. All 3855 prior functions preserved.

3894 exact functions in 3810 modules; 308,000 compiled function-range bytes; 0 reconstructed data bytes; 3,854,912 retained reference bytes. Whole-image coverage 7.3987% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c015e2c | 0x8c015e2c | 156 |
| operation_8c015ec8 | 0x8c015ec8 | 144 |
| operation_8c016070 | 0x8c016070 | 152 |
| operation_8c016278 | 0x8c016278 | 88 |
| operation_8c034c7c | 0x8c034c7c | 104 |
| operation_8c0366dc | 0x8c0366dc | 44 |
| operation_8c04f964 | 0x8c04f964 | 68 |
| operation_8c0541b4 | 0x8c0541b4 | 116 |
| operation_8c08286c | 0x8c08286c | 124 |
| operation_8c0a1ed0 | 0x8c0a1ed0 | 144 |
| operation_8c0dcfb4 | 0x8c0dcfb4 | 100 |
| operation_8c0dd13c | 0x8c0dd13c | 132 |
| operation_8c0dd3e8 | 0x8c0dd3e8 | 168 |
| operation_8c10ab4c | 0x8c10ab4c | 92 |
| operation_8c10e7b0 | 0x8c10e7b0 | 212 |
| operation_8c110980 | 0x8c110980 | 244 |
| operation_8c110e98 | 0x8c110e98 | 220 |
| operation_8c158520 | 0x8c158520 | 40 |
| operation_8c16b2e4 | 0x8c16b2e4 | 80 |
| operation_8c1a3c8c | 0x8c1a3c8c | 116 |
| operation_8c1aab1c | 0x8c1aab1c | 20 |
| operation_8c1ae1ec | 0x8c1ae1ec | 80 |
| operation_8c1dcf9c | 0x8c1dcf9c | 396 |
| operation_8c1e6ce0 | 0x8c1e6ce0 | 256 |
| operation_8c1eacf4 | 0x8c1eacf4 | 160 |
| operation_8c1ead94 | 0x8c1ead94 | 184 |
| operation_8c1eb51c | 0x8c1eb51c | 164 |
| operation_8c1eca04 | 0x8c1eca04 | 228 |
| operation_8c1ecae8 | 0x8c1ecae8 | 300 |
| operation_8c1f007c | 0x8c1f007c | 152 |
| operation_8c238420 | 0x8c238420 | 56 |
| operation_8c238e94 | 0x8c238e94 | 44 |
| operation_8c247b70 | 0x8c247b70 | 60 |
| operation_8c248264 | 0x8c248264 | 88 |
| operation_8c2482bc | 0x8c2482bc | 88 |
| operation_8c25b3cc | 0x8c25b3cc | 288 |
| operation_8c25b8c0 | 0x8c25b8c0 | 264 |
| operation_8c25ea10 | 0x8c25ea10 | 204 |
| operation_8c260934 | 0x8c260934 | 336 |

## Method

Batch 205 is a generator cycle over the remaining expanded candidate pool. The draft generator gained:
- **Post-increment tests:** a store of `g ± 1` back to the same address, followed by a test of the old value, is written `g++`/`g--` inside the test. The separate `g += 1` reloads the value.
- **Return order (`retflip` variants):** a trailing `if (c) return a; return b;` is also tried as `if (!c) return b; return a;`, which swaps the order of the two return blocks.
- **Walking on past an early return:** an unconditional `bra` to the epilogue, with a return value set in its delay slot, ended the walk. A forward branch that lands after it was therefore left as an unresolved `goto`. The walker now continues from that label, as it already did after `rts`. The labelled code then restructures into ordinary `if`/`return` statements. This rule was measured separately on the 656 candidates whose drafts still held unstructured regions.

Calibration: 20/37 on batch 191 and 31/55 on batch 190, both unchanged after every rule. No previously exact calibration draft was lost.

## Measured attempts

39 recorded attempts on 39 targets, all hypotheses and all exact. 39 units / 39 functions / 5,912 bytes were admitted after two independent reproductions each:
- 5 are unedited generated drafts from the full pass over the remaining 4,062 candidates (316 bytes);
- 34 are unedited generated drafts from the pass over the 656 candidates with unstructured regions, after the label rule (5,596 bytes).

The mechanical repair pass from batch 204 was rerun over the remaining compile failures. It made 699 drafts compile, none of them exact, and contributed nothing.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand.
- Before each generator rule was added, scratch edits on motivating examples established the idiom: `0x8c016278` (post-increment), `0x8c0366dc` (return order) and `0x8c238e94` (rule test only, after the label rule).
- Unsuccessful scratch probes, none admitted: `0x8c0244c4` (return-order forms).
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- `add #1` and a store back to the same global, with the compare still on the old value, comes from `g++ > k`. The compiler keeps the loaded value for the test.
- `bra epilogue` with `mov #1,r0` in its delay slot, followed by `mov #0,r0` at a branch target, is `if (c) return 1; return 0;`. The compiler emits the first return's value in the delay slot of the jump to the shared epilogue.

## Parked and unresolved

- The near-miss survey of the remaining same-size drafts now consists of the residues parked in batches 203 and 204:
  - argument order in a call's delay slot (`0x8c01fa18`, `0x8c1567bc`, `0x8c0c6fd8`, `0x8c190ea0`, `0x8c227284`, `0x8c1d201c`);
  - `rts; nop` returns with no extension (`0x8c01e180`, `0x8c0dddcc`, `0x8c1744b4`);
  - `extu.w` in a call's delay slot;
  - a float constant reused across divisions (`0x8c04b428`);
  - a loop bound hoisted into a register (`0x8c0f3970`).
- Unstructured regions still block 622 compiled drafts. The main causes are:
  - variable and constant shifts through `shad`/`shld` (58 functions);
  - 16-bit multiplies (`muls.w`/`mulu.w`);
  - loop exits tested in a delay slot (45 functions);
  - backward branches that do not form a recognised loop (20 functions).

Code-only completion and total function count remain unknown.
