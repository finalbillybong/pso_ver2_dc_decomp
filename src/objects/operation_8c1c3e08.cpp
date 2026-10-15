typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_134 Arg0_134;
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
    char unknowne8[0x3c];
    float f124;
    float f128;
    char unknown12c[0x4];
    int f130;
    Arg0_134 *f134;
} ObjectData;
extern "C" float call_8c37eb0c(void *);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0eeb58(void *);
extern "C" void call_8c1c4008(Object *);
extern "C" void call_8c131bdc(Object *);
extern "C" void operation_8c131c90(void *);
extern "C" void call_8c131d30(Object *);
extern "C" void operation_8c131de4(void *);
extern "C" void operation_8c1c3e08(Object *o)
{
    float t1;
    int t2;
    *(int *)((char *)o + 0x134) += ((ObjectData *)o)->f130;
    t1 = call_8c37eb0c((void *)(((ObjectData *)o)->f134));
    ((ObjectData *)o)->f128 = ((ObjectData *)o)->f124 * t1;
    t2 = operation_8c03d338();
    if (t2 == 1) {
        o->v15();
        return;
    }
    operation_8c0eeb58((void *)o);
    if (((ObjectData *)o)->fe4 != 0) {
        if (((ObjectData *)o)->fe4 == 1) {
            goto L_8c1c3e80;
        }
        if (((ObjectData *)o)->fe4 == 2) {
            goto L_8c1c3e8a;
        }
        if (((ObjectData *)o)->fe4 == 3) {
            goto L_8c1c3e9a;
        }
        return;
    }
    call_8c1c4008(o);
    call_8c131bdc(o);
    return;
L_8c1c3e80:;
    operation_8c131c90((void *)o);
    return;
L_8c1c3e8a:;
    call_8c1c4008(o);
    call_8c131d30(o);
    return;
L_8c1c3e9a:;
    operation_8c131de4((void *)o);
}
