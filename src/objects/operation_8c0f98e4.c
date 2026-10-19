typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x3a4];
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0x54];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c0ffdf0(void *, int);
void operation_8c0f98e4(Object *o)
{
    o->f3b0 = 0x14;
    call_8c05fbf8(0x3001d, (void *)(((char *)o + 0x3c)), 0, 0);
    call_8c0ffdf0((void *)(o->f3a4), 0xa);
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000050;
    o->f408 = 0;
}
