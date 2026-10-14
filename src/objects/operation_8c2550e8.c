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
    char unknown20[0x1c4];
    int f1e4;
};
extern void call_8c255200(void);
Object *operation_8c2550e8(Object *o)
{
    call_8c255200();
    o->dispatch = (void *)0x8c281010;
    o->tag = (int)(*(int *)0x8c33fd80);
    o->size = 0x1e8;
    o->f1e4 = 0;
    return o;
}
