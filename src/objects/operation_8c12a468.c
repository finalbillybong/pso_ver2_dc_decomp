typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9980 S_g8c4d9980;
typedef struct S_g8c4d9980_430 S_g8c4d9980_430;
typedef struct S_g8c4d9984 S_g8c4d9984;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xb0];
    Arg0_dc *fdc;
    char unknowne0[0x18];
    float ff8;
    float ffc;
    float f100;
    char unknown104[0x2c];
    Arg0_130 *f130;
    char unknown134[0x238];
    float f36c;
    float f370;
};
struct S_g8c4d9980 {
    char unknown0[0x430];
    S_g8c4d9980_430 *f430;
};
struct S_g8c4d9980_430 {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c4d9984 {
    int f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_130 {
    char unknown0[0x4];
    int f04;
};
extern void call_8c12a010(Object *, int);
void operation_8c12a468(Object *o)
{
    o->f130 = (Arg0_130 *)(*(S_g8c4d9980 **)0x8c4d9980)->f430->f0c;
    o->f28 = (int)((*(S_g8c4d9984 **)0x8c4d9984)->f00);
    o->f370 = o->f36c * 4.0f;
    call_8c12a010(o, 0);
    o->fdc->f18 |= 0x10;
    o->ff8 = 0.0f;
    o->f100 = 1.0f;
    o->ffc = (float)(unsigned int)o->f130->f04 - 1.0f;
}
