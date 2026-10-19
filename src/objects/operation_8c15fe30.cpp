typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x40752 S_x40752;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x2a4];
    int f390;
    int f394;
};
struct Frame {
    Vector3 f00;
};
struct S_x40752 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c15fe30(Object *o)
{
    Frame frame;
    int v1;
    int v4;
    int v2;
    int t1;
    if (((o->fe8 & 0x10)) != 0) {
        v1 = (int)o->f390;
        v2 = (int)o->f394;
        if (v2 != v1) {
            o->f390 = (int)v2;
        }
        o->f394 = (int)v1;
        v4 = (int)o->f394;
        if (v4 >= 0 && !(v4 >= 0x11)) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x40752 *)(v4 * 0x18 + g_8c316c90))->f00;
            t1 = call_8c18e6fc((Frame *)((&frame)));
            if (t1 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
