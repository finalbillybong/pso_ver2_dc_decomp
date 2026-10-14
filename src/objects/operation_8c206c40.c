typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be8c S_g8c44be8c;
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
Object *operation_8c206c40(Object *o)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be8c **)0x8c44be8c));
    o->dispatch = (void *)0x8c278074;
    o->tag = (int)(*(int *)0x8c335d00);
    o->size = 0x24;
    o->f20 = 4;
    return o;
}
