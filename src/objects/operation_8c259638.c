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
Object *operation_8c259638(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281af4;
    o->tag = (int)(*(int *)0x8c340328);
    o->size = 0x24;
    *(Object **)0x8c5133a0 = o;
    o->f20 = 0xa;
    return o;
}
