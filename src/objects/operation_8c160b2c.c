typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2a6];
    Arg0_398 *f398;
    int f39c;
    int f3a0;
    int f3a4;
    char unknown3a8[0x24];
    float f3cc;
    int f3d0;
    char unknown3d4[0x8];
    int f3dc;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c160b2c(Object *o)
{
    if (o->f39c != 1) {
        o->f398->f18 |= 1;
        o->f3a0 = 1;
        o->f3a4 = 1;
        o->f3cc = 0.0f;
        o->f3d0 = 0x96;
        o->f3dc = 1;
        call_8c05fbf8(0x3002d, (void *)(((char *)o + 0x3c)), 0, 0);
        o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
        o->ff0 = 2;
    }
}
