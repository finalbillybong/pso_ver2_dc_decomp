typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
};
int operation_8c1d8210(Object *o)
{
    return (int)(*(int *)((char *)0x8c4e2edc + (o->fe4 << 2)));
}
