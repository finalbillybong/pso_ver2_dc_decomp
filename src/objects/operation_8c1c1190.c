typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    float f94;
};
float operation_8c1c1190(Object *o)
{
    return o->f94;
}
