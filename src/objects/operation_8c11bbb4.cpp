typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x36432 S_x36432;
struct Object {
    char unknown0[0x390];
    int f390;
};
struct Frame {
    Vector3 f00;
};
struct S_x36432 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11bbb4(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        o->f390 = 1;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x36432 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t2 = call_8c18e6fc((Frame *)((&frame)));
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
