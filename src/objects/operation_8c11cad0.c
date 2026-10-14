typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
void operation_8c11cad0(Object *o)
{
    o->f3ac->f18 |= 1;
    o->ff0 = 8;
}
