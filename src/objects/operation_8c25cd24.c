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
extern void clear_global_render_resources(void);
extern void select_state2_8c01c1b4(void);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c25cd24(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c281c6c;
        clear_global_render_resources();
        select_state2_8c01c1b4();
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
