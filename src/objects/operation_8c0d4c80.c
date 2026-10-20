typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv2 S_vv2;
typedef struct Block_vv2_0 {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    int f14;
    int f18;
    char unknown1c[0x10];
} Block_vv2_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
};
struct S_vv2 {
    Block_vv2_0 f00;
};
extern Block44 g_8c30707c;
extern void call_8c05228c(Object *, float);
int operation_8c0d4c80(Object *o, int a1, float f0)
{
    S_vv2 *v2;
    char *v1;
    char *v3;
    int v4;
    f0 *= 0.5f;
    v1 = (char *)o->f64;
    v2 = (S_vv2 *)o->fdc;
    v3 = (char *)v2->f00.f18;
    v2->f00.f00 = 0.0f;
    v2->f00.f08 = f0;
    v2->f00.f0c = f0;
    v2->f00.f10 = 8.0f;
    v2->f00.f14 = 1;
    v2->f00.f18 = 0x13a01;
    o->f64 = a1;
    call_8c05228c(o, f0);
    v4 = (int)(v2->f00.f18 & 0x700000);
    {
        Block44 *p_ = (Block44 *)&g_8c30707c;
        *(Block44 *)&v2->f00 = *p_;
    }
    v2->f00.f18 = (int)(v3);
    o->f64 = (int)(v1);
    return (int)(v4);
}
