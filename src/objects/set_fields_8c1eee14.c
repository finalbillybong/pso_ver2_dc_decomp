typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x1c];
    float f1c;
    float f20;
    float f24;
};
void set_fields_8c1eee14(Object *o)
{
    o->fdc->f1c = o->f3c;
    o->fdc->f20 = o->f40 + 8.0f;
    o->fdc->f24 = o->f44;
    o->f34 |= 0x800;
}
