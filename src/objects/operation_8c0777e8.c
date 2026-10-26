typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c0777e8(Object *o)
{
    o->f04 &= -5;
    o->f04 &= -0x11;
}
