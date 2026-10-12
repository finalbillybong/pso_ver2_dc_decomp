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
    char f20;
    char f21;
    char unknown22[0x2];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    char unknown50[0x30];
    int f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern void process_entries_8c2534e0(int);
Object *operation_8c1d24bc(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276e0c;
    o->tag = *(int *)0x8c3299b8;
    o->size = 0x84;
    o->f24 = 0;
    o->f28 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f44 = 0;
    o->f48 = 0;
    o->f40 = 0;
    o->f80 = 0;
    o->f21 = 0;
    o->f4c = -1;
    process_entries_8c2534e0((int)(((char *)o + 0x58)));
    o->f20 = 0;
    return o;
}
