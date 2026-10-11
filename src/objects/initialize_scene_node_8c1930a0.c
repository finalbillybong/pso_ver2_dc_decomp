typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void initialize_hierarchy_node(Object *, int);
Object *initialize_scene_node_8c1930a0(Object *o, int a1)
{
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c27282c;
    o->tag = *(int *)0x8c31a32c;
    o->size = 0x20;
    o->f04 |= 0x10;
    return o;
}
