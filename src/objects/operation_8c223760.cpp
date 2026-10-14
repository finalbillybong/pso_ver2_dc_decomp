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
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    unsigned short f20;
    char unknown22[0x2];
    int f24;
    int f28;
    int f2c;
} ObjectData;
extern "C" int lookup_low_id(int);
extern "C" void operation_8c223760(Object *o)
{
    int t1;
    t1 = lookup_low_id((int)(((ObjectData *)o)->f20));
    ((ObjectData *)o)->f2c = (int)t1;
    if (((ObjectData *)o)->f2c == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((ObjectData *)o)->f28 == ((ObjectData *)o)->f24) {
        o->v5();
        ((ObjectData *)o)->f28 = 0;
        return;
    }
    o->v6();
}
