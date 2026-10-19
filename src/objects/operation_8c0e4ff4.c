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
void operation_8c0e4ff4(Object *o)
{
    o->f04 |= 1;
}
