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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
    char unknown1e4[0x18];
    int f1fc;
    char unknown200[0x34];
    int f234;
    int f238;
};
extern void call_8c075398(void);
Object *operation_8c24f0dc(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27e4f0;
    o->tag = (int)(*(int *)0x8c33f6e0);
    o->size = 0x23c;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 4;
    o->f1fc |= 0x201;
    o->f234 = 0;
    o->f238 = 0;
    return o;
}
