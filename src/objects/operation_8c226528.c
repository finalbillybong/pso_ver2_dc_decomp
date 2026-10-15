typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
int operation_8c226528(Object *o, float f0)
{
    if (f0 <= 40.0f || 422.0f <= f0) {
        return 0;
    }
    o->f24 = -1;
    if (f0 > 382.0f && 422.0f > f0) {
        if (((422.0f - f0) * 255.0f / 40.0f) > 2147483648.0f) {
        }
        o->f24 = (unsigned int)((422.0f - f0) * 255.0f / 40.0f) << 0x18 | 0xffffff;
    }
    if (f0 > 40.0f && 80.0f > f0) {
        if (((f0 - 40.0f) * 255.0f / 40.0f) > 2147483648.0f) {
        }
        o->f24 = (unsigned int)((f0 - 40.0f) * 255.0f / 40.0f) << 0x18 | 0xffffff;
    }
    return 1;
}
