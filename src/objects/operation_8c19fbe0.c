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
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
extern void call_8c19edac(void *, int, int, int);
void operation_8c19fbe0(Object *o, int a1, int a2, int a3)
{
    if (!(o->f82 >= o->f86)) {
        call_8c19edac((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2))), a1, a2, a3);
        o->f82 += 1;
    }
}
