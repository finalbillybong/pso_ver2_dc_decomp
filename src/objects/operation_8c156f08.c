typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv3 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x4];
    float f14;
    char unknown18[0x8];
    int f20;
};
void operation_8c156f08(Object *o)
{
    unsigned int v2;
    S_vv3 *v3;
    float v1;
    float v4;
    v1 = (float)0.0f;
    v2 = (unsigned int)0;
    while ((unsigned int)o->f86 > v2) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
        if (v3->f20 != 0) {
            v3->f0c = v1;
            v4 = (float)v3->f14;
            if (v4 > 0.0f) {
                v1 = (float)(v1 + (v4 + 2.0f));
            }
        }
        v2 = (unsigned int)(v2 + 1);
    }
}
