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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
};
typedef struct ObjectData {
    char unknown0[0xe8];
    int fe8;
} ObjectData;
extern "C" void operation_8c1ab1b8(Object *o)
{
    if (((ObjectData *)o)->fe8 != 0) {
        if (((ObjectData *)o)->fe8 != 1) {
            return;
        }
    } else {
        o->v15();
        return;
    }
    o->v16();
}
