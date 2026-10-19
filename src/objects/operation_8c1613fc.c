typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_3f0 Arg0_3f0;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2a6];
    Arg0_398 *f398;
    char unknown39c[0x4];
    int f3a0;
    int f3a4;
    char unknown3a8[0x24];
    float f3cc;
    int f3d0;
    char unknown3d4[0xc];
    int f3e0;
    char unknown3e4[0xc];
    Arg0_3f0 *f3f0;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
extern int angle_difference(int, int);
extern int signed_angle_delta(int, int);
void operation_8c1613fc(Object *o)
{
    int t1;
    int t2;
    o->f398->f18 |= 1;
    o->f3a0 = 1;
    o->f3a4 = 1;
    o->f3cc = 0.0f;
    o->f3d0 = 0x3c;
    o->f3e0 = 1;
    t1 = angle_difference((int)(o->f64), (int)(o->f3f0));
    if (0x2000 > t1) {
        t2 = signed_angle_delta((int)(o->f64), (int)(o->f3f0));
        if (t2 >= 0) {
            o->f64 = (Arg0_64 *)((int)o->f3f0 + -0x2000);
        } else {
            o->f64 = (Arg0_64 *)((int)o->f3f0 + 0x2000);
        }
    }
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    o->ff0 = 2;
}
