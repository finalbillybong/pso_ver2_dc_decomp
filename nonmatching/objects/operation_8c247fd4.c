/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c247fd4
 * function: operation_8c247fd4
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 4 of 49 reference instruction lines
 * differing bytes: 2
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
typedef struct S_vv6 S_vv6;
struct S_L8c339ca0 {
    char unknown0[0x20];
    int f20;
};
struct S_vv6 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern void operation_8c2384b0(S_vv6 *, int, int);
int operation_8c247fd4(int a0, int a1, int a2)
{
    int v1;
    S_vv6 *v6;
    int n;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || (n = g_8c339ca0.f20) < 0 || n >= 0x10) {
        return 0;
    }
    v6 = (S_vv6 *)((int)(n * 0x1c + (char *)&g_8c339ca0) + 0x60);
    operation_8c2384b0(v6, a0, 0xc);
    operation_8c2384b0((S_vv6 *)((int)v6 + 0xc), a1, 0xc);
    v6->f18 = a2;
    g_8c339ca0.f20 += 1;
    return 1;
}
