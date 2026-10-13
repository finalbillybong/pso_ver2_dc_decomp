# Reconstruction batch: 204: expanded candidate pool, part 8

74 new matching functions / 6,092 bytes. All 3781 prior functions preserved.

3855 exact functions in 3771 modules; 302,088 compiled function-range bytes; 0 reconstructed data bytes; 3,860,824 retained reference bytes. Whole-image coverage 7.2567% is not code completion.

| Function | Address | Complete bytes |
| --- | --- | ---: |
| operation_8c01467c | 0x8c01467c | 24 |
| operation_8c01470c | 0x8c01470c | 32 |
| operation_8c01474c | 0x8c01474c | 32 |
| operation_8c014874 | 0x8c014874 | 32 |
| operation_8c014894 | 0x8c014894 | 24 |
| operation_8c0148cc | 0x8c0148cc | 32 |
| operation_8c0149a8 | 0x8c0149a8 | 32 |
| operation_8c0149c8 | 0x8c0149c8 | 24 |
| operation_8c014a00 | 0x8c014a00 | 32 |
| operation_8c014b20 | 0x8c014b20 | 32 |
| operation_8c014b40 | 0x8c014b40 | 32 |
| operation_8c014cc0 | 0x8c014cc0 | 32 |
| operation_8c014ce0 | 0x8c014ce0 | 32 |
| operation_8c014fcc | 0x8c014fcc | 24 |
| operation_8c02a764 | 0x8c02a764 | 52 |
| operation_8c02af54 | 0x8c02af54 | 108 |
| operation_8c030b94 | 0x8c030b94 | 148 |
| operation_8c054874 | 0x8c054874 | 148 |
| operation_8c07e868 | 0x8c07e868 | 184 |
| operation_8c0dc710 | 0x8c0dc710 | 112 |
| operation_8c0dc79c | 0x8c0dc79c | 88 |
| operation_8c0fbfe0 | 0x8c0fbfe0 | 64 |
| operation_8c0fc020 | 0x8c0fc020 | 72 |
| operation_8c10ac24 | 0x8c10ac24 | 132 |
| operation_8c1147cc | 0x8c1147cc | 72 |
| operation_8c1163f0 | 0x8c1163f0 | 172 |
| operation_8c13bb4c | 0x8c13bb4c | 100 |
| operation_8c157554 | 0x8c157554 | 88 |
| operation_8c159e60 | 0x8c159e60 | 116 |
| operation_8c176438 | 0x8c176438 | 156 |
| operation_8c180ae8 | 0x8c180ae8 | 352 |
| operation_8c1818c0 | 0x8c1818c0 | 96 |
| operation_8c197804 | 0x8c197804 | 64 |
| operation_8c197844 | 0x8c197844 | 64 |
| operation_8c197884 | 0x8c197884 | 120 |
| operation_8c199578 | 0x8c199578 | 68 |
| operation_8c1995bc | 0x8c1995bc | 64 |
| operation_8c1a3864 | 0x8c1a3864 | 96 |
| operation_8c1a6480 | 0x8c1a6480 | 84 |
| operation_8c1adfb8 | 0x8c1adfb8 | 44 |
| operation_8c1bdaa4 | 0x8c1bdaa4 | 88 |
| operation_8c1bee20 | 0x8c1bee20 | 80 |
| operation_8c1cd5ec | 0x8c1cd5ec | 76 |
| operation_8c1cd89c | 0x8c1cd89c | 124 |
| operation_8c1dc390 | 0x8c1dc390 | 100 |
| operation_8c1dc3f4 | 0x8c1dc3f4 | 76 |
| operation_8c1dfb18 | 0x8c1dfb18 | 84 |
| operation_8c1f1610 | 0x8c1f1610 | 140 |
| operation_8c2176d8 | 0x8c2176d8 | 80 |
| operation_8c217aa4 | 0x8c217aa4 | 84 |
| operation_8c21e304 | 0x8c21e304 | 36 |
| operation_8c21e920 | 0x8c21e920 | 64 |
| operation_8c21e960 | 0x8c21e960 | 64 |
| operation_8c21f3c4 | 0x8c21f3c4 | 44 |
| operation_8c2205d0 | 0x8c2205d0 | 64 |
| operation_8c220610 | 0x8c220610 | 64 |
| operation_8c22353c | 0x8c22353c | 40 |
| operation_8c223564 | 0x8c223564 | 40 |
| operation_8c223680 | 0x8c223680 | 40 |
| operation_8c2236a8 | 0x8c2236a8 | 40 |
| operation_8c224438 | 0x8c224438 | 68 |
| operation_8c22447c | 0x8c22447c | 64 |
| operation_8c225228 | 0x8c225228 | 116 |
| operation_8c225338 | 0x8c225338 | 64 |
| operation_8c225d74 | 0x8c225d74 | 44 |
| operation_8c22bc80 | 0x8c22bc80 | 48 |
| operation_8c22bcb0 | 0x8c22bcb0 | 64 |
| operation_8c22c100 | 0x8c22c100 | 144 |
| operation_8c22cde8 | 0x8c22cde8 | 152 |
| operation_8c22d95c | 0x8c22d95c | 204 |
| operation_8c2307ac | 0x8c2307ac | 48 |
| operation_8c2307dc | 0x8c2307dc | 64 |
| operation_8c25784c | 0x8c25784c | 168 |
| operation_8c260688 | 0x8c260688 | 136 |

## Method

Batch 204 is a generator cycle over the remaining expanded candidate pool. The draft generator gained:
- **Argument copied between argument registers:** a value loaded into one argument register and then copied into others (`mov #0,r7; mov r7,r6; mov r7,r5`) is still an argument itself. The generator had been dropping it, which removed the call's last argument.
- **Virtual calls at other vtable-pointer offsets:** an indirect call through `o->fK->fJ` with `o` still in r4 is a C++ virtual call when the class's vtable pointer sits at `K`, not only at 0x18. The class is declared with `K` bytes of data before its first virtual function.
- **Prototypes from the settled layout:** callee prototypes are taken from the final layout pass instead of the first, so a parameter later known to be a structure pointer is no longer declared `int`.
- **Mechanical repair of drafts that did not compile (`fix` variants):** a separate pass recompiles each failing draft, reads the compiler's error line and caret, and adds the integer or pointer cast that the error names. It casts call arguments to the declared parameter types, an assigned value to the variable's type, or both operands of the failing comparison or arithmetic. It retries up to eight times. These casts cost no code on SH-4.

Calibration: 20/37 on batch 191 and 31/55 on batch 190, both unchanged after every rule. No previously exact calibration draft was lost.

## Measured attempts

74 recorded attempts on 74 targets, all hypotheses and all exact. 74 units / 74 functions / 6,092 bytes were admitted after two independent reproductions each:
- 62 are unedited generated drafts from several passes over the remaining candidates (856, 64, 1,256, 144, 1,832, 44 and 260 bytes);
- 12 are mechanically repaired drafts (`fix` variants): `0x8c030b94`, `0x8c180ae8`, `0x8c217aa4`, `0x8c1adfb8`, `0x8c1163f0`, `0x8c197884`, `0x8c1a6480`, `0x8c2176d8`, `0x8c21e304`, `0x8c22c100`, `0x8c22d95c` and `0x8c25784c`. The repair pass made the edits by rule, not by hand. Each repaired source differs from its generated draft only on the lines the compiler rejected.

Disclosure:
- Every admitted function was first found exact in a scratch comparison, as logged under `drafttest/`.
- No admitted source was edited by hand. The repair rules were debugged on `0x8c1adfb8` and on nine failing drafts (`0x8c032b70`, `0x8c03ed70`, `0x8c022c44`, `0x8c056e28`, `0x8c09bac4`, `0x8c0226c4`, `0x8c0dc510`, `0x8c07d900`, `0x8c0612d0`) before the repair pass ran.
- Before each generator rule was added, scratch edits on motivating examples established the idiom: `0x8c0fbfe0` (a member and a free-function virtual call), `0x8c22bc80` (one family member compared after the rule), and `0x8c225d74`/`0x8c1adfb8` (rule tests only).
- Unsuccessful scratch probes, none admitted: `0x8c1567bc` (three prototype forms, one member-call form, four destructor forms and six pragmas), `0x8c0dddcc` (27 return-type, field-type and statement forms), `0x8c04b428` (eight conversion and shared-constant forms) and `0x8c01e180` (seven return-type and declaration forms).
- No declaration orders were searched.
- History-guarded targets stay blocked and were not forced.

Signatures are provisional. Parameter and return types come from the instruction shape and literal use; they are not confirmed against callers. Identifiers are mechanical.

## Observed techniques

- `mov #0,r7` followed by `mov r7,r6` and `mov r7,r5` in a call sequence is a call whose last three arguments are all zero. The constant is materialised once, in the highest argument register.
- A value loaded into an argument register and only tested before a call (`mov.l @r0,r5; tst r5,r5`) is that call's argument. The test does not consume it.
- A class whose first `K` bytes are data and that then introduces virtual functions has its vtable pointer at `K`. A virtual call then loads `@(K,this)` straight from the argument register, before the copy into a callee-saved register is used.

## Parked and unresolved

- A real C++ destructor reproduces the shape of `0x8c1567bc` (vtable store, member clean-up, base destructor with flag 0, then `operator delete` when the flag is positive), except for one residue. The base destructor's `this` is set in the call's delay slot after the flag, and every source form sets it before. Forms tried: base and member sub-objects, polymorphic and non-polymorphic bases, and several pragmas. The same argument-order residue appears in 8c0c6fd8, 8c190ea0, 8c227284 and 8c1d201c.
- A return value loaded with `mov.b`/`mov.w` followed by `rts; nop`, with no extension in the slot (`0x8c01e180`, `0x8c0dddcc`, `0x8c1744b4`), is not reproduced by any return or field type tried. The compiler always puts an extension or the final add in the slot.
- A float constant kept in a register across two divisions (`0x8c04b428`) is reloaded by every source form tried.
- Argument loads followed by `extu.w` in the call's delay slot remain unsolved (see batch 203).

Code-only completion and total function count remain unknown.
