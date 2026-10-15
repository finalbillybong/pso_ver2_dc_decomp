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
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
} ObjectData;
struct Frame {
    unsigned char f00;
    char f01;
    unsigned short f02;
};
extern "C" void operation_8c02f8f8(Object *o)
{
    Frame frame;
    if (((ObjectData *)o)->fa7c != 0) {
        (&frame)->f00 = 0xa2;
        (&frame)->f01 = 0;
        (&frame)->f02 = 4;
        o->v9((&frame), (unsigned short)(&frame)->f02);
    }
}
