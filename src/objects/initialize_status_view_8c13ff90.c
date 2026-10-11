typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Block32 f3c;
};
struct Arg2 {
    Block32 f00;
};
extern void initialize_hierarchy_node(Object *, int);
extern void call_8c13ffec(Object *);
Object *initialize_status_view_8c13ff90(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c26dbec;
    o->tag = *(int *)0x8c3146d8;
    o->size = 0x94;
    o->f3c = a2->f00;
    call_8c13ffec(o);
    return o;
}
