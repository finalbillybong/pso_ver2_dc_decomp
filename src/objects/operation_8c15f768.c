typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2a6];
    Arg0_398 *f398;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
void operation_8c15f768(Object *o)
{
    o->f398->f18 |= 1;
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    o->ff0 = 1;
}
