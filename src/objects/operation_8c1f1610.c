typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c01c250(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int create_pair_widget_8c1f1880(Object *);
extern void call_8c05fbf8(int, int, int, int);
Object *operation_8c1f1610(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c277fe4;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    o->f30 = 0;
    call_8c01c250(2);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t1 != 0) {
        call_8c198294(t1, o);
    }
    t2 = create_pair_widget_8c1f1880(o);
    o->f28 = (int)(t2);
    call_8c05fbf8(0x50006, 0, 0, 0);
    return o;
}
