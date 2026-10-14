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
    char unknown20[0x1dc];
    int f1fc;
    char unknown200[0x18];
    int f218;
    char unknown21c[0x18];
    int f234;
    int f238;
};
extern void call_8c075398(void);
Object *operation_8c23a80c(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2799dc;
    o->tag = (int)(*(int *)0x8c33a408);
    o->size = 0x23c;
    o->f1fc |= 0x22;
    o->f234 = 0;
    o->f238 = 0;
    o->f218 = 0xa;
    return o;
}
