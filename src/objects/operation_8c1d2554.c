typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    unsigned char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
    Arg0_48 *f48;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c1d4730(void *);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1d2554(Object *o, int a1)
{
    S_vv7 *v7;
    if (o != 0) {
        o->dispatch = (void *)0x8c276e0c;
        operation_8c1d4730((void *)o);
        if (o->f20 == 0x22 && g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -0x201;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f48 != 0) {
            request_resource_release((void *)(o->f48));
            o->f48 = (Arg0_48 *)0;
        }
        if (o->f44 != 0) {
            v7 = (S_vv7 *)o->f44;
            v7->f04 |= 1;
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (Arg0_24 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
