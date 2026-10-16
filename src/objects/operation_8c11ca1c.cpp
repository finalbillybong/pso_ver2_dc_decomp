typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_x88304 S_x88304;
struct Object {
    char unknown0[0xf8];
    float ff8;
    char unknownfc[0x294];
    int f390;
    char unknown394[0x10];
    int f3a4;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Frame {
    Vector3 f00;
};
struct S_x88304 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void mark_effect_for_release(void *);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11ca1c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)((char *)o + 0x3b0);
    if (!(5.0f > o->ff8) && v1->f00 != 0) {
        mark_effect_for_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    }
    if (!(--o->f3a4 > 0)) {
        o->f390 = 3;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x88304 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t1 = call_8c18e6fc((Frame *)((&frame)));
            if (t1 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
