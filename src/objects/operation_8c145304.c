typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6f4];
    float f6f4;
    float f6f8;
};
void operation_8c145304(Object *o)
{
    o->f6f4 += o->f6f8;
    if (2.0f <= o->f6f4) {
        o->f6f4 -= 2.0f;
    }
}
