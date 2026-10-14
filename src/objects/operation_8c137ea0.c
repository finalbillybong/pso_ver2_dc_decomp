typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    float f40;
};
void operation_8c137ea0(Object *o)
{
    o->f40 -= 0.2f;
    if (0.0f > o->f40) {
        o->f40 = 0.0f;
        o->f04 |= 1;
    }
}
