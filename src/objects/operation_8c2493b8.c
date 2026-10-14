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
    char unknown20[0x214];
    float f234;
    float f238;
    float f23c;
};
extern void call_8c075398(void);
Object *operation_8c2493b8(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d350;
    o->tag = (int)(*(int *)0x8c33b180);
    o->size = 0x240;
    o->f23c = 1.0f;
    o->f238 = 1.0f;
    o->f234 = 1.0f;
    return o;
}
