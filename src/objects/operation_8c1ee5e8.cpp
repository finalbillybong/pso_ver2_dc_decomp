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
    char unknown30c[0xc];
    Vector3 f318;
    char unknown324[0x2a4];
    int f5c8;
} ObjectData;
extern "C" void call_8c1e8e60(Object *, short, int);
extern "C" int call_8c02b2a4(void);
extern "C" void call_8c02a764(Object *, int);
extern "C" void call_8c04663c(Object *, int);
extern "C" int operation_02c350(void *);
extern "C" void operation_021f88(void *, int, short);
extern "C" void operation_8c1ee5e8(Object *o)
{
    Frame frame;
    int v4;
    int t1;
    int t2;
    int t3;
    (&frame)->f00 = ((ObjectData *)o)->f318;
    call_8c1e8e60(o, ((ObjectData *)o)->f30a, 6);
    ((ObjectData *)o)->f318 = (&frame)->f00;
    t1 = call_8c02b2a4();
    if (t1 == 0) {
        if (*(int *)0x8c4703c0 != 3) {
            goto L_8c1ee63a;
        }
    }
    ((ObjectData *)o)->f5c8 = 0x1e;
    goto L_8c1ee640;
L_8c1ee63a:;
    ((ObjectData *)o)->f5c8 = 0x3c;
L_8c1ee640:;
    call_8c02a764(o, 0x12);
    v4 = (int)(((ObjectData *)o)->f308 == 2);
    if (v4 != 0) {
        t2 = o->v10();
        call_8c04663c(o, t2);
    }
    ((ObjectData *)o)->f34 &= -0x10001;
    t3 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0xd, *(short *)((char *)0x8c2e746e + ((short)t3 << 1)));
}
