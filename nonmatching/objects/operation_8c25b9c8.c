/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25b9c8
 * function: operation_8c25b9c8
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 24 of 138 reference instruction lines
 * differing bytes: 23
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_7c S_g8c467180_7c;
typedef struct S_g8c467180_7c_4 S_g8c467180_7c_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x8];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x4];
    char f3c;
    char unknown3d[0x13];
    int f50;
};
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x7c];
    S_g8c467180_7c *f7c;
};
struct S_g8c467180_7c {
    char unknown0[0x4];
    S_g8c467180_7c_4 *f04;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int pair_grid_view_ready(void *);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_30 *, void *, int, int);
extern void operation_8c15700c(Arg0_30 *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051ea0(void *);
extern void operation_8c051d50(void *, void *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
extern char g_8c34041c[];
void operation_8c25b9c8(Object *o)
{
    Frame frame;
    char *v48;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v48 = (char *)o->f2c;
    if (v48 != 0) {
        t1 = pair_grid_view_ready((void *)v48);
        if (t1 != 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3403ec;
            t2 = operation_8c156c24((int)(&frame), 3);
            o->f30 = (Arg0_30 *)t2;
            operation_8c156d30((Arg0_30 *)(o->f30), (void *)((*(S_g8c467180 **)0x8c467180)->f7c->f04), 2, 0);
            operation_8c156d30((Arg0_30 *)(o->f30), (void *)g_8c34041c, 6, 1);
            operation_8c15700c((Arg0_30 *)(o->f30), 442.0f);
            operation_8c1571d4((void *)(o->f30), 1);
            operation_8c157138((void *)(o->f30));
            o->f30->f80 = (o->f30->f80 & 0xffff) | 0x40;
            t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
            if (t3 != 0) {
                operation_8c051a98((void *)t3, (int)o, 8, 0, (unsigned char)0);
            }
            o->f34 = (Arg0_34 *)t3;
            operation_8c051d5c((void *)(o->f34), 176.0f, 253.0f);
            operation_8c051ea0((void *)(o->f34));
            if (o->f3c != 0) {
                v4 = (int)1;
            } else {
                if (o->f50 == 1) {
                    v3 = (int)1;
                } else {
                    v3 = (int)0;
                }
                v4 = (int)v3;
            }
            if (v4 != 0) {
                operation_8c051d50((void *)(o->f34), (void *)(&o->f3c));
            }
            o->f20 = 1;
            return;
        }
        t4 = pair_grid_view_ready((void *)(o->f2c));
        if (t4 == 0) {
            if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                if (t5 == 0) {
                    return;
                }
            }
            call_8c119c78((void *)(o->f2c));
        }
    }
}
