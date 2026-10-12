typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    char f20;
    char unknown21[0x1];
    short f22;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c199688(int, Object *, int);
extern void call_8c198294(int, Object *);
extern void call_8c01c250(int);
extern void call_8c226c28(int, Object *);
extern void call_8c1003d0(void *);
Object *operation_8c0ea088(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, *(S_g8c44be84 **)0x8c44be84);
    o->dispatch = (void *)0x8c267f94;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xac);
    if (t1 != 0) {
        call_8c199688(t1, o, 3);
    }
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
    if (t2 != 0) {
        call_8c198294(t2, o);
    }
    call_8c01c250(2);
    o->f20 = 0;
    o->f22 = 0;
    t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x38);
    if (t3 != 0) {
        call_8c226c28(t3, o);
    }
    o->f24 = t3;
    o->f28 = 0;
    call_8c1003d0((void *)0x8c3088b0);
    return o;
}
