typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
};
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c03ca54(int);
extern "C" void operation_8c0d02f8(Object *o)
{
    o->v6();
    call_8c03ca54((int)(o));
}
