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
    char unknown0[0xec];
    int fec;
} ObjectData;
extern "C" void call_8c080ee4(Object *);
extern "C" void operation_8c080e84(void *);
extern "C" void operation_8c080e30(Object *o)
{
    int t1;
    t1 = o->v11(300.0f, 40.0f);
    if (t1 != 0) {
        switch (((ObjectData *)o)->fec) {
        case 0:
            call_8c080ee4(o);
            return;
        case 1:
            operation_8c080e84((void *)o);
        }
    }
}
