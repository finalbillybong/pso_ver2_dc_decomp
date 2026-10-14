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
    char unknown20[0x118];
    unsigned char f138;
    char unknown139[0xe3];
    int f21c;
};
extern void call_8c075398(void);
Object *operation_8c1781c4(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c270cec;
    o->tag = (int)(*(int *)0x8c319550);
    o->size = 0x234;
    if ((o->f138) != 0) {
        o->f21c = 0xe8;
    }
    return o;
}
