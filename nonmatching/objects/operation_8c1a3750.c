/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a3750
 * function: operation_8c1a3750
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 14 of 52 reference instruction lines
 * differing bytes: 13
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_g8c467180_2c_308 S_g8c467180_2c_308;
typedef struct S_g8c467180_2c_30c S_g8c467180_2c_30c;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x21c];
    int f21c;
    char unknown220[0xe8];
    S_g8c467180_2c_308 *f308;
    S_g8c467180_2c_30c *f30c;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void operation_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1a3750(void)
{
    char *v1;
    S_c8c156bd8 *t1;
    v1 = (char *)g_8c467180->f2c->f21c;
    t1 = operation_8c156bd8((int)((void *)0x8c31db24), 2, (int)(v1));
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f308), 6, 0);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f30c), 6, 1);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c((void *)t1, 224.0f);
    operation_8c157138((void *)t1);
    return t1;
}
