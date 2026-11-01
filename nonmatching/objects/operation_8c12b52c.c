/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b52c
 * function: operation_8c12b52c
 * language: c
 * reference size: 28 bytes
 * compiled size: 32 bytes (+14.3%)
 * differing lines: 14 of 12 reference instruction lines
 * differing bytes: 24
 * provenance: generator draft (mode bgotoext)
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
int operation_8c12b52c(int a0)
{
    if (((*(unsigned char *)((char *)0x8c285e40 + ((unsigned char)a0)) & 2)) != 0) {
        return a0 + -0x20;
    }
    return (int)(a0);
}
