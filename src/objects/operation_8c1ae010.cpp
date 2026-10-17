typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327128 S_L8c327128;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x28848 S_x28848;
typedef struct S_x72592 S_x72592;
struct Object {
    char unknown0[0x398];
    int f398;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_L8c327128 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_x28848 {
    Vector3 f00;
};
struct S_x72592 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327128 g_8c327128;
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c1ae010(Object *o, int a1)
{
    Frame frame;
    int t1;
    int t2;
    if (a1 < 0 || a1 >= 0x10) {
        return;
    }
    if (o->f398 != -1) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x28848 *)((char *)&g_8c327128.f10 + o->f398 * 0x34))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        }
    }
    o->f398 = a1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x72592 *)((char *)&g_8c327128.f04 + o->f398 * 0x34))->f00;
    t2 = call_8c18e6fc((void *)(&frame));
    if (t2 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
