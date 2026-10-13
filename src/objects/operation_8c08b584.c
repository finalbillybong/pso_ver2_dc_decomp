typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_9c Arg0_9c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x7c];
    Arg0_9c *f9c;
    int fa0;
};
struct Arg0_9c {
    char unknown0[0x64];
    int f64;
};
extern void call_8c08b2d8(void);
Object *operation_8c08b584(Object *o, int a1)
{
    call_8c08b2d8();
    o->dispatch = (void *)0x8c2652a4;
    o->tag = (int)(*(int *)0x8c300234);
    o->size = 0xa4;
    o->f9c = (Arg0_9c *)a1;
    o->fa0 = (int)(o->f9c->f64);
    return o;
}
