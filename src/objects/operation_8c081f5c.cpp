typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_12c Arg0_12c;
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
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x10c];
    int f10c;
    char unknown110[0x1c];
    Arg0_12c *f12c;
} ObjectData;
extern "C" void set_effect_bit0(void *);
extern "C" void clear_effect_bit0(void *);
extern "C" void call_8c081d60(Object *);
extern "C" void call_8c081e38(Object *);
extern "C" void operation_8c081f5c(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 == 0) {
        if (((ObjectData *)o)->f12c == 0) {
            return;
        }
        set_effect_bit0((void *)(((ObjectData *)o)->f12c));
        return;
    }
    if (((ObjectData *)o)->f12c != 0) {
        clear_effect_bit0((void *)(((ObjectData *)o)->f12c));
    }
    switch (((ObjectData *)o)->f10c) {
    case 0:
        call_8c081d60(o);
        return;
    case 1:
        call_8c081e38(o);
    }
}
