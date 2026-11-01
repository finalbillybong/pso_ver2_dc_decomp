/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c102c8c
 * function: operation_8c102c8c
 * language: c
 * reference size: 68 bytes
 * compiled size: 72 bytes (+5.9%)
 * differing lines: 18 of 32 reference instruction lines
 * differing bytes: 66
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct S_vv5 S_vv5;
struct S_vv1 {
    S_vv1_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv5 {
    short f00;
};
extern S_g8c4d53a0 *g_8c4d53a0;
int operation_8c102c8c(int a0)
{
    int v4;
    int v2;
    S_vv1 *v1;
    int v3;
    S_vv5 *v5;
    int pm1;
    v1 = (S_vv1 *)g_8c4d53a0;
    if (v1 == 0) {
        return 0;
    }
    v4 = (int)0;
    v2 = v1->f08;
    v3 = (int)(short)a0;
    while (v2 > v4) {
        a0 = v4 * 0x28;
        if (*(short *)(((char *)v1->f00 + 0x0) + (a0)) == v3) {
            pm1 = 2;
            v5 = (S_vv5 *)(pm1 + (int)v1->f00 + 0x28 * v4);
            v5->f00 = 2 | v5->f00;
            return 1;
        }
        v4 += 1;
    }
    return 0;
}
