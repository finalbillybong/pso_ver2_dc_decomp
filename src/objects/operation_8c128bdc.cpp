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
    virtual int v4();
};
typedef struct Arg0_s3acData {

} Arg0_s3acData;
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c128bdc(Object *o)
{
    int t1;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c128c20;
            }
            if (o->f398 == 2) {
                return;
            }
            return;
        }
        o->ff0 = 0;
        ((Arg0_s3ac *)((char *)o + 0x3ac))->v2();
        o->f3a4 |= 4;
        o->f398 = 1;
L_8c128c20:;
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = ((Arg0_s3ac *)((char *)o + 0x3ac))->v4();
        if (t1 == 1) {
            o->f3a4 &= -5;
            o->f34 |= 0x2000000;
            o->f398 = 2;
        }
    }
}
