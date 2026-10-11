typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x88];
    short f88;
    char unknown8a[0x6];
    Arg0_90 *f90;
};
int operation_8c1571f4(Object *o)
{
    return *(int *)((char *)((char *)o->f90 + 0x4) + (o->f88 << 3));
}
