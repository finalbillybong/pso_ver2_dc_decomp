typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_130 Arg0_24_130;
typedef struct Arg0_24_130_0 Arg0_24_130_0;
typedef struct Arg0_24_130_0_4 Arg0_24_130_0_4;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x64];
    int f64;
    char unknown68[0xc8];
    Arg0_24_130 *f130;
};
struct Arg0_24_130 {
    Arg0_24_130_0 *f00;
};
struct Arg0_24_130_0 {
    char unknown0[0x4];
    Arg0_24_130_0_4 *f04;
};
struct Arg0_24_130_0_4 {
    char unknown0[0x8];
    int f08;
};
int operation_8c1f232c(Object *o)
{
    int v1;
    int v3;
    int v5;
    v5 = (int)o->f24->f64;
    if (o->f24->f130 != 0) {
        v3 = (int)o->f24->f64;
        if (o->f24->f130->f00 != 0) {
            v1 = (int)o->f24->f64;
            if (o->f24->f130->f00->f04 != 0) {
                v1 = (int)(o->f24->f64 + o->f24->f130->f00->f04->f08);
            }
            v3 = (int)v1;
        }
        v5 = (int)v3;
    }
    return (int)(v5);
}
