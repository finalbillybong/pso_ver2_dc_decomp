typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x1e8];
    int f2d4;
    char unknown2d8[0x32];
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x1c];
    int f370;
};
extern void call_8c1e8e60(Object *, short, int);
extern void operation_021f88(void *, int, short);
void operation_8c1f02bc(Object *o)
{
    call_8c1e8e60(o, o->f30a, 6);
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f34 &= -0x201;
    o->fe8 |= 0x40;
    if (((o->f350 & 0x400)) != 0) {
        o->f30c = 1;
    } else {
        o->f30c = 0;
        o->f370 = (int)-((float)o->f2d4 * 0.1f);
    }
    operation_021f88((void *)o, 0x13, (short)0);
}
