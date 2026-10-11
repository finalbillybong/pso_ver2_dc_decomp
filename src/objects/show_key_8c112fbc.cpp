typedef struct Data { char unknown0[0x88]; int raw; char unknown8c[0x74]; int key; char unknown104[4]; int state; } Data;
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
    virtual void refresh();
};
extern "C" void set_print_color_8c38c5b6(unsigned int);
extern "C" void print_value_8c38cf80(unsigned int, const char *, ...);
extern "C" char key_label_8c30ff14[];
extern "C" void show_key_8c112fbc(Object *o)
{
    Data *data = (Data *)o;
    data->raw = data->raw % 0x100;
    if (data->raw < 0 || data->raw > 0xff) {
        data->key = -1;
        data->state = 2;
    } else {
        data->key = data->raw;
        data->state = 0;
    }
    set_print_color_8c38c5b6(0xff00ff00);
    print_value_8c38cf80(0x0013001e, key_label_8c30ff14 + 6, data->key);
    set_print_color_8c38c5b6(0xfff0f0f0);
    o->refresh();
}
