/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d3908
 * function: operation_8c1d3908
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 14 of 52 reference instruction lines
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
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_2e8 S_g8c467180_2c_2e8;
typedef struct S_g8c467180_2c_2ec S_g8c467180_2c_2ec;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f8];
    int f1f8;
    char unknown1fc[0xec];
    S_g8c467180_2c_2e8 *f2e8;
    S_g8c467180_2c_2ec *f2ec;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void add_wrapper_8c156d30(S_c8c156bd8 *, void *, short, short);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d3908(void)
{
    S_c8c156bd8 *t1;

    t1 = operation_8c156bd8((int)((void *)0x8c289378), 2, (int)((char *)g_8c467180->f2c->f1f8));
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f2e8), 6, 5);

    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f2c->f2ec), 6, 9);
    t1->f80 = (int)(unsigned short)(((int)(int)t1->f80 & 0xffff) | 0x10);
    operation_8c15700c((void *)t1, 223.0f);
    operation_8c157138((void *)t1);
    return t1;
}
