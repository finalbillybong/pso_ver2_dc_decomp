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
    short f24;
    char unknown26[0x2];
    int f28;
    int f2c;
    int f30;
    char unknown34[0x18];
    int f4c;
};
extern void initialize_hierarchy_node(Object *, int);
Object *operation_8c1c72fc(Object *o, int a1, int a2, int a3)
{
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c2767fc;
    o->tag = *(int *)0x8c328e88;
    o->size = 0x50;
    o->f28 = a3;
    o->f24 = a2;
    o->f2c = 0;
    o->f30 = 0;
    o->f4c = 0x24;
    o->f20 = 0;
    o->f04 |= 0x10;
    return o;
}
