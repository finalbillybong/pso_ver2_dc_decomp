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
    char unknown20[0x370];
    int f390;
    int f394;
    float f398;
    int f39c;
    int f3a0;
    int f3a4;
};
extern void call_8c012008(void);
Object *operation_8c059bc0(Object *o)
{
    call_8c012008();
    o->dispatch = (void *)0x8c2627b8;
    o->tag = (int)(*(int *)0x8c2f35d0);
    o->size = 0x3a8;
    o->f390 = 0;
    o->f394 = 0;
    o->f398 = 5.0f;
    o->f39c = 0;
    o->f3a0 = 0;
    o->f3a4 = 0;
    return o;
}
