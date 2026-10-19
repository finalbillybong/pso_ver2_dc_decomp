typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x14];
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c105654(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c269778;
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (Arg0_38 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
        }
        destroy_object_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
