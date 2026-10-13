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
};
typedef struct ObjectData {
    char unknown0[0x20];
    int f20;
    char unknown24[0x18];
    int f3c;
    char unknown40[0x1c];
    float f5c;
    char unknown60[0x30];
    int f90;
} ObjectData;
extern "C" float squared_distance_xz(void *, void *);
extern "C" int call_8c0a0f08(Object *);
extern "C" void operation_8c0a65f8(Object *o)
{
    float t1;
    int t2;
    float t3;
    ((ObjectData *)o)->f3c = 5;
    ((ObjectData *)o)->f5c = 0.67f;
    t1 = squared_distance_xz((void *)(*(int *)0x8c46ee80 + 0x9c), (void *)(*(int *)0x8c46ee80 + 0x90));
    if (!(529.0f > t1)) {
        ((ObjectData *)o)->f90 |= 4;
    } else {
        ((ObjectData *)o)->f90 &= -5;
    }
    t2 = call_8c0a0f08(o);
    if (t2 != 0) {
        t3 = squared_distance_xz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)((int)((ObjectData *)o)->f20 + 0x3c));
        if (t3 > 400.0f) {
            ((ObjectData *)o)->f90 |= 1;
            goto L_8c0a669e;
        }
        ((ObjectData *)o)->f90 |= 1;
        ((ObjectData *)o)->f90 |= 0x10;
    } else {
        ((ObjectData *)o)->f90 = (unsigned int)((ObjectData *)o)->f90 >> 1 << 1;
        ((ObjectData *)o)->f90 &= -0x11;
    }
L_8c0a669e:;
    o->v12();
}
