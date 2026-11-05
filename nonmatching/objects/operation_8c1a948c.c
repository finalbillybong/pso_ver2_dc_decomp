/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a948c
 * function: operation_8c1a948c
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 74 of 92 reference instruction lines
 * differing bytes: 65
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
typedef struct S_g8c467180_2c_32c S_g8c467180_2c_32c;
typedef struct S_g8c467180_2c_330 S_g8c467180_2c_330;
typedef struct S_g8c467180_2c_334 S_g8c467180_2c_334;
typedef struct S_g8c467180_2c_338 S_g8c467180_2c_338;
typedef struct S_g8c467180_2c_344 S_g8c467180_2c_344;
typedef struct S_g8c467180_2c_34c S_g8c467180_2c_34c;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x228];
    int f228;
    char unknown22c[0x100];
    S_g8c467180_2c_32c *f32c;
    S_g8c467180_2c_330 *f330;
    S_g8c467180_2c_334 *f334;
    S_g8c467180_2c_338 *f338;
    char unknown33c[0x8];
    S_g8c467180_2c_344 *f344;
    char unknown348[0x4];
    S_g8c467180_2c_34c *f34c;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void add_wrapper_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c15700c(S_c8c156bd8 *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1a948c(void)
{
    char *v1;
    S_c8c156bd8 *t1;
    v1 = (char *)g_8c467180->f2c->f228;
    t1 = operation_8c156bd8((int)((void *)0x8c288d00), 6, (int)(v1));
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f32c), 6, 0);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f330), 6, 1);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f334), 6, 2);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f338), 6, 3);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f344), 6, 4);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f34c), 6, 5);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c(t1, 198.0f);
    operation_8c157138((void *)t1);
    return t1;
}
