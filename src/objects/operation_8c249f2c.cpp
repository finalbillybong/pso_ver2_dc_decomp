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
    virtual void v6(int);
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern "C" void call_8c01d1ec(Object *, int);
extern "C" Object *operation_8c249f2c(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o, a2);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27d648;
    o->v6(a1);
    return o;
}
