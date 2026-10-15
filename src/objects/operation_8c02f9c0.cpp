typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
struct Frame {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
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
extern "C" void call_8c12b880(Frame *, int, int);
extern "C" void operation_8c02f9c0(Object *o)
{
    Frame frame;
    o->v4((g_8c2e7ce0 + 0x605));
    call_8c12b880((Frame *)((&frame)), 0, 4);
    (&frame)->f00 = 0xa9;
    (&frame)->f02 = 4;
    o->v9((&frame), (unsigned short)(&frame)->f02);
}
