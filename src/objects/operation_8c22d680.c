typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x3c];
    Arg0_58 *f58;
    char unknown5c[0x28];
    Arg0_84 *f84;
    Arg0_88 *f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c5064f8;
extern int g_8c506504;
extern void call_8c011ec0(void *);
extern void request_resource_release(void *);
extern void operation_8c22e950(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c22d680(Object *o, int a1)
{
    S_vv7 *v7;
    if (o != 0) {
        o->dispatch = (void *)0x8c278ea4;
        if (o->f58 != 0) {
            call_8c011ec0((void *)(o->f58));
            o->f58 = (Arg0_58 *)0;
        }
        if (o->f90 != 0) {
            v7 = (S_vv7 *)o->f90;
            v7->f04 |= 1;
            o->f90 = (Arg0_90 *)0;
        }
        if (o->f88 != 0) {
            request_resource_release((void *)(o->f88));
            o->f88 = (Arg0_88 *)0;
        }
        if (o->f84 != 0) {
            request_resource_release((void *)(o->f84));
            o->f84 = (Arg0_84 *)0;
        }
        operation_8c22e950((void *)o);
        g_8c506504 = 0;
        g_8c5064f8 = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
