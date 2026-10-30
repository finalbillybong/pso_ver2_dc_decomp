typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_40_0 Arg0_40_0;
typedef struct Arg0_4c Arg0_4c;
typedef struct S_vv13 S_vv13;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x14];
    Arg0_40 *f40;
    char unknown44[0x8];
    Arg0_4c *f4c;
    char unknown50[0x8];
    int f58;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_vv7 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_vv13 {
    char unknown0[0x11b4];
    volatile unsigned short f11b4;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c41cba0 {
    char unknown0[0x10];
    int f10;
};
extern Block8 g_8c33aaf8;
extern Block8 g_8c33ab00;
extern int g_8c418248;
extern S_g8c41cba0 *g_8c41cba0;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c4db9e4 *g_8c4db9e4;
extern int lookup_low_id(int);
extern void operation_8c026700(int, int);
extern void request_resource_release(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
void operation_8c243784(Object *o)
{
    Frame frame;
    S_vv7 *v7;
    S_vv13 *v13;
    int v14;
    int v15;
    int t1;
    int v12;
    int t2;
    if (o->f24 == -1) {
        return;
    }
    switch (o->f24) {
        case 0:
        t1 = lookup_low_id((int)((unsigned short)g_8c418248));
        if (t1 != 0) {
            operation_8c026700(t1, -1);
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 |= 0x20;
        }
        if (g_8c46fe20 != 0) {
            if (g_8c46fe20->f54 != 0) {
                g_8c46fe20->f54->f22 |= 8;
            }
        }
        v7 = (S_vv7 *)g_8c46fe20;
        if (v7 != 0) {
            v7->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        if (o->f58 != 0) {
            v14 = (int)5;
        } else {
            int v21;
            v12 = (int)-1;
            v14 = (int)4;
            v13 = (S_vv13 *)g_8c4db9e4;
            v21 = (int)v13->f11b4;
            if (((v21 & 0xffff) + v12) > 0) {
                v15 = (int)((v21 & 0xffff) + -1);
            } else {
                v15 = (int)0;
            }
            v13->f11b4 = v15;
        }
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c33aaf8;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c33ab00;
        t2 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
        o->f4c = (Arg0_4c *)t2;
        if (o->f4c != 0) {
            operation_8c119764((int)(o->f4c), (int)(*(Arg0_40_0 **)((char *)((char *)o->f40 + 0x0) + (v14 << 2))), 0x80);
        }
        o->f24 = 1;
        return;
        case 1:
        if (((g_8c41cba0->f10 & 8)) != 0) {
            o->f28 = 4;
        }
    }
}
