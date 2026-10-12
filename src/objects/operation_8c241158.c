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
    char unknown200[0x18];
    int f218;
};
extern void call_8c075398(void);
Object *operation_8c241158(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27cb4c;
    o->tag = *(int *)0x8c33a9c0;
    o->size = 0x234;
    o->f1fc |= 0x22;
    o->f218 = 9;
    return o;
}
