typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_g8c46f3a4_0 S_g8c46f3a4_0;
typedef struct S_g8c46f3ac S_g8c46f3ac;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x16];
    float f108;
    char unknown10c[0x1fe];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x60];
    short f398;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c46f3ac {
    float f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c46f3a4 *g_8c46f3a4;
extern S_g8c46f3ac *g_8c46f3ac;
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern void call_8c0121a0(Object *, int, void *, int);
void operation_8c0bdf2c(Object *o)
{
    Frame frame;
    float t1;
    int a;
    if (o->f398 != 0) {
        if (o->f398 == 1) {
            goto L_8c0bdfd6;
        }
        if (o->f398 == 2) {
            goto L_8c0bdfc2;
        }
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f324;
    call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
    t1 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    a = (int)(t1 * 65536.0f / 6.28318405f);
    o->f30a = 4;
    if (0x10 > a) {
        o->f30c = 1;
        o->ff0 = 2;
        o->f108 = g_8c46f3ac->f00;
        o->fe8 |= 0x100;
    } else {
        o->f30c = 0;
        o->ff0 = 1;
        goto L_8c0bdfe8;
L_8c0bdfc2:;
        o->f30a = 5;
        o->f30c = 0;
        o->ff0 = 3;
        goto L_8c0bdfe8;
L_8c0bdfd6:;
        o->f30a = 6;
        o->f30c = 0;
        o->ff0 = 4;
    }
L_8c0bdfe8:;
    call_8c0121a0(o, 0, (void *)(*(S_g8c46f3a4_0 **)((char *)((char *)g_8c46f3a4 + 0x0) + (o->f398 << 2))), 0);
    o->fdc->f18 |= 1;
    o->f34 &= -0x6040001;
    o->f34 |= 0x200000;
}
