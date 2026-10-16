typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct EF_48_int {
    char pad[0x48];
    int f;
} EF_48_int;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
    char unknown3e[0x52];
    int f90;
    int f94;
};
void operation_8c185000(Object *o)
{
    o->f90 = 0;
    o->f94 = 0;
    ((EF_48_int *)((char *)o + (o->f3c << 2)))->f &= -0x11;
}
