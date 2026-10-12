typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x3a8];
    Arg0_3a8 *f3a8;
    char unknown3ac[0x5c];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
void operation_8c0f8adc(Object *o)
{
    if (o->f408 == 0) {
        o->f3a8->f18 = (unsigned int)o->f3a8->f18 >> 1 << 1;
    }
}
