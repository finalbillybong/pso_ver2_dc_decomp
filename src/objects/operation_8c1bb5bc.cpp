typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327d80 S_L8c327d80;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_3a0 Arg0_3a0;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x30688 S_x30688;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
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
    char unknown398[0x8];
    Arg0_3a0 *f3a0;
    char unknown3a4[0x20];
    int f3c4;
    int f3c8;
    float f3cc;
    Arg0_3d0 *f3d0;
    int f3d4;
    Arg0_3d8 *f3d8;
    int f3dc;
};
struct Arg0_394 {
    char unknown0[0x398];
    int f398;
};
struct S_L8c327d80 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_x30688 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_3a0 {
    char unknown0[0x18];
    int f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c327d50;
extern Vector3 g_8c327d5c;
extern Vector3 g_8c327d68;
extern Vector3 g_8c327d74;
extern char g_8c4e2b40;
extern S_L8c327d80 g_8c327d80;
extern "C" char gc_8c327d80[];
extern "C" void set_fields_8c1bbd54(void *);
extern "C" int call_8c18e6fc(void *);
extern "C" float call_8c37eb0c(void *);
extern "C" void call_8c0a7608(void *, Frame *);
extern "C" void call_8c1bbd80(Object *);
extern "C" void operation_8c1ad004(void *, int, int);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c1bb5bc(Object *o)
{
    Frame frame;
    int v1;
    int v11;
    int v40;
    int v52;
    float v53;
    int v70;
    int t1;
    float t2;
    v1 = (int)(o->f390 != 3);
    if (v1 != 0 && o->f394->f398 != 4) {
        set_fields_8c1bbd54((void *)o);
    }
    v11 = (int)1;
    if (o->f390 != 1 && o->f390 != 2) {
        v11 = (int)0;
    }
    if (v11 != 0) {
        *(int *)((char *)o + 0x3c8) -= 1;
        if (!(o->f3c8 >= 0)) {
            o->f3c4 = 0;
            o->f3c8 = 0xa8c;
        } else {
            if (0x1c2 > o->f3c8) {
                o->f3c4 = 1;
            }
        }
    }
    if (g_8c4e2b40 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c327d80 + 0x0) = *(Vector3 *)&g_8c327d50;
        *(Vector3 *)&*(Vector3 *)(gc_8c327d80 + 0xc) = *(Vector3 *)&g_8c327d5c;
        *(Vector3 *)&*(Vector3 *)(gc_8c327d80 + 0x18) = *(Vector3 *)&g_8c327d68;
        *(Vector3 *)&*(Vector3 *)(gc_8c327d80 + 0x24) = *(Vector3 *)&g_8c327d74;
        g_8c4e2b40 = 1;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x30688 *)(o->f390 * 0xc + gc_8c327d80))->f00;
    t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
    if (t1 == 0) {
        return;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
    if (o->f390 != 1 && o->f390 != 2) {
    } else {
        t2 = call_8c37eb0c((void *)(o->f3d8));
        o->f3c.f04 += t2 * 0.1f;
        o->f3d8 = (Arg0_3d8 *)((int)o->f3d8 + o->f3dc);
    }
    if (o->f3d0 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
        if (o->f3c4 != 0) {
            (&frame)->f00.f04 += 10.0f;
        } else {
            (&frame)->f00.f04 += -250.0f;
        }
        call_8c0a7608((void *)(o->f3d0), (Frame *)((&frame)));
    }
    o->f3cc = 0.0f;
    if (o->f3c4 != 0) {
        v40 = (int)o->f3c8;
        if (0x1e > v40) {
            o->f3cc = (float)v40 / 30.0f;
            goto L_8c1bb806;
        }
        o->f3cc = 1.0f;
    } else {
        if (0x1e0 > o->f3c8) {
            o->f3cc = (float)(0x1e0 - (int)o->f3c8) / 30.0f;
        }
    }
L_8c1bb806:;
    v52 = (int)1;
    if (o->f390 != 1 && o->f390 != 2) {
        v52 = (int)0;
    }
    if (v52 != 0) {
        v53 = (float)o->f3cc;
        if (v53 > 0.0f) {
            o->f64 = (Arg0_64 *)(int)((float)(int)o->f64 + v53 * 4369.0f);
        }
    }
    call_8c1bbd80(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    operation_8c1ad004((void *)(&o->f3c), (int)(o->f60), (int)(o->f64));
    v70 = (int)(o->f390 != 3);
    if (v70 != 0) {
        if (o->f3c4 != 0) {
            o->f3a0->f18 |= 1;
            refresh_follow_effect_8c052180((void *)o);
            call_8c027090(o);
            call_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
        } else {
            o->f3a0->f18 = (unsigned int)o->f3a0->f18 >> 1 << 1;
            if ((o->f3d4 & 1) == (o->f20 & 1)) {
                call_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
            }
        }
    }
    o->f3d4 += 1;
}
