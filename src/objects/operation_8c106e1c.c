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
typedef struct S_g8c4dbc20_0_18 S_g8c4dbc20_0_18;
typedef struct S_g8c4dbc20_0_1c S_g8c4dbc20_0_1c;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_bc8 Arg0_28_bc8;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_3c Arg0_3c;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x354];
    int f380;
    char unknown384[0x4];
    int f388;
    char unknown38c[0x4];
    Arg0_390 *f390;
    Arg0_394 *f394;
    int f398;
    Arg0_39c *f39c;
    int f3a0;
};
struct Arg0_28 {
    char unknown0[0xbc8];
    Arg0_28_bc8 *fbc8;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x18];
    S_g8c4dbc20_0_18 *f18;
    S_g8c4dbc20_0_1c *f1c;
};
struct Arg0_394 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c30b6bc;
extern Block8 g_8c30b6c4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c1cdc80(void *);
extern void operation_8c1d5eb8(void *, int);
extern int find_node_8c16a3c0(void *, int);
extern int operation_8c169508(void *);
extern void update_count_8c1ca1fc(void *, void *);
extern int operation_8c106798(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c106760(Object *);
extern int operation_8c1c74dc(void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_selection_child(void *, void *, int, int, int);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_394 *, void *, int, int);
extern void call_8c156f50(Arg0_394 *);
extern void operation_8c157138(void *);
void operation_8c106e1c(Object *o)
{
    Frame frame;
    char *v57;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    v57 = (char *)o->f390;
    if (v57 != 0) {
        t1 = operation_8c1cdc80((void *)v57);
        v1 = (int)o->f3a0;
        if (v1 != 0 && t1 != o->f388) {
            operation_8c1d5eb8((void *)v1, (int)(*(Arg0_3c **)((char *)((char *)o + 0x3c) + (t1 * 0x1c))));
        }
        if (o->f39c != 0 && t1 != o->f388) {
            t2 = find_node_8c16a3c0((void *)(o->f28->fbc8), (int)((int)o + t1 * 0x1c + 0x30));
            if (t2 != 0) {
                t3 = operation_8c169508((void *)t2);
                update_count_8c1ca1fc((void *)(o->f39c), (void *)t3);
            } else {
                update_count_8c1ca1fc((void *)(o->f39c), (void *)0);
            }
        }
        o->f388 = (int)(t1);
    }
    t4 = operation_8c106798(o);
    if (t4 != 0) {
        o->f24 = 8;
        call_8c05fbf8(0x50001, 0, 0, 0);
        return;
    }
    t5 = operation_8c106760(o);
    if (t5 != 0) {
        o->f380 = 1;
        t6 = operation_8c1cdc80((void *)(o->f390)) * 0x1c;
        if (*(unsigned char *)((char *)((char *)o + 0x30) + t6) == 3) {
            t7 = operation_8c1c74dc((void *)((int)o + t6 + 0x30));
            if (t7 > 1 && o->f398 == 0) {
                *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c30b6bc;
                t8 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
                if (t8 != 0) {
                    initialize_selection_child((void *)t8, (void *)(&(&frame)->f08.f00), 1, t7, 1);
                }
                o->f398 = (int)(t8);
                o->f24 = 3;
                return;
            }
        }
        if (o->f394 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c30b6c4;
            t9 = operation_8c156c24((int)(&frame), 2);
            o->f394 = (Arg0_394 *)t9;
            operation_8c156d30((Arg0_394 *)(o->f394), (void *)(g_8c4dbc20->f00->f18), 6, 0);
            operation_8c156d30((Arg0_394 *)(o->f394), (void *)(g_8c4dbc20->f00->f1c), 6, 1);
            call_8c156f50((Arg0_394 *)(o->f394));
            operation_8c157138((void *)(o->f394));
            o->f394->f80 = (o->f394->f80 & 0xffff) | 1;
            o->f24 = 2;
        }
    }
}
