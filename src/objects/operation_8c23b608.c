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
    char unknown20[0x1a0];
    int f1c0;
    char unknown1c4[0x38];
    int f1fc;
    char unknown200[0x18];
    int f218;
    char unknown21c[0x18];
    int f234;
    char unknown238[0x4];
    int f23c;
    int f240;
};
extern void call_8c075398(void);
Object *operation_8c23b608(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a28c;
    o->tag = (int)(*(int *)0x8c33a4f0);
    o->size = 0x244;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x23;
    o->f218 = 0xc;
    o->f234 = 0;
    o->f23c = 0;
    o->f240 = -1;
    return o;
}
