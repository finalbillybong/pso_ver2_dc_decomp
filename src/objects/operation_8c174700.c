typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x44];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c174700(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2701e8;
        if (o->f68 != 0) {
            request_resource_release((void *)(o->f68));
            o->f68 = (Arg0_68 *)0;
        }
        if (o->f60 != 0) {
            request_resource_release((void *)(o->f60));
            o->f60 = (Arg0_60 *)0;
        }
        if (o->f64 != 0) {
            request_resource_release((void *)(o->f64));
            o->f64 = (Arg0_64 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
