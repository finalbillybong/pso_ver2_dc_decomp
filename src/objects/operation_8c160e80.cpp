typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct S_x26624 S_x26624;
typedef struct S_x48480 S_x48480;
typedef struct S_x48656 S_x48656;
typedef struct Block_frame_30 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_30;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    int f394;
    char unknown398[0x24];
    Arg0_3bc *f3bc;
    Vector3 f3c0;
    float f3cc;
    int f3d0;
    char unknown3d4[0xc];
    int f3e0;
    Vector3 f3e4;
    char unknown3f0[0x4];
    float f3f4;
    char unknown3f8[0x2c];
    int f424;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Block_frame_30 f30;
};
struct S_x48480 {
    Vector3 f00;
};
struct S_x48656 {
    Vector3 f00;
};
struct S_x26624 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" float call_8c37e480(void *);
extern "C" void call_8c37b630(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void call_8c15eb34(Object *, void *);
extern "C" void create_effect_777c(void *, int);
static inline int is_type_7_or_8(Object *o)
{
    int r;
    r = 1;
    if (o->f3bc->f394 != 7) {
        if (o->f3bc->f394 != 8) {
            r = 0;
        }
    }
    return r;
}
extern "C" void operation_8c160e80(Object *o)
{
    Frame frame;
    int v6;
    int v9;
    int v8;
    int v11;
    int v12;
    int v16;
    int v15;
    int v18;
    int v25;
    int v24;
    int v27;
    int t1;
    int t2;
    float t3;
    float t4;
    int t5;
    int t6;
    v6 = (int)0;
    if (o->f3e0 == 0) {
        if (is_type_7_or_8(o)) {
            v6 = (int)1;
        }
    }
    if (v6 != 0) {
        v9 = (int)o->f390;
        v8 = (int)o->f394;
        if (v9 != v8) {
            o->f390 = (int)v8;
        }
        o->f394 = 0x10;
        v11 = (int)o->f394;
        if (!(v11 >= 0) || v11 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x48480 *)(v11 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f24));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f24)))();
        return;
    }
    if (--*(int *)((char *)o + 0x3d0) >= 0) {
        v12 = (int)(o->f3bc->f394 == 0xc);
        if (v12 != 0) {
            goto L_8c160f90;
        }
    }
    v16 = (int)o->f390;
    v15 = (int)o->f394;
    if (v16 != v15) {
        o->f390 = (int)v15;
    }
    o->f394 = 2;
    v18 = (int)o->f394;
    if (!(v18 >= 0) || v18 >= 0x11) {
        return;
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x48656 *)(v18 * 0x18 + g_8c316c90))->f00;
    t2 = call_8c18e6fc((void *)(&(&frame)->f18));
    if (t2 == 0) {
        return;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
    return;
L_8c160f90:;
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&o->f3e4;
    t3 = call_8c37e480((void *)(&(&frame)->f30));
    if (!(t3 > 0.01f)) {
        (&frame)->f30.f00 = 1.0f;
        (&frame)->f30.f08 = 0.0f;
    } else {
        call_8c37b630((void *)(&(&frame)->f30));
    }
    t4 = call_8c130334((&frame)->f30.f00, (&frame)->f30.f08);
    t5 = angle_step((int)(o->f64), (int)((int)(t4 * 65536.0f / 6.28318405f)), 0x888);
    o->f64 = (int)t5;
    if (0x87 > o->f3d0) {
        if ((o->f3cc += 0.075f) > 1.25f) {
            o->f3cc = 1.25f;
        }
        (&frame)->f30.f00 *= o->f3cc;
        (&frame)->f30.f08 *= o->f3cc;
        call_8c15eb34(o, (void *)(&(&frame)->f30));
    }
    if (25.0f > o->f3f4) {
        v25 = (int)o->f390;
        v24 = (int)o->f394;
        if (v25 != v24) {
            o->f390 = (int)v24;
        }
        o->f394 = 0xe;
        v27 = (int)o->f394;
        if (!(v27 >= 0)) {
            return;
        }
        if (v27 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x26624 *)(v27 * 0x18 + g_8c316c90))->f00;
        t6 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t6 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (((o->f424 & 7)) == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c0;
        (&frame)->f00.f04 += 5.0f;
        create_effect_777c((void *)(&frame), 0xf3);
    }
}
