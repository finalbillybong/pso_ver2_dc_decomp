typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Object {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct ObjectData {
    char unknown0[0x18];
    int dispatch;
    float f1c;
} ObjectData;
extern "C" void operation_8c1f156c(Object *o)
{
    ((ObjectData *)o)->dispatch = 1;
    ((ObjectData *)o)->f1c = 300.0f;
    o->v3();
}
