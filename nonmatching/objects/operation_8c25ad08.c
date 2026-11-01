/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25ad08
 * function: operation_8c25ad08
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 10 of 50 reference instruction lines
 * differing bytes: 13
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
typedef struct S_g8c467180_78 S_g8c467180_78;
typedef struct S_g8c467180_78_4 S_g8c467180_78_4;
typedef struct S_g8c467180_78_8 S_g8c467180_78_8;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x78];
    S_g8c467180_78 *f78;
};
struct S_g8c467180_78 {
    char unknown0[0x4];
    S_g8c467180_78_4 *f04;
    S_g8c467180_78_8 *f08;
};
extern Block8 g_8c3403a4;
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(int, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
int operation_8c25ad08(void)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3403a4;
    t1 = operation_8c156c24((int)(&frame), 2);
    operation_8c156d30(t1, (void *)(g_8c467180->f78->f04), 6, 0);
    operation_8c156d30(t1, (void *)(g_8c467180->f78->f08), 6, 1);
    operation_8c15700c((void *)t1, 442.0f);
    operation_8c1571d4((void *)t1, 0);
    operation_8c157138((void *)t1);
    return (int)(t1);
}
