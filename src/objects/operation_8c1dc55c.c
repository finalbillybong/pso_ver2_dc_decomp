typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv2 {
    int f00;
    char unknown4[0x14];
    int f18;
    char unknown1c[0x8];
    int f24;
};
void operation_8c1dc55c(Object *o, int a1)
{
    S_vv2 *v2;
    int v1;
    int v3;
    int v4;
    v1 = 0;
    v4 = -1;
    while (o->f86 > v1) {
        v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)o->f30 + (v1 << 2));
        if (v2 != 0) {
            v3 = (int)v2->f00;
            if (((v3 & 4)) != 0 && a1 == v2->f18) {
                v2->f00 = v3 | 1;
                v2->f24 = v4;
            }
        }
        v1++;
    }
}
