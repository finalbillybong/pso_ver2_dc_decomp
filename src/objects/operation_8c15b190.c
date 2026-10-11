typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    float f2c;
    float f30;
};
void operation_8c15b190(Object *o)
{
    if (o->f28 != 0) {
        if (o->f28 == 1) {
            goto L_8c15b1bc;
        }
        return;
    }
    o->f30 -= -1.8f;
    if (!(0.0f > o->f30)) {
        o->f30 = 0.0f;
        o->f28 = 1;
        return;
L_8c15b1bc:;
        o->f2c -= -0.3f;
        if (!(0.0f > o->f2c)) {
            o->f2c = 0.0f;
            o->f24 = 0;
        }
    }
}
