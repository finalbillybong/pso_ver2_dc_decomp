/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0176f8
 * function: operation_8c0176f8
 * language: c
 * reference size: 276 bytes
 * compiled size: 272 bytes (-1.4%)
 * differing lines: 66 of 103 reference instruction lines
 * differing bytes: 240
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_1b4 S_g8c467180_90_1b4;
typedef struct S_g8c467180_90_1b8 S_g8c467180_90_1b8;
typedef struct S_g8c467180_90_1bc S_g8c467180_90_1bc;
typedef struct S_g8c467180_90_1c0 S_g8c467180_90_1c0;
typedef struct S_g8c467180_90_1c4 S_g8c467180_90_1c4;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x1b4];
    S_g8c467180_90_1b4 *f1b4;
    S_g8c467180_90_1b8 *f1b8;
    S_g8c467180_90_1bc *f1bc;
    S_g8c467180_90_1c0 *f1c0;
    S_g8c467180_90_1c4 *f1c4;
};
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c2e2fac;
extern int g_8c41bce4;
extern S_g8c41c61c *g_8c41c61c;
extern S_g8c41c620 *g_8c41c620;
extern S_g8c467180 *g_8c467180;
void operation_8c0176f8(void)
{
    Frame frame;
    int t1;
    ((void (*)(void *))0x8c156e58)(g_8c41c61c);
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fac;
    t1 = ((int (*)(Frame *, int))0x8c156c24)((&frame), 5);
    g_8c41c620 = (S_g8c41c620 *)(int)(t1);
    ((void (*)(int, void *, int, int))0x8c156d30)(t1, g_8c467180->f90->f1c4, 6, 0);
    ((void (*)(S_g8c41c620 *, void *, int, int))0x8c156d30)(g_8c41c620, g_8c467180->f90->f1b4, 6, 1);
    ((void (*)(S_g8c41c620 *, void *, int, int))0x8c156d30)(g_8c41c620, g_8c467180->f90->f1b8, 6, 2);
    ((void (*)(S_g8c41c620 *, void *, int, int))0x8c156d30)(g_8c41c620, g_8c467180->f90->f1bc, 6, 3);
    ((void (*)(S_g8c41c620 *, void *, int, int))0x8c156d30)(g_8c41c620, g_8c467180->f90->f1c0, 6, 4);
    ((void (*)(S_g8c41c620 *))0x8c156f50)(g_8c41c620);
    ((void (*)(S_g8c41c620 *))0x8c157138)(g_8c41c620);
    g_8c41c620->f80 = (g_8c41c620->f80 & 0xffff) | 1;
    g_8c41bce4 = 0x19;
}
