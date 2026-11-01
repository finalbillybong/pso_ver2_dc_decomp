/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12e56c
 * function: operation_8c12e56c
 * language: c
 * reference size: 28 bytes
 * compiled size: 32 bytes (+14.3%)
 * differing lines: 12 of 10 reference instruction lines
 * differing bytes: 25
 * provenance: generator draft (mode passext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float g_8c285f58;
extern float call_8c12e8a4(int);
float operation_8c12e56c(int a0)
{
    float t1;
    t1 = call_8c12e8a4(a0);
    return g_8c285f58 * t1;
}
