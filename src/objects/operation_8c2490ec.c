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
    float f220;
    char unknown224[0x8];
    void *f22c;
    char unknown230[0x4];
    int f234;
    int f238;
};
extern void call_8c075398(void);
Object *operation_8c2490ec(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d25c;
    o->tag = (int)(*(int *)0x8c33b168);
    o->size = 0x23c;
    o->f1fc |= 2;
    o->f22c = (void *)0x8c2492e8;
    o->f238 = 0;
    o->f234 = 0;
    o->f220 = 7.0f;
    o->f21c = 0xe5;
    return o;
}
