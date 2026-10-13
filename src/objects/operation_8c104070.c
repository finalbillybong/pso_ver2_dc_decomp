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
    int f20;
    Vector3 f24;
    float f30;
    int f34;
    int f38;
    float f3c;
    float f40;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c104148(Object *);
extern void call_8c1041b4(Object *);
Object *operation_8c104070(Object *o, int a1, Arg2 *a2, float f0)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c269710;
    o->tag = (int)(*(int *)0x8c30b558);
    o->size = 0x104;
    o->f24 = a2->f00;
    o->f20 = 0;
    o->f3c = 10.0f;
    o->f40 = f0;
    o->f38 = 0;
    o->f30 = 1.0f;
    o->f34 = 0;
    call_8c104148(o);
    call_8c1041b4(o);
    return o;
}
