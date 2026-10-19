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
    char unknown3b4[0x10];
    float f3c4;
    float f3c8;
    float f3cc;
    char unknown3d0[0x38];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern void call_8c0ffdf0(void *, int);
void operation_8c0fa564(Object *o)
{
    o->f3cc = 1.0f;
    o->f3c8 = 1.0f;
    o->f3c4 = 1.0f;
    o->f3b0 = 0;
    call_8c0ffdf0((void *)(o->f3a4), 4);
    o->f3a8->f18 &= -0x14001ad1;
    o->f408 = 1;
}
