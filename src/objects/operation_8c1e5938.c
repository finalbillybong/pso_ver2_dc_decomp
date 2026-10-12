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
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern void call_8c199688(int, Object *, int);
extern int call_8c1e5b78(Object *);
Object *operation_8c1e5938(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, *(S_g8c44be88 **)0x8c44be88);
    o->dispatch = (void *)0x8c277ec0;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    o->f28 = 0;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
    if (t1 != 0) {
        call_8c198294(t1, o);
    }
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xac);
    if (t2 != 0) {
        call_8c199688(t2, o, 1);
    }
    t3 = call_8c1e5b78(o);
    o->f28 = t3;
    return o;
}
