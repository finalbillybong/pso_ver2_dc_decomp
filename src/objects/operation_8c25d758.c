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
    int f28;
    int f2c;
    char unknown30[0x8];
    int f38;
    char unknown3c[0x24];
    int f60;
    int f64;
};
void operation_8c25d758(Object *o)
{
    if (o->f64 != 0) {
        if (o->f64 == 1) {
            goto L_8c25d7ae;
        }
        if (o->f64 == 2) {
            goto L_8c25d7d0;
        }
        if (o->f64 == 3) {
            goto L_8c25d800;
        }
    } else {
        if (o->f28 != 0xff) {
            o->f28 += o->f2c;
            if ((unsigned int)o->f28 > (unsigned int)0xff) {
                o->f28 = 0xff;
            }
        }
        if (o->f60 == o->f24) {
            o->f28 = 0xff;
            o->f64 = 1;
            o->f60 = 0;
        } else {
            o->f60 += 1;
            goto L_8c25d808;
L_8c25d7ae:;
            if (o->f60 == o->f20) {
                o->f64 = 2;
                o->f60 = 0;
            } else {
                o->f60 += 1;
                goto L_8c25d808;
L_8c25d7d0:;
                if (o->f28 != 0) {
                    o->f28 -= o->f2c;
                }
                if (o->f60 == o->f24) {
                    o->f28 = 0;
                    o->f64 = 3;
                    o->f60 = 0;
                } else {
                    o->f60 += 1;
                    goto L_8c25d808;
L_8c25d800:;
                    o->f04 |= 1;
                    return;
                }
            }
        }
    }
L_8c25d808:;
    o->f38 = o->f28 << 0x18 | 0xffffff;
}
