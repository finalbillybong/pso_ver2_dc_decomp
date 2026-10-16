typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct Arg0_30_2c Arg0_30_2c;
typedef struct Arg0_30_38 Arg0_30_38;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x14];
    Arg0_30_14 *f14;
    char unknown18[0x8];
    Arg0_30_20 *f20;
    char unknown24[0x8];
    Arg0_30_2c *f2c;
    char unknown30[0x8];
    Arg0_30_38 *f38;
};
struct Arg0_30_14 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
int operation_8c1d7454(Object *o)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v4;
    S_vv3 *v3;
    v1 = (S_vv1 *)o->f30->f20;
    v2 = (S_vv2 *)o->f30->f2c;
    v3 = (S_vv3 *)o->f30->f38;
    if (((o->f30->f14->f00 & 8)) == 0) {
        return 0;
    }
    if (((v1->f00 & 8)) == 0) {
        return 0;
    }
    if (((v2->f00 & 8)) == 0) {
        return 0;
    }
    v4 = (int)(((v3->f00 & 8)) != 0);
    return (int)(v4);
}
