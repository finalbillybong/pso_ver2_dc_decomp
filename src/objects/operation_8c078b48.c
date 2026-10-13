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
    float f20;
    float f24;
    float f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c078b48(Object *o, int a1)
{
    int v1;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c263e1c;
    o->tag = (int)(*(int *)0x8c2fd9a8);
    o->size = 0x3c;
    o->f20 = 0.0f;
    o->f24 = 0.0f;
    o->f28 = 0.0f;
    v1 = (int)0;
    while (4 > v1) {
        *(int *)((char *)((char *)o + 0x2c) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
