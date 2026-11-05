/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25bfac
 * function: operation_8c25bfac
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 4 of 73 reference instruction lines
 * differing bytes: 4
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_7c S_g8c467180_7c;
typedef struct S_g8c467180_7c_4 S_g8c467180_7c_4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
};
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x7c];
    S_g8c467180_7c *f7c;
};
struct S_g8c467180_7c {
    char unknown0[0x4];
    S_g8c467180_7c_4 *f04;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c3403ec;
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_30 *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
void operation_8c25bfac(Object *o)
{
    Frame frame;
    int v1;
    float v4;
    int t1;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (v4 > 4.5f) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3403ec;
        t1 = operation_8c156c24((int)(&frame), 3);
        o->f30 = (Arg0_30 *)t1;
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)(g_8c467180->f7c->f04), 2, 0);
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)((void *)0x8c34041c), 6, 1);
        operation_8c15700c((void *)(o->f30), 442.0f);
        operation_8c1571d4((void *)(o->f30), 1);
        operation_8c157138((void *)(o->f30));
        o->f30->f80 = (o->f30->f80 & 0xffff) | 0x40;
        o->f20 = 1;
    }
}
