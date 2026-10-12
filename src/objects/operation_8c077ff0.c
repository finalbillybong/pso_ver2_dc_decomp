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
extern void call_8c075398(int);
extern void call_8c078034(Object *);
Object *operation_8c077ff0(Object *o)
{
    Object **home = &o;
    (void)home;
    call_8c075398((int)o);
    o->dispatch = (void *)0x8c263848;
    o->tag = *(int *)0x8c2fd7e0;
    o->size = 0x234;
    call_8c078034(o);
    return o;
}
