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
};
typedef struct ObjectData {
    char unknown0[0xe4];
    int fe4;
} ObjectData;
extern "C" void call_8c11da04(Object *);
extern "C" void operation_8c11dad4(void *);
extern "C" void operation_8c11d8f0(Object *o)
{
    int t1;
    t1 = o->v11(300.0f, 40.0f);
    if (t1 != 0) {
        if (((ObjectData *)o)->fe4 != 0) {
            if (((ObjectData *)o)->fe4 != 1) {
                return;
            }
        } else {
            call_8c11da04(o);
            return;
        }
        operation_8c11dad4((void *)o);
    }
}
