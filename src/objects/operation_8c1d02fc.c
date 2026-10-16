typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv3 {
    int f00;
    char unknown4[0x14];
    int f18;
};
extern void operation_8c19f980(void *);
extern void operation_8c19f998(void *);
void operation_8c1d02fc(Object *o, int a1, int a2)
{
    int v2;
    S_vv3 *v3;
    v2 = (int)0;
    while (o->f86 > v2) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
        if (v3 != 0 && ((v3->f00 & 4)) != 0 && a2 == v3->f18) {
            if (a1 != 0) {
                operation_8c19f980((void *)v3);
            } else {
                operation_8c19f998((void *)v3);
            }
        }
        v2 = (int)(v2 + 1);
    }
}
