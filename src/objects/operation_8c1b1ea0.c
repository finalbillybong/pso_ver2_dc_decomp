typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x4c];
    float f3f0;
};
void operation_8c1b1ea0(Object *o)
{
    o->f3f0 = 0.0f;
    o->f3a0 = 0x3c;
}
