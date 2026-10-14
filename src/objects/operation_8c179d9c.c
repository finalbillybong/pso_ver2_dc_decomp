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
    char unknown20[0x200];
    float f220;
    char unknown224[0x8];
    void *f22c;
    void *f230;
};
extern void call_8c075398(void);
Object *operation_8c179d9c(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271488;
    o->tag = (int)(*(int *)0x8c3196c0);
    o->size = 0x234;
    o->f220 = 5.0f;
    o->f230 = (void *)0x8c1c5a30;
    o->f22c = (void *)0x8c1ab92c;
    return o;
}
