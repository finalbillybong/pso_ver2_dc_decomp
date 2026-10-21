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
typedef struct Object Object;
typedef struct Arg0_388 Arg0_388;
typedef struct Arg0_38c Arg0_38c;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x358];
    int f380;
    char unknown384[0x4];
    Arg0_388 *f388;
    Arg0_38c *f38c;
    int f390;
    int f394;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct Arg0_38c {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c31cc8c;
extern Block8 g_8c31cc94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int operation_8c1cdc80(void *);
extern void operation_8c1d5dfc(void *, int);
extern int operation_8c106798(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c106760(Object *);
extern int call_8c15b8cc(int);
extern int operation_8c1c74dc(void *);
extern int operation_8c15ba54(void);
extern void call_8c220b80(int, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_selection_child(void *, void *, int, int, int);
extern int operation_8c156c6c(int);
void operation_8c19c5e4(Object *o)
{
    Frame frame;
    char *v48;
    int v1;
    int v2;
    int v49;
    unsigned char v11;
    int c1;
    int v13;
    int v20;
    int v14;
    int v22;
    int t5;
    int t6;
    int t2;
    int t3;
    int t4;
    int v12;
    int t1;
    int t7;
    int t8;
    int t9;
    int t10;
    v48 = (char *)o->f388;
    if (v48 != 0) {
        t1 = operation_8c1cdc80((void *)v48);
        v1 = (int)o->f394;
        if (v1 != 0) {
            v2 = (int)o->f380;
            if (v2 != t1) {
                operation_8c1d5dfc((void *)v1, (int)((int)o + t1 * 0x1c + 0x30));
                o->f380 = (int)(t1);
            }
        }
    }
    t2 = operation_8c106798(o);
    if (t2 != 0) {
        o->f24 = 5;
        call_8c05fbf8(0x50001, 0, 0, 0);
        return;
    }
    t3 = operation_8c106760(o);
    if (t3 == 0) {
        return;
    }
    t4 = operation_8c1cdc80((void *)(o->f388));
    v49 = (int)(t4 * 0x1c);
    c1 = (unsigned char)*(unsigned char *)((char *)((char *)o + 0x31) + (v49));
    v11 = *(unsigned char *)((char *)((char *)o + 0x30) + (v49));
    switch (v11) {
    case 3:
        switch (c1) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            v12 = (int)((int)o + v49 + 0x30);
            t6 = call_8c15b8cc(v12);
            t5 = operation_8c1c74dc((void *)v12);
            v20 = t5 > t6 ? t6 : t5;
            break;
        case 2:
        default:
            t7 = operation_8c15ba54();
            if (t7 != 0) {
                v20 = 1;
            } else {
                v20 = 0;
            }
            break;
        }
        if (v20 == 0) {
            call_8c220b80(0x3b, 1);
            o->f24 = 7;
            return;
        }
        break;
    case 0:
    case 1:
    case 2:
    default:
        t8 = operation_8c15ba54();
        if (t8 == 0) {
            call_8c220b80(0x3b, 1);
            o->f24 = 7;
            return;
        }
        v20 = 1;
        break;
    }
    if (v20 > 1) {
        if (o->f390 == 0) {
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c31cc8c;
            t9 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
            if (t9 != 0) {
                initialize_selection_child((void *)t9, (void *)(&(&frame)->f08.f00), 1, v20, 1);
            }
            o->f390 = (int)(t9);
            o->f24 = 4;
            return;
        }
    }
    if (o->f38c == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31cc94;
        t10 = operation_8c156c6c((int)(&frame));
        o->f38c = (Arg0_38c *)t10;
        o->f38c->f80 = (o->f38c->f80 & 0xffff) | 1;
        o->f24 = 2;
    }
    }
