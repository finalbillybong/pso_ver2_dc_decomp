typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1ab01c(Object *o, int a1, int a2, int a3)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274790;
    o->f24 = 0;
    o->f28 = 0;
    o->tag = (int)(*(int *)0x8c324f18);
    o->size = 0x2c;
    o->f20 = a3 + -1;
    if (1 > o->f20) {
        o->f20 = 1;
    }
    o->f24 = a1;
    o->f28 = a2;
    o->f04 |= 0x10;
    return o;
}
