typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x370];
    Arg0_3a8 *f3a8;
    char unknown3ac[0x8];
    float f3b4;
    char unknown3b8[0x8];
    float f3c0;
    char unknown3c4[0x44];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
void operation_8c0f8ee0(Object *o)
{
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000a50;
    o->f408 = 0;
    o->f34 &= -0x40001;
    o->f3b4 = 0.0f;
    o->f3c0 = -2.5f;
}
