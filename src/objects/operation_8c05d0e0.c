typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e0];
    int f3e0;
};
int operation_8c05d0e0(Object *o)
{
    return o->f3e0 & 0x400;
}
