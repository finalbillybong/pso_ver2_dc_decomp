typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
void operation_8c1b8e18(Object *o)
{
    o->f3a0 = 0x93;
}
