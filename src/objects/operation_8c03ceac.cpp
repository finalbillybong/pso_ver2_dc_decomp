typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
};
typedef struct ObjectData {
    char unknown0[0x30];
    float f30;
} ObjectData;
extern "C" void call_8c03ca54(Object *);
extern "C" void call_8c0c5484(void *, float);
extern "C" void operation_8c03ceac(Object *o)
{
    o->v6();
    call_8c03ca54(o);
    call_8c0c5484((void *)(((char *)o + 0x20)), ((ObjectData *)o)->f30);
}
