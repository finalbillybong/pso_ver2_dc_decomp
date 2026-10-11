typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x22c];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x94];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x450];
    unsigned short f450;
};
void reset_slot_8c1ea98c(Object *o)
{
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->fe8 &= -0x41;
    if (o->f3b8 != 0) {
        o->f3b8->f450 = 0xffff;
    }
}
