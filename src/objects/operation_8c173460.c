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
};
int operation_8c173460(Object *o, int a1)
{
    return (o != 0) ? *(int *)((char *)((char *)o->f30 + 0x0) + (a1 << 2)) : 0;
}
