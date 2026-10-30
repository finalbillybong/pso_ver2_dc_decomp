typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4c];
    int f80;
    int f84;
    char unknown88[0x8];
    Arg0_90 *f90;
    char unknown94[0x8];
    int f9c;
};
struct S_vv5 {
    int f00;
};
struct S_vv9 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
void operation_8c119b70(Object *o)
{
    S_vv9 *v9;
    int v1;
    int v4;
    int *p;
    int f;
    v1 = -9;
    v9 = (S_vv9 *)*(int *)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
    while (v9->f20 != 0 && (v9->f00 & 0x10) != 0) {
        if (++o->f84 >= o->f9c) {
            o->f84 = 0;
        }
        v4 = o->f84;
        if (v4 == o->f80) {
            break;
        }
        v9 = (S_vv9 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v4 << 2));
        p = (int *)((char *)o->f90 + (v4 << 3));
        f = *p;
        if ((f & 8) != 0) {
            *p = f & v1;
            v9->f00 &= v1;
        }
    }
}
