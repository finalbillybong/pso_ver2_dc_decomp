typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_30_2c Arg0_30_2c;
class S_vv22;
class S_vv23;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
    char unknown34[0x2c];
    float f60;
};
struct Arg0_30 {
    char unknown0[0x18];
    Arg0_30_18 *f18;
    char unknown1c[0x10];
    Arg0_30_2c *f2c;
};
class S_vv22 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv22Data {
    char unknown0[0x20];
    float f20;
    float f24;
} S_vv22Data;
struct S_c8c021ef8 {
    char unknown0[0x198];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
};
class S_vv23 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv23Data {
    char unknown0[0x20];
    float f20;
    float f24;
} S_vv23Data;
extern "C" void operation_8c0db20c(void *, int, int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" Object *operation_8c0e2648(Object *o)
{
    Object **home = &o;
    S_vv22 *v22;
    S_vv23 *v23;
    int v21;
    S_c8c021ef8 *t1;
    (void)home;
    operation_8c0db20c((void *)o, (int)((void *)0x8c307714), (int)(*(S_g8c4e2ba4 **)0x8c4e2ba4));
    o->dispatch = (void *)(void *)0x8c2677bc;
    o->tag = (int)(*(int *)0x8c307530);
    o->size = 0x7c;
    o->f60 = -1.0f;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        v22 = (S_vv22 *)o->f30->f18;
        ((S_vv22Data *)v22)->f20 = (float)t1->f198;
        ((S_vv22Data *)v22)->f24 = (float)t1->f330;
        v22->v3();
        v23 = (S_vv23 *)o->f30->f2c;
        ((S_vv23Data *)v23)->f20 = (float)t1->f19a;
        ((S_vv23Data *)v23)->f24 = (float)t1->f332;
        v23->v3();
    }
    v21 = (int)0;
    while (5 > v21) {
        *(int *)((char *)((char *)o + 0x68) + (v21 << 2)) = 0;
        v21 = (int)(v21 + 1);
    }
    return o;
}
