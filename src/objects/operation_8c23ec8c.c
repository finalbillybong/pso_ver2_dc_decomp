typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1c8 Arg0_1c8;
struct Object {
    char unknown0[0x1c8];
    Arg0_1c8 *f1c8;
    char unknown1cc[0x68];
    float f234;
};
struct Arg0_1c8 {
    char unknown0[0x4];
    int f04;
};
void operation_8c23ec8c(Object *o)
{
    float v3;
    if (o->f1c8 != 0) {
        v3 = (float)(float)(unsigned int)o->f1c8->f04;
        o->f234 += 1.0f;
        if (!(v3 > o->f234)) {
            o->f234 -= v3;
        }
    }
}
