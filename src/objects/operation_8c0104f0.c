typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xd4];
    short fd4;
};
void operation_8c0104f0(Object *o, int a1)
{
    o->fd4 = a1;
}
