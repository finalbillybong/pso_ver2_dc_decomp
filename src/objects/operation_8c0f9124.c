typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x3a4];
    Arg0_3a4 *f3a4;
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
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern void call_8c0ffdf0(void *, int);
void operation_8c0f9124(Object *o)
{
    S_vv1 *v1;
    o->f3b4 = 1.0f;
    o->f3c0 = 0.0f;
    o->f3a8->f18 &= -0x14001ad1;
    v1 = (S_vv1 *)o->f3a8;
    v1->f18 |= 0x14000a50;
    o->f408 = 0;
    call_8c0ffdf0((void *)(o->f3a4), 7);
}
