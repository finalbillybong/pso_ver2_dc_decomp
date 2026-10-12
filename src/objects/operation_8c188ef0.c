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
    int f3c;
    int f40;
    char unknown44[0x4];
    int f48;
    char unknown4c[0x1a4];
    int f1f0;
    int f1f4;
};
extern void initialize_control_manager(void *, void *);
extern void call_8c1a05d4(void);
extern void call_8c18eeb4(void);
Object *operation_8c188ef0(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    initialize_control_manager((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2721b4;
    o->tag = *(int *)0x8c319e48;
    o->size = 0x1f8;
    call_8c1a05d4();
    call_8c18eeb4();
    o->f28 = a3;
    o->f2c = a2;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f24 = 0;
    o->f48 = 0;
    o->f1f4 = 0;
    o->f1f0 = 0;
    return o;
}
