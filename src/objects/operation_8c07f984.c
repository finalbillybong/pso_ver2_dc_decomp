typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1dc];
    float f1dc;
    float f1e0;
};
void operation_8c07f984(Object *o)
{
    if (o->f1dc != 0.0f) {
        o->f1dc -= 1.0f;
        if (o->f1dc == 0.0f) {
            o->f1e0 = 0.0f;
        }
    }
}
