typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct S_x42992 S_x42992;
typedef struct S_x65008 S_x65008;
typedef struct S_x83264 S_x83264;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    int f394;
    Arg0_398 *f398;
    char unknown39c[0xc];
    Vector3 f3a8;
    char unknown3b4[0x8];
    Arg0_3bc *f3bc;
    char unknown3c0[0xc];
    float f3cc;
    char unknown3d0[0x10];
    int f3e0;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Block_frame_24 f24;
};
struct S_x42992 {
    Vector3 f00;
};
struct S_x65008 {
    Vector3 f00;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
struct S_x83264 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
typedef struct StateRow {
    PMF_0 fn;
    char unknownc[0xc];
} StateRow;
extern "C" StateRow g_8c316c90[];
extern "C" void call_8c37f6f0(void *, void *);
extern "C" float call_8c37e480(void *);
extern "C" void call_8c37b630(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void call_8c15eb34(Object *, void *);
extern "C" float squared_distance_xz(void *, void *);
static inline int is_7_or_8(Object *o)
{
    int r;
    r = 1;
    if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
        r = 0;
    }
    return r;
}
static inline void set_state(Object *o, int n)
{
    int s;
    if (o->f390 != o->f394) {
        o->f390 = o->f394;
    }
    o->f394 = n;
    s = o->f394;
    if (s < 0 || s >= 0x11) {
        return;
    }
    PMF_0 fn = g_8c316c90[s].fn;
    if (fn) {
        (((PmfObj *)o)->*fn)();
    }
}
extern "C" void operation_8c15f790(Object *o)
{
    Block_frame_24 dir;
    float len;
    float t;
    int c;
    c = 0;
    if (o->f3e0 == 0 && is_7_or_8(o)) {
        c = 1;
    }
    if (c) {
        set_state(o, 0x10);
        return;
    }
    if (is_7_or_8(o)) {
        set_state(o, 2);
        return;
    }
    *(Vector3 *)&dir = o->f3a8;
    call_8c37f6f0((void *)&dir, (void *)((char *)o + 0x3c));
    dir.f04 = 0.0f;
    len = call_8c37e480((void *)&dir);
    if (!(len > 0.01f)) {
        dir.f00 = 1.0f;
        dir.f08 = 0.0f;
    } else {
        call_8c37b630((void *)&dir);
    }
    if ((o->f398->f18 & 0x3800000) != 0) {
        t = dir.f00;
        dir.f00 = dir.f08;
        dir.f08 = -t;
    }
    o->f64 = angle_step((int)o->f64, (int)(call_8c130334(dir.f00, dir.f08) * 65536.0f / 6.28318405f), 0x208);
    if (len > 15.0f) {
        if ((o->f3cc += 0.025f) > 0.6f) {
            o->f3cc = 0.6f;
        }
    } else {
        if (0.3f > (o->f3cc -= 0.025f)) {
            o->f3cc = 0.3f;
        }
    }
    dir.f00 = o->f3cc * dir.f00;
    dir.f08 *= o->f3cc;
    call_8c15eb34(o, (void *)&dir);
    if (56.25f > squared_distance_xz((void *)&o->f3a8, (void *)((char *)o + 0x3c))) {
        set_state(o, 4);
    }
}
