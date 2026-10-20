typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_c S_vv2_c;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    float f28;
};
struct Arg0_24 {
    char unknown0[0x14];
    int f14;
};
struct S_vv2 {
    char unknown0[0xc];
    S_vv2_c *f0c;
    char unknown10[0x20];
    float f30;
    char unknown34[0xc];
    float f40;
    char unknown44[0x1c];
    float f60;
};
struct S_vv4 {
    char unknown0[0x70];
    float f70;
};
void operation_8c227d60(Object *o, float f0)
{
    int v1;
    S_vv2 *v2;
    int v3;
    S_vv4 *v4;
    float v5;
    o->f28 = f0;
    v1 = (int)o->f24->f14;
    v2 = (S_vv2 *)v1;
    while (v2 != 0) {
        if (f0 != 0.0f) {
            v5 = -1.0f / f0;
            v2->f30 = v5;
            v2->f40 = v5;
            v2->f60 = 0.0f;
            v3 = (int)0;
            while (v3 != 4) {
                v4 = (S_vv4 *)v2;
                v4 = (S_vv4 *)((int)v4 + (v3 << 4));
                v4->f70 = v5;
                v3 = (int)(v3 + 1);
            }
        }
        v2 = (S_vv2 *)v2->f0c;
    }
}
