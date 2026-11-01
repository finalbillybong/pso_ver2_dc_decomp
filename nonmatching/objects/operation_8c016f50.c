/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c016f50
 * function: operation_8c016f50
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 22 of 67 reference instruction lines
 * differing bytes: 34
 * provenance: generator draft (mode retflip2)
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
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_e4 S_g8c467180_90_e4;
typedef struct S_g8c467180_90_e8 S_g8c467180_90_e8;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0xe4];
    S_g8c467180_90_e4 *fe4;
    S_g8c467180_90_e8 *fe8;
};
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void operation_8c156e58(void *);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(int, void *, int, int);
extern void operation_8c156f50(S_g8c41c620 *);
extern void operation_8c157138(void *);
void operation_8c016f50(void)
{
    Frame frame;
    int t1;
    operation_8c156e58((void *)(*(S_g8c41c61c **)0x8c41c61c));
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c2e2f8c;
    t1 = operation_8c156c24((int)(&frame), 2);
    *(int *)0x8c41c620 = (int)(t1);
    operation_8c156d30(t1, (void *)((*(S_g8c467180 **)0x8c467180)->f90->fe4), 6, 0);
    operation_8c156d30((int)(*(S_g8c41c620 **)0x8c41c620), (void *)((*(S_g8c467180 **)0x8c467180)->f90->fe8), 6, 1);
    operation_8c156f50((S_g8c41c620 *)(*(S_g8c41c620 **)0x8c41c620));
    operation_8c157138((void *)(*(S_g8c41c620 **)0x8c41c620));
    (*(S_g8c41c620 **)0x8c41c620)->f80 = ((*(S_g8c41c620 **)0x8c41c620)->f80 & 0xffff) | 1;
    *(int *)0x8c41bce4 = 4;
}
