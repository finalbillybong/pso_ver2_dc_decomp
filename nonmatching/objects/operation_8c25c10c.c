/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25c10c
 * function: operation_8c25c10c
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 4 of 172 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c467180_7c S_g8c467180_7c;
typedef struct S_g8c467180_7c_4 S_g8c467180_7c_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    int f38;
};
struct Arg0_34 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
struct S_g8c467180 {
    char unknown0[0x7c];
    S_g8c467180_7c *f7c;
};
struct S_g8c467180_7c {
    int f00;
    S_g8c467180_7c_4 *f04;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051d50(void *, void *);
extern void operation_8c051ea0(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_30 *, void *, int, int);
extern void operation_8c15700c(Arg0_30 *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
void operation_8c25c10c(Object *o)
{
    Frame frame;
    int v1;
    float v4;
    S_vv9 *v9;
    int v12;
    int t1;
    int t2;
    int t3;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (!(v4 > 4.5f)) {
        return;
    }
    if (o->f34 != 0) {
        o->f34->f04 |= 1;
    }
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t1 != 0) {
        operation_8c051a98((void *)t1, (int)o, 8, 0, (unsigned char)0);
    }
    o->f34 = (Arg0_34 *)t1;
    if (o->f34 != 0) {
        operation_8c051d5c((void *)(o->f34), 176.0f, 253.0f);
        operation_8c051d50((void *)(o->f34), (void *)(((char *)o + 0x3c)));
        operation_8c051ea0((void *)(o->f34));
    }
    if (o->f2c != 0) {
        v9 = (S_vv9 *)o->f2c;
        v9->f04 |= 1;
        o->f2c = (Arg0_2c *)0;
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c34040c;
    *(Block8 *)&(&frame)->f10 = *(Block8 *)&*(Block8 *)0x8c340414;
    t2 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&(&frame)->f10));
    o->f2c = (Arg0_2c *)t2;
    v12 = (int)o->f2c;
    if (v12 != 0) {
        if (o->f38 != 0) {
            if (o->f38 == 1) {
                goto L_8c25c1e8;
            }
            if (o->f38 == 2) {
                goto L_8c25c1e8;
            }
        } else {
            operation_8c119764(v12, (int)((*(S_g8c467180 **)0x8c467180)->f7c->f00), 1);
            goto L_8c25c1f8;
L_8c25c1e8:;
            operation_8c119764(v12, (int)((*(S_g8c467180 **)0x8c467180)->f7c->f00), 1);
        }
    }
L_8c25c1f8:;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3403ec;
    t3 = operation_8c156c24((int)(&frame), 3);
    o->f30 = (Arg0_30 *)t3;
    add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)((*(S_g8c467180 **)0x8c467180)->f7c->f04), 2, 0);
    add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)((void *)0x8c34041c), 6, 1);
    operation_8c15700c((Arg0_30 *)(o->f30), 442.0f);
    operation_8c1571d4((void *)(o->f30), 1);
    operation_8c157138((void *)(o->f30));
    o->f30->f80 = (o->f30->f80 & 0xffff) | 0x40;
    o->f20 = 1;
}
