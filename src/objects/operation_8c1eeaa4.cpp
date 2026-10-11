typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
class Object {
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
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    short f30a;
    short f30c;
    char unknown30e[0xa];
    Vector3 f318;
    char unknown324[0x2a4];
    int f5c8;
} ObjectData;
extern "C" void call_8c1e8e60(Object *, short, int);
extern "C" void call_8c02a764(Object *, int);
extern "C" void call_8c04663c(Object *, int);
extern "C" int operation_02c350(void *);
extern "C" void operation_021f88(void *, int, short);
extern "C" void operation_8c1eeaa4(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    (&frame)->f00 = ((ObjectData *)o)->f318;
    call_8c1e8e60(o, ((ObjectData *)o)->f30a, 6);
    ((ObjectData *)o)->f318 = (&frame)->f00;
    ((ObjectData *)o)->f5c8 = 0x12c;
    ((ObjectData *)o)->f34 &= -0x10001;
    call_8c02a764(o, 0x13);
    v1 = (int)(((ObjectData *)o)->f308 == 2);
    if (v1 != 0) {
        t1 = o->v10();
        call_8c04663c(o, t1);
    }
    ((ObjectData *)o)->f30c = 0;
    t2 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0xe, *(short *)((char *)0x8c2e7432 + ((short)t2 << 1)));
}
