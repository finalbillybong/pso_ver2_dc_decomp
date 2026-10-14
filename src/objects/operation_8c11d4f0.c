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
    char unknownf2[0x2b2];
    int f3a4;
    char unknown3a8[0x4];
    Arg0_3ac *f3ac;
    char unknown3b0[0x5c];
    int f40c;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
void operation_8c11d4f0(Object *o)
{
    o->f3ac->f18 |= 1;
    o->f3a4 = 0x1e;
    o->f40c += 1;
    o->ff0 = 0xb;
}
