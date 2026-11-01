/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3998
 * function: operation_8c0c3998
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 6 of 69 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f440 S_g8c46f440;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
    int f04;
    unsigned short f08;
    unsigned short f0a;
};
struct S_g8c46f440 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    float f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
};
extern int g_8c305fb8;
extern S_g8c46f440 *g_8c46f440;
void operation_8c0c3998(int a0, float f0)
{
    S_vv1 *v1;
    int v3;
    int v2;
    int w;
    v1 = (S_vv1 *)a0;
    if (a0 == 0) {
        v1 = (S_vv1 *)(void *)0x8c2857a0;
    }
    v2 = (int)((v1->f0a & 0xc0) >> 1 >> 1 >> 1 >> 1 >> 1 >> 1 << 2);
    g_8c46f440->f00 = (int)(v1->f00);
    g_8c46f440->f18 = (int)(v1->f04);
    g_8c46f440->f20 = v1->f08;
    g_8c46f440->f14 = f0;
    g_8c46f440->f1c = 0;
    w = (v1->f0a & -0xc1) * 4;
    g_8c46f440->f04 = w;
    g_8c46f440->f08 = w + w;
    v3 = (int)g_8c46f440->f00;
    g_8c46f440->f0c = (int)(v3);
    g_8c46f440->f10 = v3 + g_8c46f440->f04;
    g_8c46f440->f1c = 0;
    g_8c46f440->f24 = (int)(*(int *)((char *)0x8c305fa0 + (v2)));
    g_8c46f440->f28 = (int)(*(int *)((char *)0x8c305fac + (v2)));
    g_8c46f440->f2c = (int)(g_8c305fb8);
}
