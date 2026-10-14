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
    int f20;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c25fff4(Object *o, int a1)
{
    int v1;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281e18;
    o->tag = (int)(*(int *)0x8c340788);
    o->size = 0x6c;
    o->f24 = 0;
    o->f28 = 0x12c;
    v1 = (int)0;
    while (4 > v1) {
        *(char *)((char *)((char *)o + 0x2c) + (v1 << 4)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f20 = 0;
    return o;
}
