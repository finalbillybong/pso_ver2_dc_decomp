typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_c8c0744dc_13c S_c8c0744dc_13c;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Arg0_24 *f24;
    int f28;
};
struct S_c8c0744dc {
    char unknown0[0x13c];
    S_c8c0744dc_13c *f13c;
};
struct Frame {
    Block20 f04;
    int f18;
    char unknown1c[0x8];
};
extern void initialize_hierarchy_node(void *, void *);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int operation_8c075894(void *, void *, int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c245d6c(int, void *, void *, Object *);
Object *operation_8c23ba2c(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    S_c8c0744dc *t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27a270;
    o->tag = (int)(*(int *)0x8c33a4f4);
    o->size = 0x2c;
    o->f20 = (Arg0_20 *)a2;
    o->f24 = (Arg0_24 *)a3;
    o->f28 = 0;
    t1 = find_record_8c0744dc((int)(o->f20));
    if (t1 != 0) {
        t2 = operation_8c075894((void *)t1, (void *)(t1->f13c), (int)(o->f24), (int)(&(&frame)->f18));
        if (t2 != 0) {
            *(Block20 *)&(&frame)->f04 = *(Block20 *)&*(Block20 *)0x8c33a4f8;
            t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x50);
            if (t3 != 0) {
                call_8c245d6c(t3, (void *)(&(&frame)->f18), (void *)(&(&frame)->f04), o);
            }
            o->f28 = (int)(t3);
        }
    }
    return o;
}
