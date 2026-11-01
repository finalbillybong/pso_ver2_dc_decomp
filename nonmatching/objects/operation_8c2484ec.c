/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2484ec
 * function: operation_8c2484ec
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 20 of 43 reference instruction lines
 * differing bytes: 13
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
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c510ba0 S_g8c510ba0;
typedef struct S_vv1 S_vv1;
struct S_L8c339ca0 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x14];
    int f24;
    int f28;
    int f2c;
    char unknown30[0x4];
    int f34;
    char unknown38[0x4];
    int f3c;
};
struct S_vv1 {
    char unknown0[0x68];
    int f68;
};
struct S_g8c510ba0 {
    char unknown0[0x6c];
    int f6c;
    int f70;
};
extern S_g8c510ba0 *g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern void operation_8c225d74(void);
void operation_8c2484ec(void)
{
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c510ba0;
    if (v1 != 0) {
        (&g_8c339ca0)->f0c = 0;
        (&g_8c339ca0)->f24 = 0;
        (&g_8c339ca0)->f28 = -1;
        (&g_8c339ca0)->f2c = 0;
        (&g_8c339ca0)->f34 = 0;
        for (v2 = 0; 4 > v2; v2++) {
            *(int *)((char *)&g_8c339ca0.f3c + (v2 << 2)) = 0;
            *(int *)((char *)((char *)&g_8c339ca0 + 0x504) + (v2 << 2)) = 0;
        }
        v1->f68 = 0;
        g_8c510ba0->f6c = 0;
        g_8c510ba0->f70 = 1;
        operation_8c225d74();
    }
}
