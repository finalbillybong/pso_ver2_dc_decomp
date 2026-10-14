typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0xb4];
    int f11c;
};
void operation_8c15d6f8(Object *o)
{
    o->f64 += 0x147;
    o->f11c += 0x28f;
}
