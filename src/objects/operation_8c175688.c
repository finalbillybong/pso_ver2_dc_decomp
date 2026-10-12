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
    void *f22c;
    void *f230;
    float f234;
    int f238;
};
extern void call_8c075398(void);
Object *operation_8c175688(Object *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2705b0;
    o->tag = *(int *)0x8c3192b0;
    o->size = 0x23c;
    o->f234 = 0.0f;
    o->f224 = 3;
    o->f228 = (void *)0x8c1c5a08;
    o->f238 = 0;
    o->f230 = (void *)0x8c1c53c4;
    o->f22c = (void *)0x8c1ab95c;
    o->f220 = 15.0f;
    return o;
}
