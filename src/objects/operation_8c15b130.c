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
void operation_8c15b130(Object *o)
{
    if (o->f28 != 0) {
        if (o->f28 == 1) {
            goto L_8c15b15e;
        }
        return;
    }
    o->f2c += -0.3f;
    if (!(o->f2c > -3.0f)) {
        o->f2c = -3.0f;
        o->f28 = 1;
        return;
L_8c15b15e:;
        o->f30 += -1.8f;
        if (!(o->f30 > -18.0f)) {
            o->f30 = -18.0f;
            o->f24 = 0;
        }
    }
}
