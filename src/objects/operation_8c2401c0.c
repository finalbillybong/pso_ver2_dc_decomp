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
    int f234;
};
extern int g_8c33a908;
extern void call_8c075398(Object *, int, int);
Object *operation_8c2401c0(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c3ac;
    o->tag = (int)(g_8c33a908);
    o->size = 0x238;
    o->f234 = 0;
    return o;
}
