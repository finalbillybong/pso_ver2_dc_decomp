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
    char unknown22[0x2];
    int f24;
    int f28;
    int f2c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c2236d0(Object *o, int a1, int a2, int a3)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278aa8;
    o->tag = (int)(*(int *)0x8c3374d0);
    o->size = 0x30;
    o->f20 = a2;
    o->f2c = 0;
    o->f24 = a3;
    o->f28 = 0;
    o->f04 |= 0x10;
    return o;
}
