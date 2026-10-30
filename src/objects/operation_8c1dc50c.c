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
    int f00;
    char unknown4[0x14];
    int f18;
    char unknown1c[0x8];
    int f24;
};
void operation_8c1dc50c(Object *o, int a1)
{
    int v2;
    S_vv3 *v3;
    int v4;
    int v1;
    int v5;
    v1 = -2;
    v5 = -0x979798;
    for (v2 = 0; o->f86 > v2; v2++) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)o->f30 + (v2 << 2));
        if (v3 != 0) {
            v4 = (int)v3->f00;
            if (((v4 & 4)) != 0 && a1 == v3->f18) {
                v3->f00 = v4 & v1;
                v3->f24 = v5;
            }
        }
    }
}
