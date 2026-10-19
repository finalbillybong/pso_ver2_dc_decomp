typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
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
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c189af8(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    S_vv9 *v9;
    S_vv13 *v13;
    if (o != 0) {
        o->dispatch = (void *)0x8c2721d4;
        if (o->f20 != 0) {
            v1 = (S_vv1 *)o->f20;
            v1->f04 |= 1;
            o->f20 = (Arg0_20 *)0;
        }
        if (o->f24 != 0) {
            v5 = (S_vv5 *)o->f24;
            v5->f04 |= 1;
            o->f24 = (Arg0_24 *)0;
        }
        if (o->f28 != 0) {
            v9 = (S_vv9 *)o->f28;
            v9->f04 |= 1;
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f2c != 0) {
            v13 = (S_vv13 *)o->f2c;
            v13->f04 |= 1;
            o->f2c = (Arg0_2c *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
