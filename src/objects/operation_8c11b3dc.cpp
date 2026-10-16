typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x68096_0 S_x68096_0;
typedef struct S_x87008 S_x87008;
struct Object {
    char unknown0[0x390];
    int f390;
};
struct Frame {
    Vector3 f00;
};
struct S_x87008 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11b3dc(Object *o, int a1)
{
    Frame frame;
    int v3;
    int v2;
    int v1;
    int t1;
    o->f390 = a1;
    if (o->f390 < 0 || o->f390 >= 0xe) {
        return;
    }
    v2 = (int)0;
    v1 = (int)0x3b0;
    while (2 > v2) {
        v3 = (int)(v2 << 2);
        if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
            mark_effect_for_release((void *)(*(S_x68096_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
            *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) = 0;
        }
        v2 = (int)(v2 + 1);
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x87008 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
