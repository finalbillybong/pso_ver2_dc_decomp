typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1ae];
    short f1ae;
    char unknown1b0[0x230];
    int f3e0;
    char unknown3e4[0x14];
    short f3f8;
};
extern void call_8c0d7f04(Object *);
void operation_8c0d7ec8(Object *o)
{
    if (((o->f3e0 & 0x10)) != 0) {
        o->f3e0 &= -0x11;
        o->f1ae = o->f3f8;
        call_8c0d7f04(o);
    }
}
