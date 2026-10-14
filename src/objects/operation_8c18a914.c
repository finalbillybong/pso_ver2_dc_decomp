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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char unknown1e2[0x52];
    int f234;
};
extern void call_8c075398(void);
Object *operation_8c18a914(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c272244;
    o->tag = (int)(*(int *)0x8c319ee8);
    o->size = 0x238;
    o->f1e0 = 5;
    o->f1e1 = 4;
    o->f234 = 0;
    return o;
}
