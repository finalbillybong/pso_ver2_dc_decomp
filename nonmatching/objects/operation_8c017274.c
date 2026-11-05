/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c017274
 * function: operation_8c017274
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 22 of 67 reference instruction lines
 * differing bytes: 34
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
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_f8 S_g8c467180_90_f8;
typedef struct S_g8c467180_90_fc S_g8c467180_90_fc;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0xf8];
    S_g8c467180_90_f8 *ff8;
    S_g8c467180_90_fc *ffc;
};
struct S_g8c41c620 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c41c620 *g_8c41c620;
extern void operation_8c156e58(void *);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(int, void *, int, int);
extern void operation_8c156f50(S_g8c41c620 *);
extern void operation_8c157138(void *);
void operation_8c017274(void)
{
    Frame frame;
    int t1;
    operation_8c156e58((void *)(*(S_g8c41c61c **)0x8c41c61c));
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c2e2f9c;
    t1 = operation_8c156c24((int)(&frame), 2);
    g_8c41c620 = (S_g8c41c620 *)t1;
    add_wrapper_8c156d30(t1, (void *)((*(S_g8c467180 **)0x8c467180)->f90->ff8), 6, 0);
    add_wrapper_8c156d30((int)g_8c41c620, (void *)((*(S_g8c467180 **)0x8c467180)->f90->ffc), 6, 1);
    operation_8c156f50((S_g8c41c620 *)g_8c41c620);
    operation_8c157138((void *)g_8c41c620);
    g_8c41c620->f80 = (g_8c41c620->f80 & 0xffff) | 1;
    *(int *)0x8c41bce4 = 5;
}
