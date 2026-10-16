typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x11472 S_x11472;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x294];
    int f390;
};
struct Frame {
    Vector3 f00;
};
struct S_x11472 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11d444(Object *o)
{
    Frame frame;
    int t1;
    if (!(20.0f > o->ff8) && 20.6f > o->ff8) {
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
    }
    if (((o->fe8 & 0x10)) != 0) {
        o->f390 = 3;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x11472 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t1 = call_8c18e6fc((Frame *)((&frame)));
            if (t1 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
