typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
    float f2c;
    Vector3 f30;
    Block20 f3c;
};
struct Arg2 {
    Block20 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct Frame {
    float f04;
    float f08;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c38ad50(int, void *, void *);
Object *operation_8c245d6c(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Frame frame;
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c27cee4;
    o->tag = (int)(*(int *)0x8c33aea8);
    o->size = 0x50;
    *(Block20 *)&o->f3c = *(Block20 *)&a2->f00;
    *(Vector3 *)&o->f30 = *(Vector3 *)&a1->f00;
    call_8c38ad50(0, (void *)(&o->f30), (void *)(&(&frame)->f04));
    o->f28 = (&frame)->f04;
    o->f2c = (&frame)->f08;
    o->f20 = o->f28;
    o->f24 = o->f2c;
    return o;
}
