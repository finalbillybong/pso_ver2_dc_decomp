typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
struct S_vv1 {
    int f00;
};
extern void operation_8c19ee7c(void *, int, int, int);
void operation_8c1cd774(Object *o, int a1, int a2, int a3, int a4)
{
    S_vv1 *v1;
    if (!(o->f82 >= o->f86)) {
        v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2));
        operation_8c19ee7c((void *)v1, a1, a2, a3);
        if (a4 != 0) {
            v1->f00 |= 0x400;
        }
        o->f82 += 1;
    }
}
