/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e6ac8
 * function: operation_8c1e6ac8
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 12 of 176 reference instruction lines
 * differing bytes: 11
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
typedef struct S_g8c467180_60 S_g8c467180_60;
typedef struct S_g8c467180_60_10 S_g8c467180_60_10;
typedef struct S_g8c467180_60_14 S_g8c467180_60_14;
typedef struct S_g8c467180_60_18 S_g8c467180_60_18;
typedef struct S_g8c467180_60_1c S_g8c467180_60_1c;
typedef struct S_g8c467180_60_20 S_g8c467180_60_20;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x8];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x14];
    char f48;
    char unknown49[0x8];
    char f51;
};
struct Arg0_2c {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
struct S_g8c467180 {
    char unknown0[0x60];
    S_g8c467180_60 *f60;
};
struct S_g8c467180_60 {
    char unknown0[0x10];
    S_g8c467180_60_10 *f10;
    S_g8c467180_60_14 *f14;
    S_g8c467180_60_18 *f18;
    S_g8c467180_60_1c *f1c;
    S_g8c467180_60_20 *f20;
};
struct Arg0_30 {
    char unknown0[0x4];
    short f04;
};
extern Block8 g_8c32c114;
extern Block8 g_8c32c11c;
extern Block8 g_8c32c124;
extern S_g8c467180 *g_8c467180;
extern char g_8c32c13c[];
extern void memcpy_8c12b77c(void *, void *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern int operator_new_8c18de4c(int);
extern void operation_8c119764(int, int, int);
extern void sprintf_8c12b048(int, void *, ...);
extern void operator_delete_8c18de08(int);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_30 *, void *, int, int);
extern void operation_8c15700c(Arg0_30 *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
void operation_8c1e6ac8(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    memcpy_8c12b77c((void *)(((char *)o + 0x40)), (void *)((void *)0x8c4e3120), 8);
    memcpy_8c12b77c((void *)(((char *)o + 0x49)), (void *)((void *)0x8c4e3128), 8);
    v1 = (int)0;
    o->f48 = v1;
    o->f51 = v1;
    if (o->f2c != 0) {
        o->f2c->f04 |= 1;
    }
    *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c32c114;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c32c11c;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f08));
    o->f2c = (Arg0_2c *)t1;
    if (o->f2c != 0) {
        t2 = operator_new_8c18de4c(0x60);
        if (t2 != 0) {
            operation_8c119764((int)(o->f2c), (int)(g_8c467180->f60->f18), 1);
            operation_8c119764((int)(o->f2c), (int)(g_8c32c13c + 0xb), 0);
            sprintf_8c12b048(t2, (void *)((g_8c32c13c + 0xd)), (void *)(g_8c467180->f60->f1c), (void *)(((char *)o + 0x40)));
            operation_8c119764((int)(o->f2c), t2, 2);
            sprintf_8c12b048(t2, (void *)((g_8c32c13c + 0xd)), (void *)(g_8c467180->f60->f20), (void *)(((char *)o + 0x49)));
            operation_8c119764((int)(o->f2c), t2, 2);
        }
        operator_delete_8c18de08(t2);
    }
    if (o->f30 != 0) {
        o->f30->f04 |= 1;
    }
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c32c124;
    t3 = operation_8c156c24((int)(&frame), 2);
    o->f30 = (Arg0_30 *)t3;
    if (o->f30 != 0) {
        t4 = operation_8c156c24((int)(&frame), 2);
        o->f30 = (Arg0_30 *)t4;
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)(g_8c467180->f60->f10), 6, 0);
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)(g_8c467180->f60->f14), 6, 1);
        operation_8c15700c((Arg0_30 *)(o->f30), 442.0f);
        operation_8c1571d4((void *)(o->f30), 1);
        operation_8c157138((void *)(o->f30));
    }
    o->f20 = 8;
}
