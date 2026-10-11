typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x34];
    int f70;
    int f74;
};
struct Arg0_38 {
    int f00;
};
extern void initialize_hierarchy_node(Object *, int);
extern void call_8c13f8e0(Object *);
Object *operation_8c13f874(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c26dc08;
    o->tag = *(int *)0x8c31468c;
    o->size = 0x1d8;
    o->f34 = a2;
    o->f38 = (Arg0_38 *)a3;
    o->f38->f00 = 0;
    o->f70 = 0;
    o->f74 = a4;
    call_8c13f8e0(o);
    return o;
}
