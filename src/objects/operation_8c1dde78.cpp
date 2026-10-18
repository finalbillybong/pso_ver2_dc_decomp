typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
class Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
class Arg0_20 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual int v10();
};
typedef struct Arg0_20Data {
    char unknown0[0x20];
    short f20;
} Arg0_20Data;
extern "C" void mark_effect_for_release(void *);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" void operation_8c1dde78(Object *o)
{
    int t1;
    int t2;
    if (o->f20 != 0) {
        mark_effect_for_release((void *)(o->f24));
        t1 = o->f20->v10();
        t2 = create_effect_7708((void *)t1, 0x9d, 0x10);
        o->f24 = (Arg0_24 *)(int)t2;
        if (o->f24 != 0) {
            bind_id((void *)(o->f24), (unsigned short)(((Arg0_20Data *)o->f20)->f20));
        }
    }
}
