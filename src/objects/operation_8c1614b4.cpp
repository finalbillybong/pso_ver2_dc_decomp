typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3f0 Arg0_3f0;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x36880 S_x36880;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x29e];
    int f390;
    int f394;
    char unknown398[0x38];
    int f3d0;
    char unknown3d4[0x1c];
    Arg0_3f0 *f3f0;
};
struct Frame {
    Vector3 f00;
};
struct S_x36880 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(Frame *);
extern "C" int angle_step(int, int, int);
extern "C" int angle_difference(int, int);
extern "C" void operation_8c1614b4(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int v1;
    char *v5;
    int t1;
    int t2;
    int t3;
    if (!(--o->f3d0 >= 0)) {
        v2 = (int)o->f390;
        v1 = (int)o->f394;
        if (v2 != v1) {
            o->f390 = (int)v1;
        }
        o->f394 = 2;
        v4 = (int)o->f394;
        if (!(v4 >= 0)) {
            return;
        }
        if (v4 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x36880 *)(v4 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        return;
    }
    v5 = (char *)o->f64;
    t2 = angle_step((int)(v5), (int)(o->f3f0), 0x888);
    o->f64 = (Arg0_64 *)(int)t2;
    t3 = angle_difference((int)(v5), (int)(o->f64));
    if (t3 == 0) {
        o->ff0 = 0;
    }
}
