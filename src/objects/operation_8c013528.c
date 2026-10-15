typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c013528(Object *o, int a1, Arg2 *a2)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c261160;
    o->tag = (int)(*(int *)0x8c2e2e28);
    o->size = 0x20;
    *(Vector3 *)&*(Vector3 *)0x8c418020 = *(Vector3 *)&a2->f00;
    return o;
}
