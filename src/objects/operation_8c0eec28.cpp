typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_64 Arg0_64;
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    char unknowne8[0x20];
    int f108;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void call_8c102d80(void *, int, void *, int, int);
extern "C" void operation_8c0eec28(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
        return;
    }
    if (*(int *)0x8c470480 != 0) {
        ((ObjectData *)o)->fe4 = 0;
        ((ObjectData *)o)->f108 = (unsigned int)((ObjectData *)o)->f108 >> 1 << 1;
        operation_8c05428c((void *)o, 0, 0x10);
    } else {
        o->v16();
    }
    if (((ObjectData *)o)->fe4 != 0) {
        if (((ObjectData *)o)->fe4 == 1) {
            goto L_8c0eeca6;
        }
        if (((ObjectData *)o)->fe4 == 2) {
            goto L_8c0eecb8;
        }
        if (((ObjectData *)o)->fe4 == 3) {
            goto L_8c0eecca;
        }
    } else {
        o->v17();
        goto L_8c0eecd8;
L_8c0eeca6:;
        o->v18();
        goto L_8c0eecd8;
L_8c0eecb8:;
        o->v19();
        goto L_8c0eecd8;
L_8c0eecca:;
        o->v20();
    }
L_8c0eecd8:;
    if (((((ObjectData *)o)->f108 & 1)) != 0) {
        call_8c102d80((void *)(((char *)o + 0x3c)), -0xff0100, (void *)(((ObjectData *)o)->f64), 0, 0);
        return;
    }
    call_8c102d80((void *)(((char *)o + 0x3c)), -0x10000, (void *)(((ObjectData *)o)->f64), 0, 0);
}
