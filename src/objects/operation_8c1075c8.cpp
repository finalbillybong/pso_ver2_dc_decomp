typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_38 Arg0_38;
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
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2a];
    int f30;
    int f34;
    Arg0_38 *f38;
} ObjectData;
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c1075c8(Object *o)
{
    int t1;
    if (((ObjectData *)o)->f38 != 0) {
        t1 = hierarchy_is_active((void *)(((ObjectData *)o)->f38));
        if (t1 != 0) {
            goto L_8c1075e6;
        }
    }
    ((ObjectData *)o)->f04 |= 1;
    return;
L_8c1075e6:;
    ((ObjectData *)o)->f30 += 1;
    if (((ObjectData *)o)->f30 >= ((ObjectData *)o)->f34) {
        ((ObjectData *)o)->f30 = 0;
        o->v5();
    }
}
