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
    char unknown200[0x20];
    float f220;
    short f224;
    char unknown226[0x6];
    void *f22c;
    char unknown230[0x4];
    int f234;
    int f238;
    int f23c;
};
extern void call_8c075398(void);
Object *operation_8c23bc0c(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a3a0;
    o->tag = (int)(*(int *)0x8c33a530);
    o->size = 0x244;
    o->f22c = (void *)0x8c23bee0;
    o->f220 = 9.0f;
    o->f224 = 4;
    o->f1fc |= 0x22;
    o->f234 = 1;
    o->f238 = 0;
    o->f23c = 0;
    return o;
}
