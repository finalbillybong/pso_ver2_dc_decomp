typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4];
    Vector3 f24;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    char unknown4c[0x28];
    int f74;
    int f78;
};
struct Arg1 {
    Vector3 f00;
};
extern void call_8c0a0058(void);
Object *operation_8c09fd7c(Object *o, Arg1 *a1)
{
    call_8c0a0058();
    o->dispatch = (void *)0x8c2659bc;
    o->tag = (int)(*(int *)0x8c3021b4);
    o->size = 0x7c;
    o->f24 = a1->f00;
    o->f74 = 0;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f78 = 0;
    return o;
}
