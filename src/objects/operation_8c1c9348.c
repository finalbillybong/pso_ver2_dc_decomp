typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
};
short operation_8c1c9348(Object *o)
{
    return o->f08;
}
