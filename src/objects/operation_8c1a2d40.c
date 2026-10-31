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
};
struct S_vv3 {
    int f00;
    char unknown4[0x14];
    int f18;
    char unknown1c[0x10];
    int f2c;
    char unknown30[0x4];
    int f34;
};
void operation_8c1a2d40(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v7;
    int k18;
    int k2c;
    int k34;
    k18 = -0x100;
    k2c = -0x555556;
    k34 = -0x979798;
    v7 = (int)0;
    goto L_8c1a2d74;
    v2 = (int)0;
L_8c1a2d52:;
    v3 = (S_vv3 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v2 << 2));
    if (((v3->f00 & 4)) != 0 && v3->f18 == k18) {
        v3->f2c = k2c;
        v3->f34 = k34;
        v3->f00 |= 0x80;
    }
    v7 = (int)(v2 + 1);
L_8c1a2d74:;
    v2 = (int)v7;
    if (*(short *)((char *)((char *)o + 0x0) + 0x86) > v7) {
        goto L_8c1a2d52;
    }
}
