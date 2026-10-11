typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
int operation_8c1e58e8(Object *o)
{
    return (o->f28 != 0) ? o->f28 : *(int *)0x8c32bb04;
}
