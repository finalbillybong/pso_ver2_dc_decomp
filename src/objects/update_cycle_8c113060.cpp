typedef struct Data { char unknown0[0x10c]; int phase; char unknown110[4]; int timer; int armed; } Data;
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
    virtual void step();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void expire();
};
extern "C" void operation_1130e8(void);
extern "C" void update_cycle_8c113060(Object *o)
{
    Data *data = (Data *)o;
    operation_1130e8();
    switch (data->phase) {
    case 0:
        if (data->armed && --data->timer < 0) {
            o->expire();
            data->armed = 0;
        }
        o->step();
        break;
    case 1:
        o->stop();
        data->armed = 0;
        break;
    }
}
