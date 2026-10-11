typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
struct Object {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xb6];
    Arg0_e4 *fe4;
};
struct Arg0_e4 {
    char unknown0[0x2c];
    short f2c;
};
void operation_8c0f34ec(Object *o, int a1)
{
    o->fe4 = (Arg0_e4 *)a1;
    o->f2c = o->fe4->f2c;
}
