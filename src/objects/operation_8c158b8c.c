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
    char unknown20[0x4];
    int f24;
    char unknown28[0x4];
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    char unknown48[0x4];
    int f4c;
    int f50;
    int f54;
    int f58;
};
extern void initialize_control_manager(Object *, int);
Object *operation_8c158b8c(Object *o, int a1, int a2, int a3)
{
    initialize_control_manager(o, a1);
    o->dispatch = (void *)0x8c26ec4c;
    o->tag = *(int *)0x8c316420;
    o->size = 0x5c;
    o->f30 = a2;
    o->f38 = 0;
    o->f34 = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f2c = a3;
    o->f44 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f54 = 0;
    o->f58 = 0;
    o->f24 = 0;
    return o;
}
