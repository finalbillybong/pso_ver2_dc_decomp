typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x38];
    float f38;
    char unknown3c[0x1c];
    int f58;
    char unknown5c[0xc];
    Arg0_68 *f68;
    float f6c;
    char unknown70[0x4];
    int f74;
};
struct Arg0_68 {
    char unknown0[0x48];
    float f48;
};
void operation_8c21e2c0(Object *o, int a1)
{
    if (o->f74 != a1) {
        o->f74 = a1;
        o->f38 = o->f68->f48 + o->f6c + (float)o->f74 * 16.0f;
        o->f58 = 0xf;
    }
}
