/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a8be8
 * function: operation_8c1a8be8
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 56 of 88 reference instruction lines
 * differing bytes: 51
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
typedef struct S_g8c467180_2c_3e4 S_g8c467180_2c_3e4;
typedef struct S_g8c467180_2c_3e8 S_g8c467180_2c_3e8;
typedef struct S_g8c467180_2c_3ec S_g8c467180_2c_3ec;
typedef struct S_g8c467180_2c_3f0 S_g8c467180_2c_3f0;
typedef struct S_g8c467180_2c_3f4 S_g8c467180_2c_3f4;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x23c];
    int f23c;
    char unknown240[0x1a4];
    S_g8c467180_2c_3e4 *f3e4;
    S_g8c467180_2c_3e8 *f3e8;
    S_g8c467180_2c_3ec *f3ec;
    S_g8c467180_2c_3f0 *f3f0;
    S_g8c467180_2c_3f4 *f3f4;
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
S_c8c156bd8 *operation_8c1a8be8(void)
{
    char *v1;
    S_c8c156bd8 *t1;
    v1 = (char *)g_8c467180->f2c->f23c;
    t1 = operation_8c156bd8((int)((void *)0x8c323fec), 5, (int)(v1));
    t1->f80 = (t1->f80 & 0xffff) | 0x100;
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f3e4), 6, 0);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f3e8), 6, 1);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f3ec), 6, 2);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f3f0), 6, 3);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f3f4), 6, 4);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c(t1, 179.0f);
    operation_8c157138((void *)t1);
    return t1;
}
