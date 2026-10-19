typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x1c];
    float f370;
};
void operation_8c0fd8ec(Object *o)
{
    if (((o->f350 & 1)) != 0) {
        o->f370 += 0.05f;
        if (0.0f > o->f370) {
            return;
        }
        o->f370 = 0.0f;
        o->f350 = (unsigned int)o->f350 >> 1 << 1;
        return;
    }
    o->f370 -= 0.05f;
    if (!(o->f370 > -1.0f)) {
        o->f370 = -1.0f;
        o->f350 |= 1;
    }
}
