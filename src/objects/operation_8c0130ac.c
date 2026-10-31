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
    short f20;
    short f22;
};
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TObjControl_ctor_8c0130ac(Object *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c260fbc;
    o->tag = (int)(*(int *)0x8c2e2c1c);
    o->size = 0x24;
    o->f20 = 2;
    o->f22 = 0;
    return o;
}
