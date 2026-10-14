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
    char unknown200[0x20];
    float f220;
    char unknown224[0x8];
    void *f22c;
};
extern void call_8c075398(void);
Object *operation_8c23fcb0(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27c0d0;
    o->tag = (int)(*(int *)0x8c33a8c0);
    o->size = 0x24c;
    o->f1fc |= 0x203;
    o->f22c = (void *)0x8c1ab8f8;
    o->f220 = 11.0f;
    return o;
}
