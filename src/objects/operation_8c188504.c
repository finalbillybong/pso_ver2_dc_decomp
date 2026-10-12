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
    int f44;
    char unknown48[0x4];
    int f4c;
    int f50;
    int f54;
    char unknown58[0x168];
    int f1c0;
};
extern void initialize_control_manager(void *, void *);
extern void call_8c1a05d4(void);
extern void call_8c18fb00(void);
Object *operation_8c188504(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    initialize_control_manager((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272194;
    o->tag = *(int *)0x8c319e18;
    o->size = 0x1c4;
    call_8c1a05d4();
    call_8c18fb00();
    o->f28 = a3;
    o->f30 = a2;
    o->f2c = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = 0;
    o->f50 = 0;
    o->f24 = 0;
    o->f1c0 = 0;
    o->f4c = 0;
    o->f54 = 0;
    return o;
}
