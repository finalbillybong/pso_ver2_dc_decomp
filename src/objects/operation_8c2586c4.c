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
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c258794(Object *);
Object *operation_8c2586c4(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281a20;
    o->tag = (int)(*(int *)0x8c34007c);
    o->size = 0x28;
    o->f24 = a3;
    o->f20 = a2;
    if (!(o->f24 > 0)) {
        call_8c258794(o);
        o->f04 |= 1;
    }
    return o;
}
