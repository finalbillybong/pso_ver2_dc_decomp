typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s3c4;
struct Object {
    char unknown0[0x30a];
    short f30a;
    short f30c;
    char unknown30e[0x9e];
    int f3ac;
};
class Arg0_s3c4 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3c4Data {

} Arg0_s3c4Data;
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c1147cc(void *);
extern "C" void call_8c1084fc(void *);
extern "C" void operation_8c0379cc(Object *o)
{
    int t1;
    call_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c037a18;
        }
        if (o->f30c == 2) {
            goto L_8c037a38;
        }
    }
    if (o->f3ac != 0) {
        operation_8c1147cc((void *)(((char *)o + 0x3c4)));
        call_8c1084fc((void *)(((char *)o + 0x3c)));
        o->f30c = 1;
        return;
    }
    o->f30c = 2;
    return;
L_8c037a18:;
    t1 = ((Arg0_s3c4 *)((char *)o + 0x3c4))->v5();
    if (t1 == 1) {
        o->f30c = 2;
        o->f3ac = 0;
        return;
L_8c037a38:;
        o->f30a = 1;
        o->f30c = 0;
    }
}
