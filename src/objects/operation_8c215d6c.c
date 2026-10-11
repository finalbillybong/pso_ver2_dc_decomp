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
    char unknown34[0x40];
    int f74;
};
struct Arg0_30_0 {
    char unknown0[0x20];
    int f20;
};
int operation_8c215d6c(Object *o)
{
    return (o->f30 != 0) ? (*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f74 << 2)))->f20 : 0;
}
