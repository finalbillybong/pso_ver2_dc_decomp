typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_f0 Arg0_f0;
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
    virtual int v15();
    virtual int v16();
};
typedef struct ObjectData {
    char unknown0[0xf0];
    Arg0_f0 *ff0;
} ObjectData;
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c19cfc8(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (((ObjectData *)o)->ff0 != 0) {
        t1 = hierarchy_is_active((void *)(((ObjectData *)o)->ff0));
        if (t1 == 0) {
            ((ObjectData *)o)->ff0 = (Arg0_f0 *)0;
        }
    }
    if (((ObjectData *)o)->ff0 == 0) {
        t2 = o->v15();
        if (t2 != 0) {
            t3 = o->v16();
            ((ObjectData *)o)->ff0 = (Arg0_f0 *)(int)t3;
        }
    }
}
