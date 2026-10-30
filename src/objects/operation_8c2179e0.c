typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct Arg0_30_c Arg0_30_c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
    Arg0_30_8 *f08;
    Arg0_30_c *f0c;
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
};
struct S_vv1 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv6 {
    int f00;
};
extern unsigned short g_8c46fe24;
void operation_8c2179e0(Object *o)
{
    S_vv1 *v1;
    int pm2;
    S_vv4 *v4;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv5 *v5;
    S_vv6 *v6;
    Arg0_30 *pm1;
    S_vv5 *pm3;
    v1 = (S_vv1 *)o->f30->f00;
    v2 = (S_vv2 *)o->f30->f04;
    v3 = (S_vv3 *)o->f30->f08;
    v4 = (S_vv4 *)o->f30->f0c;
    pm1 = o->f30;
    pm3 = (S_vv5 *)pm1->f10;
    pm1 = o->f30;
    v5 = pm3;
    pm2 = (int)(int)g_8c46fe24;
    v6 = (S_vv6 *)pm1->f14;
    if (!(0 == ((pm2 & 2)))) {
        pm2 = -3;
        v1->f00 &= pm2;
        v4->f00 &= -3;
    } else {
        v1->f00 |= 2;
        v4->f00 |= 2;
    }
    if (((g_8c46fe24 & 4)) != 0) {
        v2->f00 &= -3;
        v5->f00 &= -3;
    } else {
        v2->f00 |= 2;
        v5->f00 |= 2;
    }
    if (((g_8c46fe24 & 1)) != 0) {
        v3->f00 &= -3;
        v6->f00 &= -3;
    } else {
        v3->f00 |= 2;
        v6->f00 |= 2;
    }
}
