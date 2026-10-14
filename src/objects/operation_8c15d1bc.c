typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x124];
    float f124;
    int f128;
};
void operation_8c15d1bc(Object *o)
{
    if (((o->f128 & 1)) != 0) {
        o->f124 += 0.266666681f;
        if (!(o->f124 > 4.0f)) {
            return;
        }
        o->f124 = 4.0f;
        o->f128 = (unsigned int)o->f128 >> 1 << 1;
        return;
    }
    o->f124 -= 0.266666681f;
    if (0.0f > o->f124) {
        o->f124 = 0.0f;
        o->f128 |= 1;
    }
}
