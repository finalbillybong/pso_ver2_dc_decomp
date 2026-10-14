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
    short f224;
    char unknown226[0x6];
    void *f22c;
};
extern void call_8c075398(void);
Object *operation_8c179be8(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2712a0;
    o->tag = (int)(*(int *)0x8c319690);
    o->size = 0x234;
    o->f224 = 1;
    o->f22c = (void *)0x8c1ab8f8;
    o->f220 = 11.0f;
    return o;
}
