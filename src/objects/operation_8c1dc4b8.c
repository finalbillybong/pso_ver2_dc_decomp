typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv62 S_vv62;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv62 {
    int f00;
    char unknown4[0x14];
    int f18;
};
extern void call_8c1dbaf4(S_vv62 *, int);
void operation_8c1dc4b8(Object *o, int a1, int a2)
{
    int v1;
    S_vv62 *v62;
    v1 = (int)0;
    while (o->f86 > v1) {
        v62 = (S_vv62 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2));
        if (v62 != 0 && ((v62->f00 & 4)) != 0 && a2 == v62->f18) {
            call_8c1dbaf4(v62, a1);
        }
        v1 = (int)(v1 + 1);
    }
}
