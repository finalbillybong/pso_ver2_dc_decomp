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
    char unknown1c[0x10];
    int f2c;
    int f30;
    int f34;
};
void operation_8c1a2ce0(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v1;
    int v5;
    int v6;
    v5 = (int)-0x555556;
    v2 = (int)0;
    v6 = (int)-0x979798;
    v1 = (int)-0x10;
    while (o->f86 > v2) {
        v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
        if (((v3->f00 & 4)) != 0 && (v1 & v3->f18) == v1) {
            v3->f2c = v5;
            v3->f30 = v6;
            v3->f34 = v6;
            v3->f00 |= 0x80;
        }
        v2 = (int)(v2 + 1);
    }
}
