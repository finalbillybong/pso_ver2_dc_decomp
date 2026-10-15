typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_88 S_g8c467180_88;
typedef struct S_g8c467180_88_0 S_g8c467180_88_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    Arg0_28 *f28;
    int f2c;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x88];
    S_g8c467180_88 *f88;
};
struct S_g8c467180_88 {
    S_g8c467180_88_0 *f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern void call_8c199688(int, Object *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
Object *operation_8c2602c0(Object *o)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c281e34;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t1 != 0) {
        call_8c198294(t1, o);
    }
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xac);
    if (t2 != 0) {
        call_8c199688(t2, o, 1);
    }
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&*(Block8 *)0x8c3407b8;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&*(Block8 *)0x8c3407c0;
    t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f28 = (Arg0_28 *)t3;
    operation_8c119764((int)(o->f28), (int)((*(S_g8c467180 **)0x8c467180)->f88->f00), 1);
    return o;
}
