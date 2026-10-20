typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv4 S_vv4;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x50];
    short f84;
    short f86;
    char unknown88[0x8];
    Arg0_90 *f90;
};
struct S_vv4 {
    int f00;
};
struct S_vv8 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
void operation_8c157290(Object *o)
{
    int v3;
    int v1;
    S_vv8 *v8;
    int *p;
    int f;
    if (!(o->f84 >= o->f86)) {
        v1 = -9;
        v8 = (S_vv8 *)*(int *)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
        v3 = -3;
        while (v8->f20 != 0 && (v8->f00 & 0x10) != 0) {
            if (++o->f84 >= o->f86) {
                break;
            }
            v8 = (S_vv8 *)*(int *)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
            p = (int *)((char *)o->f90 + (o->f84 << 3));
            f = *p;
            if ((f & 2) != 0) {
                *p = f & v3;
                v8->f00 &= v1;
            }
        }
    }
}
