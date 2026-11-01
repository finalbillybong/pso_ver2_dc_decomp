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
    char unknown20[0xd8];
    int ff8;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c07fe14(Object *);
Object *TObjRain_ctor_8c07fd68(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2642e8;
    o->tag = (int)(*(int *)0x8c2feba8);
    o->size = 0xfc;
    o->ff8 = 9;
    call_8c07fe14(o);
    return o;
}
