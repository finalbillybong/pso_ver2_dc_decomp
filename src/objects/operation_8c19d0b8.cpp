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
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    float fe4;
} ObjectData;
extern "C" void operation_8c0c5478(void *, void *, float);
extern "C" void operation_8c19d0b8(Object *o)
{
    int t1;
    t1 = o->v11(200.0f, 10.0f);
    if (t1 != 0) {
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306008), ((ObjectData *)o)->fe4 * 2.0f);
    }
}
