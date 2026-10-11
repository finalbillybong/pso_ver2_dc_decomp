typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x50];
    short f84;
};
struct Arg0_30_0 {
    char unknown0[0x18];
    int f18;
};
int operation_8c1cdc80(Object *o)
{
    return (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f18;
}
