typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327758 S_L8c327758;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x64496 S_x64496;
typedef struct S_x66528 S_x66528;
typedef struct S_x94480 S_x94480;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    float f3a4;
    char unknown3a8[0x44];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_x64496 {
    float f00;
};
struct S_x94480 {
    float f00;
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x66528 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327758 g_8c327758;
extern "C" float call_8c21c43c(float);
extern "C" void call_8c1b86dc(Object *);
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1bac0c(Object *o)
{
    Frame frame;
    int v5;
    int v6;
    float t1;
    int t2;
    if (o->f3a0 > 0x48) {
        o->f3a4 = 1.0f - (float)((int)o->f3a0 + -0x48) / 75.0f;
    } else {
        o->f3a4 = 1.0f;
    }
    v5 = (int)0x3a4;
    t1 = call_8c21c43c(((S_x64496 *)((int)o + v5))->f00);
    ((S_x94480 *)((int)o + v5))->f00 = t1;
    call_8c1b86dc(o);
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b841c((int)o);
        o->f390 = 1;
        v6 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
        if (v6 != -1) {
            o->f3ec = (int)v6;
            o->f3f0 = 0.0f;
            o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v6 * 0x14)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x66528 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
        t2 = call_8c18e6fc((Frame *)((&frame)));
        if (t2 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
