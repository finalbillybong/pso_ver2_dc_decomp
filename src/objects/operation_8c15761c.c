typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    short f84;
    short f86;
    char unknown88[0x8];
    Arg0_90 *f90;
};
struct S_vv2 {
    int f00;
    int f04;
};
extern void operation_8c0e226c(int, int);
extern void call_8c0e2328(int, float);
void operation_8c15761c(Object *o)
{
    int v1;
    char *v3;
    S_vv2 *v2;
    o->f82 = 0;
    o->f84 = 0;
    v1 = (int)0;
    v2 = (S_vv2 *)o->f90;
    while (o->f86 > v1) {
        v3 = (char *)*(int *)((char *)((char *)o->f30 + 0x0) + (v1 << 2));
        operation_8c0e226c((int)(v3), 0);
        call_8c0e2328((int)(v3), 1000000.0f);
        v2->f00 = 0;
        v2->f04 = 0;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
}
