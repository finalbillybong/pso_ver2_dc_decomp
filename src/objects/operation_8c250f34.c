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
};
extern void operation_8c241158(void *);
Object *operation_8c250f34(Object *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27ecb8;
    o->tag = (int)(*(int *)0x8c33f8a0);
    o->size = 0x234;
    o->f224 = 2;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
