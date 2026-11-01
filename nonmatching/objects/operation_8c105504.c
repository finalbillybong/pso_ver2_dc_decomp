/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c105504
 * function: operation_8c105504
 * language: c
 * reference size: 48 bytes
 * compiled size: 56 bytes (+16.7%)
 * differing lines: 34 of 23 reference instruction lines
 * differing bytes: 52
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_x6448 S_x6448;
struct S_vv3 {
    unsigned short f00;
};
struct S_vv2 {
    int f00;
};
int operation_8c105504(int a0, int a1)
{
    unsigned int v4;
    S_vv3 *v3;
    S_vv2 *v2;
    unsigned int v1;
    v1 = (unsigned int)*(int *)((char *)((S_x6448 *)(a0 + a1)) - 0x1c);
    v2 = (S_vv2 *)a0;
    v3 = (S_vv3 *)(*(int *)((char *)((S_x6448 *)(a0 + a1)) - 0x20) + a0);
    v4 = (unsigned int)0;
    while (v1 > v4) {
        v2 = (S_vv2 *)((int)v2 + (v3->f00 << 2));
        v2->f00 += a0;
        v4 = (unsigned int)(v4 + 1);
        v3 = (S_vv3 *)((char *)v3 + 2);
    }
    return *(int *)((char *)((S_x6448 *)(a0 + a1)) - 0x10) + a0;
}
