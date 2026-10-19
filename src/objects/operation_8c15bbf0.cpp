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
extern "C" void operation_8c15bd9c(void *);
extern "C" void call_8c15bf24(Object *);
extern "C" void call_8c15c04c(Object *);
extern "C" void call_8c15c17c(Object *);
extern "C" void call_8c15c358(Object *);
extern "C" void call_8c15c43c(Object *);
extern "C" void call_8c15c2ac(Object *);
extern "C" void call_8c15c4e0(Object *);
extern "C" void call_8c15c5c4(Object *);
extern "C" void operation_8c15c66c(void *);
extern "C" void operation_8c15c6cc(void *);
extern "C" void operation_8c15bbf0(Object *o)
{
    switch (((ObjectData *)o)->f24) {
    case 0:
        o->v6();
        return;
    case 1:
        operation_8c15bd9c((void *)o);
        return;
    case 2:
        call_8c15bf24(o);
        return;
    case 3:
        call_8c15c04c(o);
        return;
    case 10:
        call_8c15c17c(o);
        return;
    case 6:
        call_8c15c358(o);
        return;
    case 5:
        call_8c15c43c(o);
        return;
    case 4:
        call_8c15c2ac(o);
        return;
    case 7:
        call_8c15c4e0(o);
        return;
    case 12:
        call_8c15c5c4(o);
        return;
    case 9:
        operation_8c15c66c((void *)o);
        return;
    case 11:
    case 13:
        o->v7();
        return;
    case 16:
        operation_8c15c6cc((void *)o);
        return;
    case 8:
    case 14:
    case 15:
    case 17:
        break;
    }
}
