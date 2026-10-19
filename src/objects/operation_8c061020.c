typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x348];
    float f428;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
void operation_8c061020(Object *o)
{
    o->fdc->f04 = o->f428 + 10.0f;
}
