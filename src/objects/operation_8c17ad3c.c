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
    char unknown20[0x204];
    short f224;
    char unknown226[0x2];
    void *f228;
    void *f22c;
    void *f230;
    int f234;
    int f238;
};
extern void call_8c075398(void);
Object *operation_8c17ad3c(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271a40;
    o->tag = (int)(*(int *)0x8c319780);
    o->size = 0x23c;
    o->f224 = 4;
    o->f22c = (void *)0x8c1ab9d4;
    o->f230 = (void *)0x8c1c635c;
    o->f228 = (void *)0x8c1c6580;
    o->f238 = 0;
    o->f234 = 0;
    return o;
}
