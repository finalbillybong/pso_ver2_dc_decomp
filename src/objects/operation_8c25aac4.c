typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
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
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int call_8c25acac(Object *);
Object *operation_8c25aac4(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, *(S_g8c44be88 **)0x8c44be88);
    o->dispatch = (void *)0x8c281b68;
    o->tag = *(int *)0x8c340390;
    o->size = 0x234;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    o->f28 = 0;
    o->f30 = 0;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
    if (t1 != 0) {
        call_8c198294(t1, o);
    }
    t2 = call_8c25acac(o);
    o->f28 = t2;
    return o;
}
