/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e5650
 * function: operation_8c1e5650
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 14 of 65 reference instruction lines
 * differing bytes: 13
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_2c8 S_g8c467180_2c_2c8;
typedef struct S_g8c467180_2c_2cc S_g8c467180_2c_2cc;
typedef struct S_g8c467180_2c_2d0 S_g8c467180_2c_2d0;
typedef struct S_g8c467180_2c_2d4 S_g8c467180_2c_2d4;
typedef struct S_g8c467180_2c_2d8 S_g8c467180_2c_2d8;
typedef struct Object Object;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x2c8];
    S_g8c467180_2c_2c8 *f2c8;
    S_g8c467180_2c_2cc *f2cc;
    S_g8c467180_2c_2d0 *f2d0;
    S_g8c467180_2c_2d4 *f2d4;
    S_g8c467180_2c_2d8 *f2d8;
};
struct Object {
    char unknown0[0x24];
    int f24;
};
extern int TWindowMenuInfomation_ctor_8c1dc010(int);
extern void operation_8c1dc47c(void *, void *, int, int);
extern void operation_8c1dc440(void *, void *, int);
int operation_8c1e5650(Object *o)
{
    int t1;
    t1 = TWindowMenuInfomation_ctor_8c1dc010(5);
    operation_8c1dc47c((void *)t1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f2c8), 0, 0);
    operation_8c1dc47c((void *)t1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f2cc), 0, 1);
    if (o->f24 == 1) {
        operation_8c1dc47c((void *)t1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f2d0), 0, 2);
    }
    operation_8c1dc47c((void *)t1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f2d4), 0, 3);
    operation_8c1dc440((void *)t1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f2d8), 4);
    return (int)(t1);
}
