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
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
};
typedef struct ObjectData {
    char unknown0[0x6c];
    float f6c;
    float f70;
    float f74;
    char unknown78[0xa4];
    int f11c;
    int f120;
} ObjectData;
extern "C" void operation_8c11409c(Object *o)
{
    if (((((ObjectData *)o)->f11c & 1)) != 0) {
        ((ObjectData *)o)->f70 += 0.01f;
        ((ObjectData *)o)->f6c += 0.05f;
        ((ObjectData *)o)->f74 = ((ObjectData *)o)->f6c;
        if (1.1f > ((ObjectData *)o)->f70) {
            goto L_8c11411a;
        }
        ((ObjectData *)o)->f11c = (unsigned int)((ObjectData *)o)->f11c >> 1 << 1;
    } else {
        ((ObjectData *)o)->f70 -= 0.01f;
        ((ObjectData *)o)->f6c -= 0.05f;
        ((ObjectData *)o)->f74 = ((ObjectData *)o)->f6c;
        if (!(((ObjectData *)o)->f70 > 1.0f)) {
            ((ObjectData *)o)->f11c |= 1;
        }
    }
L_8c11411a:;
    ((ObjectData *)o)->f120 += 0x444;
    o->v21();
}
