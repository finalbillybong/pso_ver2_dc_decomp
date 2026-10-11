typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
};
extern void initialize_hierarchy_node(Object *, void *);
extern void clear_global_render_resources(void);
Object *operation_8c25f974(Object *o)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, *(S_g8c44be88 **)0x8c44be88);
    o->dispatch = (void *)0x8c281de0;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    o->f28 = 0;
    o->f30 = 0;
    clear_global_render_resources();
    return o;
}
