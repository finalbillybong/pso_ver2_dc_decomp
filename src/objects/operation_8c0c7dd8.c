typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e8];
    int f3e8;
};
void operation_8c0c7dd8(Object *o)
{
    o->f3e8 &= -0x101;
}
