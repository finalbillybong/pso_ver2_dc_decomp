typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c176db4(Object *o, int a1, int a2)
{
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be98 **)0x8c44be98));
    o->dispatch = (void *)0x8c270918;
    o->f20 = a1;
    o->f24 = a2;
    return o;
}
