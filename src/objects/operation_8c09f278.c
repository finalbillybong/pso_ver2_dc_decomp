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
extern void call_8c01d1ec(void);
Object *operation_8c09f278(Object *o)
{
    call_8c01d1ec();
    o->dispatch = (void *)0x8c265920;
    o->tag = (int)(*(int *)0x8c302070);
    o->size = 0x94;
    return o;
}
