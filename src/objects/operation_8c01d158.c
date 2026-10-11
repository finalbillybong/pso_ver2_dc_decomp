typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
struct Object {
    char unknown0[0x110];
    Arg0_110 *f110;
    Arg0_114 *f114;
};
int operation_8c01d158(Object *o, int a1)
{
    return *(int *)((char *)((char *)o->f114 + 0x4) + (*(int *)((char *)((char *)o->f110 + 0x4) + ((short)a1 << 4)) << 3));
}
