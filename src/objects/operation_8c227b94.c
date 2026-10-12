typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c227d60(Object *, float);
extern void call_8c227cb4(Object *, int);
Object *operation_8c227b94(Object *o, int a1, int a2, float f0)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278ba0;
    o->tag = *(int *)0x8c337d9c;
    o->size = 0x2c;
    o->f20 = a2;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        initialize_hierarchy_node((void *)t1, (void *)0);
    }
    o->f24 = t1;
    call_8c227d60(o, f0);
    call_8c227cb4(o, -1);
    return o;
}
