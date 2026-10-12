typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x3];
    int f24;
    int f28;
    int f2c;
    Arg0_30 *f30;
    int f34;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c1d5b24(int);
extern int call_8c1d4d90(void *, void *);
Object *operation_8c1d4790(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276e28;
    o->tag = *(int *)0x8c3299e8;
    o->size = 0x38;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xb8);
    if (t1 != 0) {
        call_8c1d5b24(t1);
    }
    o->f2c = t1;
    t2 = call_8c1d4d90((void *)0x8c289420, (void *)0x8c289428);
    o->f30 = (Arg0_30 *)t2;
    o->f30->f80 = (o->f30->f80 & 0xffff) | 0x10;
    o->f34 = 0;
    o->f24 = -1;
    o->f28 = -1;
    o->f20 = 0;
    return o;
}
