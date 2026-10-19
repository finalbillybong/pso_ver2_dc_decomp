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
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void operation_8c0bef20(Object *o)
{
    if (o->f30a != 7) {
        o->f30a = 7;
        o->f30c = 0;
        o->ff0 = 5;
    }
    o->fdc->f18 |= 1;
    o->f34 &= -0x6640001;
}
