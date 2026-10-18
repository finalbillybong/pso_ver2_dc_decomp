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
    char unknown0[0x34];
    int f34;
    char unknown38[0xc0];
    float ff8;
    float ffc;
    float f100;
    float f104;
    float f108;
} ObjectData;
extern "C" int operation_8c11f448(int, float);
extern "C" void update_mode_8c0eea34(void *);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c11f1f0(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c11f448((int)o, ((ObjectData *)o)->f108);
    if (t1 == 1) {
        v1 = (int)2;
    } else {
        v1 = (int)1;
    }
    if (v1 != 1) {
        if (v1 == 2) {
            goto L_8c11f23a;
        }
    } else {
        ((ObjectData *)o)->f104 += ((ObjectData *)o)->f100;
        if (!(0.0f > ((ObjectData *)o)->f104)) {
            ((ObjectData *)o)->f104 = 0.0f;
            goto L_8c11f25a;
L_8c11f23a:;
            ((ObjectData *)o)->f104 -= ((ObjectData *)o)->f100;
            if (!(((ObjectData *)o)->f104 > -1.0f)) {
                ((ObjectData *)o)->f104 = -1.0f;
            }
        }
    }
L_8c11f25a:;
    update_mode_8c0eea34((void *)o);
    t2 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t2 != 0 && ((ObjectData *)o)->f104 > -1.0f) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    } else {
        ((ObjectData *)o)->f34 |= 0x8000000;
    }
    t3 = operation_8c03d338();
    if (t3 == 1) {
        ((ObjectData *)o)->f34 &= -0x8000001;
    }
}
