typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
};
void operation_8c0911c8(Object *o)
{
    *(int *)((char *)o + 0x3e4) |= 0x200;
    o->f3e4 &= -0x101;
}
