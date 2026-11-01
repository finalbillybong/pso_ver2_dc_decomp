/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184070
 * function: operation_8c184070
 * language: c
 * reference size: 144 bytes
 * compiled size: 140 bytes (-2.8%)
 * differing lines: 40 of 48 reference instruction lines
 * differing bytes: 104
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_84 S_g8c467180_2c_84;
typedef struct S_g8c467180_2c_88 S_g8c467180_2c_88;
typedef struct S_g8c4dbb34 S_g8c4dbb34;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x84];
    S_g8c467180_2c_84 *f84;
    S_g8c467180_2c_88 *f88;
};
extern S_g8c467180 *g_8c467180;
extern S_g8c4dbb34 *g_8c4dbb34;
extern void operation_8c184100(void);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(int, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c0dc610(void *, float);
void operation_8c184070(void)
{
    int t1;
    operation_8c184100();
    t1 = operation_8c156c24((int)((void *)0x8c287274), 2);
    g_8c4dbb34 = (S_g8c4dbb34 *)(int)(t1);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f84), 6, 0);
    operation_8c156d30((int)g_8c4dbb34, (void *)(g_8c467180->f2c->f88), 6, 1);
    operation_8c15700c(g_8c4dbb34, 289.0f);
    operation_8c0dc610(g_8c4dbb34, 0.1f);
}
