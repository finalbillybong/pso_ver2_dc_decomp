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
};
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TNECFontEORFunction_ctor_8c04baf8(Object *o)
{
    TObject_ctor_8c0330e4((void *)o, (void *)((void *)0x8c44bef4));
    o->dispatch = (void *)0x8c261e78;
    o->tag = (int)(*(int *)0x8c2f1ef4);
    o->size = 0x20;
    return o;
}
