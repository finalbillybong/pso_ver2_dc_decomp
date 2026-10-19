typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x82];
    int f390;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void operation_8c0bd900(Object *o)
{
    int v1;
    if (o->f30a != 1) {
        if (o->f30a == 2) {
            goto L_8c0bd984;
        }
        if (o->f30a == 3) {
            goto L_8c0bd9aa;
        }
        v1 = (int)o->f390;
        if (((v1 & 4)) != 0) {
            o->f30a = 3;
            o->f30c = 0;
            o->ff0 = 1;
            o->f34 &= -0x6040001;
        } else {
            if (((v1 & 1)) != 0) {
                o->f30a = 1;
                o->f30c = 0;
                o->f34 |= 0x6040000;
            }
        }
        o->fdc->f18 |= 1;
        return;
    }
    if (((o->f390 & 2)) != 0) {
        o->f30a = 2;
        o->f30c = 0;
        o->f34 |= 0x6040000;
        return;
L_8c0bd984:;
        if (((o->f390 & 4)) != 0) {
            o->f30a = 3;
            o->f30c = 0;
            o->ff0 = 1;
            o->f34 &= -0x6040001;
            return;
L_8c0bd9aa:;
            if (((o->f390 & 3)) != 0) {
                o->f30a = 1;
                o->f30c = 0;
                o->f34 |= 0x6040000;
                o->f390 = (unsigned int)o->f390 >> 0x10 << 0x10;
                o->f390 |= 1;
                o->fdc->f18 |= 1;
            }
        }
    }
}
