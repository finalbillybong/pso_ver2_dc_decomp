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
    int f1c;
};
int operation_8c1dc5a0(Object *o, int a1)
{
    int v2;
    int v1;
    S_vv3 *v3;
    v1 = o->f86;
    v2 = (int)0;
    while (v1 > v2) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
        if (v3 != 0 && ((v3->f00 & 4)) != 0 && a1 == v3->f18) {
            return (int)(v3->f1c);
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
