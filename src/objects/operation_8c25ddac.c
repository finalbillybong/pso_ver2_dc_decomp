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
Object *operation_8c25ddac(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c88;
    o->tag = (int)(*(int *)0x8c34054c);
    o->size = 0x20;
    *(Object **)0x8c513440 = o;
    return o;
}
