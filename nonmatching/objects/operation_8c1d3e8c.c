/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d3e8c
 * function: operation_8c1d3e8c
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 4 of 79 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode extern)
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
typedef struct S_c8c254f6c S_c8c254f6c;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_514 S_g8c467180_2c_514;
typedef struct Object Object;
typedef struct Arg0_80 Arg0_80;
typedef struct S_vv4 S_vv4;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x510];
    int f510;
    S_g8c467180_2c_514 *f514;
};
struct Object {
    char unknown0[0x80];
    Arg0_80 *f80;
};
struct Arg0_80 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv4 {
    unsigned short f00;
    unsigned short f02;
};
struct S_c8c254f6c {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c254f6c *TWindowChoiceSetting_ctor_8c254f6c(int, int, int);
extern void operation_8c1dc270(void *, int);
extern int operation_8c1d45d0(Object *, void *, int);
extern void operation_8c1dc47c(void *, void *, int, int);
extern void operation_8c1dc440(void *, void *, int);
S_c8c254f6c *operation_8c1d3e8c(Object *o)
{
    int v3;
    int v1;
    int v2;
    S_c8c254f6c *t1;
    S_vv4 *v4;
    int t2;
    t1 = TWindowChoiceSetting_ctor_8c254f6c((int)((void *)0x8c2893c8), (int)((void *)0x8c2893d0), 6);
    operation_8c1dc270((void *)t1, (int)(g_8c467180->f2c->f510));
    v2 = (int)0;
    v1 = (int)o->f80->f01;
    v3 = (int)0;
    v4 = (S_vv4 *)((char *)o->f80 + 0x4);
    while (v1 > v3) {
        if (v4->f00 == 0) {
            t2 = operation_8c1d45d0(o, (void *)(((char *)o + 0x58)), v2);
            operation_8c1dc47c((void *)t1, (void *)((int)v4 + 4), t2, (int)(v4->f02));
            v2 = (int)(v2 + 1);
        }
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 32);
    }
    operation_8c1dc440((void *)t1, (void *)(g_8c467180->f2c->f514), 0);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
