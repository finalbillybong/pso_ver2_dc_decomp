typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327e68 S_L8c327e68;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x63536 S_x63536;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x11c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    Arg0_394 *f394;
    char unknown398[0x38];
    Arg0_3d0 *f3d0;
    int f3d4;
    Arg0_3d8 *f3d8;
    int f3dc;
};
struct Arg0_394 {
    char unknown0[0x398];
    int f398;
    char unknown39c[0xc];
    int f3a8;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Vector3 f18;
};
struct S_L8c327e68 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
};
struct S_x63536 {
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
extern Vector3 g_8c2875c0;
extern Vector3 g_8c327e44;
extern Vector3 g_8c327e50;
extern Vector3 g_8c327e5c;
extern char g_8c4e2b42;
extern S_L8c327e68 g_8c327e68;
extern "C" char gc_8c327e68[];
extern "C" int call_8c18e6fc(void *);
extern "C" float call_8c37eb0c(void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void operation_8c1ad004(void *, int, int);
extern "C" void call_8c1bbd80(Object *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c1bca74(Object *o)
{
    Frame frame;
    int v1;
    int v18;
    int v23;
    int v32;
    int t1;
    float t2;
    v1 = (int)o->f390;
    if (v1 != 3 && o->f394->f398 != 8) {
        if (v1 == 3) {
        } else {
            o->f394->f3a8 += 1;
            o->f390 = 3;
        }
        return;
    }
    if (g_8c4e2b42 == 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c327e44;
            *(Vector3 *)&*(Vector3 *)(gc_8c327e68 + 0x0) = *p_;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c327e68 + 0xc) = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c327e68 + 0x18) = *(Vector3 *)&g_8c327e50;
        *(Vector3 *)&*(Vector3 *)(gc_8c327e68 + 0x24) = *(Vector3 *)&g_8c327e5c;
        *(Vector3 *)&*(Vector3 *)(gc_8c327e68 + 0x30) = *(Vector3 *)&(&frame)->f00;
        g_8c4e2b42 = 1;
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x63536 *)(o->f390 * 0xc + gc_8c327e68))->f00;
    t1 = call_8c18e6fc((void *)(&(&frame)->f18));
    if (t1 == 0) {
        return;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
    if (o->f390 == 2) {
        t2 = call_8c37eb0c((void *)(o->f3d8));
        o->f3c.f04 += t2 * 0.1f;
        o->f3d8 = (Arg0_3d8 *)((int)o->f3d8 + o->f3dc);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
    v18 = (int)(o->f390 != 3);
    if (v18 != 0) {
        (&frame)->f0c.f04 += 10.0f;
    } else {
        (&frame)->f0c.f04 += -250.0f;
    }
    call_8c0a7608((void *)(o->f3d0), (void *)(&(&frame)->f0c));
    v23 = (int)(o->f390 != 3);
    if (v23 != 0) {
        o->f64 = (Arg0_64 *)((int)o->f64 + 0x1111);
    }
    operation_8c1ad004((void *)(&o->f3c), (int)(o->f60), (int)(o->f64));
    call_8c1bbd80(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    v32 = (int)(o->f390 != 3);
    if (v32 != 0) {
        refresh_follow_effect_8c052180((void *)o);
        call_8c027090(o);
        call_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
    }
    o->f3d4 += 1;
}
