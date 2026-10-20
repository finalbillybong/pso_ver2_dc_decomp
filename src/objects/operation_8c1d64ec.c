typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x78];
    Vector3 fac;
};
struct Arg0_30 {
    char unknown0[0x18];
    Arg0_30_18 *f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
};
struct Arg0_30_18 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv1 {
    int f00;
};
extern Vector3 g_8c32a198;
extern void call_8c1d6550(Object *);
void operation_8c1d64ec(Object *o)
{
    char *v6;
    char *v7;
    char *v8;
    char *v9;
    char *v10;
    S_vv5 *v5;
    S_vv4 *v4;
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv1 *v1;
    call_8c1d6550(o);
    *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a198;
    v10 = (char *)o->f30->f1c;
    v9 = (char *)o->f30->f20;
    v8 = (char *)o->f30->f24;
    v7 = (char *)o->f30->f28;
    v6 = (char *)o->f30->f2c;
    o->f30->f18->f00 |= 2;
    v5 = (S_vv5 *)v10;
    v4 = (S_vv4 *)v9;
    v3 = (S_vv3 *)v8;
    v2 = (S_vv2 *)v7;
    v1 = (S_vv1 *)v6;
    v5->f00 |= 2;
    v4->f00 |= 2;
    v3->f00 |= 2;
    v2->f00 |= 2;
    v1->f00 |= 2;
}
