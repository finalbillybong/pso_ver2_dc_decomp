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
    char unknown200[0x20];
    float f220;
    char unknown224[0x10];
    int f234;
};
extern void call_8c075398(void);
Object *operation_8c239f88(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279518;
    o->tag = (int)(*(int *)0x8c33a390);
    o->size = 0x238;
    o->f1c0 |= 0x20;
    o->f220 = 7.0f;
    o->f1fc |= 2;
    o->f234 = 1;
    return o;
}
