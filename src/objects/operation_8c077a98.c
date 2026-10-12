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
    char unknown20[0x204];
    short f224;
    char unknown226[0x2];
    void *f228;
};
extern void call_8c075398(void);
Object *operation_8c077a98(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263384;
    o->tag = *(int *)0x8c2fd768;
    o->size = 0x234;
    o->f224 = 2;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
