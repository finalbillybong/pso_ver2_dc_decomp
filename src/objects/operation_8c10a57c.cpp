typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s3e8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
class Arg0_s3e8 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3e8Data {

} Arg0_s3e8Data;
extern "C" void call_8c108570(void *);
extern "C" void operation_8c1147cc(void *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c10a57c(Object *o)
{
    short v1;
    int t1;
    switch (o->f398) {
    case 0:
        o->f3a4 |= 4;
        o->f34 |= 0x4000000;
        o->ff0 = 0;
        call_8c108570((void *)(((char *)o + 0x324)));
        operation_8c1147cc((void *)(((char *)o + 0x3e8)));
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        t1 = ((Arg0_s3e8 *)((char *)o + 0x3e8))->v5();
        if (t1 != 1) {
            return;
        }
        o->f398 = -1;
        return;
    case -1:
        *(int *)((char *)o + 0x3a4) &= -6;
        o->f34 &= -0x4000001;
        if (((o->f3a4 & 1)) == 0) {
            v1 = (short)o->f30a;
            if (v1 != 0) {
                o->f39c = (int)v1;
                o->f390 = 0;
            }
        }
    }
}
