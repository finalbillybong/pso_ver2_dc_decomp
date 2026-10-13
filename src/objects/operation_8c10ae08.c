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
    int f20;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c10ae08(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c269a54;
    o->tag = (int)(*(int *)0x8c30bc6c);
    o->size = 0x24;
    o->f20 = 0;
    *(int *)0x8c4d7c84 = 1;
    return o;
}
