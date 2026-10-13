typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    char f01;
};
char operation_8c028c8c(Object *o)
{
    return o->f01;
}
