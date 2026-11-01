/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f18d8
 * function: operation_8c1f18d8
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 10 of 50 reference instruction lines
 * differing bytes: 13
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
typedef struct S_g8c467180_4c S_g8c467180_4c;
typedef struct S_g8c467180_4c_4 S_g8c467180_4c_4;
typedef struct S_g8c467180_4c_8 S_g8c467180_4c_8;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x4c];
    S_g8c467180_4c *f4c;
};
struct S_g8c467180_4c {
    char unknown0[0x4];
    S_g8c467180_4c_4 *f04;
    S_g8c467180_4c_8 *f08;
};
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(int, void *, int, int);
extern void operation_8c15700c(int, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
int operation_8c1f18d8(void)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c32c2d0;
    t1 = operation_8c156c24((int)(&frame), 2);
    operation_8c156d30(t1, (void *)(g_8c467180->f4c->f04), 6, 0);
    operation_8c156d30(t1, (void *)(g_8c467180->f4c->f08), 6, 1);
    operation_8c15700c(t1, 442.0f);
    operation_8c1571d4((void *)t1, 1);
    operation_8c157138((void *)t1);
    return (int)(t1);
}
