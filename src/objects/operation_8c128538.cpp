typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s3ac;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
class Arg0_s3ac {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3acData {

} Arg0_s3acData;
extern "C" void call_8c1085e4(void *);
extern "C" void operation_8c0fbfe0(void *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void request_actor_mode_zero_8c128b44(void *);
extern "C" void operation_8c128538(Object *o)
{
    int t1;
    switch (o->f398) {
    case 0:
        o->f3a4 |= 4;
        o->f34 |= 0x4000000;
        o->ff0 = 0;
        call_8c1085e4((void *)(((char *)o + 0x3c)));
        operation_8c0fbfe0((void *)(((char *)o + 0x3ac)));
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = ((Arg0_s3ac *)((char *)o + 0x3ac))->v5();
        if (t1 != 1) {
            return;
        }
        o->f3a4 &= -6;
        o->f398 = -1;
        request_actor_mode_zero_8c128b44((void *)o);
        return;
    case -1:
        o->f3a4 &= -6;
        o->f34 &= -0x4000001;
    }
}
