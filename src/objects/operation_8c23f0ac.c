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
    char unknown200[0x24];
    short f224;
    char unknown226[0x2];
    void *f228;
};
extern void call_8c075398(void);
Object *operation_8c23f0ac(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27baf8;
    o->tag = (int)(*(int *)0x8c33a808);
    o->size = 0x24c;
    o->f224 = 1;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
