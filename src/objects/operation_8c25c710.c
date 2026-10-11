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
    int f20;
};
extern void initialize_hierarchy_node(Object *, int);
Object *operation_8c25c710(Object *o, int a1)
{
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c281bfc;
    o->tag = *(int *)0x8c340448;
    o->size = 0x24;
    o->f04 |= 0x10;
    o->f20 = 0;
    return o;
}
