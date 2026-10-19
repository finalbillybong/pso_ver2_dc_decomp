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
    char unknown30c[0x24];
    short f330;
    char unknown332[0x26];
    short f358;
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x10];
    int f3a4;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void operation_8c03aa54(Object *o)
{
    int v2;
    if (o->f30a != 4) {
        if (o->f30a == 7) {
            goto L_8c03aa9a;
        }
        v2 = (int)0x30a;
    } else {
        o->f34 &= -0x101;
        o->fdc->f18 |= 0x10001;
        o->f35a = o->f330;
        o->f3a4 = 0;
        goto L_8c03aaa8;
        v2 = (int)0;
    }
    *(short *)((char *)((char *)o + 0x0) + (v2)) = 7;
    o->f358 = 0xf;
L_8c03aa9a:;
    o->ff0 = 0;
    o->f34 &= -0x640001;
L_8c03aaa8:;
    o->f390 = 0;
}
