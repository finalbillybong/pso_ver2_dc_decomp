typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327128 S_L8c327128;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x79696 S_x79696;
struct Frame {
    Vector3 f00;
};
struct S_L8c327128 {
    char unknown0[0x1c];
    int f1c;
};
struct Object {
    char unknown0[0x398];
    int f398;
};
struct S_x79696 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327128 g_8c327128;
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1ae104(Object *o)
{
    Frame frame;
    int t1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x79696 *)((char *)&g_8c327128.f1c + o->f398 * 0x34))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
