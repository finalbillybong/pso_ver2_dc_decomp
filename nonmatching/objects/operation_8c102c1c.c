/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c102c1c
 * function: operation_8c102c1c
 * language: c
 * reference size: 112 bytes
 * compiled size: 108 bytes (-3.6%)
 * differing lines: 40 of 52 reference instruction lines
 * differing bytes: 97
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv8 S_vv8;
typedef struct S_x70544 S_x70544;
struct S_vv1 {
    S_vv1_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv8 {
    short f00;
};
struct S_g8c4d53a0 {
    int f00;
};
struct S_x70544 {
    float f00;
};
extern S_g8c4d53a0 *g_8c4d53a0;
int operation_8c102c1c(int a0)
{
    int v2;
    S_vv1 *v1;
    int v5;
    int v4;
    int v3;
    S_vv8 *v8;
    v1 = (S_vv1 *)g_8c4d53a0;
    if (v1 == 0) {
        return 0;
    }
    v2 = (int)v1->f08;
    v3 = (int)(short)a0;
    v4 = (int)0;
    v5 = (int)0x28;
    while (v2 > v4) {
        if (*(short *)((char *)((char *)v1->f00 + 0x0) + (v4 * v5)) == v3 && ((*(short *)((char *)((char *)v1->f00 + 0x2) + (v4 * v5)) & 1)) != 0) {
            v8 = (S_vv8 *)((int)v1->f00 + 2 + v4 * v5);
            v8->f00 = (unsigned int)v8->f00 >> 1 << 1;
            ((S_x70544 *)(g_8c4d53a0->f00 + 0x1c + v4 * v5))->f00 = -1.0f;
            return 1;
        }
        v4 = (int)(v4 + 1);
    }
    return 0;
}
