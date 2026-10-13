typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x52];
    short f86;
};
struct S_vv4 {
    int f00;
    char unknown4[0x14];
    int f18;
    char unknown1c[0x10];
    int f2c;
    int f30;
};
void operation_8c1d0364(Object *o, int a1, int a2)
{
    int v1;
    S_vv4 *v4;
    v1 = (int)0;
    while (o->f86 > v1) {
        v4 = (S_vv4 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2));
        if (v4 != 0 && ((v4->f00 & 4)) != 0 && a2 == v4->f18) {
            v4->f2c = a1;
            v4->f30 = a1;
        }
        v1 = (int)(v1 + 1);
    }
}
