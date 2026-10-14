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
extern void call_8c075398(void);
Object *operation_8c23b2a4(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279f94;
    o->tag = (int)(*(int *)0x8c33a498);
    o->size = 0x234;
    return o;
}
