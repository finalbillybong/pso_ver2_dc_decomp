typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
struct Frame {
    unsigned char f00;
    char f01;
    unsigned short f02;
    int f04;
    int f08;
};
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

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02f930(Object *o, int a1, int a2)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x5e1));
    (&frame)->f00 = 0x96;
    (&frame)->f01 = 0;
    (&frame)->f02 = 0xc;
    (&frame)->f04 = a1;
    (&frame)->f08 = a2;
    o->v9((&frame), (unsigned short)(&frame)->f02);
}
