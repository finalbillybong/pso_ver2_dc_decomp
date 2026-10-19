typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
void operation_8c0e4c2c(Object *o)
{
    o->f34 &= -0x101;
}
