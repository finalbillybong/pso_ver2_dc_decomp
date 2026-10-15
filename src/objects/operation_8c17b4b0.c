typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1c0];
    int f1c0;
    char unknown1c4[0x14];
    short f1d8;
    short f1da;
    short f1dc;
    char unknown1de[0x26];
    float f204;
};
void operation_8c17b4b0(Object *o)
{
    if (o->f1d8 != 0x12) {
        if (o->f1d8 == 0x13) {
            goto L_8c17b4f4;
        }
        if (o->f1d8 == 0x14) {
            goto L_8c17b4d4;
        }
        if (o->f1d8 == 0x15) {
            goto L_8c17b4e4;
        }
        return;
    }
    o->f1dc = o->f1da;
    return;
L_8c17b4d4:;
    o->f1c0 |= 8;
    return;
L_8c17b4e4:;
    o->f1c0 |= 2;
    return;
L_8c17b4f4:;
    o->f204 = (float)o->f1da / 100.0f + 1.0f;
}
