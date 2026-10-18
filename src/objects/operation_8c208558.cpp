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
};
typedef struct ObjectData {
    char unknown0[0x24];
    int f24;
} ObjectData;
extern "C" void operation_8c20866c(void *);
extern "C" void operation_8c208704(void *);
extern "C" void operation_8c208b74(void *);
extern "C" void operation_8c208874(void *);
extern "C" void operation_8c2088d8(void *);
extern "C" void operation_8c20893c(void *);
extern "C" void operation_8c2089ac(void *);
extern "C" void operation_8c208be8(void *);
extern "C" void operation_8c208558(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        operation_8c20866c((void *)o);
        return;
    case 3:
        operation_8c208704((void *)o);
        return;
    case 8:
        operation_8c208b74((void *)o);
        return;
    case 4:
        operation_8c208874((void *)o);
        return;
    case 5:
        operation_8c2088d8((void *)o);
        return;
    case 6:
        operation_8c20893c((void *)o);
        return;
    case 7:
        operation_8c2089ac((void *)o);
        return;
    case 9:
        ((ObjectData *)o)->f24 = 0xc;
        return;
    case 10:
        ((ObjectData *)o)->f24 = 0xc;
        return;
    case 12:
        o->v7();
        return;
    case 13:
        operation_8c208be8((void *)o);
        return;
    case 2:
    case 11:
    case 14:
        break;
    }
}
