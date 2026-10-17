typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    short f84;
    char unknown86[0x2];
    short f88;
};
struct S_vv2 {
    int f00;
};
void operation_8c1cdd08(Object *o)
{
    short v1;
    S_vv2 *v2;
    v1 = (short)o->f82;
    if (v1 >= 0) {
        if (o->f88 >= v1) {
            o->f84 = v1 + -1;
            return;
        }
        v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f88 << 2));
        goto L_8c1cdd40;
L_8c1cdd2e:;
        o->f88 -= 1;
        v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f88 << 2));
L_8c1cdd40:;
        if (((v2->f00 & 4)) == 0) {
            goto L_8c1cdd2e;
        }
        o->f84 = o->f88;
    }
}
