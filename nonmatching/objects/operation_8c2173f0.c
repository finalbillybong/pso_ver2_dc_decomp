/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2173f0
 * function: operation_8c2173f0
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 26 of 62 reference instruction lines
 * differing bytes: 22
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
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_2f8 S_g8c467180_2c_2f8;
typedef struct S_g8c467180_2c_2fc S_g8c467180_2c_2fc;
typedef struct S_g8c467180_2c_390 S_g8c467180_2c_390;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f8];
    int f1f8;
    char unknown1fc[0xfc];
    S_g8c467180_2c_2f8 *f2f8;
    S_g8c467180_2c_2fc *f2fc;
    char unknown300[0x90];
    S_g8c467180_2c_390 *f390;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void add_wrapper_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c2173f0(void)
{
    char *v1;
    S_c8c156bd8 *t1;
    int pm2;
    int pm3;
    v1 = (char *)g_8c467180->f2c->f1f8;
    t1 = operation_8c156bd8((int)((void *)0x8c2e1798), 3, (int)(v1));
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f390), 6, 0xb);
    pm2 = 6;
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f2f8), pm2, 0xf);
    pm3 = 6;
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f2fc), pm3, 0x11);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c((void *)t1, 206.0f);
    operation_8c157138((void *)t1);
    return t1;
}
