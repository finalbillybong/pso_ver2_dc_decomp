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
    char unknowne0[0x2c8];
    float f3a8;
    char f3ac;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void set_fields_8c13d384(Object *o)
{
    o->f3ac = 0;
    o->f3a8 = -40.0f;
    o->fdc->f18 |= 1;
}
