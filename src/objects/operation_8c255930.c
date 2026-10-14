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
};
extern void call_8c0e6d1c(void);
Object *operation_8c255930(Object *o)
{
    call_8c0e6d1c();
    o->dispatch = (void *)0x8c28134c;
    o->tag = (int)(*(int *)0x8c33fe10);
    o->size = 0x1e0;
    return o;
}
