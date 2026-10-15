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
    char unknown34[0x50];
    short f84;
};
struct S_vv1 {
    int f00;
};
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19f980(void *);
void operation_8c1cd854(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
    if (((v1->f00 & 0x80)) == 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        operation_8c19f980((void *)v1);
    }
}
