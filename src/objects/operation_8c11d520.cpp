typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x2640 S_x2640;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0x10];
    int f3a4;
    char unknown3a8[0x60];
    int f408;
};
struct Frame {
    Vector3 f00;
};
struct S_x2640 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c310bd8[];
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11d520(Object *o)
{
    Frame frame;
    int t1;
    if (((o->f408 & 2)) != 0) {
        o->f64 += 0x111;
    } else {
        o->f64 -= 0x111;
    }
    if (!(--o->f3a4 >= 0)) {
        o->f390 = 7;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x2640 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
            t1 = call_8c18e6fc((Frame *)((&frame)));
            if (t1 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
