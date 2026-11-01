/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d201c
 * function: operation_8c1d201c
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 4 of 64 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c1d0224 S_c8c1d0224;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x424];
    int f424;
    char unknown428[0x48];
    int f470;
    int f474;
};
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
};
struct S_c8c1d0224 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c1d0224 *operation_8c1d0224(int, int);
extern void operation_8c1cd38c(void *, int);
extern void operation_8c1d02e0(int, int, int);
extern int has_flag9_8c21f690(void *);
extern void operation_8c1d039c(void *, int);
S_c8c1d0224 *operation_8c1d201c(Object *o)
{
    S_c8c1d0224 *t1;
    int t2;
    t1 = operation_8c1d0224((int)((void *)0x8c32998c), (int)((void *)0x8c329994));
    operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f424));
    operation_8c1d02e0((int)t1, (int)(g_8c467180->f2c->f470), 1);
    operation_8c1d02e0((int)t1, (int)(g_8c467180->f2c->f474), 0);
    t2 = has_flag9_8c21f690((void *)(o->f34));
    if (t2 != 0) {
        operation_8c1d039c((void *)t1, 0);
    } else {
        operation_8c1d039c((void *)t1, 1);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
