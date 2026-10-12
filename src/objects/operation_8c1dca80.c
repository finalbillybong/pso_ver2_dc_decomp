typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x1];
    short f22;
    Arg0_24 *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c1e0f10(int);
extern void call_8c1e2110(void *, int, int);
extern void call_8c1dfd28(int, void *);
extern void call_8c1dccb4(Object *);
Object *operation_8c1dca80(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c277354;
    o->tag = *(int *)0x8c32af58;
    o->size = 0x3c;
    o->f20 = 0;
    o->f22 = 2;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xc0);
    if (t1 != 0) {
        call_8c1e0f10(t1);
    }
    o->f24 = (Arg0_24 *)t1;
    call_8c1e2110(o->f24, 0xc8, 2);
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x80);
    if (t2 != 0) {
        call_8c1dfd28(t2, o->f24);
    }
    o->f2c = t2;
    o->f28 = 0;
    o->f34 = 0;
    o->f30 = 0;
    o->f38 = a2;
    call_8c1dccb4(o);
    return o;
}
