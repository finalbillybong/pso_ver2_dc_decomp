typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xcc];
    int fec;
    char unknownf0[0x50];
    short f140;
    short f142;
    char unknown144[0x78];
    void *f1bc;
    int f1c0;
    int f1c4;
    int f1c8;
    int f1cc;
    int f1d0;
    int f1d4;
};
extern void call_8c073288(Object *);
extern void call_8c20a108(Object *);
extern void *allocate_block(void *, int);
extern void initialize_hierarchy_node(void *, Object *);
Object *create_object_8c20989c(Object *o)
{
    Object **home = &o;
    void *t1;
    (void)home;
    call_8c073288(o);
    o->dispatch = (void *)0x8c278154;
    o->f1c0 = 0;
    o->tag = *(int *)0x8c335e28;
    o->size = 0x1d8;
    o->f140 = 0;
    o->f142 = 0;
    call_8c20a108(o);
    o->f1c4 = -1;
    o->fec |= 4;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x20);
    if (t1 != 0) {
        initialize_hierarchy_node(t1, o);
    }
    o->f1bc = t1;
    o->f1c8 = 0;
    o->f1d4 = 0;
    o->f1cc = 0;
    o->f1d0 = 0;
    return o;
}
