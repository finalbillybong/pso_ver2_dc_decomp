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
extern "C" void start_positioned_view(void *);
extern "C" void operation_8c10ab4c(void *);
extern "C" void operation_8c10acc4(void *);
extern "C" void operation_8c10ace0(void *);
extern "C" void operation_8c10aba8(void *);
extern "C" void operation_8c10ac24(void *);
extern "C" void operation_8c10aca8(void *);
extern "C" void operation_8c10ad1c(void *);
extern "C" void operation_8c10a970(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        start_positioned_view((void *)o);
        return;
    case 2:
        operation_8c10ab4c((void *)o);
        return;
    case 6:
        operation_8c10acc4((void *)o);
        return;
    case 7:
        operation_8c10ace0((void *)o);
        return;
    case 3:
        operation_8c10aba8((void *)o);
        return;
    case 4:
        operation_8c10ac24((void *)o);
        return;
    case 5:
        operation_8c10aca8((void *)o);
        return;
    case 8:
        operation_8c10ad1c((void *)o);
        return;
    case 10:
        o->v7();
        return;
    case 9:
        break;
    }
}
