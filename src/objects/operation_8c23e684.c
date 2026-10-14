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
};
extern void call_8c075398(void);
Object *operation_8c23e684(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b44c;
    o->tag = (int)(*(int *)0x8c33a758);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
