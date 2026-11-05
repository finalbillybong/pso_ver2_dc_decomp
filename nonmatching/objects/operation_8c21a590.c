/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21a590
 * function: operation_8c21a590
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 14 of 80 reference instruction lines
 * differing bytes: 18
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
typedef struct S_c8c21c6fc S_c8c21c6fc;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_2fc S_g8c467180_2c_2fc;
typedef struct S_g8c467180_2c_38c S_g8c467180_2c_38c;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x230];
    int f230;
    char unknown234[0xc8];
    S_g8c467180_2c_2fc *f2fc;
    char unknown300[0x8c];
    S_g8c467180_2c_38c *f38c;
};
struct S_c8c21c6fc {
    int f00;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern int operation_8c1cdc80(void *);
extern S_c8c21c6fc *call_8c21c6fc(int);
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void add_wrapper_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c21a590(Object *o)
{
    int t1;
    S_c8c21c6fc *t3;
    S_c8c156bd8 *t2;
    t1 = operation_8c1cdc80((void *)(o->f24));
    t3 = call_8c21c6fc(t1);
    t2 = operation_8c156bd8((int)((void *)0x8c2e1808), 2, (int)(g_8c467180->f2c->f230));
    add_wrapper_8c156d30(t2, (void *)(g_8c467180->f2c->f38c), 6, 5);
    if (t3->f00 != 0) {
        add_wrapper_8c156d30(t2, (void *)(g_8c467180->f2c->f2fc), 6, 9);
    } else {
        call_8c156d48(t2, (void *)(g_8c467180->f2c->f2fc), 0x16, 9, -0x979798);
    }
    t2->f80 = (t2->f80 & 0xffff) | 0x10;
    operation_8c15700c((void *)t2, 206.0f);
    operation_8c157138((void *)t2);
    return t2;
}
