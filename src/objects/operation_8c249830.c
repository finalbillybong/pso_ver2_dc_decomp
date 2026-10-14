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
    char unknown24[0x80];
    int fa4;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c249830(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27d62c;
    o->tag = (int)(*(int *)0x8c33b1c8);
    o->size = 0xa8;
    o->f20 = 0;
    o->fa4 = 0;
    return o;
}
