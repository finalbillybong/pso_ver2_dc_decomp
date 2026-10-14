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
    char unknown20[0x1a0];
    int f1c0;
    char unknown1c4[0x38];
    int f1fc;
    char unknown200[0x20];
    float f220;
    char unknown224[0x4];
    void *f228;
    void *f22c;
    void *f230;
    int f234;
};
extern void call_8c075398(void);
Object *operation_8c23f714(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bfdc;
    o->f234 = 0;
    o->tag = (int)(*(int *)0x8c33a888);
    o->size = 0x250;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c23fb74;
    o->f230 = (void *)0x8c23fbb8;
    o->f22c = (void *)0x8c23fa00;
    o->f220 = 8.0f;
    o->f234 = 0;
    return o;
}
