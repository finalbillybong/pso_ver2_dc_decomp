typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
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
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x58];
    short f390;
    char unknown392[0x2];
    char f394;
    char unknown395[0x1];
    short f396;
    char unknown398[0x4];
    short f39c;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void call_8c0441d8(Object *, Vector3);
void operation_8c0508f0(Object *o)
{
    if (((o->f390 & 0x42)) == 0 && ((o->f34 & 0xa00)) == 0) {
        if (o->f30a != 1) {
            switch (o->f394) {
            case 0:
                o->ff0 = 3;
                break;
            case 1:
                o->ff0 = 2;
            }
            o->f396 = 0;
            o->f39c = 0;
            o->f394 = 0;
            o->f30a = 1;
            o->f34 &= -0x240001;
            if (o->f334 != 0) {
                call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
            }
        }
        o->fdc->f18 |= 1;
    }
}
