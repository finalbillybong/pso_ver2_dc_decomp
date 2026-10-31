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
    short f20;
    char unknown22[0x2];
    int f24;
};
extern void TObject_ctor_8c0330e4(void *, void *);
Object *operation_8c242354(Object *o, int a1, int a2)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c27cc44;
    o->f20 = a1;
    o->f24 = 0x12c;
    return o;
}
