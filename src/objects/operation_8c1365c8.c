typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
};
void operation_8c1365c8(Object *o)
{
    if (o->f70 > -0.7f) {
        o->f70 += -0.0233333334f;
    }
}
