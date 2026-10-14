typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_30 Arg0_30;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    char unknown24[0xc];
    Arg0_30 *f30;
} ObjectData;
struct Arg0_30 {
    char unknown0[0xe4];
    short fe4;
};
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c1c6214(Object *o)
{
    int t1;
    int t2;
    t1 = hierarchy_is_active((void *)(((ObjectData *)o)->f30));
    if (t1 == 0 || ((ObjectData *)o)->f30->fe4 != 2) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    ((ObjectData *)o)->f04 &= -0x11;
    t2 = o->v5();
    if (t2 != 0) {
        ((ObjectData *)o)->f20 -= 0.0333333351f;
        if (!(((ObjectData *)o)->f20 > -1.0f)) {
            ((ObjectData *)o)->f04 |= 1;
        }
    }
}
