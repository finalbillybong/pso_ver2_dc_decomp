/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d1ccc
 * function: operation_8c1d1ccc
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 8 of 127 reference instruction lines
 * differing bytes: 12
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
typedef struct S_g8c467180_2c_434 S_g8c467180_2c_434;
typedef struct S_g8c467180_2c_438 S_g8c467180_2c_438;
typedef struct S_g8c467180_2c_43c S_g8c467180_2c_43c;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x41c];
    int f41c;
    char unknown420[0x14];
    S_g8c467180_2c_434 *f434;
    S_g8c467180_2c_438 *f438;
    S_g8c467180_2c_43c *f43c;
};
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
};
struct Arg0_34 {
    int f00;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern int call_8c21f468(void);
extern int call_8c21f454(void);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void add_wrapper_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d1ccc(Object *o)
{
    S_c8c156bd8 *t2;
    int t1;
    int v1;
    int t3;
    t2 = operation_8c156bd8((int)((void *)0x8c32997c), 3, (int)(g_8c467180->f2c->f41c));
    t3 = call_8c21f468();
    v1 = (int)(0xc - t3);
    t1 = call_8c21f454();
    if (!((t1 + v1) > 0)) {
        call_8c156d48(t2, (void *)(g_8c467180->f2c->f434), 0x16, 0x16, -0x979798);
        call_8c156d48(t2, (void *)(g_8c467180->f2c->f438), 0x16, 0x1a, -0x979798);
    } else {
        add_wrapper_8c156d30(t2, (void *)(g_8c467180->f2c->f434), 6, 0x16);
        add_wrapper_8c156d30(t2, (void *)(g_8c467180->f2c->f438), 6, 0x1a);
    }
    if (((o->f34->f00 & 1)) != 0) {
        add_wrapper_8c156d30(t2, (void *)(g_8c467180->f2c->f43c), 6, 0x1c);
    } else {
        call_8c156d48(t2, (void *)(g_8c467180->f2c->f43c), 0x16, 0x1c, -0x979798);
    }
    t2->f80 = (t2->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)t2, 215.0f, 128.0f);
    operation_8c157138((void *)t2);
    return t2;
}
