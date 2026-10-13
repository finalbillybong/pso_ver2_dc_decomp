typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3f8];
    int f3f8;
    int f3fc;
};
void operation_8c11bba0(Object *o)
{
    o->f3fc = 1;
    o->f3f8 = 1;
}
