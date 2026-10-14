typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_f0 Arg0_f0;
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
    virtual void v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0xf0];
    Arg0_f0 *ff0;
} ObjectData;
struct Arg0_f0 {
    char unknown0[0x14];
    float f14;
    float f18;
};
extern "C" void operation_8c1c1a68(Object *o)
{
    o->v11(((ObjectData *)o)->ff0->f14, ((ObjectData *)o)->ff0->f18);
}
