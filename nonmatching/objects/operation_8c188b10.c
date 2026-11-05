/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c188b10
 * function: operation_8c188b10
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 16 of 127 reference instruction lines
 * differing bytes: 18
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct S_g8c4dbc20_0_10 S_g8c4dbc20_0_10;
typedef struct S_g8c4dbc20_0_14 S_g8c4dbc20_0_14;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_68 Arg0_68;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    int f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
    int f38;
    char unknown3c[0x10];
    int f4c;
    int f50;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x10];
    S_g8c4dbc20_0_10 *f10;
    S_g8c4dbc20_0_14 *f14;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c319e1c;
extern Block8 g_8c319e24;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c1cdc80(void *);
extern int item_capacity_8c022f5c(void *, void *);
extern int call_8c18e768(int, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowInputNumber_ctor_8c1bd074(void *, void *, int, int, int);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_34 *, void *, int, int);
extern void operation_8c156f50(Arg0_34 *);
extern void operation_8c157138(void *);
void operation_8c188b10(Object *o)
{
    Frame frame;
    char *v27;
    int t2;
    char *v26;
    int t3;
    int v1;
    int v2;
    int t1;
    int t4;
    int t5;
    v27 = (char *)o->f2c;
    if (v27 != 0) {
        t5 = operation_8c1cdc80((void *)v27);
        v1 = (int)(t5 * 0x14);
        t2 = item_capacity_8c022f5c((void *)(o->f28), (void *)((int)o + v1 + 0x58));
        v26 = (char *)o->f28->f184->f20;
        t1 = call_8c18e768((int)(v26), (void *)(*(Arg0_68 **)((char *)((char *)o + 0x68) + (v1))));
        v2 = (int)t1;
        if (t1 > t2) {
            v2 = (int)t2;
        }
        if (v2 > 1) {
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c319e1c;
            t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x7c);
            if (t3 != 0) {
                TWindowInputNumber_ctor_8c1bd074((void *)t3, (void *)(&(&frame)->f08.f00), 1, v2, 1);
            }
            o->f38 = (int)(t3);
            o->f4c = 0;
            o->f24 = 2;
            return;
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c319e24;
        t4 = operation_8c156c24((int)(&frame), 2);
        o->f34 = (Arg0_34 *)t4;
        add_wrapper_8c156d30((Arg0_34 *)(o->f34), (void *)(g_8c4dbc20->f00->f10), 6, 0);
        add_wrapper_8c156d30((Arg0_34 *)(o->f34), (void *)(g_8c4dbc20->f00->f14), 6, 1);
        operation_8c156f50((Arg0_34 *)(o->f34));
        operation_8c157138((void *)(o->f34));
        o->f34->f80 = (o->f34->f80 & 0xffff) | 1;
        o->f50 = 1;
        o->f4c = 1;
        o->f24 = 2;
    }
}
