typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x10];
    float f44;
    char unknown48[0xc];
    float f54;
    int f58;
    char unknown5c[0x20];
    float f7c;
    char unknown80[0x4];
    short f84;
    char unknown86[0xa];
    unsigned short f90;
};
struct Arg0_30_0 {
    char unknown0[0xc];
    float f0c;
};
void operation_8c25506c(Object *o)
{
    int v4;
    float v5;
    float v3;
    if (((o->f90 & 0xffff & 1)) != 0) {
        v3 = (float)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f0c;
    } else {
        v3 = (float)0.0f;
    }
    v4 = (int)o->f58;
    if (v4 == 0) {
        o->f7c = v3;
        return;
    }
    v5 = (float)((o->f44 - o->f54) * 0.5f + v3 - o->f7c);
    o->f7c = v5 / (float)(unsigned int)v4 + o->f7c;
}
