typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x37504 S_x37504;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x2a4];
    int f390;
    int f394;
    char unknown398[0x24];
    Arg0_3bc *f3bc;
    char unknown3c0[0x10];
    int f3d0;
    char unknown3d4[0x1c];
    int f3f0;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
};
struct S_x37504 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(Frame *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c1611c0(Object *o)
{
    Frame frame;
    int v7;
    int v5;
    int v4;
    int v2;
    int t1;
    int t2;
    v2 = (int)1;
    if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
        v2 = (int)0;
    }
    if (v2 == 0 && ((o->fe8 & 0x10)) == 0) {
        goto L_8c16123a;
    }
    v5 = (int)o->f390;
    v4 = (int)o->f394;
    if (v5 != v4) {
        o->f390 = (int)v4;
    }
    o->f394 = 0xa;
    v7 = (int)o->f394;
    if (v7 >= 0 && !(v7 >= 0x11)) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x37504 *)(v7 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            return;
L_8c16123a:;
            if (--o->f3d0 == 0) {
                call_8c05fbf8(0x3002f, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            t2 = angle_step((int)(o->f64), (int)((int)o->f3f0 + -0x800), 0x200);
            o->f64 = (Arg0_64 *)(int)t2;
        }
    }
}
