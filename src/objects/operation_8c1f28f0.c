typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
};
void operation_8c1f28f0(Object *o)
{
    if (o != 0) {
        o->f68 &= -3;
    }
}
