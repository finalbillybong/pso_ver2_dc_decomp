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
};
void operation_8c05f350(Object *o)
{
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c05f37a;
        }
        if (o->f20 == 2) {
            goto L_8c05f3a4;
        }
        return;
    }
    o->f24 += 1;
    if (o->f24 > 0x2d) {
        o->f24 = 0;
        o->f20 = 2;
        return;
L_8c05f37a:;
        o->f24 += 1;
        if (o->f24 > 2) {
            o->f24 = 0;
            o->f20 = 0;
            o->f28 += 1;
            if (o->f28 > 1) {
                o->f04 |= 1;
                return;
L_8c05f3a4:;
                o->f04 |= 1;
            }
        }
    }
}
