/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c237c80
 * function: operation_8c237c80
 * language: c
 * reference size: 48 bytes
 * compiled size: 48 bytes (+0.0%)
 * differing lines: 0 of 17 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x274];
    int f274;
};
extern S_L8c339ca0 g_8c339ca0;
void operation_8c237c80(void)
{
    int v1;
    int v3;
    v3 = (int)0;
    goto L_8c237c9a;
    v1 = (int)0;
L_8c237c90:;
    *(int *)((char *)&g_8c339ca0.f274 + (v1 * 0xa4)) = 0;
    v3 = (int)(v1 + 1);
L_8c237c9a:;
    v1 = (int)v3;
    if (4 > v3) {
        goto L_8c237c90;
    }
}
