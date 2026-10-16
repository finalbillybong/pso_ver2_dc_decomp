typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x49824 S_x49824;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0x10];
    int f3a4;
    char unknown3a8[0x94];
    int f43c;
};
struct Frame {
    Vector3 f00;
    float f0c;
    char unknown10[0x4];
    float f14;
};
struct S_x49824 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int call_8c04a52c(Object *, void *, float);
extern "C" float call_8c130334(float, float);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11bd04(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    int t1;
    float t2;
    int t3;
    v1 = (int)0;
    if (!(--o->f3a4 >= 0)) {
        v2 = (int)1;
        v1 = (int)v2;
    } else {
        t1 = call_8c04a52c(o, (void *)(&(&frame)->f0c), (float)o->f43c);
        if ((unsigned short)t1 != 0xffff) {
            t2 = call_8c130334((&frame)->f0c, (&frame)->f14);
            o->f64 = (int)(t2 * 65536.0f / 6.28318405f);
            v1 = (int)1;
        }
    }
    if (v1 != 0) {
        o->f390 = 2;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x49824 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t3 = call_8c18e6fc((Frame *)((&frame)));
            if (t3 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
