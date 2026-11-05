/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c232fa0
 * function: operation_8c232fa0
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 28 of 114 reference instruction lines
 * differing bytes: 26
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
typedef struct S_g8c467180_70 S_g8c467180_70;
typedef struct S_g8c467180_70_0 S_g8c467180_70_0;
typedef struct S_g8c467180_70_4 S_g8c467180_70_4;
typedef struct S_g8c467180_70_8 S_g8c467180_70_8;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Frame {
    Block8 f00;
};
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
};
struct S_g8c467180 {
    char unknown0[0x70];
    S_g8c467180_70 *f70;
};
struct S_g8c467180_70 {
    S_g8c467180_70_0 *f00;
    S_g8c467180_70_4 *f04;
    S_g8c467180_70_8 *f08;
};
struct Arg0_28 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c338c98;
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_28 *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern int operation_8c036610(void);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
void operation_8c232fa0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c338c98;
    t1 = operation_8c156c24((int)(&frame), 8);
    o->f28 = (Arg0_28 *)t1;
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)(g_8c467180->f70->f00), 2, 0);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)(g_8c467180->f70->f04), 6, 1);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)((void *)0x8c510920), 0xa, 2);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)((void *)0x8c510a96), 0xa, 3);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)((void *)0x8c338ca8), 2, 4);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)(g_8c467180->f70->f08), 6, 5);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)((void *)0x8c5109db), 0xa, 6);
    add_wrapper_8c156d30((Arg0_28 *)(o->f28), (void *)((void *)0x8c510ad8), 0xa, 7);
    operation_8c15700c((void *)(o->f28), 558.0f);
    t2 = operation_8c036610();
    if (t2 != 0) {
        if (t2 == 1) {
            goto L_8c23305c;
        }
    } else {
        operation_8c1571d4((void *)(o->f28), 1);
        goto L_8c233064;
L_8c23305c:;
        operation_8c1571d4((void *)(o->f28), 5);
    }
L_8c233064:;
    operation_8c157138((void *)(o->f28));
    o->f28->f80 = (o->f28->f80 & 0xffff) | 1;
}
