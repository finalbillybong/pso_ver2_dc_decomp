/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e3d6c
 * function: operation_8c1e3d6c
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 10 of 60 reference instruction lines
 * differing bytes: 10
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
typedef struct S_c8c156c24 S_c8c156c24;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_58 S_g8c467180_58;
typedef struct S_g8c467180_58_4 S_g8c467180_58_4;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x58];
    S_g8c467180_58 *f58;
};
struct S_g8c467180_58 {
    char unknown0[0x4];
    S_g8c467180_58_4 *f04;
};
struct S_c8c156c24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c32b610;
extern S_g8c467180 *g_8c467180;
extern S_c8c156c24 *operation_8c156c24(int, int);
extern void operation_8c156d30(S_c8c156c24 *, void *, int, int);
extern void operation_8c15700c(S_c8c156c24 *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
S_c8c156c24 *operation_8c1e3d6c(void)
{
    Frame frame;
    S_c8c156c24 *t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c32b610;
    t1 = operation_8c156c24((int)(&frame), 3);
    operation_8c156d30(t1, (void *)(g_8c467180->f58->f04), 2, 0);
    operation_8c156d30(t1, (void *)((void *)0x8c32b618), 6, 1);
    operation_8c156d30(t1, (void *)((void *)0x8c32b618), 2, 2);
    operation_8c15700c(t1, 442.0f);
    operation_8c1571d4((void *)t1, 1);
    operation_8c157138((void *)t1);
    t1->f80 = (t1->f80 & 0xffff) | 0x40;
    return t1;
}
