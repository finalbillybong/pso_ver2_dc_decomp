typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
extern void call_8c1848e0(int);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_fall(int, void *, void *);
Object *operation_8c1e6300(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c277f0c;
    o->tag = (int)(*(int *)0x8c32c038);
    o->size = 0x24;
    o->f20 = 0;
    *(char *)0x8c4e3104 = 0;
    call_8c1848e0(1);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t1 != 0) {
        initialize_color_fall(t1, (void *)(*(S_g8c44be84 **)0x8c44be84), (void *)((void *)0x8c1e64cc));
    }
    return o;
}
