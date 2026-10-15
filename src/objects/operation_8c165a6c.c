typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    char unknown3ac[0x20];
    int f3cc;
    float f3d0;
    float f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
};
void operation_8c165a6c(Object *o)
{
    *(int *)((char *)o + 0x3d8) += 1;
    if (o->f3e0 != 0) {
        if (o->f3e0 == 1) {
            goto L_8c165b0e;
        }
        if (o->f3e0 != 2) {
            if (o->f3e0 == 3) {
                return;
            }
            return;
        }
        if (o->f3d8 >= o->f3dc) {
            o->f3d8 = 0;
            o->f3d0 = 0.0f;
            o->f3e0 = 0;
        } else {
            o->f3a8 &= -5;
            return;
        }
    }
    o->f3d0 += o->f3d4;
    if (!(1.0f > o->f3d0)) {
        o->f3d0 = 1.0f;
        o->f3e0 = 1;
    }
    o->f3cc = (int)(o->f3d0 * 255.0f) << 0x10;
    o->f3a8 |= 4;
    return;
L_8c165b0e:;
    o->f3d0 -= o->f3d4;
    if (!(o->f3d0 > 0.0f)) {
        o->f3d0 = 0.0f;
        o->f3d8 = 0;
        o->f3e0 = 2;
    }
    o->f3cc = (int)(o->f3d0 * 255.0f) << 0x10;
    o->f3a8 |= 4;
}
