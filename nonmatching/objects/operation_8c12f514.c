/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f514
 * function: operation_8c12f514
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 52 of 42 reference instruction lines
 * differing bytes: 77
 * provenance: generator draft (mode uctern)
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
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
int operation_8c12f514(int a0, int a1, int a2)
{
    int v2;
    S_vv1 *v1;
    int v3;
    int v5;
    int v13;
    v13 = (int)/* ? r0 */ 0;
    if ((short)(8 - a2) != 0) {
        v3 = (int)0;
        if (a1 > 0) {
            v1 = (S_vv1 *)a0;
            v2 = (int)0;
            v3 = (int)0;
            do {
                v2 = (int)(v2 + 1);
                v5 = (int)((unsigned char)(v1->f00 & 0xff >> (short)(8 - a2)) << (short)(8 - a2));
                v1->f00 = (unsigned int)(unsigned char)v1->f00 >> (short)a2;
                v1->f00 |= v3;
                v3 = (int)v5;
                v1 = (S_vv1 *)((char *)v1 + 1);
            } while (!(v2 >= a1));
        }
        if ((unsigned char)v3 != 0) {
            return 1;
        }
        v13 = (int)0;
    }
    return (int)(v13);
}
