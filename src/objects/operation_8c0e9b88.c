typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_714 Arg0_714;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    char unknown28[0x4];
    int f2c;
    int f30;
    char unknown34[0x6e0];
    Arg0_714 *f714;
};
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c163738(void);
extern int operation_8c01c434(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c225f04(int, Object *);
extern void call_8c22c570(int, Object *);
extern void call_8c22c8dc(void *, float);
Object *operation_8c0e9b88(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be94 **)0x8c44be94));
    o->dispatch = (void *)0x8c267f78;
    *(int *)0x8c4689e0 = (int)(*(int *)0x8c44be9c);
    operation_8c163738();
    *(int *)0x8c44be04 = 1;
    t1 = operation_8c01c434();
    switch (t1) {
    case 0:
        o->f2c = 0x1e;
        break;
    case 1:
        o->f2c = 0x19;
    }
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1994);
    if (t2 != 0) {
        call_8c225f04(t2, o);
    }
    o->f24 = 0;
    o->f20 = 0;
    o->f30 = 0;
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t3 != 0) {
        call_8c22c570(t3, o);
    }
    o->f714 = (Arg0_714 *)t3;
    if (o->f714 != 0) {
        call_8c22c8dc((void *)(o->f714), (float)o->f2c * 2.0f);
    }
    return o;
}
