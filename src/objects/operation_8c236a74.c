typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_4c S_g8c46fe20_4c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct S_g8c46fe20 {
    char unknown0[0x4c];
    S_g8c46fe20_4c *f4c;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c236a74(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c279084;
        if (g_8c46fe20 != 0 && g_8c46fe20->f4c != 0) {
            request_resource_release((void *)(g_8c46fe20->f4c));
            g_8c46fe20->f4c = (S_g8c46fe20_4c *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
