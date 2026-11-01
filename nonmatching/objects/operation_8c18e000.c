/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e000
 * function: operation_8c18e000
 * language: c
 * reference size: 68 bytes
 * compiled size: 62 bytes (-8.8%)
 * differing lines: 39 of 34 reference instruction lines
 * differing bytes: 55
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -6 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c18e000(int a0, int a1, int a2, int a3)
{
    int v2;
    int v1;
    if (a3 != 0) {
        v1 = (int)-1;
        v2 = (int)(a2 * a3 + a0);
        do {
            ((void (*)(int, int))(a1))((int)(v2 - a2), v1);
            a3 -= 1;
            v2 = (int)(v2 - a2);
        } while (a3 != 0);
    }
}
