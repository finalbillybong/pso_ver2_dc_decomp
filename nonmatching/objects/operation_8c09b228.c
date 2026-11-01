/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09b228
 * function: operation_8c09b228
 * language: c
 * reference size: 196 bytes
 * compiled size: 192 bytes (-2.0%)
 * differing lines: 66 of 86 reference instruction lines
 * differing bytes: 160
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
typedef struct S_g8c46ec10 S_g8c46ec10;
typedef struct S_g8c46ec10_42c S_g8c46ec10_42c;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv6 S_vv6;
struct Arg1 {
    int f00;
};
struct Arg2 {
    int f00;
};
struct S_vv6 {
    int f00;
    int f04;
};
struct S_g8c46ec10 {
    char unknown0[0x42c];
    S_g8c46ec10_42c *f42c;
};
extern int g_8c460900;
extern int g_8c46eb38;
extern S_g8c46ec10 *g_8c46ec10;
extern char g_8c2f5b38[];
extern int operation_8c034c7c(void *);
int operation_8c09b228(int a0, Arg1 *a1, Arg2 *a2, S_vv6 *a3, int a4, int a5)
{
    int v7;
    int v3;
    int v4;
    int v2;
    int v1;
    int t1;
    a1->f00 = 0;
    if (a2 == 0) {
        return (int)(a5);
    }
    v1 = (int)g_8c460900;
    t1 = operation_8c034c7c((void *)v1);
    v2 = (int)(a4 << 1);
    v3 = (int)*(short *)((char *)((char *)(t1 * 0x2c + g_8c2f5b38) + 0x0) + (v2));
    if (*(short *)((char *)((char *)(t1 * 0x2c + g_8c2f5b38) + 0x0) + (v2)) == 0) {
        v3 = (int)1;
    }
    v4 = (int)0;
    v7 = (int)a5;
    while (v3 > v4) {
        if (a2->f00 == 0) {
            a3->f00 = 0;
            a3->f04 = 0;
        } else {
            a3->f00 = 1;
            a3->f04 = (int)(*(int *)((char *)((char *)g_8c46ec10->f42c + 0x8) + (v7 << 4)));
            v7 = (int)(v7 + 1);
        }
        v4 = (int)(v4 + 1);
        a2 = (Arg2 *)((char *)a2 + 4);
        a3 = (S_vv6 *)((char *)a3 + 8);
    }
    g_8c46eb38 = (int)(*(int *)((char *)&a3->f04 + (*(short *)((char *)((char *)v1 + 0x38) + (v2)) << 3)));
    return (int)(v7);
}
