typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32];
    float f38;
    char unknown3c[0xc];
    float f48;
    float f4c;
    int f50;
    float f54;
};
void operation_8c07cdb8(Object *o)
{
    if (o->f50 > 0) {
        o->f50 += -1;
        return;
    }
    o->f38 += o->f48;
    o->f54 += o->f4c;
    if (!(o->f54 > 0.0f)) {
        o->f04 |= 1;
    }
}
