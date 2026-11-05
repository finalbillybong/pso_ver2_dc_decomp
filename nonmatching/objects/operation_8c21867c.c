/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21867c
 * function: operation_8c21867c
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 10 of 60 reference instruction lines
 * differing bytes: 10
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
typedef struct S_c8c156c24 S_c8c156c24;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_5c S_g8c467180_5c;
typedef struct S_g8c467180_5c_4 S_g8c467180_5c_4;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x5c];
    S_g8c467180_5c *f5c;
};
struct S_g8c467180_5c {
    char unknown0[0x4];
    S_g8c467180_5c_4 *f04;
};
struct S_c8c156c24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c336390;
extern S_g8c467180 *g_8c467180;
extern S_c8c156c24 *operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(S_c8c156c24 *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
S_c8c156c24 *operation_8c21867c(void)
{
    Frame frame;
    S_c8c156c24 *t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c336390;
    t1 = operation_8c156c24((int)(&frame), 3);
    add_wrapper_8c156d30(t1, (void *)(g_8c467180->f5c->f04), 2, 0);
    add_wrapper_8c156d30(t1, (void *)((void *)0x8c336398), 6, 1);
    add_wrapper_8c156d30(t1, (void *)((void *)0x8c336398), 2, 2);
    operation_8c15700c((void *)t1, 442.0f);
    operation_8c1571d4((void *)t1, 1);
    operation_8c157138((void *)t1);
    t1->f80 = (t1->f80 & 0xffff) | 0x40;
    return t1;
}
