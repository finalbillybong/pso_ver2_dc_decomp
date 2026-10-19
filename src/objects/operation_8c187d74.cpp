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
};
typedef struct ObjectData {
    char unknown0[0x24];
    int f24;
} ObjectData;
extern "C" void operation_8c187e08(void *);
extern "C" void operation_8c187e9c(void *);
extern "C" void operation_8c187ed8(void *);
extern "C" void operation_8c187f44(void *);
extern "C" void operation_8c187d74(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        operation_8c187e08((void *)o);
        return;
    case 2:
        operation_8c187e9c((void *)o);
        return;
    case 3:
        operation_8c187ed8((void *)o);
        return;
    case 4:
        operation_8c187f44((void *)o);
        return;
    case 5:
        break;
    }
}
