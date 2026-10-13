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
    char unknown30[0x4];
    float f34;
    float f38;
    char unknown3c[0x14];
    float f50;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0da980(Object *o)
{
    int v1;
    int v2;
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            return;
        }
        if (o->f20 == 2) {
            goto L_8c0da9fc;
        }
        return;
    }
    o->f34 -= 1.0f;
    if (!(o->f34 > o->f38)) {
        o->f34 = o->f2c;
        o->f24 |= 1;
        o->f20 = 1;
        v1 = (int)(((o->f24 & 4)) != 0);
        if (v1 == 0) {
            v2 = (int)(((o->f24 & 2)) != 0);
            if (v2 != 0) {
                call_8c05fbf8(0x16, 0, 0, 0);
                return;
            }
            call_8c05fbf8(0x11, 0, 0, 0);
            return;
L_8c0da9fc:;
            if ((o->f50 - 0.2f) > 0.0f) {
                o->f50 -= 0.2f;
                return;
            }
            o->f04 |= 1;
        }
    }
}
