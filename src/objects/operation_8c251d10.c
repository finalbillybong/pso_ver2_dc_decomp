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
};
extern void call_8c241158(int);
extern void call_8c251d54(Object *);
Object *operation_8c251d10(Object *o)
{
    Object **home = &o;
    (void)home;
    call_8c241158((int)o);
    o->dispatch = (void *)0x8c27f590;
    o->tag = *(int *)0x8c33f9a8;
    o->size = 0x234;
    call_8c251d54(o);
    return o;
}
