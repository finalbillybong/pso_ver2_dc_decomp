/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c26049c
 * function: operation_8c26049c
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 28 of 115 reference instruction lines
 * differing bytes: 27
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_88 S_g8c467180_88;
typedef struct S_g8c467180_88_4 S_g8c467180_88_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x88];
    S_g8c467180_88 *f88;
};
struct S_g8c467180_88 {
    char unknown0[0x4];
    S_g8c467180_88_4 *f04;
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern Block8 g_8c340828;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c41cba0 g_8c41cba0;
extern int pair_grid_view_ready(void *);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_2c *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
void operation_8c26049c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = pair_grid_view_ready((void *)(o->f28));
    if (t1 != 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c340828;
        t2 = operation_8c156c24((int)(&frame), 3);
        o->f2c = (Arg0_2c *)t2;
        operation_8c156d30((Arg0_2c *)(o->f2c), (void *)(g_8c467180->f88->f04), 2, 0);
        operation_8c156d30((Arg0_2c *)(o->f2c), (void *)((void *)0x8c340830), 6, 1);
        operation_8c156d30((Arg0_2c *)(o->f2c), (void *)((void *)0x8c340830), 2, 2);
        operation_8c15700c((void *)(o->f2c), 442.0f);
        operation_8c1571d4((void *)(o->f2c), 1);
        operation_8c157138((void *)(o->f2c));
        o->f2c->f80 = (o->f2c->f80 & 0xffff) | 0x40;
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t3 != 0) {
            operation_8c051a98((void *)t3, (int)o, 0x10, 0, (unsigned char)0);
        }
        o->f30 = (Arg0_30 *)t3;
        operation_8c051d5c((void *)(o->f30), 176.0f, 253.0f);
        o->f20 = 1;
        return;
    }
    t4 = pair_grid_view_ready((void *)(o->f28));
    if (t4 == 0) {
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            t5 = operation_8c01d8a8((void *)((void *)((char *)&g_8c41cba0 + 0x110)), 4);
            if (t5 == 0) {
                return;
            }
        }
        call_8c119c78((void *)(o->f28));
    }
}
