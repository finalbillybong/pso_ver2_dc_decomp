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
    int f24;
    char unknown28[0x4];
    float f2c;
    float f30;
};
void operation_8c05ecb4(Object *o)
{
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c05ece8;
        }
        return;
    }
    o->f30 += 8.0f;
    if (!(o->f2c > o->f30)) {
        o->f30 = o->f2c;
        o->f20 = 1;
        o->f24 = 0;
        return;
L_8c05ece8:;
        o->f24 += 1;
        if (o->f24 > 0x14) {
            o->f04 |= 1;
        }
    }
}
