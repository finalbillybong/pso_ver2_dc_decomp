typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x1084];
    int f10a0;
    int f10a4;
    int f10a8;
};
extern void initialize_hierarchy_node(Object *, int);
extern void call_8c12b880(void *, int, int);
Object *initialize_buffer_node_8c032bd8(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c261510;
    o->f10a4 = a2;
    o->f10a8 = a3;
    call_8c12b880(((char *)o + 0x20), 0, 0x1000);
    o->f10a0 = 0;
    return o;
}
