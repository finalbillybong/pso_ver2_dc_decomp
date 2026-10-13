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
    char unknown20[0x7c];
    int f9c;
};
extern void initialize_controller_8c0bb8c4(void *, int);
Object *operation_8c08b8bc(Object *o, int a1)
{
    initialize_controller_8c0bb8c4((void *)o, a1);
    o->dispatch = (void *)0x8c2652dc;
    o->tag = (int)(*(int *)0x8c300260);
    o->size = 0x110;
    *(char *)0x8c469da0 = 0;
    o->f9c = 0;
    return o;
}
