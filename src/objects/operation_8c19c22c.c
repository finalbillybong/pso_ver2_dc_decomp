typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_388 Arg0_388;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x36c];
    Arg0_388 *f388;
    Arg0_38c *f38c;
    Arg0_390 *f390;
    Arg0_394 *f394;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c19c22c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2729ec;
        if (o->f388 != 0) {
            request_resource_release((void *)(o->f388));
            o->f388 = (Arg0_388 *)0;
        }
        if (o->f38c != 0) {
            request_resource_release((void *)(o->f38c));
            o->f38c = (Arg0_38c *)0;
        }
        if (o->f390 != 0) {
            request_resource_release((void *)(o->f390));
            o->f390 = (Arg0_390 *)0;
        }
        if (o->f394 != 0) {
            request_resource_release((void *)(o->f394));
            o->f394 = (Arg0_394 *)0;
        }
        destroy_object_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
