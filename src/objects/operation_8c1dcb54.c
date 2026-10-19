typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv6 S_vv6;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x6];
    unsigned short f22;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1dcb54(Object *o, int a1)
{
    S_vv6 *v6;
    S_vv9 *v9;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c277354;
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0 && ((o->f22 & 2)) == 0 && ((o->f22 & 0x40)) != 0) {
            operation_8c0264ac();
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -0x21;
            }
        }
        if (o->f30 != 0) {
            v6 = (S_vv6 *)o->f30;
            v6->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f34 != 0) {
            v9 = (S_vv9 *)o->f34;
            v9->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
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
