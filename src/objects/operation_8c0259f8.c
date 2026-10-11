typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x318];
    float f318;
    char unknown31c[0x4];
    float f320;
};
void operation_8c0259f8(Object *o)
{
    if (1e-07f > o->f318) {
        o->f318 = 0.0f;
    } else {
        o->f318 = o->f318 * 0.5f;
    }
    if (1e-07f > o->f320) {
        o->f320 = 0.0f;
        return;
    }
    o->f320 = o->f320 * 0.5f;
}
