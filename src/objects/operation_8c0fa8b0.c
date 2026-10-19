typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a6];
    int f3ac;
    char unknown3b0[0xc];
    float f3bc;
};
void operation_8c0fa8b0(Object *o)
{
    if (0.0f > (o->f3bc += -0.2f)) {
        o->f3bc = 0.0f;
    }
    if (!(--o->f3ac > 0)) {
        o->f04 |= 1;
    }
}
