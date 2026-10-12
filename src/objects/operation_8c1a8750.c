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
    char f20;
    char unknown21[0x3];
    int f24;
    int f28;
    int f2c;
    int f30;
    short f34;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c1a8be8(Object *);
Object *operation_8c1a8750(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274620;
    o->tag = *(int *)0x8c323fe8;
    o->size = 0x3c;
    t1 = call_8c1a8be8(o);
    o->f24 = t1;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = -1;
    o->f34 = 0x13;
    o->f20 = 0;
    return o;
}
