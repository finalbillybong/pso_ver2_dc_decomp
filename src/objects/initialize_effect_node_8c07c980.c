typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void initialize_hierarchy_node(Object *, int);
extern void call_8c07c9c0(Object *, int, int, int);
Object *initialize_effect_node_8c07c980(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c2641e8;
    call_8c07c9c0(o, a2, a3, a4);
    return o;
}
