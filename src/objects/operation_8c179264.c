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
    float f20;
    unsigned char f24;
    unsigned char f25;
    unsigned char f26;
    char unknown27[0x1];
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c179264(Object *o, int a1, int a2)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2667e4;
    o->dispatch = (void *)0x8c270f8c;
    o->f28 = a2;
    o->f20 = 255.0f;
    o->f26 = 0xff;
    o->f25 = 0xff;
    o->f24 = 0xff;
    *(int *)0x8c4db924 = 0;
    return o;
}
