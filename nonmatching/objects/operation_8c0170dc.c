/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0170dc
 * function: operation_8c0170dc
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 24 of 113 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c41c624 S_g8c41c624;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_1a8 S_g8c467180_90_1a8;
typedef struct S_g8c467180_90_1ac S_g8c467180_90_1ac;
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
    char unknown0[0x48];
    int f48;
    char unknown4c[0x15c];
    S_g8c467180_90_1a8 *f1a8;
    S_g8c467180_90_1ac *f1ac;
};
struct S_g8c41c624 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void operation_8c156e58(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(int, void *, int, int);
extern void operation_8c156f50(S_g8c41c624 *);
extern void operation_8c157138(void *);
extern void operation_8c1571d4(void *, int);
void operation_8c0170dc(void)
{
    Frame frame;
    int t1;
    int t2;
    if (*(int *)0x8c41c620 != 0) {
        operation_8c156e58((void *)(*(S_g8c41c620 **)0x8c41c620));
    }
    if (*(int *)0x8c41c614 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c2e2f54;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c2e2f5c;
        t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        *(int *)0x8c41c614 = (int)(t1);
        operation_8c0dc610((void *)t1, -19999.0f);
    }
    operation_8c119764((int)(*(S_g8c41c614 **)0x8c41c614), (int)((*(S_g8c467180 **)0x8c467180)->f90->f48), 1);
    *(Block8 *)&(&frame)->f10 = *(Block8 *)&*(Block8 *)0x8c2e2f94;
    t2 = operation_8c156c24((int)(&(&frame)->f10), 2);
    *(int *)0x8c41c624 = (int)(t2);
    operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f90->f1a8), 6, 0);
    operation_8c156d30((int)(*(S_g8c41c624 **)0x8c41c624), (void *)((*(S_g8c467180 **)0x8c467180)->f90->f1ac), 6, 1);
    operation_8c156f50((S_g8c41c624 *)(*(S_g8c41c624 **)0x8c41c624));
    operation_8c157138((void *)(*(S_g8c41c624 **)0x8c41c624));
    (*(S_g8c41c624 **)0x8c41c624)->f80 = ((*(S_g8c41c624 **)0x8c41c624)->f80 & 0xffff) | 1;
    operation_8c1571d4((void *)(*(S_g8c41c624 **)0x8c41c624), 1);
    *(int *)0x8c41bce4 = 0x18;
}
