typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    short f20;
    char unknown22[0xe];
    int f30;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c253698(Object *o, int a1, int a2)
{
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c28027c;
    o->f30 = 1;
    o->f20 = a1;
    return o;
}
