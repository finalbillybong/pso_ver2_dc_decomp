typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6d8];
    int f6d8;
};
void operation_8c028ca4(Object *o, int a1)
{
    o->f6d8 &= ~(1 << a1);
}
