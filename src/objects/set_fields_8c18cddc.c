typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x4];
    Arg0_6c *f6c;
};
struct Arg0_6c {
    char unknown0[0x1c];
    float f1c;
};
void set_fields_8c18cddc(Object *o)
{
    o->f64 = 0x800000;
    o->f6c->f1c = 1000000.0f;
}
