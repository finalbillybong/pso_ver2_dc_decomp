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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    int fe4;
} ObjectData;
extern "C" void operation_8c1c1a08(Object *o)
{
    if (((ObjectData *)o)->fe4 != 0) {
        if (((ObjectData *)o)->fe4 == 1) {
            goto L_8c1c1a32;
        }
        if (((ObjectData *)o)->fe4 == 2) {
            goto L_8c1c1a42;
        }
        if (((ObjectData *)o)->fe4 == 3) {
            goto L_8c1c1a52;
        }
        return;
    }
    o->v16();
    return;
L_8c1c1a32:;
    o->v18();
    return;
L_8c1c1a42:;
    o->v19();
    return;
L_8c1c1a52:;
    o->v17();
}
