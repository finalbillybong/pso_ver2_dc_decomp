typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
};
typedef struct ObjectData {
    char unknown0[0x10c];
    int f10c;
} ObjectData;
extern "C" void operation_8c1130e8(void *);
extern "C" void call_8c136688(Object *, int);
extern "C" void operation_8c136528(Object *o)
{
    int t1;
    int t2;
    operation_8c1130e8((void *)o);
    if (((ObjectData *)o)->f10c != 1) {
        o->v18();
        t1 = o->v16();
        if (t1 != 1) {
            return;
        }
        call_8c136688(o, 1);
        o->v19();
        ((ObjectData *)o)->f10c = 1;
        return;
    }
    o->v17();
    t2 = o->v16();
    if (t2 != 1) {
        call_8c136688(o, 0);
        o->v20();
        ((ObjectData *)o)->f10c = 0;
    }
}
