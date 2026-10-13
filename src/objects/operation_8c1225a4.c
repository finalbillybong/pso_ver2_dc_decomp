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
Object *operation_8c1225a4(Object *o)
{
    initialize_hierarchy_node((void *)o, (void *)((void *)0x8c44bef4));
    o->dispatch = (void *)0x8c26b304;
    o->tag = (int)(*(int *)0x8c311cfc);
    o->size = 0x20;
    return o;
}
