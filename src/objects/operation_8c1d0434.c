typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv68 S_vv68;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    unsigned char f20;
    char unknown21[0x13];
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    Arg0_50 *f50;
    Arg0_54 *f54;
    Arg0_58 *f58;
    Arg0_5c *f5c;
    Arg0_60 *f60;
    Arg0_64 *f64;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv68 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2ba0;
extern int operation_8c1d03b4(void *);
extern void operation_8c21f648(void *, int);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1d0434(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv68 *v68;
    int t1;
    if (o == 0) {
    } else {
        o->dispatch = (void *)0x8c276df0;
        if (o->f64 != 0) {
            v1 = (S_vv1 *)o->f64;
            v1->f04 |= 1;
            o->f64 = (Arg0_64 *)0;
        }
        if (o->f50 != 0) {
            if (g_8c4e2ba0 != 0 && o->f20 == 0x27) {
                t1 = operation_8c1d03b4((void *)(o->f50));
                operation_8c21f648((void *)(o->f34), t1);
            }
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        if (o->f48 != 0) {
            request_resource_release((void *)(o->f48));
            o->f48 = (Arg0_48 *)0;
        }
        if (o->f60 != 0) {
            request_resource_release((void *)(o->f60));
            o->f60 = (Arg0_60 *)0;
        }
        if (o->f54 != 0) {
            request_resource_release((void *)(o->f54));
            o->f54 = (Arg0_54 *)0;
        }
        if (o->f5c != 0) {
            request_resource_release((void *)(o->f5c));
            o->f5c = (Arg0_5c *)0;
        }
        if (o->f58 != 0) {
            request_resource_release((void *)(o->f58));
            o->f58 = (Arg0_58 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (Arg0_40 *)0;
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
            v68 = (S_vv68 *)o->f34;
            v68->f00 &= -3;
            o->f34 = (Arg0_34 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
