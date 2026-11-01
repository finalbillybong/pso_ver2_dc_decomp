/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18df3c
 * function: operation_8c18df3c
 * language: c
 * reference size: 48 bytes
 * compiled size: 40 bytes (-16.7%)
 * differing lines: 10 of 22 reference instruction lines
 * differing bytes: 46
 * provenance: generator draft (mode switch2)
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
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_8 S_vv2_8;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
struct S_vv2 {
    char unknown0[0x4];
    int f04;
    S_vv2_8 *f08;
};
void operation_8c18df3c(void)
{
    S_vv3 *v3;
    S_vv2 *v2;
    int v1;
    v1 = (int)-1;
    while ((v3 = (S_vv3 *)*(int *)0x8c4dbe20) != 0) {
        v2 = (S_vv2 *)v3;
        *(int *)0x8c4dbe20 = (int)(v3->f00);
        ((void (*)(void *, int))(v2->f04))((void *)(v2->f08), v1);
    }
}
