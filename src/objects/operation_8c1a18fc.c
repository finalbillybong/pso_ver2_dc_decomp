typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c1a1984(Object *);
Object *operation_8c1a18fc(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272f0c;
    o->tag = (int)(*(int *)0x8c31cf88);
    o->size = 0x820;
    call_8c1a1984(o);
    return o;
}
