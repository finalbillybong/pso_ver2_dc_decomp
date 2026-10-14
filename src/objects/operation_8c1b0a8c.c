typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xc];
    float f30;
};
void operation_8c1b0a8c(Object *o)
{
    o->f30 -= *(float *)0x8c286260;
    o->f20 += 1;
    if (o->f20 >= 0x5a) {
        o->f04 |= 1;
    }
}
