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
};
typedef struct ObjectData {

} ObjectData;
extern int g_8c41bd10;
extern "C" void operation_8c1067d0(Object *o)
{
    if (g_8c41bd10 == 0) {
        o->v5();
    }
}
