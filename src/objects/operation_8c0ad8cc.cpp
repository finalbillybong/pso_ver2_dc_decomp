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
};
typedef struct ObjectData {
    char unknown0[0x70];
    int f70;
} ObjectData;
extern "C" void operation_8c0ad90c(void *, int, int, int);
extern "C" void operation_8c0ad92c(void *);
extern "C" void operation_8c0ad8cc(Object *o, int a1, int a2, int a3)
{
    if (((ObjectData *)o)->f70 != 0) {
        if (((ObjectData *)o)->f70 != 1) {
            return;
        }
    } else {
        operation_8c0ad90c((void *)o, a1, a2, a3);
        operation_8c0ad92c((void *)o);
        return;
    }
    o->v6();
}
