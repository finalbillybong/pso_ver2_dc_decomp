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
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    char unknown3c[0x14];
    char f50;
    char unknown51[0x7];
    int f58;
    int f5c;
    int f60;
    int f64;
};
extern void initialize_control_manager(Object *, int);
extern void operation_1c7dd4(void *);
Object *operation_8c1a6910(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    initialize_control_manager(o, a1);
    o->dispatch = (void *)0x8c2745d8;
    o->tag = *(int *)0x8c31e6c0;
    o->size = 0x68;
    o->f24 = 0;
    o->f28 = a2;
    o->f58 = 1;
    o->f50 = 0;
    o->f5c = 0;
    o->f60 = 0;
    o->f64 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    operation_1c7dd4(((char *)o + 0x3c));
    return o;
}
