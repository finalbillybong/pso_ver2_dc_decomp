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
    char unknown2c[0x348];
    int f374;
    int f378;
    int f37c;
    int f380;
    int f384;
    int f388;
    int f38c;
    int f390;
    int f394;
    int f398;
    int f39c;
};
extern void initialize_control_manager(void *, void *);
extern void call_8c12b880(void *, int, int);
Object *operation_8c19c15c(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    initialize_control_manager((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2729ec;
    o->tag = *(int *)0x8c31cc88;
    o->size = 0x3a0;
    o->f374 = 0;
    o->f378 = 0;
    o->f37c = 1;
    o->f380 = 0;
    o->f24 = 0;
    o->f384 = a2;
    o->f388 = 0;
    o->f38c = 0;
    o->f394 = 0;
    o->f390 = 0;
    o->f28 = a3;
    o->f398 = 0;
    o->f39c = 0;
    call_8c12b880(((char *)o + 0x2c), 0, 0x348);
    return o;
}
