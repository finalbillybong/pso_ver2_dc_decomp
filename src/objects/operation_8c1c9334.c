typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6];
    short f06;
};
void operation_8c1c9334(Object *o, int a1)
{
    o->f06 = a1;
}
