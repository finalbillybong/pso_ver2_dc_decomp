typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1c];
    float f1c;
};
void operation_8c03be34(Object *o)
{
    o->f1c = 1.0f;
}
