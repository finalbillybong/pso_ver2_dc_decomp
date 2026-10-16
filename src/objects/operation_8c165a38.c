typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x388];
    int f3c4;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x18];
    S_vv3_30 *f30;
};
void operation_8c165a38(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v1;
    int v5;
    int v4;
    v2 = (int)0;
    v3 = (S_vv3 *)o->f38->f2c;
    v1 = (int)-(int)(o->f3c4);
    while (4 > v2) {
        v3->f14 = (int)(v1);
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)v3->f30;
    }
    v5 = (int)4;
    v4 = (int)o->f3c4;
    while (8 > v5) {
        v3->f14 = (int)(v4);
        v5 = (int)(v5 + 1);
        v3 = (S_vv3 *)v3->f30;
    }
}
