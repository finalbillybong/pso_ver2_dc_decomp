typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    int f28;
    int f2c;
};
Object *operation_8c2232f8(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    int v1;
    int t1;
    (void)home;
    ((void (*)(Object *, int))0x8c0330e4)(o, a1);
    o->dispatch = (void *)0x8c278948;
    o->tag = (int)(*(int *)0x8c3374b8);
    o->size = 0x30;
    o->f20 = a2;
    v1 = (int)(a2 << 2);
    t1 = ((int (*)(int))0x8c18de4c)(v1);
    o->f24 = (Arg0_24 *)t1;
    o->f28 = a3;
    o->f2c = a4;
    ((void (*)(void *, int, int))0x8c12b880)(o->f24, 0, v1);
    return o;
}
