typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct S_x25104 S_x25104;
typedef struct S_x39824 S_x39824;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    Arg0_394 *f394;
};
struct Arg0_394 {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
};
struct S_L8c3268ec {
    char unknown0[0x14];
    int f14;
    char unknown18[0x8];
    int f20;
};
struct S_x39824 {
    Vector3 f00;
};
struct S_x25104 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3268ec g_8c3268ec;
extern "C" int call_8c18e6fc(Frame *);
extern "C" void call_8c1b3cdc(Object *);
extern "C" void call_8c1b4470(Object *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c1b4910(Object *);
extern "C" void call_8c1b4d80(Object *);
extern "C" void call_8c1b4e40(Object *);
extern "C" void operation_8c1b3b48(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    v1 = (int)(o->f394->f394 == 0);
    if (v1 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x39824 *)((char *)&g_8c3268ec.f14 + o->f390 * 0x2c))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x25104 *)((char *)&g_8c3268ec.f20 + o->f390 * 0x2c))->f00;
    t2 = call_8c18e6fc((Frame *)((&frame)));
    if (t2 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
    call_8c1b3cdc(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    call_8c1b4470(o);
    refresh_follow_effect_8c052180((void *)o);
    call_8c027090(o);
    call_8c1b4910(o);
    call_8c1b4d80(o);
    call_8c1b4e40(o);
}
