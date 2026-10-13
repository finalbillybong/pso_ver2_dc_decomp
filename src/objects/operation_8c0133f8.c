typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x334];
    int f334;
};
int operation_8c0133f8(Object *o)
{
    int v1;
    v1 = (int)(o->f334 == 0);
    return (int)(v1);
}
