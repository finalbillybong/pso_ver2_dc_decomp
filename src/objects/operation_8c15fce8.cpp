typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct S_x38800 S_x38800;
typedef struct S_x67664 S_x67664;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x2a4];
    int f390;
    int f394;
    char unknown398[0x24];
    Arg0_3bc *f3bc;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x67664 {
    Vector3 f00;
};
struct S_x38800 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c15fce8(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int v3;
    int v6;
    int v8;
    int v7;
    int v10;
    int t1;
    int t2;
    v2 = (int)1;
    if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
        v2 = (int)0;
    }
    if (v2 != 0) {
        v4 = (int)o->f390;
        v3 = (int)o->f394;
        if (v4 != v3) {
            o->f390 = (int)v3;
        }
        o->f394 = 2;
        v6 = (int)o->f394;
        if (!(v6 >= 0)) {
            return;
        }
        if (v6 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x67664 *)(v6 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (((o->fe8 & 0x10)) != 0) {
        v8 = (int)o->f390;
        v7 = (int)o->f394;
        if (v8 != v7) {
            o->f390 = (int)v7;
        }
        o->f394 = 0;
        v10 = (int)o->f394;
        if (v10 >= 0 && !(v10 >= 0x11)) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x38800 *)(v10 * 0x18 + g_8c316c90))->f00;
            t2 = call_8c18e6fc((void *)(&frame));
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
