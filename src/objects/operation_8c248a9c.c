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
    char unknown20[0x200];
    float f220;
    short f224;
    char unknown226[0x2];
    void *f228;
    int f22c;
    char unknown230[0x4];
    float f234;
    float f238;
    float f23c;
    int f240;
};
extern void call_8c075398(void);
Object *operation_8c248a9c(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27cf60;
    o->tag = (int)(*(int *)0x8c33b100);
    o->size = 0x244;
    o->f224 = 2;
    o->f22c = 0;
    o->f228 = (void *)0x8c1c6058;
    o->f220 = 20.0f;
    o->f23c = 0.0f;
    o->f238 = 0.0f;
    o->f234 = 0.0f;
    o->f240 = 0;
    return o;
}
