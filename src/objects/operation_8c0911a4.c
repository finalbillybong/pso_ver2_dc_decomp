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
void operation_8c0911a4(Object *o)
{
    *(int *)((char *)o + 0x3e4) |= 0x100;
    o->f3e4 &= -0x201;
}
