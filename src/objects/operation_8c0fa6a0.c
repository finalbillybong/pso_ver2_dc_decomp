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
    char unknown3ac[0x18];
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
extern void create_effect_777c(void *, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c0ffdf0(void *, int);
void operation_8c0fa6a0(Object *o)
{
    o->f3cc = 1.0f;
    o->f3c8 = 1.0f;
    o->f3c4 = 1.0f;
    create_effect_777c((void *)(((char *)o + 0x324)), 0xce);
    call_8c05fbf8(0x3001a, (void *)(((char *)o + 0x3c)), 0, 0);
    call_8c0ffdf0((void *)(o->f3a4), 5);
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000a50;
    o->f408 = 0;
}
