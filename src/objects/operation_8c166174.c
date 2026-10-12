typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_p0_3ac {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3ac;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x150];
    short f198;
    char unknown19a[0x18a];
    Vector3 f324;
    short f330;
    char unknown332[0x76];
    int f3a8;
    Block_p0_3ac f3ac;
    char unknown3b8[0xc];
    int f3c4;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg2 {
    Block_p0_3ac f00;
};
void operation_8c166174(Object *o, Arg1 *a1, Arg2 *a2)
{
    o->f3a8 |= 0x100;
    o->f324 = a1->f00;
    o->f3ac = a2->f00;
    o->f3ac.f04 += 1.0f;
    o->f3c = o->f324;
    o->f3c4 = 0;
    o->f330 = o->f198;
    o->f34 &= -0xa01;
}
