typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c25f8a0(Object *o)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be9c **)0x8c44be9c));
    o->dispatch = (void *)0x8c281dc4;
    o->tag = (int)(*(int *)0x8c3406c0);
    o->size = 0x20;
    o->f04 |= 0x10;
    return o;
}
