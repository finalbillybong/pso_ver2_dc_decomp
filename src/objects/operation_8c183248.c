typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int hierarchy_is_active(void *);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c183248(Object *o, int a1)
{
    char *v19;
    char *v20;
    S_vv7 *v7;
    int t1;
    int t2;
    if (o != 0) {
        o->dispatch = (void *)0x8c271ffc;
        v19 = (char *)o->f24;
        if (v19 != 0) {
            t1 = hierarchy_is_active((void *)v19);
            if (t1 != 0) {
                request_resource_release((void *)(o->f24));
                o->f24 = (Arg0_24 *)0;
            }
        }
        v20 = (char *)o->f20;
        if (v20 != 0) {
            t2 = hierarchy_is_active((void *)v20);
            if (t2 != 0) {
                v7 = (S_vv7 *)o->f20;
                v7->f04 |= 1;
                o->f20 = (Arg0_20 *)0;
            }
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
