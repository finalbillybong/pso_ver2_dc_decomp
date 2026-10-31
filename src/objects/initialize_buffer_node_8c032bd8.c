typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x1084];
    int f10a0;
    int f10a4;
    int f10a8;
};
extern void TObject_ctor_8c0330e4(Object *, int);
extern void memset_8c12b880(void *, int, int);
Object *initialize_buffer_node_8c032bd8(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4(o, a1);
    o->dispatch = (void *)0x8c261510;
    o->f10a4 = a2;
    o->f10a8 = a3;
    memset_8c12b880(((char *)o + 0x20), 0, 0x1000);
    o->f10a0 = 0;
    return o;
}
