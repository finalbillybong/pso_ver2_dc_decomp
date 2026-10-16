typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    char unknown22[0x1e];
    float f40;
    char unknown44[0x14];
    float f58;
    char unknown5c[0xa4];
    int f100;
    char unknown104[0x8];
    int f10c;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    char f0a;
    char f0b;
};
extern "C" void operation_8c1130e8(void *);
extern "C" void call_8c15cab8(Object *);
extern "C" void operation_8c0368a8(void *);
extern "C" void operation_8c15ca00(int);
extern "C" void operation_8c15c914(Object *o)
{
    Frame frame;
    int t1;
    operation_8c1130e8((void *)o);
    if (((ObjectData *)o)->f10c != 1) {
        o->v18();
        call_8c15cab8(o);
        t1 = o->v16();
        if (t1 != 1) {
            goto L_8c15c9ae;
        }
        o->v19();
        (&frame)->f06 = 0;
        (&frame)->f00 = 4;
        (&frame)->f01 = 2;
        (&frame)->f00 = 5;
        (&frame)->f01 = 3;
        (&frame)->f02 = ((ObjectData *)o)->f20;
        (&frame)->f04 = *(int *)0x8c418248;
        (&frame)->f08 = ((ObjectData *)o)->f100;
        (&frame)->f0a = *(int *)0x8c44be04;
        (&frame)->f0b = 1;
        operation_8c0368a8((void *)(&frame));
    } else {
        o->v17();
        operation_8c15ca00((int)o);
    }
L_8c15c9ae:;
    if ((((ObjectData *)o)->f58 + 100.0f) < ((ObjectData *)o)->f40) {
        ((ObjectData *)o)->f04 |= 1;
    }
}
