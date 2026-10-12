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
    char f21;
    char unknown22[0x6];
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c2270ac(Object *);
extern void call_8c2273f8(Object *);
Object *operation_8c226c28(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278b84;
    o->tag = *(int *)0x8c337728;
    o->size = 0x38;
    t1 = call_8c2270ac(o);
    o->f28 = t1;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    call_8c2273f8(o);
    o->f21 = 0;
    o->f20 = 0;
    return o;
}
