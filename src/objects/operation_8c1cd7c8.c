typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
struct S_vv6 {
    int f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x10];
    char f1c;
};
extern void operation_8c19ed0c(void *, int, int, int);
void operation_8c1cd7c8(Object *o, int a1, int a2, int a3)
{
    S_vv6 *v6;
    int v3;
    int v2;
    int v5;
    short v1;
    v1 = (short)o->f82;
    if (!((short)v1 >= o->f86)) {
        v2 = (int)(char)a1;
        if (((v2 & 8)) != 0) {
            v5 = (int)0xd;
        } else {
            if (((v2 & 4)) != 0) {
                v3 = (int)0xf;
            } else {
                v3 = (int)0x2d;
            }
            v5 = (int)v3;
        }
        v6 = (S_vv6 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + ((short)v1 << 2));
        operation_8c19ed0c((void *)v6, v5, a2, a3);
        v6->f08 = -18.0f;
        if (((v2 & 2)) != 0) {
            v6->f1c = 0xe;
            v6->f00 |= 0x100;
        }
        o->f82 += 1;
    }
}
