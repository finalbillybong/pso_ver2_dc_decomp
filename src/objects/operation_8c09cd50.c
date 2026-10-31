typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c12b000(int);
Object *operation_8c09cd50(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2658b8;
    o->f20 = a2;
    *(int *)0x8c418244 = 0;
    call_8c12b000(0);
    return o;
}
