/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f140
 * function: operation_8c12f140
 * language: c
 * reference size: 32 bytes
 * compiled size: 26 bytes (-18.8%)
 * differing lines: 20 of 15 reference instruction lines
 * differing bytes: 32
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
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
struct Arg1 {
    unsigned short f00;
};
void operation_8c12f140(int a0, Arg1 *a1)
{
    S_vv2 *v2;
    int v1;
    v1 = (int)8;
    v2 = (S_vv2 *)a0;
    do {
        v2->f00 = (unsigned int)a1->f00 >> v1;
        v2 = (S_vv2 *)((char *)v2 + 1);
        v1 -= 8;
    } while (!((int)v2 >= (unsigned int)(a0 + 2)));
}
