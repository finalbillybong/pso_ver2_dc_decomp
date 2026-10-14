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
extern void call_8c0e8360(void);
Object *operation_8c2554f4(Object *o)
{
    call_8c0e8360();
    o->dispatch = (void *)0x8c2811a0;
    o->tag = (int)(*(int *)0x8c33fdb8);
    o->size = 0x1e4;
    return o;
}
