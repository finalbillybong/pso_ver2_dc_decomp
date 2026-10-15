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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
};
typedef struct ObjectData {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    float fec;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0f2530(void *);
extern "C" void check_and_emit_8c0f24a0(void *);
extern "C" void operation_8c0f241c(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
        return;
    }
    if (((ObjectData *)o)->fe4 != 0) {
        if (((ObjectData *)o)->fe4 == 1) {
            goto L_8c0f2458;
        }
    } else {
        operation_8c0f2530((void *)o);
        goto L_8c0f245e;
L_8c0f2458:;
        check_and_emit_8c0f24a0((void *)o);
    }
L_8c0f245e:;
    ((ObjectData *)o)->fe8 += 1.0f;
    if (((ObjectData *)o)->fec < ((ObjectData *)o)->fe8) {
        ((ObjectData *)o)->fe8 -= ((ObjectData *)o)->fec;
    }
}
