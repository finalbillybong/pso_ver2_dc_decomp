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
    short f20;
    short f22;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c23d89c(Object *o, int a1, int a2, int a3, int a4, unsigned short a5)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27aaa8;
    o->tag = (int)(*(int *)0x8c33a638);
    o->size = 0x2c;
    o->f04 |= 0x10;
    o->f20 = a5;
    o->f22 = a2;
    o->f24 = a3;
    o->f28 = a4;
    return o;
}
