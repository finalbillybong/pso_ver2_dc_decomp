/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2330c0
 * function: operation_8c2330c0
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 8 of 69 reference instruction lines
 * differing bytes: 6
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_70 S_g8c467180_70;
typedef struct S_g8c467180_70_14 S_g8c467180_70_14;
typedef struct S_g8c467180_70_18 S_g8c467180_70_18;
typedef struct S_g8c467180_70_1c S_g8c467180_70_1c;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    Block8 f00;
};
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
struct S_g8c467180 {
    char unknown0[0x70];
    S_g8c467180_70 *f70;
};
struct S_g8c467180_70 {
    char unknown0[0x14];
    S_g8c467180_70_14 *f14;
    S_g8c467180_70_18 *f18;
    S_g8c467180_70_1c *f1c;
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c338ca0;
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_2c *, void *, int, int);
extern void operation_8c15700c(Arg0_2c *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
void operation_8c2330c0(Object *o)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c338ca0;
    t1 = operation_8c156c24((int)(&frame), 3);
    o->f2c = (Arg0_2c *)t1;
    add_wrapper_8c156d30((Arg0_2c *)(o->f2c), (void *)(g_8c467180->f70->f14), 2, 0);
    add_wrapper_8c156d30((Arg0_2c *)(o->f2c), (void *)(g_8c467180->f70->f18), 6, 1);
    add_wrapper_8c156d30((Arg0_2c *)(o->f2c), (void *)(g_8c467180->f70->f1c), 6, 2);
    operation_8c15700c((Arg0_2c *)(o->f2c), 442.0f);
    operation_8c1571d4((void *)(o->f2c), 2);
    operation_8c157138((void *)(o->f2c));
    o->f2c->f80 = (o->f2c->f80 & 0xffff) | 1;
}
