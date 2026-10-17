typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327758 S_L8c327758;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x87824 S_x87824;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x58];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x87824 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327758 g_8c327758;
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b81b4(Object *o, int a1)
{
    Frame frame;
    int v1;
    int t1;
    operation_8c1b841c((int)o);
    o->f390 = a1;
    v1 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
    if (v1 != -1) {
        o->f3ec = (int)v1;
        o->f3f0 = 0.0f;
        o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v1 * 0x14)));
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x87824 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
