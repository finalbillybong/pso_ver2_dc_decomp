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
extern "C" void operation_8c1593f0(void *);
extern "C" void operation_8c15945c(void *);
extern "C" void operation_8c159534(void *);
extern "C" void operation_8c15966c(void *);
extern "C" void operation_8c1597d8(void *);
extern "C" void operation_8c1595a4(void *);
extern "C" void operation_8c159608(void *);
extern "C" void operation_8c1599e0(void *);
extern "C" void operation_8c159304(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        operation_8c1593f0((void *)o);
        return;
    case 2:
        operation_8c15945c((void *)o);
        return;
    case 3:
        operation_8c159534((void *)o);
        return;
    case 4:
        operation_8c15966c((void *)o);
        return;
    case 5:
        o->v7();
        return;
    case 6:
        operation_8c1597d8((void *)o);
        return;
    case 7:
        operation_8c1595a4((void *)o);
        return;
    case 8:
        operation_8c159608((void *)o);
        return;
    case 9:
        operation_8c1599e0((void *)o);
        return;
    case 10:
        break;
    }
}
