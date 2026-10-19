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
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x108];
    int f108;
    int f10c;
} ObjectData;
extern "C" void call_8c027090(Object *);
extern "C" void operation_8c1133cc(Object *o)
{
    int t1;
    int t2;
    switch (((ObjectData *)o)->f108) {
    case 0:
        switch (((ObjectData *)o)->f10c) {
        case 0:
            t1 = o->v11(400.0f, 20.0f);
            if (t1 != 0) {
                call_8c027090(o);
            }
            break;
        }
        return;
    case 1:
        t2 = o->v11(400.0f, 20.0f);
        if (t2 != 0) {
            call_8c027090(o);
        }
    }
}
