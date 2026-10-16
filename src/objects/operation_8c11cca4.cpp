typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_x24688 S_x24688;
typedef struct S_x71104 S_x71104;
struct Object {
    char unknown0[0xf8];
    float ff8;
    char unknownfc[0x294];
    int f390;
    char unknown394[0x10];
    int f3a4;
    char unknown3a8[0x60];
    int f408;
    int f40c;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x24688 {
    Vector3 f00;
};
struct S_x71104 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void mark_effect_for_release(void *);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c11cca4(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x3b0);
    if (!(5.0f > o->ff8) && v1->f00 != 0) {
        mark_effect_for_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    }
    if (!(--o->f3a4 > 0)) {
        if (((o->f408 & 1)) == 0 && 4 > o->f40c) {
            o->f390 = 0xd;
            if (!(o->f390 >= 0)) {
                return;
            }
            if (o->f390 >= 0xe) {
                return;
            }
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x24688 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
            if (t1 == 0) {
                return;
            }
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f390 = 3;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x71104 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t2 = call_8c18e6fc((void *)(&frame));
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
