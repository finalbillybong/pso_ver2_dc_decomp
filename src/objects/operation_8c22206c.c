typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22bc Arg0_22bc;
typedef struct Arg0_22c0 Arg0_22c0;
typedef struct Arg0_22c4 Arg0_22c4;
typedef struct Arg0_22cc Arg0_22cc;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x229c];
    Arg0_22b8 *f22b8;
    Arg0_22bc *f22bc;
    Arg0_22c0 *f22c0;
    Arg0_22c4 *f22c4;
    char unknown22c8[0x4];
    Arg0_22cc *f22cc;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c506070;
extern void request_resource_release(void *);
extern void call_8c011ec0(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c22206c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278928;
        if (o->f22c4 != 0) {
            request_resource_release((void *)(o->f22c4));
            o->f22c4 = (Arg0_22c4 *)0;
        }
        if (o->f22c0 != 0) {
            request_resource_release((void *)(o->f22c0));
            o->f22c0 = (Arg0_22c0 *)0;
        }
        if (o->f22bc != 0) {
            request_resource_release((void *)(o->f22bc));
            o->f22bc = (Arg0_22bc *)0;
        }
        if (o->f22b8 != 0) {
            request_resource_release((void *)(o->f22b8));
            o->f22b8 = (Arg0_22b8 *)0;
        }
        if (o->f22cc != 0) {
            call_8c011ec0((void *)(o->f22cc));
            o->f22cc = (Arg0_22cc *)0;
        }
        g_8c506070 = 0;
        destroy_object_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
