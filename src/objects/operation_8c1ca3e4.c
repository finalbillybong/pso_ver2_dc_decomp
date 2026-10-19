typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv17 S_vv17;
typedef struct S_vv21 S_vv21;
typedef struct S_vv25 S_vv25;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct S_vv25 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1ca3e4(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    S_vv9 *v9;
    S_vv13 *v13;
    S_vv17 *v17;
    S_vv21 *v21;
    S_vv25 *v25;
    if (o != 0) {
        o->dispatch = (void *)0x8c276838;
        if (o->f2c != 0) {
            v1 = (S_vv1 *)o->f2c;
            v1->f04 |= 1;
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            v5 = (S_vv5 *)o->f30;
            v5->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f34 != 0) {
            v9 = (S_vv9 *)o->f34;
            v9->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f38 != 0) {
            v13 = (S_vv13 *)o->f38;
            v13->f04 |= 1;
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f44 != 0) {
            v17 = (S_vv17 *)o->f44;
            v17->f04 |= 1;
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f3c != 0) {
            v21 = (S_vv21 *)o->f3c;
            v21->f04 |= 1;
            o->f3c = (Arg0_3c *)0;
        }
        if (o->f40 != 0) {
            v25 = (S_vv25 *)o->f40;
            v25->f04 |= 1;
            o->f40 = (Arg0_40 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
