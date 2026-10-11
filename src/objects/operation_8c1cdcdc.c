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
    char unknown86[0x2];
    short f88;
    char unknown8a[0x2];
    int f8c;
};
struct Arg0_30_0 {
    char unknown0[0x18];
    int f18;
};
void operation_8c1cdcdc(Object *o)
{
    o->f88 = o->f84;
    o->f8c = (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f18;
}
