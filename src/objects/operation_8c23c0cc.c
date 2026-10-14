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
    char unknown200[0x20];
    float f220;
    char unknown224[0x10];
    int f234;
};
extern void call_8c075398(void);
Object *operation_8c23c0cc(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a494;
    o->tag = (int)(*(int *)0x8c33a560);
    o->size = 0x238;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 6;
    o->f1fc |= 0x22;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
