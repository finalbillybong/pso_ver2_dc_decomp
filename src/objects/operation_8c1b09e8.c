typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    Vector3 f28;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1b09e8(Object *o, int a1, Arg2 *a2)
{
    char *v1;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274be4;
    o->tag = (int)(*(int *)0x8c326114);
    o->size = 0x34;
    *(Vector3 *)&o->f28 = *(Vector3 *)&a2->f00;
    o->f20 = 0;
    v1 = (char *)*(int *)0x8c4e23a0;
    if (++*(int *)0x8c4e23a0 >= 0xa) {
        *(int *)0x8c4e23a0 = 0;
    }
    o->f24 = (int)(v1);
    return o;
}
