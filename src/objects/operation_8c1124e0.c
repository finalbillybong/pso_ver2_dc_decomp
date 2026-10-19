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
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c4d81c0;
extern int g_8c4d81cc;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void operation_8c220b5c(void);
extern void destroy_object_8c106598(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1124e0(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c269bf8;
        if (o->f34 != 0) {
            v1 = (S_vv1 *)o->f34;
            v1->f04 |= 1;
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        operation_8c220b5c();
        g_8c4d81cc = 0;
        g_8c4d81c0 = 0;
        destroy_object_8c106598((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
