typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x50];
    short f84;
    short f86;
};
struct Arg0_30_0 {
    int f00;
};
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19f998(void *);
extern void operation_8c19f980(void *);
void operation_8c1cd89c(Object *o)
{
    int v1;
    if ((((*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f00 & 0x80)) == 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        v1 = (int)0;
        while (o->f86 > v1) {
            operation_8c19f998((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2))));
            v1 = (int)(v1 + 1);
        }
        operation_8c19f980((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2))));
    }
}
