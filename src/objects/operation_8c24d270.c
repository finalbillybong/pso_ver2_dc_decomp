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
    short f20;
    short f22;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c22353c(short);
Object *operation_8c24d270(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27dd38;
    o->tag = *(int *)0x8c33edcc;
    o->size = 0x24;
    o->f20 = a2->f20;
    call_8c22353c(o->f20);
    o->f22 = 3;
    return o;
}
