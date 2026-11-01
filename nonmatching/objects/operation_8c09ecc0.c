/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ecc0
 * function: operation_8c09ecc0
 * language: c
 * reference size: 188 bytes
 * compiled size: 184 bytes (-2.1%)
 * differing lines: 46 of 78 reference instruction lines
 * differing bytes: 92
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
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_40 S_vv11_40;
struct S_vv11 {
    char unknown0[0x40];
    S_vv11_40 *f40;
};
extern int g_8c44be04;
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern int g_8c46ec50;
extern void operation_8c09ede0(void *, void *);
void operation_8c09ecc0(void)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v10;
    int v12;
    int v9;
    S_vv11 *v11;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v9 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46ec58 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v9 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v10 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v11 = (S_vv11 *)v9;
    v12 = (int)0;
    while (v10 > v12) {
        if (v11->f40 != 0) {
            operation_8c09ede0(g_8c44be8c, (void *)(v11->f40));
            operation_8c09ede0(g_8c44be98, (void *)(v11->f40));
            operation_8c09ede0(*(S_g8c44be9c **)0x8c44be9c, (void *)(v11->f40));
            operation_8c09ede0(*(S_g8c44bea0 **)0x8c44bea0, (void *)(v11->f40));
            v11->f40 = (S_vv11_40 *)0;
        }
        v12 = (int)(v12 + 1);
        v11 = (S_vv11 *)((char *)v11 + 68);
    }
}
