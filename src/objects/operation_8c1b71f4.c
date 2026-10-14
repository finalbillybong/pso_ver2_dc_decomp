typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    void *f20;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1b71f4(Object *o, int a1, int a2, int a3)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27507c;
    o->tag = (int)(*(int *)0x8c327528);
    o->size = 0x2c;
    if (a3 == 0) {
        o->f20 = (void *)-0x1554;
        o->f20 = &*(int *)((char *)((char *)o->f20 + 0x0) + (a2 << 12));
        o->f24 = 0x71c;
    } else {
        o->f20 = (void *)0xe38;
        o->f20 = &*(int *)((char *)((char *)o->f20 + 0x0) + (a2 << 12));
        o->f24 = -0x71c;
    }
    o->f28 = 0;
    return o;
}
