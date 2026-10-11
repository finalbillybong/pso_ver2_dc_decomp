typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
    short f88;
};
int operation_8c1575ac(Object *o)
{
    if (!(o->f88 >= 0)) {
        return 0;
    }
    return (o->f88 >= o->f86) ? 0 : *(int *)((char *)((char *)o->f30 + 0x0) + (o->f88 << 2));
}
