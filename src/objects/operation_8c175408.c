typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b4 Arg0_3b4;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    char unknown3ac[0x8];
    Arg0_3b4 *f3b4;
    Arg0_3b8 *f3b8;
    int f3bc;
};
struct Arg0_3b4 {
    int f00;
};
struct S_vv1 {
    char unknown0[0x10];
    short f10;
};
struct Arg0_3b8 {
    int f00;
};
struct S_vv3 {
    char unknown0[0x10];
    short f10;
};
void operation_8c175408(Object *o)
{
    S_vv1 *v1;
    int v2;
    S_vv3 *v3;
    if (((o->f3a8 & 1)) != 0) {
        v1 = (S_vv1 *)o->f3b4;
        *(int *)v1 = o->f3bc;
        v1->f10 |= 0x800;
        *(short *)((char *)v1 - 0x4) = 0x2517;
        o->f3b8->f00 = o->f3b8->f00 & 0xffffff | (o->f3bc != 0);
    } else {
        v3 = (S_vv3 *)o->f3b4;
        *(int *)v3 = o->f3bc;
        v3->f10 &= -0x801;
        *(short *)((char *)v3 - 0x4) = 0x2517;
        o->f3b8->f00 |= -0x1000000;
    }
}
