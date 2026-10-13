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
    char unknown30e[0x4a];
    short f358;
    char unknown35a[0x36];
    int f390;
    char unknown394[0xc];
    int f3a0;
    int f3a4;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern int operation_456a4(void *);
int operation_8c038cfc(Object *o)
{
    int t1;
    t1 = operation_456a4((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
        case 1:
            o->f30a = 0;
            o->f30c = 0;
            o->f3a4 = 1;
            o->f3a0 = -1;
            o->f358 = 0;
            o->f390 = 0;
            o->ff0 = 2;
            o->f34 &= -0x6040001;
            o->fdc->f18 |= 1;
        }
        return 1;
    }
    return 0;
}
