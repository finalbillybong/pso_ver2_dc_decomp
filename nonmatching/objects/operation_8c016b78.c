/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c016b78
 * function: operation_8c016b78
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 82 of 174 reference instruction lines
 * differing bytes: 57
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_1a0 S_g8c467180_90_1a0;
typedef struct S_g8c467180_90_1b0 S_g8c467180_90_1b0;
typedef struct S_g8c467180_90_d4 S_g8c467180_90_d4;
typedef struct S_g8c467180_90_d8 S_g8c467180_90_d8;
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc4];
    S_g8c467180_90_d4 *fd4;
    S_g8c467180_90_d8 *fd8;
    char unknowndc[0xc4];
    S_g8c467180_90_1a0 *f1a0;
    char unknown1a4[0xc];
    S_g8c467180_90_1b0 *f1b0;
};
struct S_g8c41c61c {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern Block8 g_8c2e2f84;
extern int g_8c41bce4;
extern int g_8c41bd00;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c41c61c *g_8c41c61c;
extern S_g8c467180 *g_8c467180;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(int, void *, int, int);
extern void operation_8c156f50(S_g8c41c61c *);
extern void operation_8c157138(void *);
extern void operation_8c01787c(void);
void operation_8c016b78(void)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if (g_8c41c614 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f54;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f5c;
        t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c614 = (S_g8c41c614 *)(int)(t1);
        operation_8c0dc610((void *)t1, -19999.0f);
    }
    operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f0c), 1);
    *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2e2f84;
    if (0xa > g_8c41bd00) {
        t2 = operation_8c156c24((int)(&(&frame)->f10), 3);
        g_8c41c61c = (S_g8c41c61c *)(int)(t2);
        add_wrapper_8c156d30(t2, (void *)(g_8c467180->f90->fd4), 6, 0);
        add_wrapper_8c156d30((int)g_8c41c61c, (void *)(g_8c467180->f90->fd8), 6, 1);
        add_wrapper_8c156d30((int)g_8c41c61c, (void *)(g_8c467180->f90->f1a0), 6, 2);
    } else {
        t3 = operation_8c156c24((int)(&(&frame)->f10), 4);
        g_8c41c61c = (S_g8c41c61c *)(int)(t3);
        add_wrapper_8c156d30(t3, (void *)(g_8c467180->f90->fd4), 6, 0);
        add_wrapper_8c156d30((int)g_8c41c61c, (void *)(g_8c467180->f90->fd8), 6, 1);
        add_wrapper_8c156d30((int)g_8c41c61c, (void *)(g_8c467180->f90->f1a0), 6, 2);
        add_wrapper_8c156d30((int)g_8c41c61c, (void *)(g_8c467180->f90->f1b0), 6, 3);
    }
    operation_8c156f50(g_8c41c61c);
    operation_8c157138((void *)g_8c41c61c);
    g_8c41c61c->f80 = (g_8c41c61c->f80 & 0xffff) | 1;
    operation_8c01787c();
    g_8c41bce4 = 3;
}
