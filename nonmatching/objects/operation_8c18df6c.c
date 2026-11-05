/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18df6c
 * function: operation_8c18df6c
 * language: c
 * reference size: 44 bytes
 * compiled size: 36 bytes (-18.2%)
 * differing lines: 16 of 20 reference instruction lines
 * differing bytes: 40
 * provenance: generator draft (mode extern)
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
typedef struct S_vv12 S_vv12;
struct S_vv12 {
    int f00;
};
void operation_8c18df6c(void)
{
    int v11;
    S_vv12 *v12;
    if ((void *)0x8c28460c != 0) {
        v12 = (S_vv12 *)(void *)0x8c28460c;
        goto L_8c18df84;
L_8c18df7e:;
        ((void (*)(void))(v11))();
        v12 = (S_vv12 *)((char *)v12 + 4);
L_8c18df84:;
        v11 = (int)v12->f00;
        if (v11 != 0) {
            goto L_8c18df7e;
        }
    }
}
