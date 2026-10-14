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
extern void call_8c12b880(void *, int, int);
extern int operation_8c02b9e4(void);
extern void call_8c2507a4(Object *);
Object *operation_8c2506a8(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27e9b4;
    o->tag = (int)(*(int *)0x8c33f830);
    o->size = 0x84;
    o->f20 = 0;
    call_8c12b880((void *)(((char *)o + 0x24)), 0, 0x60);
    t1 = operation_8c02b9e4();
    *(int *)0x8c511120 = (int)(t1);
    call_8c2507a4(o);
    return o;
}
