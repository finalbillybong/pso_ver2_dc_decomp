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
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
Object *operation_8c1bee70(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c275620;
    o->tag = (int)(*(int *)0x8c328424);
    o->size = 0x20;
    if (*(int *)0x8c4e2ba0 == 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
        if (t1 != 0) {
            initialize_hierarchy_node((void *)t1, (void *)0);
        }
        *(int *)0x8c4e2ba0 = (int)(t1);
    }
    if (*(int *)0x8c4e2ba4 == 0) {
        t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
        if (t2 != 0) {
            initialize_hierarchy_node((void *)t2, (void *)0);
        }
        *(int *)0x8c4e2ba4 = (int)(t2);
    }
    return o;
}
