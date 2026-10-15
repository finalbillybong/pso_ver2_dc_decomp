typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
};
extern void initialize_hierarchy_node(void *, void *);
extern void operation_8c257198(int, int);
Object *operation_8c256bb4(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281888;
    o->tag = (int)(*(int *)0x8c33ffb4);
    o->size = 0x24;
    v1 = (int)0;
    while (4 > v1) {
        operation_8c257198(a1, (int)(&*(int *)((char *)0x8c33ff8c + (v1 << 2))));
        v1 = (int)(v1 + 1);
    }
    *(Block16 *)&*(Block16 *)0x8c513340 = *(Block16 *)&*(Block16 *)0x8c33ff9c;
    o->f20 = 0x1e;
    return o;
}
