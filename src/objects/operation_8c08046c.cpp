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
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    float fe4;
    float fe8;
} ObjectData;
extern "C" void operation_8c08046c(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->fe4, ((ObjectData *)o)->fe8);
    if (t1 != 0) {
        o->v16();
    }
}
