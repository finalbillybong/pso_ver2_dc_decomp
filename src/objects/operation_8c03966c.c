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
    char unknown394[0xc];
    int f3a0;
    int f3a4;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void operation_8c03966c(Object *o)
{
    if (o->f30a != 3) {
        o->f30a = 3;
        switch (o->f3a4) {
        case 1:
            o->f30c = 0;
            o->ff0 = 1;
            break;
        default:
            o->f30c = 0;
            o->ff0 = 2;
            break;
        }
        o->f3a0 = -1;
        o->f34 &= -0x6040001;
        o->fdc->f18 |= 1;
        o->f390 = 0;
    }
}
