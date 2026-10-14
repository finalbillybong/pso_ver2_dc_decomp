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
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_fall(int, Object *, void *);
Object *operation_8c25ce38(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c50;
    o->tag = (int)(*(int *)0x8c3404d4);
    o->size = 0x38;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0x96;
    o->f2c = 0xf3c;
    o->f30 = 0x96;
    o->f34 = 0;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t1 != 0) {
        initialize_color_fall(t1, o, (void *)((void *)0x8c25cfe8));
    }
    return o;
}
