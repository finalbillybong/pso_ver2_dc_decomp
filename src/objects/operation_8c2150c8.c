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
void operation_8c2150c8(Object *o)
{
    o->f68 = 1;
}
