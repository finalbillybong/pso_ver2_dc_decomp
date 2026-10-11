typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Object {
    char unknown0[0xbc8];
    Arg0_bc8 *fbc8;
};
struct Arg0_bc8 {
    char unknown0[0x4];
    short f04;
};
void operation_8c01fe20(Object *o)
{
    if (o->fbc8 != 0) {
        o->fbc8->f04 |= 1;
    }
}
