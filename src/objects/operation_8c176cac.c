typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x8];
    int f3c;
};
void operation_8c176cac(Object *o)
{
    o->f30 += o->f3c;
    if (!(--o->f28 > 0)) {
        o->f04 |= 1;
    }
}
