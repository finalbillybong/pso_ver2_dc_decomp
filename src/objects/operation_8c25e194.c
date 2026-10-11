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
    float f24;
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    int f3c;
};
void operation_8c25e194(Object *o, int a1, int a2)
{
    o->f34 = o->f20;
    o->f24 = (float)a1 / (float)a2;
    if (0.0f > o->f24) {
        o->f24 = 0.0f;
    } else {
        if (o->f24 > 1.0f) {
            o->f24 = 1.0f;
        }
    }
    if (!(0.05f > o->f24)) {
        if (!(0x96 > o->f20)) {
            goto L_8c25e1d8;
        }
    }
    o->f28 = -1;
    goto L_8c25e208;
L_8c25e1d8:;
    o->f28 = (int)((1.0f / o->f24 - 1.0f) * (float)(o->f20 + 0x61));
    o->f28 += 0x3c;
    if (o->f38 == 0) {
        if (o->f28 >= 0x96) {
            o->f3c = 1;
        }
        o->f38 = 1;
    }
L_8c25e208:;
    if (o->f24 == 1.0f) {
        o->f04 |= 1;
    }
}
