typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x98];
    float f98;
};
float operation_8c1c119c(Object *o)
{
    return o->f98;
}
