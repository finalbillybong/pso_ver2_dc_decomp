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
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    char unknown40[0x8];
    Arg0_48 *f48;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db128;
extern void operation_8c220b5c(void);
extern void request_resource_release(void *);
extern void operation_8c15c7a4(void *);
extern void call_8c011ec0(void *);
extern void destroy_object_8c106598(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c15bb20(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26eea4;
        if (o->f48 != 0) {
            v1 = (S_vv1 *)o->f48;
            v1->f04 |= 1;
            o->f48 = (Arg0_48 *)0;
        }
        operation_8c220b5c();
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        operation_8c15c7a4((void *)o);
        g_8c4db128 = 0;
        if (o->f2c != 0) {
            call_8c011ec0((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        destroy_object_8c106598((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
