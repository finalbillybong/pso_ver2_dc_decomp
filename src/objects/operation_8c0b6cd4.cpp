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
};
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c0b6cf4(void);
extern "C" void operation_8c0b6cd4(Object *o)
{
    call_8c0b6cf4();
    o->v5();
}
