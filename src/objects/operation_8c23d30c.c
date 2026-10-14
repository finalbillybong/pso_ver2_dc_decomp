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
    char unknown200[0x1c];
    int f21c;
    char unknown220[0x4];
    short f224;
};
extern void call_8c075398(Object *);
extern int call_8c087b0c(int);
Object *operation_8c23d30c(Object *o)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c075398(o);
    o->dispatch = (void *)0x8c27aac4;
    o->tag = (int)(*(int *)0x8c33a618);
    o->size = 0x234;
    o->f224 = 2;
    o->f1fc |= 0x22;
    t1 = call_8c087b0c(0x1fc);
    if (((t1 & 1)) != 0) {
        o->f21c = -1;
    } else {
        o->f21c = 0xe4;
    }
    return o;
}
