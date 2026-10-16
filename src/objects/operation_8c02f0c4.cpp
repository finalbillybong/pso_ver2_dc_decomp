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
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Frame {
    char f00;
    char f01;
    unsigned short f02;
    int f04;
    char unknown8[0x3fc];
};
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c12b77c(void *, int, int);
extern "C" void operation_8c02f0c4(Object *o, int a1, int a2)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x45c));
    if (((ObjectData *)o)->fa7c != 0) {
        (&frame)->f00 = 0x60;
        (&frame)->f01 = 0;
        (&frame)->f02 = a2 + 4;
        call_8c12b77c((void *)(&(&frame)->f04), a1, a2);
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}
