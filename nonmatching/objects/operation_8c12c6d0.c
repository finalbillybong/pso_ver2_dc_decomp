/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c6d0
 * function: operation_8c12c6d0
 * language: c
 * reference size: 68 bytes
 * compiled size: 60 bytes (-11.8%)
 * differing lines: 40 of 29 reference instruction lines
 * differing bytes: 62
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
};
int operation_8c12c6d0(float f0, float f1)
{
    Frame frame;
    (&frame)->f00 = f1;
    (&frame)->f04 = f0;
    if ((*(int *)&(&frame)->f04 & 0x7ff00000) != 0x7ff00000) {
        return 0;
    }
    if (((*(int *)&(&frame)->f04 & 0xfffff)) != 0 || *(int *)&(&frame)->f00 != 0) {
        return 1;
    }
    return 2;
}
