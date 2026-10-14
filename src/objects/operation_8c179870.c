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
    char unknown1e4[0x50];
    int f234;
    short f238;
    short f23a;
};
extern void call_8c075398(void);
Object *operation_8c179870(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2710b8;
    o->tag = (int)(*(int *)0x8c319660);
    o->size = 0x23c;
    o->f23a = 3;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 6;
    o->f234 = 0;
    o->f238 = -1;
    return o;
}
