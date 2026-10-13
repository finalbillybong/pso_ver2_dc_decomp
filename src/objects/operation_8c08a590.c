typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x30c];
    int f32c;
    int f330;
    int f334;
    int f338;
    int f33c;
    int f340;
    int f344;
    int f348;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c08ab24(Object *);
Object *operation_8c08a590(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26526c;
    o->tag = (int)(*(int *)0x8c3001d8);
    o->size = 0x34c;
    o->f33c = a2;
    o->f340 = a3;
    o->f334 = 0;
    o->f338 = 0;
    o->f348 = a4;
    call_8c08ab24(o);
    o->f32c = 0;
    o->f330 = -0x1000000;
    o->f344 = 0;
    return o;
}
