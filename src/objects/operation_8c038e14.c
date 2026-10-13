typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x82];
    int f390;
    char unknown394[0x10];
    int f3a4;
};
void operation_8c038e14(Object *o)
{
    if (o->f30a != 0 && o->f30a != 1 && o->f30a != 2) {
        o->f30c = 0;
        o->f3a4 = 1;
        o->f34 |= 0x40000;
    }
    if (o->f390 != 0) {
        if (o->f390 == 1) {
            goto L_8c038e58;
        }
    } else {
        o->f30a = 0;
        o->ff0 = 2;
        return;
L_8c038e58:;
        o->f30a = 1;
        o->ff0 = 5;
        return;
    }
    o->f30a = 0;
    o->ff0 = 0;
}
