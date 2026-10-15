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
Object *operation_8c25c454(Object *o, int a1)
{
    int v1;
    int v2;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281be0;
    o->tag = (int)(*(int *)0x8c340430);
    o->size = 0x3c;
    o->f24 = -1;
    o->f28 = 0;
    v1 = (int)((char *)o + 0x2c);
    v2 = (int)0;
    while (4 > v2) {
        *(float *)((char *)((char *)v1 + 0x0) + (v2 << 2)) = 1.0f;
        v2 = (int)(v2 + 1);
    }
    o->f20 = 0;
    return o;
}
