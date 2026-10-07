# Current reconstruction checkpoint

The public repository starts from **39 exact functions in 30 modules**, replacing
3,940 bytes. See [PROGRESS.md](PROGRESS.md) for definitions and the source-bound
verification summary. Start a new checkout with [BUILDING.md](BUILDING.md).

## Unresolved targets

| Target | Complete range | Current result | Next focus |
| --- | --- | --- | --- |
| `operation_45f04` at `0x8c045f04` | 512 bytes | 46 differing bytes; first `0x8c045fdd` | Angle conversions and indirect dispatch |
| `emit_5fbf8` at `0x8c05fbf8` | 388 bytes | 18 differing bytes; first `0x8c05fc43` | Loop register allocation and final-call scheduling |
| `signed_remainder` at `0x8c18e8a0` | 180 bytes | No complete match | Carry state, preserved registers and zero-divisor behavior |

The queue is in `config/reconstruction-targets.json`. Scratch C++ virtual dispatch
reduces the operation diagnostic to 30 differing bytes, but is not admitted. Keep
the fixed C compiler contract unchanged. Preserve repeated radius squaring and
the observed skipped vector initialization; do not introduce speculative fixes.

The last five admitted dependencies were `angle_difference` (28 bytes),
`operation_43fb4` (100), `angle_halfway` (24), `angle_step` (56), and
`choose_emit_slot` (88). They preserve the original 34 matches and replace 296
reference bytes. The two primary targets remain incomplete.

Stage 15 preserved 172 additional scratch trials with six expected rejections.
Literal spellings, assignment trees, constants, wrappers, scoped invariants,
column relationships, declaration context, angle typedefs and calling-convention
syntax produced no improvement. Sources and receipts remain in the original
private research workspace. [RECONSTRUCTION.md](RECONSTRUCTION.md) preserves
historical findings; missing scratch paths are not public build dependencies.

## Iteration commands

```sh
python3 -B tools/verify_source.py --check
python3 -B tools/candidates.py
python3 -B tools/verify_source.py
python3 -B -m unittest discover -s tests -v
python3 -B tools/progress.py --record
python3 -B tools/progress.py --check
```

After resolving these targets, follow their dependencies into effect initialization,
matrix/vector helpers and referenced static data. Full source-only reconstruction
remains the objective. Gameplay, disc repacking and analysis-tool integration are
outside the current batch.
