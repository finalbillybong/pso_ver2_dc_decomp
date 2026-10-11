typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block132 {
    int words[33];
} Block132;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg1 Arg1;
typedef struct Block_p0_20 {
    char unknown0[0x4];
    Arg0_24 *f04;
    char unknown8[0x18];
    int f20;
    char unknown24[0x60];
} Block_p0_20;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Block_p0_20 f20;
    int fa4;
};
struct Arg1 {
    char unknown0[0x28];
    Block_p0_20 f28;
};
extern void initialize_hierarchy_node(Object *, int);
Object *operation_8c173b48(Object *o, Arg1 *a1, int a2)
{
    initialize_hierarchy_node(o, 0);
    o->dispatch = (void *)0x8c27023c;
    o->tag = *(int *)0x8c318de4;
    o->size = 0xa8;
    o->f20 = a1->f28;
    o->f20.f20 = *(int *)((char *)((char *)o->f20.f04 + 0x0) + (a2 << 2));
    o->fa4 = 0;
    if (*(int *)0x8c4db648 != 0) {
        for (;;) {
        }
    }
    *(Object **)0x8c4db648 = o;
    if (o->f20.f20 == -1) {
        for (;;) {
        }
    }
    return o;
}
