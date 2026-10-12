typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x264];
    int f350;
    char unknown354[0x64];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x450];
    unsigned short f450;
};
extern void call_8c027550(Object *);
void operation_8c1ed9b0(Object *o)
{
    int v3;
    o->fe8 &= -0x41;
    o->f350 &= -0x81;
    o->f34 &= -0x400001;
    if (o->f3b8 != 0) {
        o->f3b8->f450 = 0xffff;
    }
    v3 = (int)(o->f20 == *(int *)0x8c418248);
    if (v3 != 0) {
        call_8c027550(o);
    }
}
