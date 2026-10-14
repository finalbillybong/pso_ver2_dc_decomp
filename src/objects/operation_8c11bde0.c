typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    float f394;
    float f398;
    float f39c;
    char unknown3a0[0xc];
    Arg0_3ac *f3ac;
    char unknown3b0[0x48];
    int f3f8;
    int f3fc;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
void operation_8c11bde0(Object *o)
{
    o->f394 = 0.0f;
    o->f398 = 7.5f;
    o->f39c = 0.0f;
    o->f3fc = 1;
    o->f3f8 = 1;
    o->f34 &= -0x40001;
    o->f3ac->f18 |= 1;
}
