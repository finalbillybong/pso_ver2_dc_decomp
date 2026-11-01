/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c158ef8
 * function: operation_8c158ef8
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 8 of 162 reference instruction lines
 * differing bytes: 62
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
typedef struct S_g8c4daac0 S_g8c4daac0;
typedef struct S_g8c4daac0_0 S_g8c4daac0_0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_40 Arg0_40;
typedef struct S_vv10 S_vv10;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
    Arg0_38 *f38;
    int f3c;
    Arg0_40 *f40;
    char unknown44[0x8];
    int f4c;
};
struct S_g8c4daac0 {
    S_g8c4daac0_0 *f00;
};
struct S_vv10 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
extern Block8 g_8c316434;
extern Block8 g_8c31643c;
extern Block8 g_8c316444;
extern S_g8c4daac0 *g_8c4daac0;
extern int operation_8c220ce0(void);
extern int operation_8c1cdc80(void *);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern int operation_8c156c6c(int);
extern void call_8c220c40(int, int);
void operation_8c158ef8(Object *o)
{
    Frame frame;
    int v1;
    S_vv10 *v10;
    int v12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    v1 = (int)o->f38;
    if (v1 != 0 && o->f3c != 0) {
        t2 = operation_8c1cdc80((void *)v1);
        if (t2 != o->f4c) {
            operation_8c119764((int)(o->f3c), (int)((int)g_8c4daac0->f00 + t2 * 0x1d8 + 0x20), 0x80);
            o->f4c = (int)(t2);
            if (o->f40 != 0) {
                request_resource_release((void *)(o->f40));
                o->f40 = (Arg0_40 *)0;
            }
        }
    }
    v10 = (S_vv10 *)o->f38;
    if (v10 != 0 && ((v10->f80 & 0xffff & 4)) != 0) {
        o->f24 = 5;
        return;
    }
    if (v10 != 0 && ((v10->f80 & 0xffff & 2)) != 0) {
        t5 = operation_8c1cdc80((void *)v10);
        v12 = (int)(t5 * 0x1d8);
        if (((*(int *)((char *)((char *)g_8c4daac0->f00 + 0x1d4) + (v12)) & 1)) != 0) {
            o->f24 = 4;
            return;
        }
        if (o->f40 == 0) {
            *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c316434;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c31643c;
            t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f08));
            o->f40 = (Arg0_40 *)t3;
            operation_8c119764((int)(o->f40), (int)((int)g_8c4daac0->f00 + v12 + 0xa0), 0x80);
            operation_8c0dc610((void *)(o->f40), -13000.0f);
        }
        if (o->f34 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c316444;
            t4 = operation_8c156c6c((int)(&frame));
            o->f34 = (int)(t4);
            call_8c220c40(5, 1);
            o->f24 = 2;
        }
    }
}
