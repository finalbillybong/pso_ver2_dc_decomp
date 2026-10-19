typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2f80;
extern int g_8c4e2f84;
extern int g_8c4e2f88;
extern int g_8c4e2f8c;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1dbba4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c277318;
        g_8c4e2f80 = 0;
        g_8c4e2f84 = 0;
        g_8c4e2f88 = 0;
        g_8c4e2f8c = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
