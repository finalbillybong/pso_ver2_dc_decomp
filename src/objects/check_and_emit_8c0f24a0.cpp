typedef struct Data { char unknown0[0x100]; int mode; int resource; } Data;
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
    virtual void stop();
};
extern "C" int operation_0eea7c(Object *, float);
extern "C" unsigned char operation_03d080(int);
extern "C" int emit_or_update_slot(unsigned int, Object *, void *, int, unsigned int);
extern "C" void check_and_emit_8c0f24a0(Object *o)
{
    Data *data = (Data *)o;
    switch (data->mode) {
    case 0:
        break;
    case 1:
        if (operation_0eea7c(o, 10000.0f) != 1) o->stop();
        break;
    case 2:
        if (operation_03d080(data->resource) != 1) o->stop();
        break;
    }
    emit_or_update_slot(0x4000f, o, (char *)o + 0x3c, 0, 0);
}
