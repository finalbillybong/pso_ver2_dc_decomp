typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block52 {
    int words[13];
} Block52;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x100];
    Block52 f12c;
};
struct Arg2 {
    Block52 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c2592e0(Object *);
Object *operation_8c259184(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281ad8;
    o->tag = (int)(*(int *)0x8c340260);
    o->size = 0x160;
    o->f20 = 0;
    o->f12c = a2->f00;
    o->f28 = 0x3c;
    o->f24 = 0;
    call_8c2592e0(o);
    return o;
}
