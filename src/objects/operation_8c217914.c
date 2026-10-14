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
extern void initialize_base_8c0db1d0(void *, int);
Object *operation_8c217914(Object *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3361fc));
    o->dispatch = (void *)0x8c2782f4;
    o->tag = (int)(*(int *)0x8c3360d0);
    o->size = 0x68;
    return o;
}
