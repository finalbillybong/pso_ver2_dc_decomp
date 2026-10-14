typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_24 {
    char unknown0[0x22];
    short f22;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c18cbe4(S_g8c4dbde0 *);
extern int call_8c22575c(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1dca80(void *, int, int);
Object *operation_8c1d9ed4(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2771a8;
    o->tag = (int)(*(int *)0x8c32aac0);
    o->size = 0x68;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 0x40;
    }
    call_8c18cbe4((S_g8c4dbde0 *)(*(S_g8c4dbde0 **)0x8c4dbde0));
    (*(S_g8c4dbde0 **)0x8c4dbde0)->f20 |= 8;
    t1 = call_8c22575c((void *)((void *)0x8c2894f8), (void *)((void *)0x8c289500));
    o->f20 = (int)(t1);
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x3c);
    if (t2 != 0) {
        operation_8c1dca80((void *)t2, (int)o, (int)(((char *)o + 0x28)));
    }
    o->f24 = (Arg0_24 *)t2;
    o->f24->f22 |= 0x200;
    return o;
}
