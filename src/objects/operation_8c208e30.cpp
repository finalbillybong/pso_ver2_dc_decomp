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
extern "C" void operation_8c208f28(void *);
extern "C" void operation_8c208f8c(void *);
extern "C" void operation_8c209078(void *);
extern "C" void operation_8c2090c4(void *);
extern "C" void operation_8c209128(void *);
extern "C" void operation_8c20918c(void *);
extern "C" void operation_8c2091fc(void *);
extern "C" void operation_8c208e30(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        operation_8c208f28((void *)o);
        return;
    case 2:
        operation_8c208f8c((void *)o);
        return;
    case 11:
        operation_8c209078((void *)o);
        return;
    case 4:
        operation_8c2090c4((void *)o);
        return;
    case 5:
        operation_8c209128((void *)o);
        return;
    case 6:
        operation_8c20918c((void *)o);
        return;
    case 7:
        operation_8c2091fc((void *)o);
        return;
    case 12:
        o->v7();
        return;
    case 3:
    case 8:
    case 9:
    case 10:
    case 13:
    case 14:
        break;
    }
}
