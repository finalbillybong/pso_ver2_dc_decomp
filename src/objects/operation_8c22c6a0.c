typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    float f28;
    float f2c;
};
void operation_8c22c6a0(Object *o)
{
    o->f28 += o->f2c;
    if (0.0f > o->f28) {
        o->f28 = 0.0f;
        return;
    }
    if (o->f28 > 1.0f) {
        o->f28 = 1.0f;
    }
}
